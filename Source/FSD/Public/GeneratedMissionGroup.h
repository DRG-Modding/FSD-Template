#pragma once
#include "CoreMinimal.h"
#include "GeneratedMissionGroup.generated.h"

class UGeneratedMission;

USTRUCT(BlueprintType)
struct FGeneratedMissionGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGeneratedMission*> AvailableMissions;
    
    FSD_API FGeneratedMissionGroup();
};

