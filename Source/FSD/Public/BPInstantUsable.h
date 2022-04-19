#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "BPInstantUsable.generated.h"

class USceneComponent;
class APlayerCharacter;

UCLASS(meta=(BlueprintSpawnableComponent))
class FSD_API UBPInstantUsable : public UInstantUsable {
    GENERATED_BODY()
public:
    UBPInstantUsable();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPCanUse(APlayerCharacter* User, USceneComponent* useCollider) const;
    
};

