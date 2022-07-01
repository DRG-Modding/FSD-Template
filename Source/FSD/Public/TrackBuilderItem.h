#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EPlaceableObstructionType.h"
#include "AnimatedItem.h"
#include "PlaceableInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TrackBuilderItem.generated.h"

class ATrackBuilderSegment;
class UCrosshairAggregator;
class UTrackBuilderConnectPoint;
class UTrackBuilderUsable;

UCLASS(Abstract, Blueprintable)
class FSD_API ATrackBuilderItem : public AAnimatedItem, public IPlaceableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCrosshairAggregator* CrosshairAggregator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlaceableObstructionType ObstructionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ObstructionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GroundNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATrackBuilderSegment> DefaultSegmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NextSegment, meta=(AllowPrivateAccess=true))
    ATrackBuilderSegment* NextSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlacingSegment;
    
public:
    ATrackBuilderItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlacement(const FTransform& InTransform, UTrackBuilderConnectPoint* InConnectPoint, bool bPlacementValid, bool InUpdateServer);
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdatePlacement(const FTransform& InTransform, const bool bPlacementValid, UTrackBuilderConnectPoint* InConnectPoint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFinishPlacement(const FTransform& FinalLocation, UTrackBuilderConnectPoint* ConnectPoint);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelPlacement();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBeginPlaceSegment(UTrackBuilderUsable* InUsable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginPlaceSegment();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NextSegment();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ATrackBuilderSegment> GetSegmentType() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishPlacement(const FTransform& FinalLocation, UTrackBuilderConnectPoint* ConnectPoint);
    
    UFUNCTION(BlueprintCallable)
    void CancelPlacement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector AdjustInitialLocation(const FVector& Location) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

