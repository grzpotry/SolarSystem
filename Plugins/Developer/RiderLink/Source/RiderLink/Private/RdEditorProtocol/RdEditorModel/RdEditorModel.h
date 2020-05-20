//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.07.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef RDEDITORMODEL_H
#define RDEDITORMODEL_H


#include "protocol/Protocol.h"
#include "types/DateTime.h"
#include "impl/RdSignal.h"
#include "impl/RdProperty.h"
#include "impl/RdList.h"
#include "impl/RdSet.h"
#include "impl/RdMap.h"
#include "base/ISerializersOwner.h"
#include "base/IUnknownInstance.h"
#include "serialization/ISerializable.h"
#include "serialization/Polymorphic.h"
#include "serialization/NullableSerializer.h"
#include "serialization/ArraySerializer.h"
#include "serialization/InternedSerializer.h"
#include "serialization/SerializationCtx.h"
#include "serialization/Serializers.h"
#include "ext/RdExtBase.h"
#include "task/RdCall.h"
#include "task/RdEndpoint.h"
#include "task/RdSymmetricCall.h"
#include "std/to_string.h"
#include "std/hash.h"
#include "std/allocator.h"
#include "util/enum.h"
#include "util/gen_util.h"

#include <cstring>
#include <cstdint>
#include <vector>
#include <ctime>

#include "thirdparty.hpp"
#include "../instantiations.h"

#include "../UE4Library/UnrealLogEvent.h"
#include "../UE4Library/BlueprintReference.h"
#include "../UE4Library/UClass.h"
#include "Runtime/Core/Public/Containers/UnrealString.h"

#include "UE4TypesMarshallers.h"

#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
/// <summary>
/// <p>Generated from: RdEditorModel.kt:28</p>
/// </summary>
namespace Jetbrains {
    namespace EditorPlugin {
        class RdEditorModel : public rd::RdExtBase
        {
            
            //companion
            
            public:
            struct RdEditorModelSerializersOwner final : public rd::ISerializersOwner {
                void registerSerializersCore(rd::Serializers const& serializers) const override;
            };
            
            static const RdEditorModelSerializersOwner serializersOwner;
            
            
            public:
            void connect(rd::Lifetime lifetime, rd::IProtocol const * protocol);
            
            
            //custom serializers
            private:
            using __FStringNullableSerializer = rd::NullableSerializer<rd::Polymorphic<FString>>;
            
            //constants
            public:
            
            //fields
            protected:
            rd::RdSignal<UnrealLogEvent, rd::Polymorphic<UnrealLogEvent>> unrealLog_;
            rd::RdProperty<int32_t, rd::Polymorphic<int32_t>> play_;
            rd::RdProperty<int32_t, rd::Polymorphic<int32_t>> playMode_;
            rd::RdSignal<bool, rd::Polymorphic<bool>> frameSkip_;
            rd::RdSignal<BlueprintReference, rd::Polymorphic<BlueprintReference>> openBlueprint_;
            rd::RdSignal<UClass, rd::Polymorphic<UClass>> onBlueprintAdded_;
            rd::RdEndpoint<FString, bool, rd::Polymorphic<FString>, rd::Polymorphic<bool>> isBlueprintPathName_;
            rd::RdEndpoint<FString, rd::optional<FString>, rd::Polymorphic<FString>, RdEditorModel::__FStringNullableSerializer> getPathNameByPath_;
            rd::RdCall<int32_t, bool, rd::Polymorphic<int32_t>, rd::Polymorphic<bool>> allowSetForegroundWindow_;
            
            
            //initializer
            private:
            void initialize();
            
            //primary ctor
            public:
            RdEditorModel(rd::RdSignal<UnrealLogEvent, rd::Polymorphic<UnrealLogEvent>> unrealLog_, rd::RdProperty<int32_t, rd::Polymorphic<int32_t>> play_, rd::RdProperty<int32_t, rd::Polymorphic<int32_t>> playMode_, rd::RdSignal<bool, rd::Polymorphic<bool>> frameSkip_, rd::RdSignal<BlueprintReference, rd::Polymorphic<BlueprintReference>> openBlueprint_, rd::RdSignal<UClass, rd::Polymorphic<UClass>> onBlueprintAdded_, rd::RdEndpoint<FString, bool, rd::Polymorphic<FString>, rd::Polymorphic<bool>> isBlueprintPathName_, rd::RdEndpoint<FString, rd::optional<FString>, rd::Polymorphic<FString>, RdEditorModel::__FStringNullableSerializer> getPathNameByPath_, rd::RdCall<int32_t, bool, rd::Polymorphic<int32_t>, rd::Polymorphic<bool>> allowSetForegroundWindow_);
            
            //secondary constructor
            #ifdef __cpp_structured_bindings
                
                //deconstruct trait
            #endif
            
            //default ctors and dtors
            
            RdEditorModel();
            
            RdEditorModel(RdEditorModel &&) = delete;
            
            RdEditorModel& operator=(RdEditorModel &&) = delete;
            
            virtual ~RdEditorModel() = default;
            
            //reader
            
            //writer
            
            //virtual init
            void init(rd::Lifetime lifetime) const override;
            
            //identify
            void identify(const rd::Identities &identities, rd::RdId const &id) const override;
            
            //getters
            rd::ISignal<UnrealLogEvent> const & get_unrealLog() const;
            rd::IProperty<int32_t> const & get_play() const;
            rd::IProperty<int32_t> const & get_playMode() const;
            rd::ISignal<bool> const & get_frameSkip() const;
            rd::ISignal<BlueprintReference> const & get_openBlueprint() const;
            rd::ISignal<UClass> const & get_onBlueprintAdded() const;
            rd::RdEndpoint<FString, bool, rd::Polymorphic<FString>, rd::Polymorphic<bool>> const & get_isBlueprintPathName() const;
            rd::RdEndpoint<FString, rd::optional<FString>, rd::Polymorphic<FString>, RdEditorModel::__FStringNullableSerializer> const & get_getPathNameByPath() const;
            rd::RdCall<int32_t, bool, rd::Polymorphic<int32_t>, rd::Polymorphic<bool>> const & get_allowSetForegroundWindow() const;
            
            //intern
            
            //equals trait
            private:
            
            //equality operators
            public:
            friend bool operator==(const RdEditorModel &lhs, const RdEditorModel &rhs);
            friend bool operator!=(const RdEditorModel &lhs, const RdEditorModel &rhs);
            
            //hash code trait
            
            //type name trait
            
            //static type name trait
            
            //polymorphic to string
            private:
            std::string toString() const override;
            
            //external to string
            public:
            friend std::string to_string(const RdEditorModel & value);
        };
    };
};

#pragma warning( pop )


//hash code trait
#ifdef __cpp_structured_bindings
    
    //tuple trait
#endif


#endif // RDEDITORMODEL_H
