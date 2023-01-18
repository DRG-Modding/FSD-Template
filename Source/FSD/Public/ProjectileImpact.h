#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "ProjectileImpact.generated.h"

class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FProjectileImpact {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal Normal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneIndex;
    
    FSD_API FProjectileImpact();
};

