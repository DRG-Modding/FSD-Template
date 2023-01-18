#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HangingFireCracker.generated.h"

class UFSDAudioComponent;
class UInstantUsable;
class UNiagaraComponent;
class UNiagaraSystem;
class USkeletalMeshComponent;
class USoundCue;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AHangingFireCracker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstantUsable* Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SKMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* MovingSparks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFSDAudioComponent* FuseSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Crackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* CrackerExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CrackerExplosionCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SparkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeImpulse;
    
public:
    AHangingFireCracker();
protected:
    UFUNCTION(BlueprintCallable)
    void StartFire();
    
};

