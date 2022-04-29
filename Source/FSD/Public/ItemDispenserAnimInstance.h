#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ItemDispenserAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UItemDispenserAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool HasItem;
    
public:
    UItemDispenserAnimInstance();
};

