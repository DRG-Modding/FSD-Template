#pragma once
#include "CoreMinimal.h"
#include "PushPoint.generated.h"

class APlayerCharacter;
class USphereComponent;

USTRUCT(BlueprintType)
struct FPushPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* collider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    FSD_API FPushPoint();
};

