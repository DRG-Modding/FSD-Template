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
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFSDPostProcessingActor>> RegisteredActors;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPostProcessingBlendable> CurrentBlendables;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
public:
    APostProcessingManager();
};

