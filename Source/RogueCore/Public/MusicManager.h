#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ActiveAudioItem.h"
#include "MusicHandle.h"
#include "MusicManager.generated.h"

class UMusicCategory;
class UMusicLibrary;
class USoundBase;

UCLASS(Blueprintable)
class UMusicManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMusicHandle, FActiveAudioItem> ActiveAudio;
    
public:
    UMusicManager();

    UFUNCTION(BlueprintCallable)
    void StopTransitionMusic(float FadeOut);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopHandle(FMusicHandle Handle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopCategory(UMusicCategory* Category);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopAllMusic();
    
    UFUNCTION(BlueprintCallable)
    void SetIsPaused(bool IsPaused);
    
    UFUNCTION(BlueprintCallable)
    void PlayTransitionMusic(USoundBase* Music, float FadeIn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FMusicHandle PlayLibrary(UMusicLibrary* Library, int32 musicIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FMusicHandle Play(USoundBase* Music, UMusicCategory* Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransitionMusicPlaying() const;
    
};

