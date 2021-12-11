#pragma once
#include "CoreMinimal.h"
#include "GDPerks.generated.h"

class UPerkAsset;
class UFloatPerkAsset;

USTRUCT(BlueprintType)
struct FGDPerks {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UPerkAsset*> PerkAssets;
    
    UPROPERTY(EditAnywhere)
    TArray<int32> RequiredClaimsPerTier;
    
    UPROPERTY(EditAnywhere)
    UFloatPerkAsset* IronWill;
    
    UPROPERTY(EditAnywhere)
    UFloatPerkAsset* DashPerk;
    
    UPROPERTY(EditAnywhere)
    UFloatPerkAsset* MarathonPerk;
    
    UPROPERTY(EditAnywhere)
    UFloatPerkAsset* ShieldLink;
    
    UPROPERTY(EditAnywhere)
    UFloatPerkAsset* Bezerk;
    
    UPROPERTY(EditAnywhere)
    UFloatPerkAsset* JumpBoots;
    
    UPROPERTY(EditAnywhere)
    UFloatPerkAsset* ImpactCompensators;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloatPerkAsset* BeastMaster;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloatPerkAsset* DownedBomb;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloatPerkAsset* FieldMedic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloatPerkAsset* HeightenedSenses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloatPerkAsset* HoverBoots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloatPerkAsset* ActivePerkSlots;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UFloatPerkAsset* PassivePerkSlots;
    
    FSD_API FGDPerks();
};

