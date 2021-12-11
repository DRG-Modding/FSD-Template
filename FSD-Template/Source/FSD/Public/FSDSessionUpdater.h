#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FSDSessionUpdater.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDSessionUpdaterOnNewFSDSessionID, const FString&, sessionId);

UCLASS()
class UFSDSessionUpdater : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFSDSessionUpdaterOnNewFSDSessionID OnNewFSDSessionID;
    
    UFSDSessionUpdater();
};

