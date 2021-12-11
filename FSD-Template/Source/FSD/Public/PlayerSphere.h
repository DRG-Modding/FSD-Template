#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerSphere.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FPlayerSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Center;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Radius;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<APlayerCharacter>> Players;
    
    FSD_API FPlayerSphere();
};

