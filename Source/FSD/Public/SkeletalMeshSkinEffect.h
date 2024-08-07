#pragma once
#include "CoreMinimal.h"
#include "AttachMesh.h"
#include "SkinEffect.h"
#include "SkeletalMeshSkinEffect.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable, EditInlineNew)
class USkeletalMeshSkinEffect : public USkinEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachMesh> AttachMeshes;
    
public:
    USkeletalMeshSkinEffect();

};

