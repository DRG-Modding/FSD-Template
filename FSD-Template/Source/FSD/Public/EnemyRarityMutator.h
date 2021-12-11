#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "EnemyRarityMutator.generated.h"

class UEnemyDescriptor;

UCLASS(EditInlineNew)
class FSD_API UEnemyRarityMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RarityMultiplier;
    
    UPROPERTY(EditAnywhere)
    float SpawnAmountMultiplier;
    
    UPROPERTY(EditAnywhere)
    float DifficultyMultiplier;
    
    UPROPERTY(EditAnywhere)
    UEnemyDescriptor* EnemyDescriptor;
    
    UEnemyRarityMutator();
};

