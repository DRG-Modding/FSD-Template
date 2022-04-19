#pragma once
#include "CoreMinimal.h"
#include "ResourceFullSignatureDelegate.generated.h"

class UCappedResource;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResourceFullSignature, UCappedResource*, Resource);

