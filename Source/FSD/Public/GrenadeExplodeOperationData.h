#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GrenadeExplodeOperationData.generated.h"

USTRUCT(BlueprintType)
struct FGrenadeExplodeOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Normal;
    
    UPROPERTY(EditAnywhere)
    float NormalOffset;
    
    UPROPERTY(EditAnywhere)
    float NormalSqueeze;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float Noise;
    
    UPROPERTY(EditAnywhere)
    float BurnThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBulletBurntMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DissolvePlatforms;
    
    UPROPERTY(EditAnywhere)
    uint32 OverrideBurntMaterialHandle;
    
    FSD_API FGrenadeExplodeOperationData();
};

