#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GooPuddleStatusEffectTrigger.generated.h"

class UDamageClass;
class UStatusEffect;

USTRUCT(BlueprintType)
struct FGooPuddleStatusEffectTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UDamageClass*> Trigger;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UStatusEffect> NewStatusEffect;
    
    FSD_API FGooPuddleStatusEffectTrigger();
};

