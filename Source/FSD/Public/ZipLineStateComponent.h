#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterStateComponent.h"
#include "DamageData.h"
#include "ZipLine.h"
#include "ZipLineConnectorHandler.h"
#include "ZipLineStateComponent.generated.h"

class AZipLineProjectile;
class UAudioComponent;
class UDialogDataAsset;
class USoundBase;

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UZipLineStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZipLineConnectorHandler ZipLineConnector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelAndDecelAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedBoostActivationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedBoostActivionMinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSpeedBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalSpeedBoostPerAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedBoostCoolDownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelerationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecelerationAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinStartDistanceToEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanActivateSpeedBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSpeedBoostActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageBeforeFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FriendlyFireModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
public:
    UZipLineStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetSpeedBoostActivated(bool InBoostActivated);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerJumpPressed(bool JumpForward);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerForwardInputChanged(float Input);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerChangeDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSpeedBoostDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSpeedBoostActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ZipLine();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerHit(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSpeedBoostActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetJumpVector(FVector LookVector, FVector CurrentVelocity);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_SpeedBoostChanged(bool bActive);
    
};

