#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "EncounterOverrideMutator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEncounterOverrideMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileEncounterScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StationaryEncounterScale;
    
    UEncounterOverrideMutator();
};

