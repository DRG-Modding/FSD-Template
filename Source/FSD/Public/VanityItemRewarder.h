#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "VanityItemRewarder.generated.h"

class UVanityItem;
class UPlayerCharacterID;

UCLASS(meta=(BlueprintSpawnableComponent))
class UVanityItemRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UVanityItem* GivenVanityItem;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* GivenCharacterID;
    
    UVanityItemRewarder();
};

