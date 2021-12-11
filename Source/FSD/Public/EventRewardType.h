#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "EventRewardType.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UEventRewardType : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> IconFront;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> IconBack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor IconFrontTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor IconBackTint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BackgroundTint;
    
    UEventRewardType();
};

