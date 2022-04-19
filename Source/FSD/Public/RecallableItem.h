#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "Upgradable.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RecallableItem.generated.h"

class AActor;
class ARecallableActor;

UCLASS(Abstract)
class ARecallableItem : public AAnimatedItem, public IUpgradable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARecallableActor> ItemType;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ActiveItems, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ARecallableActor>> ActiveItems;
    
public:
    ARecallableItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnItem(const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnItemSpawned(ARecallableActor* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveItems();
    
    UFUNCTION(BlueprintCallable)
    void ItemReturnFinished(AActor* Item, bool success);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSpawnItem(const FVector& Location, const FRotator& Rotation);
    
    
    // Fix for true pure virtual functions not being implemented
};

