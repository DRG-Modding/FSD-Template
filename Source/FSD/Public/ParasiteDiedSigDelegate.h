#pragma once
#include "CoreMinimal.h"
#include "ParasiteDiedSigDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FParasiteDiedSig, AActor*, aParasite);

