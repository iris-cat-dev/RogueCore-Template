#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ElementEffectCollection.generated.h"

class UElementEffects;
class UElementType;

UCLASS(Blueprintable)
class UElementEffectCollection : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UElementType*, UElementEffects*> ElementEffects;
    
public:
    UElementEffectCollection();

};

