#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DebrisCapsule.generated.h"

USTRUCT(BlueprintType)
struct FDebrisCapsule {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 ID;
    
    UPROPERTY(EditAnywhere)
    FVector Start;
    
    UPROPERTY(EditAnywhere)
    FVector End;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    FSD_API FDebrisCapsule();
};

