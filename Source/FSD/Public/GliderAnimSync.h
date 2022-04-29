#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GliderAnimSync.generated.h"

USTRUCT(BlueprintType)
struct FGliderAnimSync {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient)
    float Time;
    
    UPROPERTY(EditAnywhere, Transient)
    float AnimAlphaSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector VelocityPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool DownUpBlendBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool RightLeftBlendBool;
    
    UPROPERTY(EditAnywhere, Transient)
    float VerticalAddBlend;
    
    UPROPERTY(EditAnywhere, Transient)
    float HorizontalAddBlend;
    
    FSD_API FGliderAnimSync();
};

