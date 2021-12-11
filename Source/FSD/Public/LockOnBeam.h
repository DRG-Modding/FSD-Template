#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BeamCollision.h"
#include "LockOnBeam.generated.h"

class UMaterialInterface;
class USceneComponent;
class USplineComponent;
class USplineMeshComponent;
class ALockOnWeapon;

UCLASS(Abstract)
class ALockOnBeam : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USplineComponent* BeamSpline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USplineMeshComponent* BeamMeshComponent01;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USplineMeshComponent* BeamMeshComponent02;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USplineMeshComponent* BeamMeshComponent03;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USceneComponent* BlockedNodeComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    USceneComponent* PreviewLocationComponent;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* BeamMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* BlockedBeamMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* SeekerMaterial;
    
    UPROPERTY(EditAnywhere)
    float BeamThicknessScale;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<ALockOnWeapon> Item;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(EditAnywhere)
    FBeamCollision Collision;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveItemSet();
    
public:
    ALockOnBeam();
};

