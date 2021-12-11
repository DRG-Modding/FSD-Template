#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "ResourceMutator.generated.h"

class UResourceData;

UCLASS(EditInlineNew)
class UResourceMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UResourceData*> Resources;
    
protected:
    UPROPERTY(EditAnywhere)
    float Modifier;
    
public:
    UResourceMutator();
};

