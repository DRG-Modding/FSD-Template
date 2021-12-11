#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemUpgrade.h"
#include "SentryGunTypeUpgrade.generated.h"

class ARecallableSentryGun;
class AItemMarker;

UCLASS(EditInlineNew, MinimalAPI)
class USentryGunTypeUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ARecallableSentryGun> SentryGunType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AItemMarker> MarkerType;
    
public:
    USentryGunTypeUpgrade();
};

