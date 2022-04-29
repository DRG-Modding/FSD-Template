#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MissionResultInfo.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UMissionResultInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasInfo;
    
    UPROPERTY(EditAnywhere)
    float MissionTime;
    
    UPROPERTY(EditAnywhere)
    float MissionTotalHazBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText MissionHazName;
    
    UPROPERTY(EditAnywhere)
    float MissionHazBonus;
    
    UPROPERTY(EditAnywhere)
    float ComplexityBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComplexityDots;
    
    UPROPERTY(EditAnywhere)
    float LenghtBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LenghtDots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FText> WarningTitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> WarningIcons;
    
    UPROPERTY(EditAnywhere)
    TArray<float> WarningBonusses;
    
    UPROPERTY(EditAnywhere)
    float TotalCreditsSum;
    
    UPROPERTY(EditAnywhere)
    float TotalXPSum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasSuccess;
    
    UMissionResultInfo();
    UFUNCTION(BlueprintPure)
    float GetWarningBonusSum();
    
};

