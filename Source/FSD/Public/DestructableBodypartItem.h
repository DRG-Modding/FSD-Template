#pragma once
#include "CoreMinimal.h"
#include "DestructableBodypartItem.generated.h"

USTRUCT(BlueprintType)
struct FDestructableBodypartItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ArmorBones;
    
    FSD_API FDestructableBodypartItem();
};

