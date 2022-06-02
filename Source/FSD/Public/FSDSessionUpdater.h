#pragma once
#include "CoreMinimal.h"
#include "NewFSDSessionIDDelegate.h"
#include "UObject/Object.h"
#include "FSDSessionUpdater.generated.h"

class UFSDSessionHandler;
class UFSDLobbyHandler;

UCLASS(Blueprintable)
class UFSDSessionUpdater : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewFSDSessionID OnNewFSDSessionID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDSessionHandler* SessionHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFSDLobbyHandler* LobbyHandler;
    
public:
    UFSDSessionUpdater();
};

