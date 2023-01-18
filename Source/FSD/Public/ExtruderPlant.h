#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExtruderPlant.generated.h"

class UAnimationAsset;
class UAudioComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class AExtruderPlant : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* ExtrudeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* RetractAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* audio;
    
public:
    AExtruderPlant();
};

