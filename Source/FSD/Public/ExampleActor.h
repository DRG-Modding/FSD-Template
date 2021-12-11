#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExampleActor.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FExampleActorOnExampleUpdatedEvent);

UCLASS()
class AExampleActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FExampleActorOnExampleUpdatedEvent OnExampleUpdatedEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    float Field;
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ExampleFunction();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ExampleFunction();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ExampleFunction();
    
    AExampleActor();
};

