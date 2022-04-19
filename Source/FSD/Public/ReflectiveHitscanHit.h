#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "ReflectiveHitscanHit.generated.h"

class UPrimitiveComponent;
class UFSDPhysicalMaterial;

USTRUCT(BlueprintType)
struct FReflectiveHitscanHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    uint8 BoneIndex;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize HitLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal ImpactNormal;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* PhysMat;
    
    FSD_API FReflectiveHitscanHit();
};

