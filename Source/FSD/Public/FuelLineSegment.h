#pragma once
#include "CoreMinimal.h"
#include "TrackBuilderSegment.h"
#include "UObject/NoExportTypes.h"
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
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineMeshComponent* FuelLineSplineMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineComponent* FuelLineSplineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* FuelLineEndPostMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleHealthComponent* DeconstructHealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* PreviewEndPostLocation;
    
    UPROPERTY(EditAnywhere)
    float EndPostHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float MaxLength;
    
    UPROPERTY()
    bool bHasMaxTurnAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxTurnAngle;
    
    UFUNCTION(BlueprintCallable, Client, Unreliable, WithValidation)
    void ClientUpdateStartTransform(const FVector& NewStartLocation);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStartTransform(const FTransform& ChangedStartLocation);
    
    UFUNCTION(BlueprintCallable)
    void CallbackOnDeath(UHealthComponentBase* InHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void CallbackCanStartNextSegmentChanged(bool InCanStart);
    
public:
    AFuelLineSegment();
};

