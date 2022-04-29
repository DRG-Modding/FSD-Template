#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "FSDSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFSDSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UFSDSkeletalMeshComponent();
};

