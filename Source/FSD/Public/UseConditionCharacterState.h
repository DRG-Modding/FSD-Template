#pragma once
#include "CoreMinimal.h"
#include "UseConditionBase.h"
#include "UseConditionCharacterState.generated.h"

class UCharacterStateComponent;

UCLASS(Blueprintable, EditInlineNew)
class UUseConditionCharacterState : public UUseConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Invert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UCharacterStateComponent>> CharacterStates;
    
    UUseConditionCharacterState();
};

