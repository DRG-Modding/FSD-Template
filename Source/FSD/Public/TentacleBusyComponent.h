#pragma once
#include "CoreMinimal.h"
#include "EnemyLineOfSightComponent.h"
#include "TentacleBusyComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTentacleBusyComponent : public UEnemyLineOfSightComponent {
    GENERATED_BODY()
public:
    UTentacleBusyComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void ReleasedActor(AActor* Escape, bool fullGrab);
    
    UFUNCTION(BlueprintCallable)
    void GrabbedActor(AActor* victim);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBusy() const;
    
};

