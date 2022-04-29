#pragma once
#include "CoreMinimal.h"
#include "CompositeArmorItem.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FCompositeArmorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    UPROPERTY(EditAnywhere, Transient)
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool OverrideAffectedByArmorBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MyAffectedByAmorBreak;
    
    FSD_API FCompositeArmorItem();
};

