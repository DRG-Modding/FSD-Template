#pragma once
#include "CoreMinimal.h"
#include "ESpacerigStartType.h"
#include "FSDGameMode.h"
#include "FSDGameModeSpaceRig.generated.h"

class AActor;
class AFSDPlayerController;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFSDGameModeSpaceRig : public AFSDGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 AmountOfPlayersSpawnedInMedbay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartedSession;
    
public:
    AFSDGameModeSpaceRig();
    UFUNCTION(BlueprintCallable)
    AActor* GetFreeSpawnOfType(ESpacerigStartType aType, AFSDPlayerController* AController);
    
};

