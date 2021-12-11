#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "ECreatureSize.h"
#include "SpawnEffectItem.generated.h"

USTRUCT(BlueprintType)
struct FSpawnEffectItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    ECreatureSize CreatureSize;
    
    UPROPERTY()
    FVector_NetQuantize Location;
    
    UPROPERTY()
    FRotator Rotation;
    
    FSD_API FSpawnEffectItem();
};

