#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CleanupToolAnimInstance.generated.h"

class APlagueCleanupItem;

UCLASS(Blueprintable, NonTransient)
class UCleanupToolAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUsing;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlagueCleanupItem* CleaningTool;
    
public:
    UCleanupToolAnimInstance();
};

