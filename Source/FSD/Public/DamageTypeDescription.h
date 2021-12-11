#pragma once
#include "CoreMinimal.h"
#include "SoftIconWithColor.h"
#include "EDamageType.h"
#include "DamageTypeDescription.generated.h"

USTRUCT(BlueprintType)
struct FDamageTypeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDamageType Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText RichDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoftIconWithColor Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IconScale;
    
    FSD_API FDamageTypeDescription();
};

