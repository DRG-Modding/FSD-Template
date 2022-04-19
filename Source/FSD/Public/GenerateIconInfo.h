#pragma once
#include "CoreMinimal.h"
#include "EGeneratorIconType.h"
#include "PickaxeSet.h"
#include "EPickaxePartLocation.h"
#include "UObject/NoExportTypes.h"
#include "GenerateIconInfo.generated.h"

class UPickaxePart;
class UItemSkin;
class UVanityItem;
class UPlayerCharacterID;

USTRUCT(BlueprintType)
struct FGenerateIconInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EGeneratorIconType IconType;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPickaxePart* PickaxePart;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FPickaxeSet PickaxeSet;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EPickaxePartLocation PickaxePartLocation;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UItemSkin* ItemSkin;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UVanityItem* Item;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* Character;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bShowCloseUp;
    
    FSD_API FGenerateIconInfo();
};

