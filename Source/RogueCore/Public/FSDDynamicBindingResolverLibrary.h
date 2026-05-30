#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneConditionContext -FallbackName=MovieSceneConditionContext
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneDynamicBindingResolveResult -FallbackName=MovieSceneDynamicBindingResolveResult
#include "DialogVoiceSettings.h"
#include "TemplateSequenceMontages.h"
#include "Templates/SubclassOf.h"
#include "FSDDynamicBindingResolverLibrary.generated.h"

class ABosco;
class APawn;
class APlayerCharacter;
class ATemplateSequenceActor;
class UAnimMontage;
class UObject;
class UPlayerCharacterID;
class USoundAttenuation;
class USoundBase;
class UTemplateSequenceCollection;

UCLASS(Blueprintable, MinimalAPI)
class UFSDDynamicBindingResolverLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFSDDynamicBindingResolverLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ATemplateSequenceActor* PlayTemplateSequence(UObject* WorldContextObject, APawn* Pawn, UTemplateSequenceCollection* Collection, const FTemplateSequenceMontages IdleMontages);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySequencerCharacterSalute(APlayerCharacter* SalutingPlayer, UAnimMontage* saluteMontage, USoundBase* SaluteSound, USoundAttenuation* SaluteAttenuation, const FDialogVoiceSettings& VoiceSettings);
    
    UFUNCTION(BlueprintCallable)
    static APlayerCharacter* GetPlayerCharacterFromSequenceBinding(const FMovieSceneConditionContext& Context);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetMissionSuccessfull(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FMovieSceneDynamicBindingResolveResult FsdResolveToPlayerCharacter(UObject* WorldContextObject, int32 PlayerControllerIndex, TSubclassOf<APlayerCharacter> EditorOverrideClass, bool ShowOnlyPlayersThatLeftWithSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FMovieSceneDynamicBindingResolveResult FsdResolveToLocalPlayerCharacter(UObject* WorldContext, TSubclassOf<APlayerCharacter> EditorOverrideClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FMovieSceneDynamicBindingResolveResult FsdResolveToBosco(UObject* WorldContextObject, TSubclassOf<ABosco> EditorOverrideClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static APlayerCharacter* FindSequencerCharacterCopyForClass(const UObject* WorldContext, const UPlayerCharacterID* PlayerCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static APlayerCharacter* FindLocalPlayerCharacterFromSequencerWorld(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void DestroyResolvedCharacterCopies(const UObject* WorldContext);
    
};

