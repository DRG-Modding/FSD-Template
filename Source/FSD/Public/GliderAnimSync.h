#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GliderAnimSync.generated.h"

USTRUCT(BlueprintType)
struct FGliderAnimSync {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float Time;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float AnimAlphaSync;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector VelocityPercent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool DownUpBlendBool;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool RightLeftBlendBool;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float VerticalAddBlend;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float HorizontalAddBlend;
    
    FSD_API FGliderAnimSync();
};

