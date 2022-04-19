#pragma once
#include "CoreMinimal.h"
#include "GVisibilityGroups.generated.h"

class UHUDVisibilityGroup;

USTRUCT(BlueprintType)
struct FGVisibilityGroups {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UHUDVisibilityGroup*> AllGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHUDVisibilityGroup* EnemyHealth;
    
    FSD_API FGVisibilityGroups();
};

