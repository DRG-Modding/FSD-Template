#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SoftMinersManualDescription.h"
#include "MinersManualData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UMinersManualData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FSoftMinersManualDescription Description;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetText(FText& Headline, FText& richText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetFrontImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBackgroundImage();
    
    UMinersManualData();
};

