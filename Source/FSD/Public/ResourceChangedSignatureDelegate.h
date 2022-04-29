#pragma once
#include "CoreMinimal.h"
#include "ResourceChangedSignatureDelegate.generated.h"

class UCappedResource;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResourceChangedSignature, UCappedResource*, Resource, float, Amount);

