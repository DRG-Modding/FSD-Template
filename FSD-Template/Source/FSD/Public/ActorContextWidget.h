#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ActorContextWidget.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Abstract, EditInlineNew)
class UActorContextWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* ContextActor;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UPrimitiveComponent* ContextPrimitive;
    
public:
    UFUNCTION(BlueprintCallable)
    void Update(UPrimitiveComponent* InContextPrimitive);
    
    UFUNCTION(BlueprintCallable)
    void Show(UPrimitiveComponent* InContextPrimitive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdate(UPrimitiveComponent* InContextPrimitive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveShow(UPrimitiveComponent* InContextPrimitive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveContextActorChanged(AActor* InContextActor);
    
public:
    UActorContextWidget();
};

