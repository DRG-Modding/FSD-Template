#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "ETargetStateDamageBonusType.h"
#include "UpgradeValues.h"
#include "TargetStateDamageBonusUpgrade.generated.h"

class AFSDPlayerState;
class UDamageClass;
class AActor;

UCLASS(EditInlineNew, MinimalAPI)
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

