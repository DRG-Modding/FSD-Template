#pragma once
#include "CoreMinimal.h"
#include "UseConditionBase.h"
#include "UseConditionCarriedActor.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UUseConditionCarriedActor : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> Actors;
    
    UUseConditionCarriedActor();
};

