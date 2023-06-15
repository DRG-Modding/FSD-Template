#pragma once
#include "CoreMinimal.h"
#include "OverlapPair.generated.h"

class AActor;
class APlayerCharacter;

USTRUCT(BlueprintType)
struct FOverlapPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Overlap;
    
    FSD_API FOverlapPair();
};

