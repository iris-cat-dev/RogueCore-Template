#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EItemSkinType.h"
#include "SkinEffect.generated.h"

class AActor;
class UMeshComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ROGUECORE_API USkinEffect : public UObject {
    GENERATED_BODY()
public:
    USkinEffect();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Receive_AddToItem(UMeshComponent* mesh, AActor* Skinnable, bool IsFirstPerson) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemSkinType GetSkinType() const;
    
};

