#pragma once
#include "CoreMinimal.h"
#include "PickaxeMeshPart.h"
#include "PickaxeBladePart.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UPickaxeBladePart : public UPickaxeMeshPart {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool RestrictedToBackside;
    
public:
    UPickaxeBladePart();
};

