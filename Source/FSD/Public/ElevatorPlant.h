#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "StartTimelineEventDelegate.h"
#include "COnStateChangedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "ElevatorPlant.generated.h"

class USplineMeshComponent;
class UAudioComponent;
class USoundCue;
class USceneComponent;
class UCurveFloat;

UCLASS(Blueprintable)
class AElevatorPlant : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartTimelineEvent OnStartTimelineEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCOnStateChanged COnStateChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* MovingSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* GrabSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RestPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector RelativeRestLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RelavtiveDestinationLocation, meta=(AllowPrivateAccess=true))
    FVector RelativeDestinationLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseTangentDirectionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeafTangentDirectionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector LeafLocationNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRotator LeafNoiseRotator;
    
    UPROPERTY(EditAnywhere)
    float BaseTangentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* CSplineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* CVineBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* CVineLeaf;
    
    UPROPERTY(EditAnywhere, Replicated)
    float InitialBaseTangentLength;
    
    UPROPERTY(EditAnywhere)
    float LeafLocationNoiseSize;
    
    UPROPERTY(EditAnywhere)
    float VineMovementAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Open, meta=(AllowPrivateAccess=true))
    bool IsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Extend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DipOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LocationLerpCurve;
    
public:
    AElevatorPlant();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetLeafNoiseRotator(const FRotator& aRotator);
    
    UFUNCTION(BlueprintCallable)
    void SetLeafLocationNoise(const FVector& aVector);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOpen(bool aValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExtended(bool aValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseTangentLength(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseTangentDirectionOffset(const FVector& aVector);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RelavtiveDestinationLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Open();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
    UFUNCTION(BlueprintCallable)
    void MoreTick(const FVector& DipOffset, float aValue);
    
    UFUNCTION(BlueprintPure)
    float GetVineMovementAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRelativeRestLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRelativeDestinationLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetLeafLocationNoiseSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsExtended() const;
    
    UFUNCTION(BlueprintPure)
    float GetInitialTangentLenth() const;
    
};

