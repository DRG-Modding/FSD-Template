#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MissionStatCategory.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UMissionStatCategory : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
public:
    UMissionStatCategory();
};

