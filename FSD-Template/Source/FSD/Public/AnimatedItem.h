#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Item.h"
#include "AnimatedItem.generated.h"

class UAnimMontage;
class UItemCharacterAnimationSet;
class USkeletalMeshComponent;
class USkinnableComponent;
class UPlayerAnimInstance;

UCLASS(Abstract)
class AAnimatedItem : public AItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, Export, VisibleAnywhere)
    USkinnableComponent* Skinnable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlayerAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* FPMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* TPMesh;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    float EquipDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveEquippedFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetMuzzle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetItemMesh() const;
    
public:
    AAnimatedItem();
};

