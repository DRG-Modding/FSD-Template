#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrackBuilderPoint.h"
#include "UObject/NoExportTypes.h"
#include "ETrackBuildPlacementState.h"
#include "TrackBuilderSegment.generated.h"

class ATrackBuilderSegment;
class APlayerCharacter;
class UTrackBuilderUsable;
class AItem;
class UTrackBuilderConnectPoint;

UCLASS()
class FSD_API ATrackBuilderSegment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTrackBuilderUsable* NextSegmentUsable;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    TWeakObjectPtr<APlayerCharacter> BuiltByCharacter;
    
    UPROPERTY(BlueprintReadOnly, Export, Replicated, Transient)
    TWeakObjectPtr<UTrackBuilderUsable> BuiltFromUsable;
    
    UPROPERTY(Transient)
    FTrackBuilderPoint SegmentEndTransform;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SegmentEndTransform)
    FTrackBuilderPoint ServerSegmentEndTransform;
    
public:
    UFUNCTION(BlueprintCallable)
    bool UpdatePlacement(const FTransform& InTransform, UTrackBuilderConnectPoint* InConnectPoint, bool InPlacementValid, AItem* PlaceableItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivPlacementValidChanged(bool InIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlacementStateChanged(ETrackBuildPlacementState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlacementChangedEnd(const FTransform& NewEndTransform, UTrackBuilderConnectPoint* InConnectPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlacementChangedBegin(const FTransform& NewEndTransform, UTrackBuilderConnectPoint* InConnectPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReceiveCanPlaceAt(const FTransform& InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SegmentEndTransform();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrackBuilderUsable* GetTrackStartUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTrackStartActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetStartTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetSegmentEndTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETrackBuildPlacementState GetPlacementState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATrackBuilderSegment* GetNextSegment(bool bForward) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSegmentEndTransformValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTrackBuilderConnectPoint* GetConnectPoint() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanPlaceAt(const FTransform& InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint, AItem* PlaceableItem);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATrackBuilderSegment();
};

