#pragma once
#include "CoreMinimal.h"
#include "EShoutType.generated.h"

UENUM()
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
};

