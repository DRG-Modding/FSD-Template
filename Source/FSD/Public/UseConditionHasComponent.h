#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UseConditionBase.h"
#include "UseConditionHasComponent.generated.h"

class UActorComponent;

UCLASS(Blueprintable, EditInlineNew)
class UUseConditionHasComponent : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> ComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UUseConditionHasComponent();

};

