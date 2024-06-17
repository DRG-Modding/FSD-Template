#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "PlayerStatMutator.generated.h"

class UPawnStat;

UCLASS(Blueprintable, EditInlineNew)
class UPlayerStatMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StatValue;
    
    UPlayerStatMutator();

};

