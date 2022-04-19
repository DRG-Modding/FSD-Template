#pragma once
#include "CoreMinimal.h"
#include "EInputKeys.h"
#include "CharacterUseState.generated.h"

class UUsableComponentBase;

USTRUCT(BlueprintType)
struct FCharacterUseState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UUsableComponentBase* ActiveUsable;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EInputKeys Key;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 UseId;
    
    FSD_API FCharacterUseState();
};

