#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Targetable.h"
#include "Steerable.h"
#include "PathfinderVehicle.generated.h"

class USkeletalMeshComponent;
class UDeepPathfinderMovement;
class UHealthComponent;

UCLASS()
class APathfinderVehicle : public APawn, public ITargetable, public ISteerable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDeepPathfinderMovement* PathfinderMovement;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
public:
    APathfinderVehicle();
    
    // Fix for true pure virtual functions not being implemented
};

