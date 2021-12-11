#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CommunityRewardNotification.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCommunityRewardNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor IconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString ID;
    
    FSD_API FCommunityRewardNotification();
};

