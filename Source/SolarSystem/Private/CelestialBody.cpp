// Fill out your copyright notice in the Description page of Project Settings.

#include "CelestialBody.h"
#include "DrawDebugHelpers.h"

FKinematicBody ACelestialBody::GetKinematic() const
{
	return FKinematicBody(RootComponent->GetComponentLocation(), Velocity, Mass);
}

void ACelestialBody::DrawDebugVelocityVector() const
{
	DrawDebugDirectionalArrow(GetWorld(),
	                          RootComponent->GetComponentLocation(),
	                          RootComponent->GetComponentLocation() + Velocity * DebugArrowLength,
	                          100, FColor::Green, false);
}

//TODO: draw simulated future orbit
void ACelestialBody::DrawDebugForces(const TArray<ACelestialBody*> allBodies, const float GravityConst)
{
	for (ACelestialBody *other : allBodies)
	{
		if (other == this)
		{
			continue;
		}

		FVector pos1 = GetTransform().GetLocation();
		FVector pos2 = other->GetRootComponent()->GetComponentLocation();

		//F = G(m1m2)/r^2 * e
		FVector x = pos2 - pos1;
		FVector forceDir = x.GetSafeNormal();
		FVector force = GravityConst * (Mass * other->Mass) / x.SizeSquared() * forceDir;

		DrawDebugDirectionalArrow(GetWorld(), pos1, pos1 + force * DebugArrowLength, 100, FColor::Red);
	}

	DrawDebugVelocityVector();
}


void ACelestialBody::UpdatePosition()
{
	FQuat rotation = FQuat(1.0, 1.0, 1.0, 1.0);
	RootComponent->MoveComponent(Velocity, rotation, false);
}

// Sets default values
ACelestialBody::ACelestialBody()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


// Called when the game starts or when spawned
void ACelestialBody::BeginPlay()
{
	Super::BeginPlay();

	Velocity = InitialVelocity;
}

// Called every frame
void ACelestialBody::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

