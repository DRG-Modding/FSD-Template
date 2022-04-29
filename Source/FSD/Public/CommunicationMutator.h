#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "CommunicationMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommunicationMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float PitchMultiplier;
    
public:
    UCommunicationMutator();
};

