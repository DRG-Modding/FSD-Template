#pragma once
#include "CoreMinimal.h"
#include "ReplicatedCharacterData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FReplicatedCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY()
    float TemperatureEffect;
    
    UPROPERTY()
    bool bCanTakeDamage;
    
    FSD_API FReplicatedCharacterData();
};

