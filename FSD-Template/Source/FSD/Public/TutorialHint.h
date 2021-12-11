#pragma once
#include "CoreMinimal.h"
#include "TutorialHint.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTutorialHint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText TaskText;
    
    UPROPERTY(EditAnywhere)
    FText Title;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    FSD_API FTutorialHint();
};

