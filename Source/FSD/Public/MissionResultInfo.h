#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionResultInfo.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UMissionResultInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool HasInfo;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MissionTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MissionTotalHazBonus;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FText MissionHazName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MissionHazBonus;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ComplexityBonus;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ComplexityDots;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float LenghtBonus;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 LenghtDots;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FText> WarningTitles;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> WarningIcons;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> WarningBonusses;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TotalCreditsSum;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TotalXPSum;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool WasSuccess;
    
    UMissionResultInfo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWarningBonusSum();
    
};

