#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "DeepDiveTemplateItem.h"
#include "ESchematicType.h"
#include "RandInterval.h"
#include "DeepDiveTemplate.generated.h"

class UDifficultySetting;

UCLASS()
class UDeepDiveTemplate : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<UDifficultySetting*> Difficulties;
    
    UPROPERTY(EditAnywhere)
    TArray<FDeepDiveTemplateItem> missions;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<ESchematicType> Rewards;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CreditsPerPrimaryObjective;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CreditsPerSecondaryObjective;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 XPPerPrimaryObjective;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 XPPerSecondaryObjective;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HazardBonus;
    
    UPROPERTY(EditAnywhere)
    FRandInterval MutatorCount;
    
    UPROPERTY(EditAnywhere)
    FRandInterval WarningCount;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESchematicType GetStageRewardType(int32 stageIndex) const;
    
    UDeepDiveTemplate();
};

