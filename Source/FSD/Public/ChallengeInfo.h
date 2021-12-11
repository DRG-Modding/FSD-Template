#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChallengeInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FChallengeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* IconOutlined;
    
    UPROPERTY(BlueprintReadOnly)
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentWins;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumberOfWins;
    
    UPROPERTY(BlueprintReadOnly)
    int32 XPCompleteGain;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TokenGain;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> Stat1Image;
    
    UPROPERTY(BlueprintReadOnly)
    TSoftObjectPtr<UTexture2D> Stat2Image;
    
    UPROPERTY()
    bool bIsSpecial;
    
    FSD_API FChallengeInfo();
};

