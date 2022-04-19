#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DamageDataBase.generated.h"

class UFSDPhysicalMaterial;
class UPrimitiveComponent;
class UDamageImpulse;

USTRUCT(BlueprintType)
struct FDamageDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* PhysMaterial;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 BoneIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UDamageImpulse* DamageImpulseOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool IsRadial;
    
    FSD_API FDamageDataBase();
};

