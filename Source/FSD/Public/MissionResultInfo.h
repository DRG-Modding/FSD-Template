#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionResultInfo.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UMissionResultInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool HasInfo;
    
    UPROPERTY(BlueprintReadWrite)
    float MissionTime;
    
    UPROPERTY(BlueprintReadWrite)
    float MissionTotalHazBonus;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FText MissionHazName;
    
    UPROPERTY(BlueprintReadWrite)
    float MissionHazBonus;
    
    UPROPERTY(BlueprintReadWrite)
    float ComplexityBonus;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ComplexityDots;
    
    UPROPERTY(BlueprintReadWrite)
    float LenghtBonus;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LenghtDots;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FText> WarningTitles;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<UTexture2D*> WarningIcons;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<float> WarningBonusses;
    
    UPROPERTY(BlueprintReadWrite)
    float TotalCreditsSum;
    
    UPROPERTY(BlueprintReadWrite)
    float TotalXPSum;
    
    UPROPERTY(BlueprintReadWrite)
    bool WasSuccess;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWarningBonusSum();
    
    UMissionResultInfo();
};

