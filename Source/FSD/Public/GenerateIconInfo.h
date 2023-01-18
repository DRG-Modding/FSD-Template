#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGeneratorIconType.h"
#include "EPickaxePartLocation.h"
#include "PickaxeSet.h"
#include "GenerateIconInfo.generated.h"

class UItemSkin;
class UPickaxePart;
class UPlayerCharacterID;
class UVanityItem;

USTRUCT(BlueprintType)
struct FGenerateIconInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EGeneratorIconType IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPickaxePart* PickaxePart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPickaxeSet PickaxeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPickaxePartLocation PickaxePartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemSkin* ItemSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVanityItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowCloseUp;
    
    FSD_API FGenerateIconInfo();
};

