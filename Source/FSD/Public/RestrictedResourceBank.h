#pragma once
#include "CoreMinimal.h"
#include "ResourceBank.h"
#include "RestrictedResourceBank.generated.h"

class UResourceData;

UCLASS()
class URestrictedResourceBank : public UResourceBank {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* RequiredResource;
    
public:
    URestrictedResourceBank();
};

