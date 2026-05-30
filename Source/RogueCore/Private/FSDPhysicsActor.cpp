#include "FSDPhysicsActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPhysicsReplicationMode -FallbackName=EPhysicsReplicationMode

AFSDPhysicsActor::AFSDPhysicsActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_PhysicsReplicationMode = GetClass()->FindPropertyByName("PhysicsReplicationMode");
    (*p_PhysicsReplicationMode->ContainerPtrToValuePtr<EPhysicsReplicationMode>(this)) = EPhysicsReplicationMode::PredictiveInterpolation;
}


