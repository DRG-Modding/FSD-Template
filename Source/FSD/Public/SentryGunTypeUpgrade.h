#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "SentryGunTypeUpgrade.generated.h"

class AItemMarker;
class ARecallableSentryGun;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USentryGunTypeUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARecallableSentryGun> SentryGunType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItemMarker> MarkerType;
    
public:
    USentryGunTypeUpgrade();
};

