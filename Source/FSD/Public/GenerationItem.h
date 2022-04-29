#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GenerationItem.generated.h"

UCLASS(Abstract, Blueprintable)
class AGenerationItem : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddToLevel;
    
public:
    AGenerationItem();
};

