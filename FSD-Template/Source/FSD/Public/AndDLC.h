#pragma once
#include "CoreMinimal.h"
#include "DLCBase.h"
#include "AndDLC.generated.h"

UCLASS()
class UAndDLC : public UDLCBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UDLCBase*> DLCs;
    
    UAndDLC();
};

