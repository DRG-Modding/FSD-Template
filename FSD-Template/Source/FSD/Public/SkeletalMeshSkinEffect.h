#pragma once
#include "CoreMinimal.h"
#include "SkinEffect.h"
#include "SkeletalMeshSkinEffect.generated.h"

class USkeletalMesh;

UCLASS(EditInlineNew)
class USkeletalMeshSkinEffect : public USkinEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
public:
    USkeletalMeshSkinEffect();
};

