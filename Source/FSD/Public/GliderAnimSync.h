#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GliderAnimSync.generated.h"

USTRUCT(BlueprintType)
struct FGliderAnimSync {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float AnimAlphaSync;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FVector VelocityPercent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool DownUpBlendBool;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool RightLeftBlendBool;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float VerticalAddBlend;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float HorizontalAddBlend;
    
    FSD_API FGliderAnimSync();
};

