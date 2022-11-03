#pragma once
#include "CoreMinimal.h"
#include "TreasureRewarder.h"
#include "VanityItemRewarder.generated.h"

class UVanityItem;
class UPlayerCharacterID;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVanityItemRewarder : public UTreasureRewarder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVanityItem* GivenVanityItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* GivenCharacterID;
    
    UVanityItemRewarder();
};

