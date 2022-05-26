#pragma once
#include "CoreMinimal.h"
#include "BaseCritterDescriptor.h"
#include "RareCritterDescriptor.generated.h"

UCLASS(Blueprintable)
class URareCritterDescriptor : public UBaseCritterDescriptor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rarity;
    
public:
    URareCritterDescriptor();
};

