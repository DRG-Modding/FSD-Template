#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "UpgradeValues.h"
#include "FlatDamageUpgrade.generated.h"

class UDamageClass;
class AActor;
class UDamageCondition;
class AFSDPlayerState;

UCLASS(EditInlineNew, MinimalAPI)
class UFlatDamageUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Damage;
    
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> RequiredClass;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDamageCondition* Condition;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, UDamageClass* NewDamageClass);
    
    UFlatDamageUpgrade();
};

