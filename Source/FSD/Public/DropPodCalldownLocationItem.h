#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GenerationItem.h"
#include "DropPodCalldownLocationItem.generated.h"

class AActor;

UCLASS()
class ADropPodCalldownLocationItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> CalldownClass;
    
public:
    ADropPodCalldownLocationItem();
};

