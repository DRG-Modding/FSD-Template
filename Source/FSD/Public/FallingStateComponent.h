#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterStateComponent.h"
#include "FallingStateComponent.generated.h"

class UDialogDataAsset;
class UUseAnimationSetting;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFallingStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageStartVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoClimbMinDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoClimbLookForwardDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxClimbHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinClimbHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleCheckZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinInputDotProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugAutoClimb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* FallingShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoutAfterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseAnimationSetting* ClimbUseSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoverBootAirFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoverBootAirControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoverBootGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutHoverBootsBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoverBootActivateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HoverBootsActive, meta=(AllowPrivateAccess=true))
    bool bHoverBootsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoverBootMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D JumpBootsVelocityWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpBootsZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool JumpBootsActive;
    
public:
    UFallingStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowJumpBootsActivation();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TakeFallDamage(float Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetJumpPressed(bool Pressed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetHoverBootsPressed(bool IsPressed);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SetFallVelocity(float Velocity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ClimbLedge(bool shouldPlayAnimation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ActivateJumpBoots();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHoverBootsTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHoverBootsActiveChanged(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HoverBootsActive();
    
    UFUNCTION(BlueprintCallable)
    void JumpReleased();
    
    UFUNCTION(BlueprintCallable)
    void JumpPressed();
    
    UFUNCTION(BlueprintCallable)
    void HoverBootsReleased();
    
    UFUNCTION(BlueprintCallable)
    void HoverBootsPressed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowJumpBootsActivation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_ShowClimbLedge();
    
};

