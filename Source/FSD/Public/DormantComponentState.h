#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DormantComponentState.generated.h"

class UActorComponent;

USTRUCT()
struct FDormantComponentState {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    TWeakObjectPtr<UActorComponent> Component;
    
    UPROPERTY()
    TEnumAsByte<ECollisionEnabled::Type> Collision;
    
    UPROPERTY()
    FName CollisionProfileName;
    
    UPROPERTY()
    uint8 Active: 1;
    
    UPROPERTY()
    uint8 Visible: 1;
    
    FSD_API FDormantComponentState();
};

