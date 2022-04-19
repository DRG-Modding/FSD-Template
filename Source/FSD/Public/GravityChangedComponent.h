#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GravityChangedComponent.generated.h"

class UPrimitiveComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UGravityChangedComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAwakeOnGravityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> PrimitiveComponents;
    
public:
    UGravityChangedComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGravityChanged(float Gravity, float Change);
    
};

