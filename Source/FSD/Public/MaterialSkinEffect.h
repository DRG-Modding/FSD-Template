#pragma once
#include "CoreMinimal.h"
#include "SkinEffect.h"
#include "MaterialSkinEffect.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class UMaterialSkinEffect : public USkinEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials;
    
public:
    UMaterialSkinEffect();
};

