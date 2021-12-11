#pragma once
#include "CoreMinimal.h"
#include "ERoomType.generated.h"

UENUM(BlueprintType)
enum class ERoomType : uint8 {
    Start,
    End,
    MainPath,
    Gold,
};

