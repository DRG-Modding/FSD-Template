#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpaceRigNotification.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSpaceRigNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconColor;
    
    FSD_API FSpaceRigNotification();
};

