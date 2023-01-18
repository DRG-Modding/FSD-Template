#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "AnimatedItem.h"
#include "EInputKeys.h"
#include "Throwable.h"
#include "PlagueCleanupItem.generated.h"

class APlayerCharacter;
class UAnimMontage;
class UAudioComponent;
class UBoxComponent;
class UCrosshairAggregator;
class UInstantUsable;
class UKeepInsideWorld;
class UObjective;
class USoundCue;
class USphereComponent;

UCLASS(Blueprintable)
class FSD_API APlagueCleanupItem : public AAnimatedItem, public IThrowable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DroppedCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstantUsable* PickupUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* UseSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCrosshairAggregator* CrosshairAggregator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_FireAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_FireAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_Gunsling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_Gunsling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Item_Gunsling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* UsingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UsingSoundFadeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* UsingSoundTail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UKeepInsideWorld* KeepInsideWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* UsingSoundInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireRate;
    
public:
    APlagueCleanupItem();
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_Gunsling();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_EnablePhysics(const FVector_NetQuantize& Direction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPickupUsed(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectiveChanged(UObjective* Objective);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInRangeChanged(bool InRange);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_Gunsling();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_EnablePhysics(const FVector_NetQuantize& Direction);
    
    
    // Fix for true pure virtual functions not being implemented
};

