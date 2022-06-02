#pragma once
#include "CoreMinimal.h"
#include "FSDPhysicsActor.h"
#include "UObject/NoExportTypes.h"
#include "ResourceChunk.generated.h"

class USimpleObjectInfoComponent;
class USoundCue;
class UResourceData;
class APlayerCharacter;

UCLASS(Blueprintable)
class FSD_API AResourceChunk : public AFSDPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeCollectedNormally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CanBeCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USimpleObjectInfoComponent* InfoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ResourceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PickupSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* ResourceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APlayerCharacter*> OverlappingPlayers;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_CollectedBy)
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

