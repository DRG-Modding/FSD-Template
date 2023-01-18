#pragma once
#include "CoreMinimal.h"
#include "ETargetStateDamageBonusType.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "TargetStateDamageBonusUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UDamageClass;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UTargetStateDamageBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetStateDamageBonusType TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
public:
    UTargetStateDamageBonusUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, ETargetStateDamageBonusType NewTargetState);
    
};

