#pragma once
#include "CoreMinimal.h"
#include "MissionSetKey.generated.h"

USTRUCT(BlueprintType)
struct FMissionSetKey {
    GENERATED_BODY()
public:
    FSD_API FMissionSetKey();
};
FORCEINLINE uint32 GetTypeHash(const FMissionSetKey) { return 0; }

