#pragma once
#include "CoreMinimal.h"
#include "PawnAfflictionComponent.h"
#include "AnimatedObjectAfflictionComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAnimatedObjectAfflictionComponent : public UPawnAfflictionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    UAnimatedObjectAfflictionComponent();
};

