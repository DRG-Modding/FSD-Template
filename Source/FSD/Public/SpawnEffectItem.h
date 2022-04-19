#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "ECreatureSize.h"
#include "Engine/NetSerialization.h"
#include "SpawnEffectItem.generated.h"

USTRUCT(BlueprintType)
struct FSpawnEffectItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ECreatureSize CreatureSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRotator Rotation;
    
    FSD_API FSpawnEffectItem();
};

