#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PloverTargetSockets.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class UPloverTargetSockets : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Sockets;
    
    UPloverTargetSockets();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetSocket(UMeshComponent* mesh, FName& OutName) const;
    
};

