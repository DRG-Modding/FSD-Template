#pragma once
#include "CoreMinimal.h"
#include "DamageDataBase.h"
#include "DamageData.generated.h"

class UFSDPhysicalMaterial;
class UDamageClass;

USTRUCT()
struct FDamageData : public FDamageDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UFSDPhysicalMaterial* Bodypart;
    
    UPROPERTY(Transient)
    UDamageClass* DamageClass;
    
    FSD_API FDamageData();
};

