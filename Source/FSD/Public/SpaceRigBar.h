#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "DrinkableBarSlot.h"
#include "SpaceRigBar.generated.h"

class UInstantUsable;
class UBoxComponent;
class UDrinkableDataAsset;
class APlayerCharacter;
class UBarMenuWidget;
class ADrinkableActor;

UCLASS(Abstract, Blueprintable)
class ASpaceRigBar : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDrinkableSignature, UDrinkableDataAsset*, Drinkable);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrinkableSignature OnNewDrinkableSpecial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInstantUsable* BarUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* BarUsableCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBarMenuWidget> BarMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> DrinkServingLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDrinkableBarSlot> DrinkableBarSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DrinkableSpecial, meta=(AllowPrivateAccess=true))
    UDrinkableDataAsset* DrinkableSpecial;
    
public:
    ASpaceRigBar();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
};

