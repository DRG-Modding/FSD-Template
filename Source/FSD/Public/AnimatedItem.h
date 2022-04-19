#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "UObject/NoExportTypes.h"
#include "AnimatedItem.generated.h"

class USkeletalMeshComponent;
class USkinnableComponent;
class UPlayerAnimInstance;
class UAnimMontage;
class UItemCharacterAnimationSet;

UCLASS(Abstract)
class AAnimatedItem : public AItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkinnableComponent* Skinnable;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FPMesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TPMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FP_EquipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TP_EquipAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
public:
    AAnimatedItem();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceiveEquippedFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetMuzzle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetItemMesh() const;
    
};

