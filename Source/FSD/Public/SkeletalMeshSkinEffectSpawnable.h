#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "SkeletalMeshSkinEffectSpawnable.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USkeletalMeshSkinEffectSpawnable : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    USkeletalMeshSkinEffectSpawnable(const FObjectInitializer& ObjectInitializer);

};

