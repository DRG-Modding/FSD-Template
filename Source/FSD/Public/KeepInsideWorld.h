#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KeepInsideWorld.generated.h"

class AActor;
class UObject;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UKeepInsideWorld : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> ActorsToKeepInsideWorld;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 IteratorIndex;
    
public:
    UKeepInsideWorld();
    UFUNCTION(BlueprintCallable)
    static void UnregisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RegisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor);
    
};

