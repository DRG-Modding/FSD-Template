#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PetComponent.generated.h"

class APlayerCharacter;

UCLASS(Blueprintable)
class UPetComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=ReceiveOwningPlayerChanged)
    TWeakObjectPtr<APlayerCharacter> OwningPlayer;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOwningPlayerChanged();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPetComponent();
};

