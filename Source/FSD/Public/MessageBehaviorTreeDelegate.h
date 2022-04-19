#pragma once
#include "CoreMinimal.h"
#include "MessageBehaviorTreeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMessageBehaviorTree, FName, Message);

