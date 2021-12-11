#pragma once
#include "CoreMinimal.h"
#include "UsableRepliactional.generated.h"

class UUsableComponentBase;

USTRUCT(BlueprintType)
struct FUsableRepliactional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UUsableComponentBase* UsableComp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 Key;
    
    FSD_API FUsableRepliactional();
};

