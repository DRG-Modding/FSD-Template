#pragma once
#include "CoreMinimal.h"
#include "ETargetStateDamageBonusType.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "StatusAndStateDamageBonusUpgrade.generated.h"

class UDamageClass;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UStatusAndStateDamageBonusUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UStatusEffect>> StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETargetStateDamageBonusType> TargetStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Bonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
public:
    UStatusAndStateDamageBonusUpgrade();
};

