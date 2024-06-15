#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "WeaponFireComponentUpgrade.generated.h"

class UWeaponFireComponent;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UWeaponFireComponentUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWeaponFireComponent> WeaponFireComponentClass;
    
public:
    UWeaponFireComponentUpgrade();

};

