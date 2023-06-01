#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PlagueCleanerResourceChangedDelegate.h"
#include "PlagueCleanupItem.h"
#include "SoapVacuumItem.generated.h"

class AActor;
class UCapsuleComponent;
class UNiagaraComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ASoapVacuumItem : public APlagueCleanupItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* VacuumCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Vacuum_FP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NS_Vacuum_TP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlagueCleanerResourceChanged OnCurrentVolumeChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VacuumCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VacuumRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VacuumRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentVacuumEffectStrenght;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVacuumEffectStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VacuumEffectFoamSuckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastPuddleSuckTime;
    
public:
    ASoapVacuumItem();
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartVacuumingPuddle(AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFoamPuddleCollected_Unreliable();
    
    UFUNCTION(BlueprintCallable)
    void ItemEnterVacuum(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetVacuumSource() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_Visual_PuddleStartCollect();
    
};

