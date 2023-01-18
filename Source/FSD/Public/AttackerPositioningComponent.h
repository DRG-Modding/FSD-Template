#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "AttackerInfo.h"
#include "AttackerPositioningComponent.generated.h"

class AActor;
class UHealthComponentBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAttackerPositioningComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAttackerInfo> Attackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> FreePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAttackerInfo> FlyingAttackers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> FlyingFreePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterPersonalSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostModifier;
    
public:
    UAttackerPositioningComponent();
    UFUNCTION(BlueprintCallable)
    void UnregisterAttacker(AActor* Attacker, bool IsFlying);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAttacker(AActor* Attacker, bool IsFlying);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFlyingAttackerDeath(UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackerDeath(UHealthComponentBase* HealthComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetFlyingAttackerPosition(AActor* Attacker, float AttackerRadius);
    
    UFUNCTION(BlueprintCallable)
    FVector GetAttackerPosition(AActor* Attacker, float AttackerRadius);
    
};

