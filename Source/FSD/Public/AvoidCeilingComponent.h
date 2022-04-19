#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AvoidCeilingComponent.generated.h"

class USceneComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAvoidCeilingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDuckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceVerticalStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVerticalSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DuckSpeed;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* ComponentToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDuckingEnabled;
    
public:
    UAvoidCeilingComponent();
};

