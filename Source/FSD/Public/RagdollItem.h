#pragma once
#include "CoreMinimal.h"
#include "RagdollItem.generated.h"

class AActor;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FRagdollItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DropshadowMaterial;
    
    FSD_API FRagdollItem();
};

