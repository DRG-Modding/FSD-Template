#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SchematicRarity.generated.h"

UCLASS()
class FSD_API USchematicRarity : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rarity;
    
    USchematicRarity();
};

