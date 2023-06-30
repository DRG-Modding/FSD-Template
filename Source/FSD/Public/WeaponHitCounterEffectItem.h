#pragma once
#include "CoreMinimal.h"
#include "WeaponHitCounterEffectItem.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWeaponHitCounterEffectItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    FSD_API FWeaponHitCounterEffectItem();
};

