#pragma once
#include "CoreMinimal.h"
#include "DLCBase.h"
#include "UObject/NoExportTypes.h"
#include "TimedDLC.generated.h"

UCLASS(Blueprintable)
class UTimedDLC : public UDLCBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndDate;
    
public:
    UTimedDLC();
};

