#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "CaveVine.generated.h"

class UHealthComponent;
class USceneComponent;
class USplineMeshComponent;

UCLASS(Abstract)
class ACaveVine : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> GroundCollisionChannel;
    
    UPROPERTY(EditAnywhere)
    float IdleSwingSpeed;
    
    UPROPERTY(EditAnywhere)
    float ChaseSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxReach;
    
    UPROPERTY(EditAnywhere)
    float GroundOffset;
    
    UPROPERTY(EditAnywhere)
    float NoiseRadius;
    
    UPROPERTY(EditAnywhere)
    float NoiseSpeed;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USplineMeshComponent* SplineMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* VineHead;
    
    UPROPERTY(BlueprintReadOnly)
    FVector VineVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    FVector VineLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector VineStartLocation;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UHealthComponent> Target;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTargetChanged(UHealthComponent* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInitialized();
    
public:
    ACaveVine();
};

