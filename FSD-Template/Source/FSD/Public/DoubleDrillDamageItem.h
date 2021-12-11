#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "DoubleDrillDamageItem.generated.h"

class UPrimitiveComponent;
class UFSDPhysicalMaterial;

USTRUCT(BlueprintType)
struct FDoubleDrillDamageItem {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> Target;
    
    UPROPERTY(Transient)
    FVector_NetQuantize Location;
    
    UPROPERTY(Transient)
    FVector_NetQuantizeNormal Normal;
    
    UPROPERTY(Transient)
    UFSDPhysicalMaterial* Material;
    
    UPROPERTY(NotReplicated)
    FName BoneName;
    
    UPROPERTY(Transient)
    uint8 BoneIndex;
    
    FSD_API FDoubleDrillDamageItem();
};

