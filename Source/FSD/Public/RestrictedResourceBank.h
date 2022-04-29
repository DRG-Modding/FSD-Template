#pragma once
#include "CoreMinimal.h"
#include "ResourceBank.h"
#include "RestrictedResourceBank.generated.h"

class UResourceData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URestrictedResourceBank : public UResourceBank {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* RequiredResource;
    
public:
    URestrictedResourceBank();
};

