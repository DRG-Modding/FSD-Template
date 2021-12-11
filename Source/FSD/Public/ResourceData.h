#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SaveGameIDInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ResourceData.generated.h"

class UObject;
class UMissionStat;
class UTexture2D;
class AResourceChunk;

UCLASS(BlueprintType)
class FSD_API UResourceData : public UDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText TitlePlural;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor Color;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BuyingPrice;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SellingPrice;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMissionStat* MinedMissionStat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsCraftingMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ForceShowOnEndScreen;
    
    UPROPERTY(EditAnywhere)
    bool AffectedByMutators;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ScaleToMissionLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ScaleToHazardLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowSeparatelyInEndScreen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AResourceChunk> Spawnable;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsWholeNumberResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CreditValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 XPValue;
    
    UPROPERTY(VisibleAnywhere)
    FGuid SaveGameID;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOwnedAmount(UObject* WorldContextObject) const;
    
    UResourceData();
    
    // Fix for true pure virtual functions not being implemented
};

