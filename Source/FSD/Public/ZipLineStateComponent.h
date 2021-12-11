#pragma once
#include "CoreMinimal.h"
#include "ZipLine.h"
#include "CharacterStateComponent.h"
#include "ZipLineConnectorHandler.h"
#include "UObject/NoExportTypes.h"
#include "ZipLineStateComponent.generated.h"

class UDialogDataAsset;
class UDamageClass;
class USoundBase;
class UAudioComponent;
class AZipLineProjectile;
class AActor;

UCLASS(Abstract, MinimalAPI)
class UZipLineStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
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
    
    UPROPERTY(BlueprintReadOnly)
    bool bCanActivateSpeedBoost;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShowSpeedBoostActivator;
    
    UPROPERTY(BlueprintReadOnly)
    float SpeedBoostActivationProgress;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* AudioOnStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* AudioOnDuring;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* AudioOnChangingDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* AudioOnStop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* AudioOnSpeedBoostActivated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutStartUsing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutSpeedBoostActivated;
    
    UPROPERTY()
    TWeakObjectPtr<AZipLineProjectile> ZipLineProjectile;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ZipLine)
    FZipLine ZipLine;
    
    UPROPERTY(EditAnywhere)
    float DamageBeforeFalling;
    
    UPROPERTY(EditAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(EditAnywhere)
    float DamageResetTime;
    
    UPROPERTY(Export)
    UAudioComponent* AudioComponent;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSpeedBoostActivated(bool InBoostActivated);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerJumpPressed(bool JumpForward);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerForwardInputChanged(float Input);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChangeDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSpeedBoostDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSpeedBoostActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ZipLine();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHit(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpeedBoostActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetJumpVector(FVector LookVector, FVector CurrentVelocity);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable, WithValidation)
    void All_SpeedBoostChanged(bool bActive);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UZipLineStateComponent();
};

