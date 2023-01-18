#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "CarriableItem.h"
#include "EInputKeys.h"
#include "BasicThrowableItem.generated.h"

class AActor;
class APlayerCharacter;
class UBoxComponent;
class UCarriableComponent;
class UFirstPersonStaticMeshComponent;
class UInstantUsable;
class UPrimitiveComponent;
class USoundCue;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ABasicThrowableItem : public ACarriableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* UseSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCarriableComponent* CarriableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstantUsable* UsableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WorldMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFirstPersonStaticMeshComponent* ViewMeshComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ImpactSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SquaredMinImpactForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactAudioResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SquaredMinThrowforce;
    
public:
    ABasicThrowableItem();
    UFUNCTION(BlueprintCallable)
    void ThrowItem(const FVector& throwForce);
    
private:
    UFUNCTION(BlueprintCallable)
    void ResetImpactSound();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnUsed(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnUsableChanged(bool CanUse);
    
    UFUNCTION(BlueprintCallable)
    void OnPickedUp();
    
    UFUNCTION(BlueprintCallable)
    void OnDropped();
    
    UFUNCTION(BlueprintCallable)
    void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

