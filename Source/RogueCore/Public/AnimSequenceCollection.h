#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AnimSequenceArray.h"
#include "AnimSequenceCollection.generated.h"

class UPlayerCharacterID;

UCLASS(Blueprintable)
class UAnimSequenceCollection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPlayerCharacterID*, FAnimSequenceArray> ClassAnims;
    
public:
    UAnimSequenceCollection();

};

