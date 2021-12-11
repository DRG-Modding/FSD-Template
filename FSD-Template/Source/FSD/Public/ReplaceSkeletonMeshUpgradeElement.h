#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgradeElement.h"
#include "ReplaceSkeletonMeshUpgradeElement.generated.h"

class USkeletalMesh;
class UAnimInstance;

UCLASS(EditInlineNew)
class UReplaceSkeletonMeshUpgradeElement : public UItemUpgradeElement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    USkeletalMesh* TargetMesh;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* ReplaceWithMesh;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAnimInstance> ReplaceWithAnimInstance;
    
public:
    UReplaceSkeletonMeshUpgradeElement();
};

