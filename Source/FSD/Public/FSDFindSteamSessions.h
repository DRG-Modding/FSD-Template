#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "indSteamSessionsResultDelegate.h"
#include "FSDFindSteamSessions.generated.h"

UCLASS(Blueprintable)
class UFSDFindSteamSessions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FindSteamSessionsResult OnFindResult;
    
    UFSDFindSteamSessions();
};

