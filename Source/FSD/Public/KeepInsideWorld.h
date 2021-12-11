#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KeepInsideWorld.generated.h"

class AActor;
class UObject;

UCLASS(BlueprintType)
class UKeepInsideWorld : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> ActorsToKeepInsideWorld;
    
    UPROPERTY(Transient)
    int32 IteratorIndex;
    
public:
    UFUNCTION(BlueprintCallable)
    static void UnregisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RegisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor);
    
    UKeepInsideWorld();
};

