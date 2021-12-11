#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "DamageBonusBase.generated.h"

class UDamageComponent;
class UDamageCondition;
class UDamageBonusBase;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class UDamageBonusBase : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UDamageCondition* Condition;
    
public:
    UFUNCTION(BlueprintCallable)
    static UDamageBonusBase* AddDamageBonusToComponent(TSubclassOf<UDamageBonusBase> damageBonusClass, UDamageComponent* DamageComponent);
    
    UDamageBonusBase();
};

