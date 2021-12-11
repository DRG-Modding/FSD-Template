#pragma once
#include "CoreMinimal.h"
#include "EDisconnectReason.generated.h"

UENUM(BlueprintType)
enum class EDisconnectReason : uint8 {
    None,
    Kicked_HaveMyReasons,
    Kicked_ShouldBePrivate,
    Kicked_AFK,
    Banned,
    ServerQuit,
    Disconnected,
    SignInChange,
    JoinSessionFail_SessionIsFull,
    JoinSessionFail_SessionDoesNotExist,
    JoinSessionFail_Other,
    JoinSessionFail_Privilege,
    NetworkError,
    SignOutComplete,
    WrongPassword,
    DeepDiveLateJoin,
    MissionStarting,
    LatejoinNotAllowed,
};

