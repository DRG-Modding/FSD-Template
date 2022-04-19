#pragma once
#include "CoreMinimal.h"
#include "DelayedActorSwitchData.generated.h"

class AActor;

USTRUCT()
struct FDelayedActorSwitchData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    uint8 IsActive: 1;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    uint8 IsExternalActor: 1;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    uint8 IsUnEquipCalled: 1;
    
    FSD_API FDelayedActorSwitchData();
};

