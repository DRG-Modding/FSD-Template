#pragma once
#include "CoreMinimal.h"
#include "EShoutType.generated.h"

UENUM(BlueprintType)
enum class EShoutType : uint8 {
    Attention,
    Follow,
    StandingDown,
    Downed,
    RequestRevive,
    Revived,
    Resupply,
    FriendlyFire,
    KillCry,
    Dead,
    Cheating,
    ResourceFull,
    ResourceFullNoDonkey,
    CallDonkey,
    CallDonkey_NotInMission,
    Depositing,
    DepositingNoDonkey,
    OutOfAmmo,
    Reloading,
    CharacterSelected,
    UpgradeBought,
    WaitingInDropPod,
    Carrying,
    WaitingInEscapePod,
    Salute,
    Salute_Spacerig,
    Drink,
};

