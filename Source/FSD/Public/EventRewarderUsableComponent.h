#pragma once
#include "CoreMinimal.h"
#include "SingleUsableComponent.h"
#include "EventRewarderUsableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEventRewarderUsableComponent : public USingleUsableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardUseText;
    
public:
    UEventRewarderUsableComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText CreateUseText(int32 blankSchematicCount) const;
    
};

