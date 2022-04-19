#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicsActor.h"
#include "UObject/NoExportTypes.h"
#include "ResourceChunk.generated.h"

class USimpleObjectInfoComponent;
class APlayerCharacter;
class USoundCue;
class UResourceData;

UCLASS()
class FSD_API AResourceChunk : public AFSDPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeCollectedNormally;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool CanBeCollected;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USimpleObjectInfoComponent* InfoComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float ResourceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PickupSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* ResourceData;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> OverlappingPlayers;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_CollectedBy, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerCharacter> CollectedBy;
    
public:
    AResourceChunk();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
};

