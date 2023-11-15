#pragma once
#include "CoreMinimal.h"
#include "DualWieldWeapon.h"
#include "Templates/SubclassOf.h"
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
    ADualMachinePistols(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TriggerStatusEffect();
    
};

