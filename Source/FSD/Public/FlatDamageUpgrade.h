#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "FlatDamageUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UDamageClass;
class UDamageCondition;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFlatDamageUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RequiredClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MergeWithOtherFlatDamageUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageCondition* Condition;
    
public:
    UFlatDamageUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, UDamageClass* NewDamageClass);
    
};

