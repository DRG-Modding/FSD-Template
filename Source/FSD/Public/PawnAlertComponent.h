#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PawnAlertComponent.generated.h"

class UDamageClass;
class APawn;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPawnAlertComponentOnAlertedFromDamage);

UCLASS(BlueprintType)
class UPawnAlertComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FPawnAlertComponentOnAlertedFromDamage OnAlertedFromDamage;
    
    UPROPERTY(EditAnywhere)
    bool AutoAlertAI;
    
    UPROPERTY(EditAnywhere)
    bool ShouldAlertNearby;
    
    UPROPERTY(EditAnywhere)
    float AlertRadius;
    
    UFUNCTION(BlueprintCallable)
    void StopAutoAlerting();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnSeen(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    
    UFUNCTION(BlueprintCallable)
    void OnAlerted();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AleartNearby();
    
    UPawnAlertComponent();
};

