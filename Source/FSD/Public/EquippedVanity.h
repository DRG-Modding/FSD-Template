#pragma once
#include "CoreMinimal.h"
#include "EquippedVanity.generated.h"

class UVanityItem;

USTRUCT(BlueprintType)
struct FEquippedVanity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVanityItem*> Vanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVanityItem* SelectedArmorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsingSlevedArmor;
    
    FSD_API FEquippedVanity();
};

