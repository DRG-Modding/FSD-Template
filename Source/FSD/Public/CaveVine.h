#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "CaveVine.generated.h"

class UHealthComponent;
class USceneComponent;
class USplineMeshComponent;

UCLASS(Abstract, Blueprintable)
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineMeshComponent* SplineMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* VineHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VineVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VineLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VineStartLocation;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UHealthComponent> Target;
    
public:
    ACaveVine();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTargetChanged(UHealthComponent* NewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInitialized();
    
};

