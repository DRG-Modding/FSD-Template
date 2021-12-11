#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "BumpPlayerHit.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FBumpPlayerHit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector_NetQuantize force;
    
    UPROPERTY()
    APlayerCharacter* Player;
    
    FSD_API FBumpPlayerHit();
};

