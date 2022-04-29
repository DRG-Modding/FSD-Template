#pragma once
#include "CoreMinimal.h"
#include "DamageSubsystemItem.generated.h"

class UDamageComponent;

USTRUCT(BlueprintType)
struct FDamageSubsystemItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UDamageComponent* DamageComponent;
    
    FSD_API FDamageSubsystemItem();
};

