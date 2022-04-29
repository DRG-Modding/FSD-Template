#pragma once
#include "CoreMinimal.h"
#include "DLCBase.h"
#include "AndDLC.generated.h"

UCLASS(Blueprintable)
class UAndDLC : public UDLCBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDLCBase*> DLCs;
    
    UAndDLC();
};

