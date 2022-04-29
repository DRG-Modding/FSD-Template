#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SpawnEffectItem.h"
#include "SpawnEffectsArray.generated.h"

USTRUCT(BlueprintType)
struct FSpawnEffectsArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnEffectItem> Items;
    
    FSD_API FSpawnEffectsArray();
};

