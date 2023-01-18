#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "UpgradeValues.h"
#include "GatlingHotShellsBonusUpgrade.generated.h"

class AActor;
class AFSDPlayerState;
class UDamageClass;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UGatlingHotShellsBonusUpgrade : public UItemUpgrade {
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
    float TemperatureRequired;
    
public:
    UGatlingHotShellsBonusUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(TSubclassOf<AActor> Item, AFSDPlayerState* Player, UDamageClass* NewDamageClass);
    
};

