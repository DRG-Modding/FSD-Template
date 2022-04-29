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
    UPROPERTY(EditAnywhere)
    float FallDamageStartVelocity;
    
    UPROPERTY(EditAnywhere)
    float FallDamageModifier;
    
    UPROPERTY(EditAnywhere)
    float AutoClimbMinDelay;
    
    UPROPERTY(EditAnywhere)
    float AutoClimbLookForwardDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxClimbHeight;
    
    UPROPERTY(EditAnywhere)
    float MinClimbHeight;
    
    UPROPERTY(EditAnywhere)
    float CapsuleCheckZOffset;
    
    UPROPERTY(EditAnywhere)
    float MinInputDotProduct;
    
    UPROPERTY(EditAnywhere)
    float JumpZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugAutoClimb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* FallingShout;
    
    UPROPERTY(EditAnywhere)
    float ShoutAfterDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseAnimationSetting* ClimbUseSettings;
    
    UPROPERTY(EditAnywhere)
    float HoverBootAirFriction;
    
    UPROPERTY(EditAnywhere)
    float HoverBootAirControl;
    
    UPROPERTY(EditAnywhere)
    float HoverBootGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutHoverBootsBegin;
    
    UPROPERTY(EditAnywhere)
    float HoverBootActivateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HoverBootsActive, meta=(AllowPrivateAccess=true))
    bool bHoverBootsActive;
    
    UPROPERTY(EditAnywhere)
    float HoverBootMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D JumpBootsVelocityWindow;
    
    UPROPERTY(EditAnywhere)
    float JumpBootsZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool JumpBootsActive;
    
public:
    UFallingStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowJumpBootsActivation();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_TakeFallDamage(float Amount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetJumpPressed(bool Pressed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetHoverBootsPressed(bool IsPressed);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_SetFallVelocity(float Velocity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ClimbLedge(bool shouldPlayAnimation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ActivateJumpBoots();
    
    UFUNCTION(BlueprintImplementableEvent)
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

