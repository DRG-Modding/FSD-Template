#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "AnimNode_Tentacle.generated.h"

USTRUCT(BlueprintType)
struct FSD_API FAnimNode_Tentacle : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBoneReference> BonesToModify;
    
    FAnimNode_Tentacle();
};

