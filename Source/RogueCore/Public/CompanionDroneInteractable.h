#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CompanionDroneInteractionPoint.h"
#include "CompanionDroneInteractable.generated.h"

class UCompanionDroneInteractionComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UCompanionDroneInteractable : public UInterface {
    GENERATED_BODY()
};

class ICompanionDroneInteractable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetInteractionPoints(TArray<FCompanionDroneInteractionPoint>& interactionPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetInteractionLocation(TArray<FVector>& interactionPoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCompanionDroneInteractionComponent* GetInteractionComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetConnectorPoints(TArray<FTransform>& connectorPoints);
    
};

