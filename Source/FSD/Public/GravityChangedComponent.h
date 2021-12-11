#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GravityChangedComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType)
class UGravityChangedComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAwakeOnGravityChanged;
    
protected:
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> PrimitiveComponents;
    
    UFUNCTION(BlueprintCallable)
    void OnGravityChanged(float Gravity, float Change);
    
public:
    UGravityChangedComponent();
};

