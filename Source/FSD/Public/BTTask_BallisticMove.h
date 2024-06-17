#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_BallisticMove.generated.h"

UCLASS(Blueprintable)
class UBTTask_BallisticMove : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UBTTask_BallisticMove();

};

