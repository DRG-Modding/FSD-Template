#pragma once
#include "CoreMinimal.h"
#include "PropHuntEventSettings.generated.h"

class APropHuntDisguiseActor;

USTRUCT(BlueprintType)
struct FPropHuntEventSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<APropHuntDisguiseActor>> DisguiseActors;
    
    FSD_API FPropHuntEventSettings();
};

