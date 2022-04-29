#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "BumpPlayerHit.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FBumpPlayerHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize force;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Player;
    
    FSD_API FBumpPlayerHit();
};

