#pragma once
#include "CoreMinimal.h"
#include "EDrinkableAlcoholStrength.h"
#include "EExerciseDifficulty.h"
#include "SavableDataAsset.h"
#include "DrinkableDataAsset.generated.h"

class ADrinkableActor;
class ADrinkableItem;
class APlayerCharacter;
class UAccessCondition;
class UBarQuestList;
class UBaseEntitlement;
class UDialogDataAsset;
class UDrinkEffectComponent;
class UDrinkableDataAsset;
class UFSDSaveGame;
class UMissionStat;
class UObject;
class UResourceData;
class UTemporaryBuff;
class UTexture2D;

UCLASS(Blueprintable)
class UDrinkableDataAsset : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DrinkableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DrinkableDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrinkablePrice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost_Sets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost_Reps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSpecialBeer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAccessCondition* AccessCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DrinkableIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredPlayerRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ParticipatesInFreeBeerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDrinkableAlcoholStrength AlcoholStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* SpecialEdition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseEntitlement* RequiredDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayFireworks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* StatConsumed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* StatRoundOrdered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADrinkableActor> DrinkableActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADrinkableItem> DrinkableItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* OrderShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* OrderCheeringShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DrinkSaluteShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* OmegaShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTemporaryBuff* buff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDrinkEffectComponent> DrinkEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UResourceData*, int32> PurchaseCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBarQuestList* ExerciseQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExerciseDifficulty ExerciseDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BeerCategory;
    
    UDrinkableDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UnlockDrink(UFSDSaveGame* SaveGame) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool TryUnlockSpecialDrinks(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool TryUnlockDrink(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool TryPurchaseDrink(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void OnRoundOrdered(APlayerCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MustBeUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsUnLocked(UObject* WorldContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    bool IsDrinkFree(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpecialEdition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    UDrinkableDataAsset* GetSpecialEdition(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetDrinkableIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCalorieCost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool AreSpecialDrinksUnlocked(UObject* WorldContext);
    
};

