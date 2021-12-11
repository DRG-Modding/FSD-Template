#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "DrinkableBarSlot.h"
#include "SpaceRigBar.generated.h"

class UDrinkableDataAsset;
class UInstantUsable;
class UBoxComponent;
class UBarMenuWidget;
class APlayerCharacter;
class ADrinkableActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpaceRigBarOnNewDrinkableSpecial, UDrinkableDataAsset*, Drinkable);

UCLASS(Abstract)
class ASpaceRigBar : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSpaceRigBarOnNewDrinkableSpecial OnNewDrinkableSpecial;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInstantUsable* BarUsable;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* BarUsableCollider;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UBarMenuWidget> BarMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> DrinkServingLocations;
    
    UPROPERTY(Transient)
    TArray<FDrinkableBarSlot> DrinkableBarSlots;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_DrinkableSpecial)
    UDrinkableDataAsset* DrinkableSpecial;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnDrinkables(UDrinkableDataAsset* Drinkable, APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveFinishedSpawningDrinkables(UDrinkableDataAsset* DrinkableData, APlayerCharacter* Customer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDrinkableSpawned(ADrinkableActor* Drinkable, APlayerCharacter* Customer, int32 LocationIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginSpawningDrinkables(UDrinkableDataAsset* DrinkableData, APlayerCharacter* Customer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayBartenderTip(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable)
    void PayTip(APlayerCharacter* Character, int32 Credits);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DrinkableSpecial();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasUnclaimedDrinkables() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasSpaceForMoreDrinkables() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetAvailableDrinkableSlots() const;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ASpaceRigBar();
};

