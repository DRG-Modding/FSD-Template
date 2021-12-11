#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "CoolDownProgressStyle.generated.h"

class UTexture2D;
class UCoolDownProgressWidget;
class USoundCue;

USTRUCT(BlueprintType)
struct FCoolDownProgressStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor IconTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCoolDownProgressWidget> WidgetOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* AudioCoolDownFinished;
    
    FSD_API FCoolDownProgressStyle();
};

