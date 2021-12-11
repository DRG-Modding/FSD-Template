#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FSDGameSession.generated.h"

UCLASS()
class AFSDGameSession : public AGameSession {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FUniqueNetIdRepl> BannedPlayers;
    
public:
    AFSDGameSession();
};

