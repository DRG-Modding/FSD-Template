#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MiningPodDialogs.h"
#include "TeamTransport.h"
#include "DropPod.generated.h"

UCLASS(Blueprintable)
class FSD_API ADropPod : public ATeamTransport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiningPodDialogs Dialogs;
    
    ADropPod();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetDonkeyReturnPickupLocation();
    
};

