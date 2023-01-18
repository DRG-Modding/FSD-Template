#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "DualAnimatedItem.generated.h"

class UAnimInstance;
class UAnimMontage;
class UItemCharacterAnimationSet;
class UPlayerAnimInstance;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ADualAnimatedItem : public AItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FPRMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FPLMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TPRMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TPLMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_EquipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_EquipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
public:
    ADualAnimatedItem();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetRItemMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetLItemMesh() const;
    
};

