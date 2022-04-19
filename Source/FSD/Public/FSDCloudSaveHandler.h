#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FSDCloudSaveHandler.generated.h"

UCLASS()
class UFSDCloudSaveHandler : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 NumFailedSaves;
    
public:
    UFSDCloudSaveHandler();
};

