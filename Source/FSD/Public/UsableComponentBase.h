#pragma once
#include "CoreMinimal.h"
#include "EInputKeys.h"
#include "Components/ActorComponent.h"
#include "UsedBySignatureDelegate.h"
#include "UsableComponentBase.generated.h"

class APlayerCharacter;
class USceneComponent;
class UUseAnimationSetting;
class UUseConditionSet;
class UTexture2D;

UCLASS(Abstract, Blueprintable, meta=(BlueprintSpawnableComponent))
class FSD_API UUsableComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FUsedBySignature OnClientBeginUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CallbackKeys;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseAnimationSetting* AnimationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* RestrictToCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRayTraceTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetUsingOnCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUseConditionSet* UseConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClientPredictive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ThirdPersonWhileUsing;
    
public:
    UUsableComponentBase();
    UFUNCTION(BlueprintCallable)
    void SetRayTraceTriggered(bool rayTraceTriggered);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetUseText(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUseProgressInPercent(APlayerCharacter* User) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetUsableIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowUsingUI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRayTraceTriggerd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideProgressBar(APlayerCharacter* User) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHideActionText(APlayerCharacter* User) const;
    
    UFUNCTION(BlueprintCallable)
    void EndUse(APlayerCharacter* User);
    
    UFUNCTION(BlueprintCallable)
    void BeginUse(APlayerCharacter* User, EInputKeys Key);
    
};

