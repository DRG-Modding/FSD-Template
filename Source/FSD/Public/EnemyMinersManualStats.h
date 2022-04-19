#pragma once
#include "CoreMinimal.h"
#include "EnemyMinersManualStats.generated.h"

USTRUCT(BlueprintType)
struct FEnemyMinersManualStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Speed;
    
    FSD_API FEnemyMinersManualStats();
};

