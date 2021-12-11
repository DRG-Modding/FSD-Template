#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttackEffect.h"
#include "UObject/NoExportTypes.h"
#include "MeshCarveAttackEffect.generated.h"

class UStaticMesh;

UCLASS(EditInlineNew)
class UMeshCarveAttackEffect : public UAttackEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* CarveMesh;
    
    UPROPERTY(EditAnywhere)
    float CarverOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator CarverOrientation;
    
    UPROPERTY(EditAnywhere)
    FVector CarverScale;
    
    UPROPERTY(EditAnywhere)
    FName Socket;
    
public:
    UMeshCarveAttackEffect();
};

