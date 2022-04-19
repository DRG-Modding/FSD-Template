#pragma once
#include "CoreMinimal.h"
#include "CompositeArmorItem.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FCompositeArmorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool OverrideAffectedByArmorBreak;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool MyAffectedByAmorBreak;
    
    FSD_API FCompositeArmorItem();
};

