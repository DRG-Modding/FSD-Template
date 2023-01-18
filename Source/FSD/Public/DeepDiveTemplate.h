#pragma once
#include "CoreMinimal.h"
#include "DeepDiveTemplateItem.h"
#include "ESchematicType.h"
#include "RandInterval.h"
#include "SavableDataAsset.h"
#include "DeepDiveTemplate.generated.h"

class UDifficultySetting;
class UMissionComplexity;
class UMissionDuration;
class UMissionTemplate;

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

