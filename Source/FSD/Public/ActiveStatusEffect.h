#pragma once
#include "CoreMinimal.h"
#include "ActiveStatusEffect.generated.h"

class AActor;
class APawn;

USTRUCT(BlueprintType)
struct FActiveStatusEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> Instigator;
    
    FSD_API FActiveStatusEffect();
};

