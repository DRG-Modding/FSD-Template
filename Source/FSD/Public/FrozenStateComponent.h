#pragma once
#include "CoreMinimal.h"
#include "CharacterBreakOutState.h"
#include "RandRange.h"
#include "FrozenStateComponent.generated.h"

class UFSDPhysicalMaterial;
class USoundBase;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFrozenStateComponent : public UCharacterBreakOutState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> AudioFreeFromIce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFSDPhysicalMaterial> IcePhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFSDPhysicalMaterial> DwarfFleshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> AudioFreezeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> AudioIceTap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowAnimationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange DeFrostAmount;
    
public:
    UFrozenStateComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ThawPlayer(float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnDefrosting();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetAudioIceTap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetAudioFreezeStart() const;
    
};

