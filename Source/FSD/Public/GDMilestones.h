#pragma once
#include "CoreMinimal.h"
#include "GDMilestones.generated.h"

class UMilestoneAsset;

USTRUCT(BlueprintType)
struct FGDMilestones {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMilestoneAsset*> Milestones;
    
    FSD_API FGDMilestones();
};

