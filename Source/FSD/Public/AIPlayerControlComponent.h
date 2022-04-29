#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AIPlayerControlComponent.generated.h"

class UAnimMontage;
class UDialogDataAsset;
class UControlEnemyUsable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIPlayerControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AngularAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AngularDampening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MaxAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MaxRotation;
    
    UPROPERTY(EditAnywhere)
    float SpeedTarget;
    
    UPROPERTY(EditAnywhere)
    float SpeedMin;
    
    UPROPERTY(EditAnywhere)
    float SpeedMax;
    
    UPROPERTY(EditAnywhere)
    float AccelerationBase;
    
    UPROPERTY(EditAnywhere)
    float AccelerationMultiplier;
    
    UPROPERTY(EditAnywhere)
    float DecelerationMultiplier;
    
    UPROPERTY(EditAnywhere)
    float AccelerationOnSlopeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float DecelerationOnSlopeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float InitialConnectionBlendTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetOnMontageAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GetOnMontagePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LetGoMontageAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LetGoMontagePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* GetOnShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* LetGoShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UControlEnemyUsable* Usable;
    
public:
    UAIPlayerControlComponent();
};

