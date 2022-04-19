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
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> Target;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal Normal;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, NotReplicated, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    uint8 BoneIndex;
    
    FSD_API FDoubleDrillDamageItem();
};

