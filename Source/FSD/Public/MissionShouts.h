#pragma once
#include "CoreMinimal.h"
#include "MissionShouts.generated.h"

class UDialogDataAsset;

USTRUCT(BlueprintType)
struct FMissionShouts {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* AfterDropPodExit;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* OnExitPodDescending;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* OnExitPodArrived;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* OnCompletion;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* OnDeepDiveExitPodDescending;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* OnDeepDiveObjectiveCompletion;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* OnDeepDiveAllReturnObjectivesCompleted;
    
    FSD_API FMissionShouts();
};

