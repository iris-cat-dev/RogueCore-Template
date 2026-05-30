#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EInputKeys.h"
#include "ERessuplyPodState.h"
#include "Templates/SubclassOf.h"
#include "PipelineFinish.generated.h"

class APipelineExtractorPod;
class APipelineSegment;
class APlayerCharacter;
class ARessuplyPod;
class ATrackBuilderSegment;
class USingleUsableComponent;
class UTrackBuilderConnectPoint;

UCLASS(Abstract, Blueprintable)
class ROGUECORE_API APipelineFinish : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTrackBuilderConnectPoint* PipelineEndConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* UsableOrderExtractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APipelineExtractorPod> ExtractPodClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ExtractorPod, meta=(AllowPrivateAccess=true))
    APipelineExtractorPod* ExtractorPod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PipelineCompleted, meta=(AllowPrivateAccess=true))
    bool bPipelineCompleted;
    
public:
    APipelineFinish(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePipelineCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveExtractorPodSpawned(APipelineExtractorPod* InExtractorPod);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PipelineCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtractorPod();
    
    UFUNCTION(BlueprintCallable)
    void OnExtractorPodStateChanged(ARessuplyPod* InExtractorPod, ERessuplyPodState InState);
    
    UFUNCTION(BlueprintCallable)
    void OnExtractorPodOrdered(APlayerCharacter* InUser, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectedWithSegment(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
    
    UFUNCTION(BlueprintCallable)
    void OnConnectedSegmentActivated(APipelineSegment* InSegment);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetLandingOffset();
    
};

