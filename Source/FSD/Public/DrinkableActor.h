#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DrinkableActor.generated.h"

class UDrinkableDataAsset;
class APlayerCharacter;

UCLASS(Abstract)
class ADrinkableActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_DrinkableData)
    UDrinkableDataAsset* DrinkableData;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Pickup(APlayerCharacter* byCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_DrinkableData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Fill();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ADrinkableActor();
};

