#pragma once
#include "CoreMinimal.h"
#include "GVisibilityGroups.generated.h"

class UHUDVisibilityGroup;

USTRUCT(BlueprintType)
struct FGVisibilityGroups {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<UHUDVisibilityGroup*> AllGroups;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UHUDVisibilityGroup* EnemyHealth;
    
    FSD_API FGVisibilityGroups();
};

