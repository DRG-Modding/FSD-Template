#pragma once
#include "CoreMinimal.h"
#include "VanityTestCharacterItem.h"
#include "GameFramework/Character.h"
#include "EVanitySlot.h"
#include "VanityTestCharacter.generated.h"

class USkeletalMesh;

UCLASS()
class AVanityTestCharacter : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ArmorThickness;
    
    UPROPERTY(EditAnywhere)
    float BeardThickness;
    
    UPROPERTY(EditAnywhere)
    bool ArmorCoversBeard;
    
    UPROPERTY(EditAnywhere)
    TMap<EVanitySlot, FVanityTestCharacterItem> vanityItems;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* WeaponMesh;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupVanity();
    
    AVanityTestCharacter();
};

