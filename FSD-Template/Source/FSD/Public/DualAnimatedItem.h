#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "DualAnimatedItem.generated.h"

class UAnimMontage;
class UAnimInstance;
class UPlayerAnimInstance;
class UItemCharacterAnimationSet;
class USkeletalMeshComponent;

UCLASS(Abstract)
class ADualAnimatedItem : public AItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* FPRMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* FPLMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* TPRMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* TPLMesh;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    float EquipDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetRItemMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetLItemMesh() const;
    
public:
    ADualAnimatedItem();
};

