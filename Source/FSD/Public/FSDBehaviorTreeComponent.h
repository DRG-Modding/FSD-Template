#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "FSDBehaviorTreeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFSDBehaviorTreeComponent : public UBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UFSDBehaviorTreeComponent();
};

