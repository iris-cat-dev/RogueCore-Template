#pragma once
#include "CoreMinimal.h"
#include "FSDServerListClientBase.h"
#include "FSDServerListClientBase.h"
#include "FSDServerListFilter.h"
#include "ServerListLobby.h"
#include "FSDServerlistClientRogueCore.generated.h"

UCLASS(Blueprintable)
class UFSDServerlistClientRogueCore : public UFSDServerListClientBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFSDServerListFilter ServerListFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FServerListLobby> LastFoundLobbies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FServerListLobby MyActiveLobbyData;
    
public:
    UFSDServerlistClientRogueCore();

protected:
    UFUNCTION(BlueprintCallable)
    void SetServerListFilter(const FFSDServerListFilter& NewFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFSDServerListFilter GetServerFilter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FServerListLobby> GetLastFoundLobbies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FServerListLobby GetActiveLobby() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearServerListFilter();
    
};

