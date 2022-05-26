#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
#include "JellyFishAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UJellyFishAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HorizontalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VerticalSpeed;
    
public:
    UJellyFishAnimInstance();
};

