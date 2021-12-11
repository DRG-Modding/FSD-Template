#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DLCBase.h"
#include "TimedDLC.generated.h"

UCLASS()
class UTimedDLC : public UDLCBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FDateTime StartDate;
    
    UPROPERTY(EditAnywhere)
    FDateTime EndDate;
    
public:
    UTimedDLC();
};

