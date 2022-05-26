#pragma once
#include "CoreMinimal.h"
#include "Mutator.h"
#include "ResourceMutator.generated.h"

class UResourceData;

UCLASS(Blueprintable, EditInlineNew)
class UResourceMutator : public UMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UResourceData*> Resources;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Modifier;
    
public:
    UResourceMutator();
};

