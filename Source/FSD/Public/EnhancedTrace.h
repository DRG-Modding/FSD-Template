#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnhancedTrace.generated.h"

class UHitscanBaseComponent;
class APlayerCharacter;

USTRUCT(BlueprintType)
struct FEnhancedTrace {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UHitscanBaseComponent> Component;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<APlayerCharacter> Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitPoint;
    
    FSD_API FEnhancedTrace();
};

