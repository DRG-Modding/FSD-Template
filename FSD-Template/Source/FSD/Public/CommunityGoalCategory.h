#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommunityGoalCategory.generated.h"

UCLASS(BlueprintType)
class UCommunityGoalCategory : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
public:
    UCommunityGoalCategory();
};

