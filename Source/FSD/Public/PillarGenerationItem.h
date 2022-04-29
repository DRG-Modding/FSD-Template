#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "PillarGenerationItem.generated.h"

class UPillarGenerationComponent;

UCLASS(Blueprintable)
class APillarGenerationItem : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPillarGenerationComponent* PillarComponent;
    
    APillarGenerationItem();
};

