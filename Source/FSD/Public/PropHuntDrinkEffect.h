#pragma once
#include "CoreMinimal.h"
#include "DrinkEffectComponent.h"
#include "PropHuntDrinkEffect.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UPropHuntDrinkEffect : public UDrinkEffectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BarSlotIndex;
    
public:
    UPropHuntDrinkEffect(const FObjectInitializer& ObjectInitializer);

};

