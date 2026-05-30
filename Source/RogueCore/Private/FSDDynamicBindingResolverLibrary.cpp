#include "FSDDynamicBindingResolverLibrary.h"

#include "MovieSceneDynamicBinding.h"
#include "Templates/SubclassOf.h"

UFSDDynamicBindingResolverLibrary::UFSDDynamicBindingResolverLibrary() {
}

ATemplateSequenceActor* UFSDDynamicBindingResolverLibrary::PlayTemplateSequence(UObject* WorldContextObject, APawn* Pawn, UTemplateSequenceCollection* Collection, const FTemplateSequenceMontages IdleMontages) {
    return NULL;
}

void UFSDDynamicBindingResolverLibrary::PlaySequencerCharacterSalute(APlayerCharacter* SalutingPlayer, UAnimMontage* saluteMontage, USoundBase* SaluteSound, USoundAttenuation* SaluteAttenuation, const FDialogVoiceSettings& VoiceSettings) {
}

APlayerCharacter* UFSDDynamicBindingResolverLibrary::GetPlayerCharacterFromSequenceBinding(const FMovieSceneConditionContext& Context) {
    return NULL;
}

bool UFSDDynamicBindingResolverLibrary::GetMissionSuccessfull(UObject* WorldContextObject) {
    return false;
}

FMovieSceneDynamicBindingResolveResult UFSDDynamicBindingResolverLibrary::FsdResolveToPlayerCharacter(UObject* WorldContextObject, int32 PlayerControllerIndex, TSubclassOf<APlayerCharacter> EditorOverrideClass, bool ShowOnlyPlayersThatLeftWithSuccess) {
    return FMovieSceneDynamicBindingResolveResult{};
}

FMovieSceneDynamicBindingResolveResult UFSDDynamicBindingResolverLibrary::FsdResolveToLocalPlayerCharacter(UObject* WorldContext, TSubclassOf<APlayerCharacter> EditorOverrideClass) {
    return FMovieSceneDynamicBindingResolveResult{};
}

FMovieSceneDynamicBindingResolveResult UFSDDynamicBindingResolverLibrary::FsdResolveToBosco(UObject* WorldContextObject, TSubclassOf<ABosco> EditorOverrideClass) {
    return FMovieSceneDynamicBindingResolveResult{};
}

APlayerCharacter* UFSDDynamicBindingResolverLibrary::FindSequencerCharacterCopyForClass(const UObject* WorldContext, const UPlayerCharacterID* PlayerCharacterID) {
    return NULL;
}

APlayerCharacter* UFSDDynamicBindingResolverLibrary::FindLocalPlayerCharacterFromSequencerWorld(const UObject* WorldContext) {
    return NULL;
}

void UFSDDynamicBindingResolverLibrary::DestroyResolvedCharacterCopies(const UObject* WorldContext) {
}


