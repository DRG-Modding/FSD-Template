#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EPlatformComponentCriteria.h"
#include "PlatformComponent.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FPlatformComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UActorComponent> ComponentClass;
    
    UPROPERTY(EditAnywhere)
    EPlatformComponentCriteria Criteria;
    
    FSD_API FPlatformComponent();
};

