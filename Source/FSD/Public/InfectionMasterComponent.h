#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "InfectionMasterComponent.generated.h"

class UHealthComponent;
class UHealthComponentBase;
class UMaterialInterface;
class UStaticMesh;
class UStaticMeshComponent;
class UStatusEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInfectionMasterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> WeakpointPopSTE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeakpointPopSTERange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 InfectionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExtraInfectionPointsWithMorePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpikeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfectionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KillWhenAllPointsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleDownOnDeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BaseMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GlowMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> InfectionPointMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> InfectionSpikeMeshes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> MeshComponents;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_RandomSeed, meta=(AllowPrivateAccess=true))
    uint32 RandomSeed;
    
public:
    UInfectionMasterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RandomSeed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDeath(UHealthComponentBase* enemy);
    
private:
    UFUNCTION(BlueprintCallable)
    void InfectionPointDestroyed(FName Name);
    
public:
    UFUNCTION(BlueprintCallable)
    void DealWeakpointDamage(const FName& SocketName);
    
};

