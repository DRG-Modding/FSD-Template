#pragma once
#include "CoreMinimal.h"
#include "FirstPersonSkeletalMeshComponent.h"
#include "FPSkeletalMeshSkinEffectSpawnable.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFPSkeletalMeshSkinEffectSpawnable : public UFirstPersonSkeletalMeshComponent {
    GENERATED_BODY()
public:
    UFPSkeletalMeshSkinEffectSpawnable(const FObjectInitializer& ObjectInitializer);

};

