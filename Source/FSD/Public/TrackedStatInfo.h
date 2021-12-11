#pragma once
#include "CoreMinimal.h"
#include "TrackedStatInfo.generated.h"

class UTexture2D;
class UMissionStat;
class UDataAsset;

USTRUCT(BlueprintType)
struct FTrackedStatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMissionStat* Stat;
    
    UPROPERTY(EditAnywhere)
    FText Name;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(EditAnywhere)
    UDataAsset* assetReference;
    
    FSD_API FTrackedStatInfo();
};

