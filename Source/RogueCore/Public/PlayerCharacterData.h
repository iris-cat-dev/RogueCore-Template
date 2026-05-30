#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "DialogVoiceSettings.h"
#include "ECharacterGender.h"
#include "ECharacterIconType.h"
#include "HeroInfo.h"
#include "PlayerCharacterData.generated.h"

class UAbilityData;
class UClassAnimationSet;
class UPerkAsset;
class UPlayerCharacterID;
class UTexture2D;

UCLASS(Blueprintable)
class ROGUECORE_API UPlayerCharacterData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* characterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeroInfo HeroInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityData* AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPerkAsset*> ClassSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogVoiceSettings VoiceSettings;
    
    UPlayerCharacterData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDialogVoiceSettings GetVoiceSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseFeminineVanityAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetSmallIconSimplified() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetSmallIconDropShadow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetSmallIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShortDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLongDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconType(ECharacterIconType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetFullSizeImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClassAnimationSet* GetClassAnimationSet() const;
    
};

