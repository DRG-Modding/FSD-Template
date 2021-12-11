#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FindSessionsCallbackProxy.h"
#include "FSDFindSteamSessions.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDFindSteamSessionsOnFindResult, bool, success, const TArray<FBlueprintSessionResult>&, Results);

UCLASS()
class UFSDFindSteamSessions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFSDFindSteamSessionsOnFindResult OnFindResult;
    
    UFSDFindSteamSessions();
};

