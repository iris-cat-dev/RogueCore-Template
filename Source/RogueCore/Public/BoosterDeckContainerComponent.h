#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CharacterPossessedInterface.h"
#include "RewardDispenserReward.h"
#include "BoosterDeckContainerComponent.generated.h"

class UBioBoosterDeck;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UBoosterDeckContainerComponent : public UActorComponent, public ICharacterPossessedInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBioBoosterDeck*> DefaultDecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBioBoosterDeck*> UsedDecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
public:
    UBoosterDeckContainerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetUsedDecks(const TArray<UBioBoosterDeck*>& InUsedDecks);
    
    UFUNCTION(BlueprintCallable)
    void OnBioBoosterDecksUpdated(const TArray<UBioBoosterDeck*>& InBioBoosterDecks);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FRewardDispenserReward> GetRandomCardsFromRandomDeck(int32 count, TArray<UBioBoosterDeck*>& OutDecks);
    
    UFUNCTION(BlueprintCallable)
    TArray<FRewardDispenserReward> GetRandomCardsFromAllDecks(int32 count, TArray<UBioBoosterDeck*>& OutDecks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBioBoosterDeck*> GetDefaultDecks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDecksFromSaveGame(TArray<UBioBoosterDeck*>& OutDecks) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UBioBoosterDeck*> GetDecks() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SetUsedDecksAndRespond();
    

    // Fix for true pure virtual functions not being implemented
};

