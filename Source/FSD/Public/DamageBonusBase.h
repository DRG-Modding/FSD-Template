#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "DamageBonusBase.generated.h"

class UDamageBonusBase;
class UDamageCondition;
class UDamageComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UDamageBonusBase : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageCondition* Condition;
    
public:
    UDamageBonusBase();
    UFUNCTION(BlueprintCallable)
    static UDamageBonusBase* AddDamageBonusToComponent(TSubclassOf<UDamageBonusBase> damageBonusClass, UDamageComponent* DamageComponent);
    
};

