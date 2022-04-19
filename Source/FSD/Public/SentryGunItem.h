#pragma once
#include "CoreMinimal.h"
#include "PlaceableItem.h"
#include "SentryGunItem.generated.h"

class UItemUpgrade;

UCLASS()
class ASentryGunItem : public APlaceableItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
public:
    ASentryGunItem();
};

