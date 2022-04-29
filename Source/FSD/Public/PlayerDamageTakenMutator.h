#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "PlayerDamageTakenMutator.generated.h"

class UDamageClass;

UCLASS(Blueprintable, EditInlineNew)
class UPlayerDamageTakenMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float DamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UDamageClass*> SkipDamageClasses;
    
public:
    UPlayerDamageTakenMutator();
};

