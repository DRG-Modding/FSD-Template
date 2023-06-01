#pragma once
#include "CoreMinimal.h"
#include "TemporaryBuff.h"
#include "RandomLoadoutBuff.generated.h"

UCLASS(Blueprintable)
class URandomLoadoutBuff : public UTemporaryBuff {
    GENERATED_BODY()
public:
    URandomLoadoutBuff();
};

