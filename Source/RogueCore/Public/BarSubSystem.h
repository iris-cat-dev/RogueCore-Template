#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "OnCurrencyChangedDelegate.h"
#include "OnCurrencyCreatedDelegate.h"
#include "OnLocalPlayerEnteredOrExitGymDelegate.h"
#include "OnPlayerCountChangedDelegate.h"
#include "BarSubSystem.generated.h"

class AFSDPlayerController;
class AFSDPlayerState;
class AOmegaBartender;
class UDrinkableDataAsset;
class UObject;
class UResourceData;

UCLASS(Blueprintable)
class ROGUECORE_API UBarSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrencyChanged OnCurrencyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrencyCreated OnCurrencyCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCountChanged OnPlayerCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocalPlayerEnteredOrExitGym OnLocalPlayerEnterExitGym;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOmegaBartender* Bartender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Bound;
    
public:
    UBarSubSystem();

    UFUNCTION(BlueprintCallable)
    void SetBartender(AOmegaBartender* aBartender);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayerLoggedOut(AFSDPlayerState* PState);
    
    UFUNCTION(BlueprintCallable)
    void PlayerLoggedIn(AFSDPlayerController* Controller);
    
public:
    UFUNCTION(BlueprintCallable)
    void LocalPlayerExitGymArea();
    
    UFUNCTION(BlueprintCallable)
    void LocalPlayerEnteredGymArea();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasEnoughCurrency(const UObject* WorldContextObject, UResourceData* Currency, int32 Amount);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool HasCollectiveResource(const UObject* WorldContextObject, UResourceData* Data);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UResourceData* GetGymCurrencyData(const UObject* WorldContextObject, int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetGymCurrencyAmount(const UObject* WorldContextObject, int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetCollectiveResourceIndex(const UObject* WorldContextObject, UResourceData* Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetCalories(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetBeerCost(const UObject* WorldContextObject, UDrinkableDataAsset* Drink);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AOmegaBartender* GetBartender() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UResourceData*> GetAllGymCurrencyData(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<int32> GetAllGymCurrencyAmount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetAdjustedCostForPlayerCount(const UObject* WorldContextObject, const float baseCost);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void AddInternalCurrency(const UObject* WorldContextObject, UResourceData* Data, int32 Amount);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddCurrency(const UObject* WorldContextObject, UResourceData* Currency, int32 Amount);
    
};

