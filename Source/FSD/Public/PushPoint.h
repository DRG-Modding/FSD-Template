#pragma once
#include "CoreMinimal.h"
#include "PushPoint.generated.h"

class USphereComponent;
class APlayerCharacter;

USTRUCT()
struct FPushPoint {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USphereComponent* collider;
    
    UPROPERTY()
    APlayerCharacter* Character;
    
    FSD_API FPushPoint();
};

