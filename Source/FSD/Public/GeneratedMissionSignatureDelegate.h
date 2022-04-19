#pragma once
#include "CoreMinimal.h"
#include "GeneratedMissionSignatureDelegate.generated.h"

class UGeneratedMission;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeneratedMissionSignature, UGeneratedMission*, OutGeneratedMission);

