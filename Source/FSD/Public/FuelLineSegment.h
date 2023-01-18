#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TrackBuilderSegment.h"
#include "FuelLineSegment.generated.h"

class UHealthComponentBase;
class USceneComponent;
class USimpleHealthComponent;
class USplineComponent;
class USplineMeshComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class FSD_API AFuelLineSegment : public ATrackBuilderSegment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* FuelLineSplineMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* FuelLineSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FuelLineEndPostMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleHealthComponent* DeconstructHealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PreviewEndPostLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndPostHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMaxTurnAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTurnAngle;
    
public:
    AFuelLineSegment();
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientUpdateStartTransform(const FVector& NewStartLocation);
    
    UFUNCTION(BlueprintCallable)
    void ChangeStartTransform(const FTransform& ChangedStartLocation);
    
    UFUNCTION(BlueprintCallable)
    void CallbackOnDeath(UHealthComponentBase* InHealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void CallbackCanStartNextSegmentChanged(bool InCanStart);
    
};

