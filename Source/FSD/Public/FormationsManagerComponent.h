#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FormationsManagerComponent.generated.h"

class UFormationData;
class UEnemySpawnManager;

UCLASS(meta=(BlueprintSpawnableComponent))
class UFormationsManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UEnemySpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFormationData*> FormationData;
    
public:
    UFormationsManagerComponent();
};

