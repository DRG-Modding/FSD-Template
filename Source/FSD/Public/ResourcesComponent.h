#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ResourcesComponent.generated.h"

class UCappedResource;
class UResourceData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResourcesComponentOnResourceChanged, UCappedResource*, Resource, float, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResourcesComponentOnResourceAdded, UCappedResource*, Resource);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FResourcesComponentOnResourceIncreased, UCappedResource*, Resource, float, Amount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResourcesComponentOnResourceFull, UCappedResource*, Resource);

UCLASS(BlueprintType)
class UResourcesComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FResourcesComponentOnResourceChanged OnResourceChanged;
    
    UPROPERTY(BlueprintAssignable)
    FResourcesComponentOnResourceIncreased OnResourceIncreased;
    
    UPROPERTY(BlueprintAssignable)
    FResourcesComponentOnResourceFull OnResourceFull;
    
    UPROPERTY(BlueprintAssignable)
    FResourcesComponentOnResourceAdded OnResourceAdded;
    
protected:
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Resources)
    TArray<UCappedResource*> Resources;
    
    UPROPERTY(EditAnywhere)
    float ResourceCap;
    
    UFUNCTION(BlueprintCallable)
    void ResourceIncreased(UCappedResource* Resource, float Delta);
    
    UFUNCTION(BlueprintCallable)
    void ResourceFull(UCappedResource* Resource);
    
    UFUNCTION(BlueprintCallable)
    void ResourceChanged(UCappedResource* Resource, float currentAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Resources();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetXPFromResourceMap(const TMap<UResourceData*, float>& NewResources);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetXpFromMining() const;
    
    UFUNCTION(BlueprintCallable)
    static TMap<UResourceData*, float> GetSeparateResourcesFromMap(const TMap<UResourceData*, float>& NewResources);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCappedResource* GetResource(UResourceData* Data, bool createIfAmountIsZero);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCapacityPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UCappedResource*> GetAllResources();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UResourcesComponent();
};

