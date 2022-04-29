#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommunityGoalCategory.generated.h"

UCLASS(Blueprintable)
class UCommunityGoalCategory : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
public:
    UCommunityGoalCategory();
};

