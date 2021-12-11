#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FormationDataItem.h"
#include "GameplayTagContainer.h"
#include "FormationData.generated.h"

UCLASS(Abstract)
class UFormationData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    TArray<FFormationDataItem> FormationItems;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery LeaderQuery;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery MemberQuery;
    
public:
    UFormationData();
};

