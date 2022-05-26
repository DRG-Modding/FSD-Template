#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ECampaignMutators.h"
#include "RequiredMissionItem.h"
#include "CampaignMission.generated.h"

class UPlanetZone;
class UReward;
class UMissionTemplate;
class UMissionWarning;
class UDialogDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UCampaignMission : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlanetZone* PlanetZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequiredMissionItem mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UReward*> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* MissionCompleteShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideMutators;
    
    UPROPERTY(EditAnywhere)
    ECampaignMutators MutatorOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionWarning*> AllowedWarnings;
    
public:
    UCampaignMission();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMissionTemplate* GetMissionTemplate() const;
    
};

