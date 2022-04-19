#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExampleUpdatedDelegateDelegate.h"
#include "ExampleActor.generated.h"

UCLASS()
class AExampleActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FExampleUpdatedDelegate OnExampleUpdatedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Field;
    
public:
    AExampleActor();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ExampleFunction();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ExampleFunction();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ExampleFunction();
    
};

