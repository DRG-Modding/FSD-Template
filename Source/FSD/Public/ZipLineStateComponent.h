#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "ZipLineConnectorHandler.h"
#include "ZipLine.h"
#include "DamageData.h"
#include "UObject/NoExportTypes.h"
#include "ZipLineStateComponent.generated.h"

class USoundBase;
class UDialogDataAsset;
class AZipLineProjectile;
class UAudioComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UZipLineStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZipLineConnectorHandler ZipLineConnector;
    
    UPROPERTY(EditAnywhere)
    float VerticalOffset;
    
    UPROPERTY(EditAnywhere)
    float HorizontalOffset;
    
    UPROPERTY(EditAnywhere)
    float TravelSpeed;
    
    UPROPERTY(EditAnywhere)
    float AccelAndDecelAlpha;
    
    UPROPERTY(EditAnywhere)
    float JumpForce;
    
    UPROPERTY(EditAnywhere)
    float SpeedBoostActivationDuration;
    
    UPROPERTY(EditAnywhere)
    float SpeedBoostActivionMinAngle;
    
    UPROPERTY(EditAnywhere)
    float BaseSpeedBoost;
    
    UPROPERTY(EditAnywhere)
    float AdditionalSpeedBoostPerAngle;
    
    UPROPERTY(EditAnywhere)
    float SpeedBoostCoolDownDuration;
    
    UPROPERTY(EditAnywhere)
    float AccelerationAlpha;
    
    UPROPERTY(EditAnywhere)
    float DecelerationAlpha;
    
    UPROPERTY(EditAnywhere)
    float MinStartDistanceToEnd;
    
    UPROPERTY(EditAnywhere)
    float ReleaseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanActivateSpeedBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSpeedBoostActivator;
    
    UPROPERTY(EditAnywhere)
    float SpeedBoostActivationProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioOnDuring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioOnChangingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioOnStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioOnSpeedBoostActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutStartUsing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutSpeedBoostActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AZipLineProjectile* ZipLineProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ZipLine, meta=(AllowPrivateAccess=true))
    FZipLine ZipLine;
    
    UPROPERTY(EditAnywhere)
    float DamageBeforeFalling;
    
    UPROPERTY(EditAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(EditAnywhere)
    float DamageResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
public:
    UZipLineStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSpeedBoostActivated(bool InBoostActivated);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerJumpPressed(bool JumpForward);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerForwardInputChanged(float Input);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChangeDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSpeedBoostDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSpeedBoostActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ZipLine();
    
    UFUNCTION()
    void OnPlayerHit(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpeedBoostActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetJumpVector(FVector LookVector, FVector CurrentVelocity);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void All_SpeedBoostChanged(bool bActive);
    
};

