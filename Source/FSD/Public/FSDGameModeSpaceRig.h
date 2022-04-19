#pragma once
#include "CoreMinimal.h"
#include "FSDGameMode.h"
#include "ESpacerigStartType.h"
#include "FSDGameModeSpaceRig.generated.h"

class AActor;
class AFSDPlayerController;

UCLASS(MinimalAPI, NonTransient)
class AFSDGameModeSpaceRig : public AFSDGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    uint8 AmountOfPlayersSpawnedInMedbay;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool StartedSession;
    
public:
    AFSDGameModeSpaceRig();
    UFUNCTION(BlueprintCallable)
    AActor* GetFreeSpawnOfType(ESpacerigStartType aType, AFSDPlayerController* AController);
    
};

