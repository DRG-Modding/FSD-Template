#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EOutline.h"
#include "OutlineComponent.generated.h"

class UPrimitiveComponent;
class APlayerCharacter;
class AItem;
class UHealthComponentBase;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOutlineComponentOnOutlineChanged, EOutline, InOutline);

UCLASS(BlueprintType)
class UOutlineComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOutlineComponentOnOutlineChanged OnOutlineChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOutline DefaultOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ActiveOnHoldTAB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CustomLaserPointDuration;
    
    UPROPERTY(Transient)
    int32 LockCounter;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EOutline CurrentOutline;
    
    UPROPERTY(Export, Transient)
    TArray<UPrimitiveComponent*> OutlinedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    TArray<UPrimitiveComponent*> ExcludedComponents;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APlayerCharacter> Character;
    
public:
    UFUNCTION(BlueprintCallable)
    void UnlockOutline();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDefaultOutline(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SetOutline(EOutline outline);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromOutline(UPrimitiveComponent* Component);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnToggleOutline(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerSet(APlayerCharacter* PlayerCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnItemUnequipped(AItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(AItem* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockOutline();
    
    UFUNCTION(BlueprintCallable)
    void EnableActivateOnHoldTab();
    
    UFUNCTION(BlueprintCallable)
    void AddToOutline(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void AddActorToOutline(AActor* Actor);
    
    UOutlineComponent();
};

