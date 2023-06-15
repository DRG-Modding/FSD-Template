#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PuddleTrackerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPuddleTrackerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPuddleTrackerComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPuddleDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetPuddles(TArray<AActor*>& Locations);
    
    UFUNCTION(BlueprintCallable)
    void GetPuddleLocations(TArray<FVector>& Locations);
    
    UFUNCTION(BlueprintCallable)
    void AddPuddle(AActor* puddle);
    
};

