#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EnemySpawnParamsEntry.generated.h"

USTRUCT()
struct FEnemySpawnParamsEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ItemName;
    
    UPROPERTY(EditAnywhere)
    float DifficultyRating;
    
    UPROPERTY(EditAnywhere)
    int32 MinSpawnCount;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSpawnCount;
    
    UPROPERTY(EditAnywhere)
    float Rarity;
    
    UPROPERTY(EditAnywhere)
    float SpawnAmountModifier;
    
    UPROPERTY(EditAnywhere)
    int32 RequiredMainCampaignProgress;
    
    FSD_API FEnemySpawnParamsEntry();
};

