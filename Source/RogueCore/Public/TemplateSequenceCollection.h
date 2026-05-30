#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ActorTemplateSequenceArray.h"
#include "Templates/SubclassOf.h"
#include "TemplateSequenceCollection.generated.h"

class APawn;

UCLASS(Blueprintable)
class UTemplateSequenceCollection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<APawn>, FActorTemplateSequenceArray> ClassTemplateSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorTemplateSequenceArray FailedTemplateSequences;
    
public:
    UTemplateSequenceCollection();

};

