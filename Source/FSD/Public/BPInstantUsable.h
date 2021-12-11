#pragma once
#include "CoreMinimal.h"
#include "InstantUsable.h"
#include "BPInstantUsable.generated.h"

class APlayerCharacter;
class USceneComponent;

UCLASS()
class UBPInstantUsable : public UInstantUsable {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPCanUse(APlayerCharacter* User, USceneComponent* UseCollider) const;
    
public:
    UBPInstantUsable();
};

