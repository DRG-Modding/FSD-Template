#pragma once
#include "CoreMinimal.h"
#include "BEETemplateItem.h"
#include "RandInterval.h"
#include "SavableDataAsset.h"
#include "BEEMissionTemplate.generated.h"

class UDifficultySetting;
class UMissionComplexity;
class UMissionDuration;
class UMissionTemplate;

UCLASS(Blueprintable)
class UBEEMissionTemplate : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UDifficultySetting*> Difficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBEETemplateItem> missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreditsPerPrimaryObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CreditsPerSecondaryObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XPPerPrimaryObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XPPerSecondaryObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval MutatorCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval WarningCount;
    
    UBEEMissionTemplate();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDurationAllowed(UMissionTemplate* mission, UMissionDuration* Duration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplexityAllowed(UMissionTemplate* mission, UMissionComplexity* Complexity) const;
    
};

