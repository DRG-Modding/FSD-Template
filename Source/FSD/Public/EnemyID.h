#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "EnemyID.generated.h"

UCLASS(Blueprintable)
class FSD_API UEnemyID : public USavableDataAsset {
    GENERATED_BODY()
public:
    UEnemyID();
};

