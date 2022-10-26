#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "VeinMutator.generated.h"

class UVeinResourceData;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UVeinMutator : public UMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVeinResourceData* VeinResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float modifier;
    
public:
    UVeinMutator();
};

