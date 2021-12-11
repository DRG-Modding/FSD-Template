#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Curves/CurveFloat.h"
#include "RandRange.h"
#include "AfflictionSettings.generated.h"

class UStaticMesh;
class UPawnAffliction;
class USoundCue;
class UParticleSystem;

UCLASS()
class UAfflictionSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FRuntimeFloatCurve> IceScalers;
    
    UPROPERTY(EditAnywhere)
    TArray<UStaticMesh*> IceMeshes;
    
    UPROPERTY(EditAnywhere)
    FRandRange ScaleDelay;
    
    UPROPERTY(EditAnywhere)
    USoundCue* FreezeSound;
    
    UPROPERTY(EditAnywhere)
    USoundCue* IceBreakSound;
    
    UPROPERTY(EditAnywhere)
    USoundCue* BurningSound;
    
    UPROPERTY(EditAnywhere)
    USoundCue* EletrocutedSound;
    
    UPROPERTY(EditAnywhere)
    float HeavyStaggerMinTime;
    
    UPROPERTY(EditAnywhere)
    float MediumStaggerMinTime;
    
    UPROPERTY(EditAnywhere)
    UPawnAffliction* HeavyStaggerAffliction;
    
    UPROPERTY(EditAnywhere)
    UPawnAffliction* MediumStaggerAffliction;
    
    UPROPERTY(EditAnywhere)
    UPawnAffliction* ShortStaggerAffliction;
    
protected:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<UParticleSystem*> FreezeParticles;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<UParticleSystem*> IceBreakParticles;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<UParticleSystem*> BurningParticles;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<UParticleSystem*> EletrocutedParticles;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<UParticleSystem*> ExplodingParticles;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<USoundCue*> ExplodingSounds;
    
public:
    UAfflictionSettings();
};

