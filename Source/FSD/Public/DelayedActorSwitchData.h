#pragma once
#include "CoreMinimal.h"
#include "EquippedActorData.h"
#include "DelayedActorSwitchData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDelayedActorSwitchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsExternalActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 IsUnEquipCalled: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEquippedActorData Cached;
    
public:
    FSD_API FDelayedActorSwitchData();
};

