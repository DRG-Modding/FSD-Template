#pragma once
#include "CoreMinimal.h"
#include "ReplicatedCharacterData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FReplicatedCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float TemperatureEffect;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bCanTakeDamage;
    
    FSD_API FReplicatedCharacterData();
};

