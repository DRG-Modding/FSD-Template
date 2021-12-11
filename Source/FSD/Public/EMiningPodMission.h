#pragma once
#include "CoreMinimal.h"
#include "EMiningPodMission.generated.h"

UENUM(BlueprintType)
enum class EMiningPodMission : uint8 {
    DropAndReturn,
    Extraction,
    DropFromSpacerig,
};

