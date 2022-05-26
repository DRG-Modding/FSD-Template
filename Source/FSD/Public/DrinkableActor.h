#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DrinkableActor.generated.h"

class UDrinkableDataAsset;
class APlayerCharacter;

UCLASS(Abstract, Blueprintable)
class ADrinkableActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DrinkableData, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* DrinkableData;
    
public:
    ADrinkableActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Pickup(APlayerCharacter* byCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_DrinkableData();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Fill();
    
};

