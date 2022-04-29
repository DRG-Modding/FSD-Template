#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ActorContextWidget.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UActorContextWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ContextActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* ContextPrimitive;
    
public:
    UActorContextWidget();
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
    
};

