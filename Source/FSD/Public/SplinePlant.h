#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineMeshComponent.h"
#include "Curves/CurveFloat.h"
#include "UObject/NoExportTypes.h"
#include "SplinePlant.generated.h"

class USplineComponent;
class USceneComponent;
class UAudioComponent;
class USoundCue;
class UStaticMesh;
class USplineMeshComponent;

UCLASS(Blueprintable)
class FSD_API ASplinePlant : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* PlantSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* PlantEndPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> CueExtending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> CueRetracting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AudioExtending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AudioRetracting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabledSegmentCollision;
    
    UPROPERTY(EditAnywhere)
    float CarveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> SegmentMeshPtr;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESplineMeshAxis::Type> SegmentForwardAxis;
    
    UPROPERTY(EditAnywhere)
    float SegmentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SegmentWidthCurve;
    
    UPROPERTY(EditAnywhere)
    float SegmentWidthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SegmentHeightCurve;
    
    UPROPERTY(EditAnywhere)
    float SegmentHeightScale;
    
    UPROPERTY(EditAnywhere)
    float PreviewLengthPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> SegmentMeshCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<USplineMeshComponent*> CollisionMeshCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* SegmentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
public:
    ASplinePlant();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
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
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveMovementUpdated(float InDistanceProgress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveMovementStarted(float InTargetDistance);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveMovementFinished(float InDistanceProgress);
    
public:
    UFUNCTION(BlueprintPure)
    float GetPlantTargetLengthPercent() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlantLengthPercent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetNearestLocationToLocalPlayer() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetFullPlantLength() const;
    
};

