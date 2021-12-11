#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EPlaceableObstructionType.h"
#include "AnimatedItem.h"
#include "UObject/NoExportTypes.h"
#include "PlaceableInterface.h"
#include "UObject/NoExportTypes.h"
#include "TrackBuilderItem.generated.h"

class ATrackBuilderSegment;
class UTrackBuilderConnectPoint;
class UCrosshairAggregator;
class UTrackBuilderUsable;

UCLASS(Abstract)
class FSD_API ATrackBuilderItem : public AAnimatedItem, public IPlaceableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCrosshairAggregator* CrosshairAggregator;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    EPlaceableObstructionType ObstructionType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector ObstructionLocation;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FVector GroundNormal;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATrackBuilderSegment> DefaultSegmentType;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_NextSegment)
    ATrackBuilderSegment* NextSegment;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    bool bIsPlacingSegment;
    
public:
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
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATrackBuilderItem();
    
    // Fix for true pure virtual functions not being implemented
};

