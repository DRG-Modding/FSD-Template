#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_ConstrainItem.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_ConstrainItem : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName OldConstraint;
    
    UPROPERTY(EditAnywhere)
    FName NewConstraint;
    
public:
    UAnimNotifyState_ConstrainItem();
};

