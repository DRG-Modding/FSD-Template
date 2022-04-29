#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SchematicRarity.generated.h"

UCLASS(Blueprintable)
class FSD_API USchematicRarity : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Rarity;
    
    USchematicRarity();
};

