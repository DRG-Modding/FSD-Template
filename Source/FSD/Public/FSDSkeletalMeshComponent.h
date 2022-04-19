#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "FSDSkeletalMeshComponent.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UFSDSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UFSDSkeletalMeshComponent();
};

