#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.h"
#include "Mutator.h"
#include "MaxAmmoMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMaxAmmoMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemCategory> ApplyToItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAmmoMultiplier;
    
    UMaxAmmoMutator();

};

