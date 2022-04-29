#pragma once
#include "CoreMinimal.h"
#include "FSDGameMode.h"
#include "ESpacerigStartType.h"
#include "FSDGameModeSpaceRig.generated.h"

class AFSDPlayerController;
class AActor;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFSDGameModeSpaceRig : public AFSDGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    uint8 AmountOfPlayersSpawnedInMedbay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartedSession;
    
public:
    AFSDGameModeSpaceRig();
    UFUNCTION(BlueprintCallable)
    AActor* GetFreeSpawnOfType(ESpacerigStartType aType, AFSDPlayerController* AController);
    
};

