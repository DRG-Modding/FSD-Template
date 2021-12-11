#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/SphereComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TrackBuilderConnectPoint.generated.h"

class UTrackBuilderConnectPoint;
class ATrackBuilderSegment;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTrackBuilderConnectPointOnConnectedWithSegment, UTrackBuilderConnectPoint*, InConnectPoint, ATrackBuilderSegment*, InSegment);

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UTrackBuilderConnectPoint : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTrackBuilderConnectPointOnConnectedWithSegment OnConnectedWithSegment;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATrackBuilderSegment> ConnectType;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ConnectedSegment)
    TWeakObjectPtr<ATrackBuilderSegment> ConnectedSegment;
    
    UPROPERTY(EditAnywhere)
    float MaxConnectRadius;
    
    UPROPERTY(EditAnywhere)
    float ConnectDistance;
    
    UPROPERTY(EditAnywhere)
    FVector MaxAngles;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ConnectedSegment();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetConnectTransform(const FTransform& FromWorldTransform);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Disconnect(ATrackBuilderSegment* InSegment);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Connect(ATrackBuilderSegment* InSegment);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanConnectWith(ATrackBuilderSegment* InSegment, const FTransform& FromWorldTransform);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UTrackBuilderConnectPoint();
};

