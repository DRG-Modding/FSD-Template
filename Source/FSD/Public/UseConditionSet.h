#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UseConditionSet.generated.h"

class UUseConditionBase;

UCLASS(Blueprintable)
class UUseConditionSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUseConditionBase*> Conditions;
    
    UUseConditionSet();
};

