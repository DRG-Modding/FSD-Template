#pragma once
#include "CoreMinimal.h"
#include "GDMilestones.generated.h"

class UMilestoneAsset;

USTRUCT(BlueprintType)
struct FGDMilestones {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UMilestoneAsset*> Milestones;
    
    FSD_API FGDMilestones();
};

