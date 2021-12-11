#pragma once
#include "CoreMinimal.h"
#include "RagdollItem.generated.h"

class AActor;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FRagdollItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* Actor;
    
    UPROPERTY(Transient)
    TArray<UMaterialInstanceDynamic*> Materials;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DropshadowMaterial;
    
    FSD_API FRagdollItem();
};

