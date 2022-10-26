#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "BoxGenerationItem.generated.h"

class UBoxGenerationComponent;

UCLASS(Blueprintable)
class ABoxGenerationItem : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxGenerationComponent* BoxComponent;
    
    ABoxGenerationItem();
};

