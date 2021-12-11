#pragma once
#include "CoreMinimal.h"
#include "DamageSubsystemItem.generated.h"

class UDamageComponent;

USTRUCT(BlueprintType)
struct FDamageSubsystemItem {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UDamageComponent* DamageComponent;
    
    FSD_API FDamageSubsystemItem();
};

