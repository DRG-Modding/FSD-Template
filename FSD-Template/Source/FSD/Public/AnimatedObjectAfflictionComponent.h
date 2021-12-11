#pragma once
#include "CoreMinimal.h"
#include "PawnAfflictionComponent.h"
#include "AnimatedObjectAfflictionComponent.generated.h"

class USkeletalMeshComponent;

UCLASS()
class UAnimatedObjectAfflictionComponent : public UPawnAfflictionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    USkeletalMeshComponent* Mesh;
    
public:
    UAnimatedObjectAfflictionComponent();
};

