#pragma once
#include "CoreMinimal.h"
#include "VanityItem.h"
#include "SkinColorVanityItem.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class USkinColorVanityItem : public UVanityItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    USkinColorVanityItem();
};

