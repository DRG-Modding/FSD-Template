#pragma once
#include "CoreMinimal.h"
#include "VanityTestCharacterItem.h"
#include "GameFramework/Character.h"
#include "EVanitySlot.h"
#include "VanityTestCharacter.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class AVanityTestCharacter : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeardThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ArmorCoversBeard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVanitySlot, FVanityTestCharacterItem> VanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* WeaponMesh;
    
public:
    AVanityTestCharacter();
    UFUNCTION(BlueprintCallable)
    void SetupVanity();
    
};

