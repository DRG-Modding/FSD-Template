#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NewPlayerMutator.h"
#include "FSDTutorialSettings.generated.h"

UCLASS(Blueprintable)
class UFSDTutorialSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredCPTreasures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredCPMachineEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredCPVeterans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewPlayerMutator> FirstMissionsMutators;
    
    UFSDTutorialSettings();
};

