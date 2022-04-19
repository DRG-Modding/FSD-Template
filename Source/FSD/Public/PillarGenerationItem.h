#pragma once
#include "CoreMinimal.h"
#include "GenerationItem.h"
#include "PillarGenerationItem.generated.h"

class UPillarGenerationComponent;

UCLASS()
class APillarGenerationItem : public AGenerationItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UPillarGenerationComponent* PillarComponent;
    
    APillarGenerationItem();
};

