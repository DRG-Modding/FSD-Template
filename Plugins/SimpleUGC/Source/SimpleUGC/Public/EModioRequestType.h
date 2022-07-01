#pragma once
#include "CoreMinimal.h"
#include "EModioRequestType.generated.h"

UENUM(BlueprintType)
enum class EModioRequestType : uint8 {
    Authentication,
    K2_Authentication,
    TermsOfUse,
    FetchModUpdates,
    ModMetaData,
    Thumbnail,
    K2_HostHiddenModsInstalled,
    HostHiddenModsInstalled,
    Subscribe,
    ModDependencySubscribe,
    ModDependencyList,
    ModDependencyAdd,
};

