#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MissionStatCategory.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UMissionStatCategory : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
public:
    UMissionStatCategory();
};

