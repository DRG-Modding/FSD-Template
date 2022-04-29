#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AvoidCeilingComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAvoidCeilingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxDuckDistance;
    
    UPROPERTY(EditAnywhere)
    float TraceVerticalStart;
    
    UPROPERTY(EditAnywhere)
    float MinVerticalSpace;
    
    UPROPERTY(EditAnywhere)
    float DuckSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* ComponentToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDuckingEnabled;
    
public:
    UAvoidCeilingComponent();
};

