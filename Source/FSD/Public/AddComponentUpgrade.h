#pragma once
#include "CoreMinimal.h"
#include "ItemUpgrade.h"
#include "Templates/SubclassOf.h"
#include "AddComponentUpgrade.generated.h"

class AFSDPlayerState;
class AItem;
class UActorComponent;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAddComponentUpgrade : public UItemUpgrade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> ComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ServerOnly;
    
public:
    UAddComponentUpgrade();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetUpgradedValue(TSubclassOf<AItem> Item, AFSDPlayerState* Player, TSubclassOf<UActorComponent> NewComponentClass, bool includePreview);
    
};

