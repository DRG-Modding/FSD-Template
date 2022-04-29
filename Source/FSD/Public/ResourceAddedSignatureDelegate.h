#pragma once
#include "CoreMinimal.h"
#include "ResourceAddedSignatureDelegate.generated.h"

class UCappedResource;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResourceAddedSignature, UCappedResource*, Resource, float, Amount);

