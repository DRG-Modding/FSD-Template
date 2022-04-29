#pragma once
#include "CoreMinimal.h"
#include "ZipLineConnectorHandler.generated.h"

class AZipLineConnector;

USTRUCT(BlueprintType)
struct FZipLineConnectorHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AZipLineConnector> ConnectorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZipLineConnector* Connector;
    
public:
    FSD_API FZipLineConnectorHandler();
};

