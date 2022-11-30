#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "ESchematicType.h"
#include "DeepDiveTemplateItem.h"
#include "RandInterval.h"
#include "DeepDiveTemplate.generated.h"

class UMissionComplexity;
class UMissionTemplate;
class UDifficultySetting;
class UMissionDuration;

UCLASS(Blueprintable)
class UDeepDiveTemplate : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UDifficultySetting*> Difficulties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeepDiveTemplateItem> missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<ESchematicType> Rewards;
    
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
    
    UDeepDiveTemplate();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDurationAllowed(UMissionTemplate* mission, UMissionDuration* Duration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplexityAllowed(UMissionTemplate* mission, UMissionComplexity* Complexity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESchematicType GetStageRewardType(int32 stageIndex) const;
    
};

