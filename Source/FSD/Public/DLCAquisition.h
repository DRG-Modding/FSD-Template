#pragma once
#include "CoreMinimal.h"
#include "ItemAquisitionBase.h"
#include "DLCAquisition.generated.h"

class UDLCBase;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UDLCAquisition : public UItemAquisitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLCBase* RequiredDLC;
    
public:
    UDLCAquisition();
};

