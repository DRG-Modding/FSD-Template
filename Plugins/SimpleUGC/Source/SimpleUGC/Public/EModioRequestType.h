#pragma once
#include "CoreMinimal.h"
#include "EModioRequestType.generated.h"

UENUM()
enum class EModioRequestType : uint8 {
    InitializeLocalInstallation,
    Authentication,
    K2_Authentication,
    TermsOfUse,
    FetchModUpdates,
    ModMetaData,
    Thumbnail,
    HostHiddenModsInstalled,
    Subscribe,
    ModDependencySubscribe,
    ModDependencyList,
    ModDependencyAdd,
};

