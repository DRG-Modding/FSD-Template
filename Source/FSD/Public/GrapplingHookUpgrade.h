#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandardItemUpgrade.h"
#include "EGrapplingHookUpgrade.h"
#include "UpgradeValues.h"
#include "GrapplingHookUpgrade.generated.h"

class AFSDPlayerState;
class AActor;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UGrapplingHookUpgrade : public UStandardItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGrapplingHookUpgrade upgradeType;
    
public:
    UGrapplingHookUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUpgradeValues GetUpgradedValue(AFSDPlayerState* Player, TSubclassOf<AActor> Item, EGrapplingHookUpgrade NewUpgradeType);
    
};

