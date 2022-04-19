#pragma once
#include "CoreMinimal.h"
#include "EProjectileAttackRotationType.generated.h"

UENUM()
enum class EProjectileAttackRotationType : int32 {
    NoTarget_ActorForward,
    NoTarget_Socket,
    Always_Socket,
};

