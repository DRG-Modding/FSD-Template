#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExtruderPlant.generated.h"

class USkeletalMeshComponent;
class UAudioComponent;
class UAnimationAsset;

UCLASS(Abstract)
class AExtruderPlant : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* ExtrudeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* RetractAnimation;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAudioComponent* Audio;
    
public:
    AExtruderPlant();
};

