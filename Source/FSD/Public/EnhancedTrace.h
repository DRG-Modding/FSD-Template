#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnhancedTrace.generated.h"

class APlayerCharacter;
class UHitscanBaseComponent;

USTRUCT(BlueprintType)
struct FEnhancedTrace {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHitscanBaseComponent> Component;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitPoint;
    
    FSD_API FEnhancedTrace();
};

