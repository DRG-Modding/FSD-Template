#pragma once
#include "CoreMinimal.h"
#include "DLCBase.h"
#include "OrDLC.generated.h"

UCLASS()
class UOrDLC : public UDLCBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UDLCBase*> DLCs;
    
    UOrDLC();
};

