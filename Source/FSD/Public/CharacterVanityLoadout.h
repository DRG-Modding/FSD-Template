#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterVanityLoadout.generated.h"

USTRUCT(BlueprintType)
struct FCharacterVanityLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid EquippedHeadItemID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid EquippedBeardItemID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid EquippedArmorItemID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid EquippedArmorMaterialID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid EquippedBeardColorItemID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid EquippedSkinColorItemID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid EquippedEyebrowsItemID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid EquippedMoustacheItemID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid EquippedSideburnsItemID;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 MedicalGownIndex;
    
    FSD_API FCharacterVanityLoadout();
};

