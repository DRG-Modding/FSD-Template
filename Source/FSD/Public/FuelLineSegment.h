#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrackBuilderSegment.h"
#include "UObject/NoExportTypes.h"
#include "FuelLineSegment.generated.h"

class USceneComponent;
class USplineMeshComponent;
class USplineComponent;
class UStaticMeshComponent;
class USimpleHealthComponent;
class UHealthComponentBase;

UCLASS(Abstract)
class FSD_API AFuelLineSegment : public ATrackBuilderSegment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* FuelLineSplineMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineComponent* FuelLineSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FuelLineEndPostMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* DeconstructHealthComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* PreviewEndPostLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndPostHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLength;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bHasMaxTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTurnAngle;
    
public:
    AFuelLineSegment();
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable, WithValidation)
    void ClientUpdateStartTransform(const FVector& NewStartLocation);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStartTransform(const FTransform& ChangedStartLocation);
    
    UFUNCTION(BlueprintCallable)
    void CallbackOnDeath(UHealthComponentBase* InHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void CallbackCanStartNextSegmentChanged(bool InCanStart);
    
};

