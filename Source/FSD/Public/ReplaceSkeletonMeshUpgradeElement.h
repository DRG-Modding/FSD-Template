#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgradeElement.h"
#include "ReplaceSkeletonMeshUpgradeElement.generated.h"

class UAnimInstance;
class USkeletalMesh;

UCLASS(EditInlineNew)
class UReplaceSkeletonMeshUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* TargetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ReplaceWithMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> ReplaceWithAnimInstance;
    
public:
    UReplaceSkeletonMeshUpgradeElement();
};

