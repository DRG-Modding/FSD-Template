#pragma once
#include "CoreMinimal.h"
#include "FlyingBugAnimInstance.h"
#include "JellyBreederAnimInstance.generated.h"

UCLASS(NonTransient)
class UJellyBreederAnimInstance : public UFlyingBugAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool ReadyToSpawnEggs;
    
public:
    UJellyBreederAnimInstance();
};

