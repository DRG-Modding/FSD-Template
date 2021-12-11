#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PostProcessingBlendable.h"
#include "PostProcessingManager.generated.h"

class AFSDPostProcessingActor;
class UMaterialInstanceDynamic;

UCLASS()
class APostProcessingManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AFSDPostProcessingActor>> RegisteredActors;
    
    UPROPERTY(Transient)
    TArray<FPostProcessingBlendable> CurrentBlendables;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> Materials;
    
public:
    APostProcessingManager();
};

