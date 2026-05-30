#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "RunGenerationTrackingSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class URunGenerationTrackingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, int32> IdentityToCountMap;
    
public:
    URunGenerationTrackingSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInstanceCount(const UObject* InObject) const;
    
    UFUNCTION(BlueprintCallable)
    void AddInstance(const UObject* InObject);
    
};

