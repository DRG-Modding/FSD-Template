#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "FSDEventsHandler.generated.h"

UCLASS()
class UFSDEventsHandler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FDateTime LastRequestTime;
    
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 NumFailedRequests;
    
public:
    UFSDEventsHandler();
};

