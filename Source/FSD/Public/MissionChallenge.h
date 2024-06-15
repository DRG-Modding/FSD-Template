#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "Templates/SubclassOf.h"
#include "MissionChallenge.generated.h"

class UMutator;
class URunningMissionBP;

UCLASS(Blueprintable)
class UMissionChallenge : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> Mutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URunningMissionBP> MissionBP;
    
    UMissionChallenge();

};

