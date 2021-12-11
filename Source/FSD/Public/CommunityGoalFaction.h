#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFSDFaction.h"
#include "Styling/SlateColor.h"
#include "CommunityGoalFaction.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UCommunityGoalFaction : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ShortDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText JoinHeader;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText JoinBody;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Frame;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor Color;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EFSDFaction FactionID;
    
public:
    UCommunityGoalFaction();
};

