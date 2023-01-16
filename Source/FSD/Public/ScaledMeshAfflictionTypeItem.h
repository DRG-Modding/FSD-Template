#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "RandRange.h"
#include "ScaledMeshAfflictionTypeItem.generated.h"

class UFXSystemAsset;
class USoundCue;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FScaledMeshAfflictionTypeItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeFloatCurve> Scalers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange ScaleDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* StartingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* EndSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemAsset*> StartParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemAsset*> EndParticles;
    
public:
    FSD_API FScaledMeshAfflictionTypeItem();
};

