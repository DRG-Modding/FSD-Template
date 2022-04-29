#pragma once
#include "CoreMinimal.h"
#include "UsableChangedSignatureDelegate.h"
#include "UsableComponent.h"
#include "UsedBySignatureDelegate.h"
#include "GenericUsableDelegateDelegate.h"
#include "ProgressSignatureDelegate.h"
#include "UserCountChangedDelegateDelegate.h"
#include "OnFailedDelegate.h"
#include "EInputKeys.h"
#include "SingleUsableComponent.generated.h"

class USoundCue;
class UDialogDataAsset;
class UPawnStat;
class UTexture2D;
class UAudioComponent;
class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USingleUsableComponent : public UUsableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUsedBySignature OnUsedBy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUsedBySignature OnUseBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericUsableDelegate OnUseEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressSignature OnProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUsableChangedSignature OnUsableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserCountChangedDelegate OnUserCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFailed OnFailed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AudioBeginUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AudioFailedUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AudioCompletedUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* BoscoLaserpointerShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CoopUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPawnStat* UseSpeedStat;
    
    UPROPERTY(EditAnywhere)
    float CoopUseMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Usable, meta=(AllowPrivateAccess=true))
    bool Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TurnOffAfterUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MultipleUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUsingUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> UsableIcon;
    
    UPROPERTY(EditAnywhere)
    float useDuration;
    
    UPROPERTY(EditAnywhere, Transient)
    float Progress;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_DesiredProgress)
    float DesiredProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_UserCount, meta=(AllowPrivateAccess=true))
    int32 userCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioBeginUseInstance;
    
public:
    USingleUsableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Use(APlayerCharacter* User, EInputKeys Key, float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetProgress(float Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanUse(bool CanUse);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_UserCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Usable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredProgress();
    
public:
    UFUNCTION(BlueprintCallable)
    void Cheat_Use(APlayerCharacter* User, EInputKeys Key);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_PlayFailedAudio();
    
};

