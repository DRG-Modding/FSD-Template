#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Targetable.h"
#include "Steerable.h"
#include "PathfinderVehicle.generated.h"

class USkeletalMeshComponent;
class UDeepPathfinderMovement;
class UHealthComponent;

UCLASS(Blueprintable)
class APathfinderVehicle : public APawn, public ITargetable, public ISteerable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDeepPathfinderMovement* PathfinderMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
public:
    APathfinderVehicle();
    
    // Fix for true pure virtual functions not being implemented
};

