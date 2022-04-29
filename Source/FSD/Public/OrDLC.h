#pragma once
#include "CoreMinimal.h"
#include "DLCBase.h"
#include "OrDLC.generated.h"

UCLASS(Blueprintable)
class UOrDLC : public UDLCBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDLCBase*> DLCs;
    
    UOrDLC();
};

