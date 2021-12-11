#pragma once
#include "CoreMinimal.h"
#include "FSDGameMode.h"
#include "ESpacerigStartType.h"
#include "FSDGameModeSpaceRig.generated.h"

class AFSDPlayerController;
class AActor;

UCLASS(MinimalAPI, NonTransient)
class AFSDGameModeSpaceRig : public AFSDGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 AmountOfPlayersSpawnedInMedbay;
    
    UPROPERTY(BlueprintReadWrite)
    bool StartedSession;
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* GetFreeSpawnOfType(ESpacerigStartType aType, AFSDPlayerController* AController);
    
    AFSDGameModeSpaceRig();
};

