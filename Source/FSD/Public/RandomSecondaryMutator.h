#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "RandomSecondaryMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class URandomSecondaryMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MustBeCompleted;
    
    URandomSecondaryMutator();

};

