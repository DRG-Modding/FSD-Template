#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DamageClass.generated.h"

class UPawnStat;
class UTexture2D;
class UDialogDataAsset;

UCLASS(BlueprintType)
class UDamageClass : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPawnStat* ResistanceStat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RagdollScale;
    
    UPROPERTY(EditAnywhere)
    bool BypassesShield;
    
    UPROPERTY(EditAnywhere)
    bool AffectedByFriendlyFire;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* IndicatorImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* DamageShout;
    
public:
    UDamageClass();
};

