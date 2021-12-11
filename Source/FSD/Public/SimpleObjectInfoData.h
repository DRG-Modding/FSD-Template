#pragma once
#include "CoreMinimal.h"
#include "SimpleObjectInfoData.generated.h"

class UDialogDataAsset;
class UTexture2D;

USTRUCT(BlueprintType)
struct FSimpleObjectInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText InGameName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText InGameDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDialogDataAsset* LookAtShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* Icon;
    
    FSD_API FSimpleObjectInfoData();
};

