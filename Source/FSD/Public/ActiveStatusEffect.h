#pragma once
#include "CoreMinimal.h"
#include "ActiveStatusEffect.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActiveStatusEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Owner;
    
    FSD_API FActiveStatusEffect();
};

