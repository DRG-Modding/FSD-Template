#pragma once
#include "CoreMinimal.h"
#include "DLCBase.h"
#include "NotDLC.generated.h"

UCLASS()
class UNotDLC : public UDLCBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLCBase* dlc;
    
    UNotDLC();
};

