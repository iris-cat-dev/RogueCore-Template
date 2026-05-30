#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Components/SphereComponent.h"
#include "Templates/SubclassOf.h"
#include "TrackBuilderConnectPoint.generated.h"

class ATrackBuilderSegment;
class UTrackBuilderConnectPoint;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ROGUECORE_API UTrackBuilderConnectPoint : public USphereComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FConnectionDelegate, UTrackBuilderConnectPoint*, InConnectPoint, ATrackBuilderSegment*, InSegment);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConnectionDelegate OnConnectedWithSegment;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATrackBuilderSegment> ConnectType;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ConnectedSegment, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ATrackBuilderSegment>> ConnectedSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxConnectRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxAngles;
    
public:
    UTrackBuilderConnectPoint(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ConnectedSegment();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetConnectTransform(const FTransform& FromWorldTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ATrackBuilderSegment*> GetConnectedSegments() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Disconnect(ATrackBuilderSegment* InSegment);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Connect(ATrackBuilderSegment* InSegment);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanConnectWith(ATrackBuilderSegment* InSegment, const FTransform& FromWorldTransform);
    
};

