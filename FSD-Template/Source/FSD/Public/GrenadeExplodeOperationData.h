#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GrenadeExplodeOperationData.generated.h"

USTRUCT(BlueprintType)
struct FGrenadeExplodeOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 OperationNumber;
    
    UPROPERTY(EditAnywhere)
    FVector HitPos;
    
    UPROPERTY(EditAnywhere)
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
    
    UPROPERTY(EditAnywhere)
    bool UseBulletBurntMaterial;
    
    UPROPERTY(EditAnywhere)
    bool DissolvePlatforms;
    
    UPROPERTY(EditAnywhere)
    uint32 OverrideBurntMaterialHandle;
    
    FSD_API FGrenadeExplodeOperationData();
};

