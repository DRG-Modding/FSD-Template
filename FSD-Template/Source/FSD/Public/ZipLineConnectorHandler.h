#pragma once
#include "CoreMinimal.h"
#include "ZipLineConnectorHandler.generated.h"

class AZipLineConnector;

USTRUCT(BlueprintType)
struct FZipLineConnectorHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AZipLineConnector> ConnectorClass;
    
    UPROPERTY()
    AZipLineConnector* Connector;
    
public:
    FSD_API FZipLineConnectorHandler();
};

