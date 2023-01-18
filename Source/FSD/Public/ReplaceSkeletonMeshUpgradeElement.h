#pragma once
#include "CoreMinimal.h"
#include "ItemUpgradeElement.h"
#include "Templates/SubclassOf.h"
#include "ReplaceSkeletonMeshUpgradeElement.generated.h"

class UAnimInstance;
class USkeletalMesh;

UCLASS(Blueprintable, EditInlineNew)
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

