#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DormantComponentState.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FDormantComponentState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UActorComponent> Component;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionEnabled::Type> Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Active: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Visible: 1;
    
    FSD_API FDormantComponentState();
};

