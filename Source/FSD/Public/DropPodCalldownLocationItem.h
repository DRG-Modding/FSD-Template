#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GenerationItem.h"
#include "DropPodCalldownLocationItem.generated.h"

class AActor;

UCLASS(Blueprintable)
class ADropPodCalldownLocationItem : public AGenerationItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CalldownClass;
    
public:
    ADropPodCalldownLocationItem();
};

