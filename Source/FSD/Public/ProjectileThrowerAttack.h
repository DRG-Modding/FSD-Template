#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ProjectileAttackComponent.h"
#include "Templates/SubclassOf.h"
#include "ProjectileThrowerAttack.generated.h"

class UAnimInstance;
class UAnimMontage;
class USkeletalMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UProjectileThrowerAttack : public UProjectileAttackComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ThrowerMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> ThrowerAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> ThrowerMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThrowerAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotateToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ThrowerRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThrowerOffset;
    
public:
    UProjectileThrowerAttack();
private:
    UFUNCTION(BlueprintCallable)
    void OnThrowerMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowThrowerAnimation();
    
};

