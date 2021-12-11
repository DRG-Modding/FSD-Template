#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyFamily.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UEnemyFamily : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UEnemyFamily();
};

