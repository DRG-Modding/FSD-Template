#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemSkinSet.generated.h"

class UDynamicIcon;

UCLASS(Blueprintable)
class FSD_API UItemSkinSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ColorIsLockedToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicIcon* PaintJobDynamicIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicIcon* FrameworkDynamicIcon;
    
    UItemSkinSet();
};

