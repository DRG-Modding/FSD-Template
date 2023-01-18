#pragma once
#include "CoreMinimal.h"
#include "ItemRackDelegateDelegate.h"
#include "SingleUsableComponent.h"
#include "ItemRackComponent.generated.h"

class AActor;
class APlayerCharacter;
class URackableItemComponent;
class USceneComponent;
class UUsableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UItemRackComponent : public USingleUsableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemRackDelegate OnHasItemChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUsableComponent* UsableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachToComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPointSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttachToSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RackKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_Item, meta=(AllowPrivateAccess=true))
    URackableItemComponent* Item;
    
public:
    UItemRackComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RackItem(AActor* NewItem, APlayerCharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Item(URackableItemComponent* oldItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeRackedItem(URackableItemComponent* rackable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRackedItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRackItem(AActor* NewItem) const;
    
};

