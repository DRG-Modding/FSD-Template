#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GaragePathSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGaragePathSignature, const TArray<FVector>&, Path);

