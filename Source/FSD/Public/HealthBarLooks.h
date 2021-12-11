#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HealthBarLooks.generated.h"

USTRUCT(BlueprintType)
struct FHealthBarLooks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HealthColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DamageColor;
    
    FSD_API FHealthBarLooks();
};

