#pragma once
#include "CoreMinimal.h"
#include "PushPoint.generated.h"

class APlayerCharacter;
class USphereComponent;

USTRUCT()
struct FPushPoint {
    GENERATED_BODY()
public:
    UPROPERTY(Export, meta=(AllowPrivateAccess=true))
    USphereComponent* collider;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    FSD_API FPushPoint();
};

