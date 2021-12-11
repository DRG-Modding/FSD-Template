#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GuntowerActivationPlatform.generated.h"

class USceneComponent;
class AGuntowerModule;
class USkeletalMeshComponent;
class APlayerCharacter;
class UCapsuleComponent;
class UPrimitiveComponent;
class UHealthComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuntowerActivationPlatformOnProgressUpdatedDelegate, float, Progress);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuntowerActivationPlatformOnPlayersInsideChangedDelegate, int32, playerCount);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGuntowerActivationPlatformOnProgressFilled);

UCLASS()
class FSD_API AGuntowerActivationPlatform : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* SKMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* Trigger;
    
    UPROPERTY(BlueprintAssignable)
    FGuntowerActivationPlatformOnProgressUpdatedDelegate OnProgressUpdatedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGuntowerActivationPlatformOnPlayersInsideChangedDelegate OnPlayersInsideChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGuntowerActivationPlatformOnProgressFilled OnProgressFilled;
    
protected:
    UPROPERTY(Replicated, Transient)
    AGuntowerModule* AssignedModule;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DoneAt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DisabledTime;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_PlayersInside)
    int32 PlayersInside;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Disabled)
    bool Disabled;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsShutDown)
    bool IsShutDown;
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayersInside(APlayerCharacter* Character);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ShutDown();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPlatformActive(bool IsActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShutDown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersInside();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsShutDown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Disabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayersInsideChanged(int32 NewPlayersInside);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisabledChanged(bool IsDisabled);
    
    UFUNCTION(BlueprintCallable)
    void ModuleDestroyed(UHealthComponentBase* Health);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGuntowerModule* GetAssignedModule() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanWidgetAppear() const;
    
    UFUNCTION(BlueprintCallable)
    void AssignModule(AGuntowerModule* towerModule);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AGuntowerActivationPlatform();
};

