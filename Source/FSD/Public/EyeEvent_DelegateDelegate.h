#pragma once
#include "CoreMinimal.h"
#include "EyeEvent_DelegateDelegate.generated.h"

class USkeletalMeshComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEyeEvent_Delegate, USkeletalMeshComponent*, eye);

