#pragma once
#include "CoreMinimal.h"
#include "FloatPerkActivation.h"
#include "EscapableGrabberEnemyActivation.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UEscapableGrabberEnemyActivation : public UFloatPerkActivation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> EnemyGrabberClass;
    
public:
    UEscapableGrabberEnemyActivation();
};

