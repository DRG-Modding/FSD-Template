#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicsActor.h"
#include "UObject/NoExportTypes.h"
#include "ResourceChunk.generated.h"

class USimpleObjectInfoComponent;
class USoundCue;
class UResourceData;
class APlayerCharacter;

UCLASS()
class AResourceChunk : public AFSDPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CollectDuration;
    
    UPROPERTY(EditAnywhere)
    bool CanBeCollectedNormally;
    
    UPROPERTY(Transient)
    bool CanBeCollected;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USimpleObjectInfoComponent* InfoComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ResourceAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* PickupSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* ResourceData;
    
    UPROPERTY(Transient)
    TArray<APlayerCharacter*> OverlappingPlayers;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CollectedBy)
    TWeakObjectPtr<APlayerCharacter> CollectedBy;
    
    UFUNCTION(BlueprintCallable)
    void SetCollectOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CollectedBy();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UResourceData* GetResourceData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResourceAmount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CalcMovement(float InProgress, const FVector& InVector, FVector& OutVelocity, FVector& OutAngularVelocity);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AResourceChunk();
};

