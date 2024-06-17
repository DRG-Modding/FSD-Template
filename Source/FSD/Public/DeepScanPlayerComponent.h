#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DeepScanPlayerComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDeepScanPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UDeepScanPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideUI();
    
};

