#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "SharedHealthMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USharedHealthMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalHealthPool;
    
    USharedHealthMutator();

};

