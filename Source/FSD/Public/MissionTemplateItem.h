#pragma once
#include "CoreMinimal.h"
#include "MissionTemplateItem.generated.h"

class UMissionTemplate;

USTRUCT(BlueprintType)
struct FMissionTemplateItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rarity;
    
public:
    FSD_API FMissionTemplateItem();
};

