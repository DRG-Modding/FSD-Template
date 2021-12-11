#pragma once
#include "CoreMinimal.h"
#include "SaveGameIDInterface.h"
#include "RefundableInterface.generated.h"

UINTERFACE()
class URefundableInterface : public USaveGameIDInterface {
    GENERATED_BODY()
};

class IRefundableInterface : public ISaveGameIDInterface {
    GENERATED_BODY()
public:
};

