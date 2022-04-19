#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELaserPointerTargetType.h"
#include "UObject/NoExportTypes.h"
#include "LaserPointerData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLaserPointerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ELaserPointerTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    FSD_API FLaserPointerData();
};

