#pragma once
#include "CoreMinimal.h"
#include "DifficultyMutatorInfo.h"
#include "SavableDataAsset.h"
#include "DifficultyMutatorSetupItem.generated.h"

class UDifficultyMutator;

UCLASS(Blueprintable)
class UDifficultyMutatorSetupItem : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyMutatorInfo Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDifficultyMutator*> Mutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HazardBonus;
    
    UDifficultyMutatorSetupItem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfLevels() const;
    
};

