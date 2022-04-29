#pragma once
#include "CoreMinimal.h"
#include "PickaxeMeshPart.h"
#include "PickaxeBladePart.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UPickaxeBladePart : public UPickaxeMeshPart {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestrictedToBackside;
    
public:
    UPickaxeBladePart();
};

