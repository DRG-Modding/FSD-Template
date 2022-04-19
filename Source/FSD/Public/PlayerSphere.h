#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerSphere.generated.h"

class APlayerCharacter;

USTRUCT(BlueprintType)
struct FPlayerSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APlayerCharacter>> Players;
    
    FSD_API FPlayerSphere();
};

