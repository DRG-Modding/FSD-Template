#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "PlayerShieldsMutator.generated.h"

UCLASS(EditInlineNew)
class UPlayerShieldsMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldModifier;
    
public:
    UPlayerShieldsMutator();
};

