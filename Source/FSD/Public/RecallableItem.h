#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AnimatedItem.h"
#include "Templates/SubclassOf.h"
#include "Upgradable.h"
#include "RecallableItem.generated.h"

class AActor;
class ARecallableActor;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class ARecallableItem : public AAnimatedItem, public IUpgradable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARecallableActor> ItemType;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveItems, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ARecallableActor>> ActiveItems;
    
public:
    ARecallableItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnItemAttached(AActor* InAttachActor, UPrimitiveComponent* InAttachComponent, FName InAttachBoneName, const FVector& LocalLocation, const FRotator& LocalRotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSpawnItem(const FVector& WorldLocation, const FRotator& WorldRotation);
    
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

