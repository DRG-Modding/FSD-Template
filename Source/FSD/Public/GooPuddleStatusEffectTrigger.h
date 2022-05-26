#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GooPuddleStatusEffectTrigger.generated.h"

class UStatusEffect;
class UDamageClass;

USTRUCT(BlueprintType)
struct FGooPuddleStatusEffectTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDamageClass*> Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> NewStatusEffect;
    
    FSD_API FGooPuddleStatusEffectTrigger();
};

