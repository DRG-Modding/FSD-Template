#pragma once
#include "CoreMinimal.h"
#include "SingleUsableComponent.h"
#include "EventRewarderUsableComponent.generated.h"

UCLASS()
class UEventRewarderUsableComponent : public USingleUsableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText RewardUseText;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText CreateUseText(int32 blankSchematicCount) const;
    
public:
    UEventRewarderUsableComponent();
};

