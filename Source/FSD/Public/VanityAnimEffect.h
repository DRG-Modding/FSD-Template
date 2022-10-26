#pragma once
#include "CoreMinimal.h"
#include "VanityAnimEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FVanityAnimEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelay;
    
    FSD_API FVanityAnimEffect();
};

