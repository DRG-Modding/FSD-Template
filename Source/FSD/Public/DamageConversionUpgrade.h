#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "DamageConversionUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UDamageClass;
class UDamageCondition;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDamageConversionUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConversionPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DamageIsAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> RequiredClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDamageCondition* Condition;
    
public:
    UDamageConversionUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, TSubclassOf<AActor> upgradedItem, AFSDPlayerState* Player, UDamageClass* NewDamageClass);
    
};

