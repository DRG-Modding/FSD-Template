#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DualWieldWeapon.h"
#include "DualMachinePistols.generated.h"

class UStatusEffect;

UCLASS(Blueprintable)
class ADualMachinePistols : public ADualWieldWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> EmptyClipStatusEffect;
    
public:
    ADualMachinePistols();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TriggerStatusEffect();
    
};

