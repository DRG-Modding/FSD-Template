#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CommunityRewardNotification.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCommunityRewardNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    FSD_API FCommunityRewardNotification();
};

