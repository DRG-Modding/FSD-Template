#pragma once
#include "CoreMinimal.h"
#include "OnlineSessionClient.h"
#include "FSDOnlineSessionClient.generated.h"

UCLASS(Blueprintable)
class UFSDOnlineSessionClient : public UOnlineSessionClient {
    GENERATED_BODY()
public:
    UFSDOnlineSessionClient();
};

