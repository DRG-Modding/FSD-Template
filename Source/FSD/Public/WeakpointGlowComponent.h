#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WeakpointChannel.h"
#include "Curves/CurveFloat.h"
#include "DamageData.h"
#include "WeakpointGlowComponent.generated.h"

class USkeletalMeshComponent;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UMeshComponent;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeakpointGlowComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmissiveParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWeakpointChannel> Channels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve WeakpointHitCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFSDPhysicalMaterial* WeakPointMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AddFirstChannelAutomatically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReplaceMatIndex;
    
public:
    UWeakpointGlowComponent();
    UFUNCTION(BlueprintCallable)
    bool StopLoopingGlow(int32 aGlowID, bool aFade);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowBodypartHit(float Amount, float BaseAmount, const FDamageData& DamageData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUpWeakPointGlowOnMeshByBone(USkeletalMeshComponent*& Mesh, int32 MaterialIndex, FName Bone, UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    int32 SetUpWeakPointGlowOnMesh(UMeshComponent* Mesh, int32 MaterialIndex, UFSDPhysicalMaterial* PhysicalMaterial, UHealthComponentBase* HealthComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetChannelEnabled(bool Enabled, int32 Channel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void EnableWeakpointRegistration(bool Enabled);
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void All_ShowWeakPointHit(uint8 Channel);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddWeakpointGlow(bool loopIndefinitely, float LoopTime, UCurveFloat* GrowCurve, UCurveFloat* FadeCurve, int32 UniqueId, int32 Channel);
    
};

