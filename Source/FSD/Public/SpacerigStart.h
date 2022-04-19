#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "PlayerSpawnInHubDelegate.h"
#include "ESpacerigStartType.h"
#include "SpacerigStart.generated.h"

class AFSDPlayerController;

UCLASS()
class ASpacerigStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPlayerSpawnInHub OnPlayerSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPlayerSpawnInHub OnPlayerLeave;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    AFSDPlayerController* usedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpacerigStartType StartType;
    
    ASpacerigStart();
};

