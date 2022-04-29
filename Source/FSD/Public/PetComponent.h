#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PetComponent.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPetComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=ReceiveOwningPlayerChanged)
    TWeakObjectPtr<APlayerCharacter> OwningPlayer;
    
public:
    UPetComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOwningPlayerChanged();
    
};

