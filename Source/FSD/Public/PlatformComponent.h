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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> ComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlatformComponentCriteria Criteria;
    
    FSD_API FPlatformComponent();
};

