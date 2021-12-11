#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Targetable.h"
#include "Steerable.h"
#include "PathfinderVehicle.generated.h"

class UHealthComponent;
class UDeepPathfinderMovement;
class USkeletalMeshComponent;

UCLASS()
class APathfinderVehicle : public APawn, public ITargetable, public ISteerable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDeepPathfinderMovement* PathfinderMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UHealthComponent* HealthComponent;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
public:
    APathfinderVehicle();
    
    // Fix for true pure virtual functions not being implemented
};

