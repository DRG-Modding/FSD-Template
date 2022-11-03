#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "BPInstantUsable.generated.h"

class APlayerCharacter;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UBPInstantUsable : public UInstantUsable {
    GENERATED_BODY()
public:
    UBPInstantUsable();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPCanUse(APlayerCharacter* User, USceneComponent* useCollider) const;
    
};

