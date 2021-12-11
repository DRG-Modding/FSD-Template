#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterStateComponent.h"
#include "FallingStateComponent.generated.h"

class UDialogDataAsset;
class UUseAnimationSetting;

UCLASS(MinimalAPI)
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
    
    UPROPERTY(EditAnywhere)
    bool DebugAutoClimb;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* FallingShout;
    
    UPROPERTY(EditAnywhere)
    float ShoutAfterDistance;
    
    UPROPERTY(EditAnywhere)
    UUseAnimationSetting* ClimbUseSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverBootAirFriction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverBootAirControl;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverBootGravityScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutHoverBootsBegin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HoverBootActivateDuration;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_HoverBootsActive)
    bool bHoverBootsActive;
    
    UPROPERTY(BlueprintReadOnly)
    float HoverBootMaxDuration;
    
    UPROPERTY(EditAnywhere)
    FVector2D JumpBootsVelocityWindow;
    
    UPROPERTY(EditAnywhere)
    float JumpBootsZVelocity;
    
    UPROPERTY(BlueprintReadWrite)
    bool JumpBootsActive;
    
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
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFallingStateComponent();
};

