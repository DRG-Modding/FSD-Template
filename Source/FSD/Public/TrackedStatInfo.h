#pragma once
#include "CoreMinimal.h"
#include "TrackedStatInfo.generated.h"

class UMissionStat;
class UTexture2D;
class UDataAsset;

USTRUCT(BlueprintType)
struct FTrackedStatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* assetReference;
    
    FSD_API FTrackedStatInfo();
};

