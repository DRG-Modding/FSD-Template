#pragma once
#include "CoreMinimal.h"
#include "ItemAquisitionBase.h"
#include "TreassureAquisition.generated.h"

class UItemAquisitionSource;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UTreassureAquisition : public UItemAquisitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemAquisitionSource* Source;
    
public:
    UTreassureAquisition();
};

