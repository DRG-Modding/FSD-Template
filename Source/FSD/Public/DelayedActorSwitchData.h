#pragma once
#include "CoreMinimal.h"
#include "DelayedActorSwitchData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDelayedActorSwitchData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsExternalActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsUnEquipCalled: 1;
    
    FSD_API FDelayedActorSwitchData();
};

