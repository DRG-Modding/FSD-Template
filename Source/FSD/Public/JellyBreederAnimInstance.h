#pragma once
#include "CoreMinimal.h"
#include "FlyingBugAnimInstance.h"
#include "JellyBreederAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UJellyBreederAnimInstance : public UFlyingBugAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ReadyToSpawnEggs;
    
public:
    UJellyBreederAnimInstance();
};

