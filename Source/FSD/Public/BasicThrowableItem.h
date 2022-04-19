#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "UObject/NoExportTypes.h"
#include "EInputKeys.h"
#include "Engine/EngineTypes.h"
#include "BasicThrowableItem.generated.h"

class UStaticMeshComponent;
class UInstantUsable;
class UBoxComponent;
class USoundCue;
class UCarriableComponent;
class USphereComponent;
class UFirstPersonStaticMeshComponent;
class APlayerCharacter;
class UPrimitiveComponent;
class AActor;

UCLASS(Abstract)
class ABasicThrowableItem : public ACarriableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComp;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USphereComponent* UseSphere;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCarriableComponent* CarriableComp;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInstantUsable* UsableComp;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WorldMeshComp;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
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

