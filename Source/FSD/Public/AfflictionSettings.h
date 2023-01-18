#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScaledMeshAfflictionTypeItem.h"
#include "AfflictionSettings.generated.h"

class UFXSystemAsset;
class UPawnAffliction;
class USoundCue;

UCLASS(Blueprintable)
class UAfflictionSettings : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScaledMeshAfflictionTypeItem FrozenScaledMeshAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScaledMeshAfflictionTypeItem InfectedScaledMeshAffliction;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BurningSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* EletrocutedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeavyStaggerMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumStaggerMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAffliction* HeavyStaggerAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAffliction* MediumStaggerAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAffliction* ShortStaggerAffliction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnAffliction* EliteAffliction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemAsset*> BurningParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemAsset*> EletrocutedParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemAsset*> ExplodingParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<USoundCue*> ExplodingSounds;
    
public:
    UAfflictionSettings();
};

