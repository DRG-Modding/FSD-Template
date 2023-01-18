#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "DamageBonusBase.generated.h"

class UDamageBonusBase;
class UDamageComponent;
class UDamageCondition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UDamageBonusBase : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageCondition* Condition;
    
public:
    UDamageBonusBase();
    UFUNCTION(BlueprintCallable)
    static UDamageBonusBase* AddDamageBonusToComponent(TSubclassOf<UDamageBonusBase> damageBonusClass, UDamageComponent* DamageComponent);
    
};

