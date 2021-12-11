#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineMeshComponent.h"
#include "Curves/CurveFloat.h"
#include "UObject/NoExportTypes.h"
#include "SplinePlant.generated.h"

class USceneComponent;
class USplineComponent;
class USoundCue;
class UAudioComponent;
class UStaticMesh;
class USplineMeshComponent;

UCLASS()
class FSD_API ASplinePlant : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USplineComponent* PlantSpline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USceneComponent* PlantEndPoint;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAudioComponent* AudioComponent;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USoundCue> CueExtending;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USoundCue> CueRetracting;
    
    UPROPERTY()
    USoundCue* AudioExtending;
    
    UPROPERTY()
    USoundCue* AudioRetracting;
    
    UPROPERTY(EditAnywhere)
    bool bEnabledSegmentCollision;
    
    UPROPERTY(EditAnywhere)
    float CarveRadius;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UStaticMesh> SegmentMeshPtr;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESplineMeshAxis::Type> SegmentForwardAxis;
    
    UPROPERTY(EditAnywhere)
    float SegmentLength;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SegmentWidthCurve;
    
    UPROPERTY(EditAnywhere)
    float SegmentWidthScale;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve SegmentHeightCurve;
    
    UPROPERTY(EditAnywhere)
    float SegmentHeightScale;
    
    UPROPERTY(EditAnywhere)
    float PreviewLengthPercent;
    
    UPROPERTY(EditAnywhere)
    int32 PreviewSeed;
    
    UPROPERTY(Export, Transient)
    TArray<USplineMeshComponent*> SegmentMeshCache;
    
    UPROPERTY(Export, Transient)
    TArray<USplineMeshComponent*> CollisionMeshCache;
    
    UPROPERTY(Export, Transient)
    USplineComponent* SplineInstance;
    
    UPROPERTY(Transient)
    UStaticMesh* SegmentMesh;
    
    UPROPERTY(Replicated)
    int32 Seed;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetPlantLengthPercent(float InTargetPercent, float InPercentPerSecond, float InEaseExp);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetPlantLength(float InTargetLength, float InDistancePerSecond, float InEaseExp);
    
    UFUNCTION(BlueprintCallable)
    void SetPlantLengthPercent(float InPercent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetSpline();
    
    UFUNCTION(BlueprintCallable)
    void ResetScale();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceivePrepareSpline(USplineComponent* InSplineComponent, int32 InSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMovementUpdated(float InDistanceProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMovementStarted(float InTargetDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMovementFinished(float InDistanceProgress);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlantTargetLengthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlantLengthPercent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetNearestLocationToLocalPlayer() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFullPlantLength() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ASplinePlant();
};

