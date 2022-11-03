#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KeepInsideWorld.generated.h"

class UObject;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UKeepInsideWorld : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AActor>> ActorsToKeepInsideWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 IteratorIndex;
    
public:
    UKeepInsideWorld();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnregisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterForKeepInsideWorld(UObject* WorldContextObject, AActor* Actor);
    
};

