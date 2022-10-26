#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UseConditionCollection.generated.h"

class UUseConditionBase;

UCLASS(Blueprintable)
class UUseConditionCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUseConditionBase*> Conditions;
    
    UUseConditionCollection();
};

