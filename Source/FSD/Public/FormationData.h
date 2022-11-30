#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FormationDataItem.h"
#include "GameplayTagContainer.h"
#include "FormationData.generated.h"

UCLASS(Abstract, Blueprintable)
class UFormationData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFormationDataItem> FormationItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery LeaderQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery MemberQuery;
    
public:
    UFormationData();
};

