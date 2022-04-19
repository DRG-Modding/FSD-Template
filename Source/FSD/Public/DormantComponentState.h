#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DormantComponentState.generated.h"

class UActorComponent;

USTRUCT()
struct FDormantComponentState {
    GENERATED_BODY()
public:
    UPROPERTY(Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UActorComponent> Component;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionEnabled::Type> Collision;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    uint8 Active: 1;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    uint8 Visible: 1;
    
    FSD_API FDormantComponentState();
};

