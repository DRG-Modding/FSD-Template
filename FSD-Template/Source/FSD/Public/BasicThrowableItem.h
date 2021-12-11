#pragma once
#include "CoreMinimal.h"
#include "CarriableItem.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "EInputKeys.h"
#include "BasicThrowableItem.generated.h"

class UFirstPersonStaticMeshComponent;
class USphereComponent;
class UBoxComponent;
class UCarriableComponent;
class USoundCue;
class UPrimitiveComponent;
class UInstantUsable;
class UStaticMeshComponent;
class APlayerCharacter;
class AActor;

UCLASS(Abstract)
class ABasicThrowableItem : public ACarriableItem {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UBoxComponent* BoxComp;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* UseSphere;
    
    UPROPERTY(Export, VisibleAnywhere)
    UCarriableComponent* CarriableComp;
    
    UPROPERTY(Export, VisibleAnywhere)
    UInstantUsable* UsableComp;
    
    UPROPERTY(Export, VisibleAnywhere)
    UStaticMeshComponent* WorldMeshComp;
    
    UPROPERTY(Export, VisibleAnywhere)
    UFirstPersonStaticMeshComponent* ViewMeshComp;
    
protected:
    UPROPERTY(EditAnywhere)
    USoundCue* ImpactSound;
    
    UPROPERTY(EditAnywhere)
    float SquaredMinImpactForce;
    
    UPROPERTY(EditAnywhere)
    float ImpactAudioResetTime;
    
    UPROPERTY(EditAnywhere)
    float SquaredMinThrowforce;
    
public:
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
    
    ABasicThrowableItem();
};

