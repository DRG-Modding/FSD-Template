#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EliteEnemyBan.generated.h"

class UMissionTemplate;

USTRUCT(BlueprintType)
struct FEliteEnemyBan {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FInt32Interval AffectedPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionTemplate* Template;
    
    FSD_API FEliteEnemyBan();
};

