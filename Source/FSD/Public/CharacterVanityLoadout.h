#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterVanityLoadout.generated.h"

USTRUCT(BlueprintType)
struct FCharacterVanityLoadout {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid EquippedHeadItemID;
    
    UPROPERTY()
    FGuid EquippedBeardItemID;
    
    UPROPERTY()
    FGuid EquippedArmorItemID;
    
    UPROPERTY()
    FGuid EquippedArmorMaterialID;
    
    UPROPERTY()
    FGuid EquippedBeardColorItemID;
    
    UPROPERTY()
    FGuid EquippedSkinColorItemID;
    
    UPROPERTY()
    FGuid EquippedEyebrowsItemID;
    
    UPROPERTY()
    FGuid EquippedMoustacheItemID;
    
    UPROPERTY()
    FGuid EquippedSideburnsItemID;
    
    FSD_API FCharacterVanityLoadout();
};

