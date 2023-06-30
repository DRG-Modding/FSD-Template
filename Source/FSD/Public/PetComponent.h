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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=ReceiveOwningPlayerChanged, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> OwningPlayer;
    
public:
    UPetComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOwningPlayerChanged();
    
};

