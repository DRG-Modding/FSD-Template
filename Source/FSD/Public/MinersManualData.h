#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SoftMinersManualDescription.h"
#include "MinersManualData.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UMinersManualData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftMinersManualDescription Description;
    
public:
    UMinersManualData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetText(FText& Headline, FText& richText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetFrontImage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetBackgroundImage();
    
};

