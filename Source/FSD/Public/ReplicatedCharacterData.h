#pragma once
#include "CoreMinimal.h"
#include "ReplicatedCharacterData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FReplicatedCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(EditAnywhere)
    float TemperatureEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTakeDamage;
    
    FSD_API FReplicatedCharacterData();
};

