#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HeroInfo.h"
#include "UObject/NoExportTypes.h"
#include "PlayerCharacterData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UPlayerCharacterData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FHeroInfo HeroInfo;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSwitchToMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetSmallIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShortDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLongDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetFullSizeImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetColor() const;
    
    UPlayerCharacterData();
};

