#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "AIPlayerControlComponent.generated.h"

class UAnimMontage;
class UDialogDataAsset;
class UControlEnemyUsable;

UCLASS(BlueprintType)
class UAIPlayerControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator AngularAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator AngularDampening;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator MaxAngularVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator MaxRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpeedTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpeedMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SpeedMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AccelerationBase;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AccelerationMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DecelerationMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AccelerationOnSlopeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DecelerationOnSlopeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float InitialConnectionBlendTime;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* GetOnMontageAI;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* GetOnMontagePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LetGoMontageAI;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* LetGoMontagePlayer;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* GetOnShout;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* LetGoShout;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UControlEnemyUsable* Usable;
    
public:
    UAIPlayerControlComponent();
};

