#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "ReplaceSkeletonMeshUpgradeElement.generated.h"

class UAnimInstance;
class USkeletalMesh;

UCLASS(Blueprintable, EditInlineNew)
class UReplaceSkeletonMeshUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> TargetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> ReplaceWithMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> ReplaceWithAnimInstance;
    
public:
    UReplaceSkeletonMeshUpgradeElement();

};

