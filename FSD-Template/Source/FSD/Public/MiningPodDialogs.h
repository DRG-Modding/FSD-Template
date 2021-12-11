#pragma once
#include "CoreMinimal.h"
#include "MiningPodDialogs.generated.h"

class UDialogDataAsset;

USTRUCT(BlueprintType)
struct FMiningPodDialogs {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DepartingIn5Min;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DepartingIn4Min;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DepartingIn3Min;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DepartingIn2Min;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DepartingIn1Min;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DepartingIn30Sec;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DepartingIn10Sec;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DepartingIn123Sec;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* Departed;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* DeepDiveDeparted;
    
    FSD_API FMiningPodDialogs();
};

