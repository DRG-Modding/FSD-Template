#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CritterManager.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCritterManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableCritters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRange;
    
public:
    UCritterManager();
};

