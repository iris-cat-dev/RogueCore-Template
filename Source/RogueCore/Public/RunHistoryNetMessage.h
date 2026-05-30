#pragma once
#include "CoreMinimal.h"
#include "ERunHistoryNetMessageDataType.h"
#include "RunHistoryNetMessage.generated.h"

class AFSDPlayerState;
class URunHistoryStateComponent;

USTRUCT(BlueprintType)
struct FRunHistoryNetMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Buffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URunHistoryStateComponent* Sender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFSDPlayerState* TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataSent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunHistoryNetMessageDataType Type;
    
    ROGUECORE_API FRunHistoryNetMessage();
};

