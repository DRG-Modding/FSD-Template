#pragma once
#include "CoreMinimal.h"
#include "TwoFacetDynamicIcon.h"
#include "UObject/NoExportTypes.h"
#include "TriFacetDynamicIcon.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UTriFacetDynamicIcon : public UTwoFacetDynamicIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Primary3Tint1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Primary3Tint2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Primary3Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Primary3Texture_BasePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Primary3Texture_Contrast;
    
public:
    UTriFacetDynamicIcon();
};

