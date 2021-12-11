#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DualWieldWeapon.h"
#include "DualMachinePistols.generated.h"

class UStatusEffect;

UCLASS()
class ADualMachinePistols : public ADualWieldWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> EmptyClipStatusEffect;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TriggerStatusEffect();
    
public:
    ADualMachinePistols();
};

