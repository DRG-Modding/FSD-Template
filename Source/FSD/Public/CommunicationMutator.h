#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "CommunicationMutator.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UCommunicationMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMultiplier;
    
public:
    UCommunicationMutator();
};

