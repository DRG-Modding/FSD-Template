#pragma once
#include "CoreMinimal.h"
#include "SimpleObjectInfoData.generated.h"

class UTexture2D;
class UDialogDataAsset;

USTRUCT(BlueprintType)
struct FSimpleObjectInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InGameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InGameDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LookAtShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    FSD_API FSimpleObjectInfoData();
};

