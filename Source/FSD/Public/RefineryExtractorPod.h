#pragma once
#include "CoreMinimal.h"
#include "ERefineryExtractorPodState.h"
#include "RessuplyPod.h"
#include "RefineryExtractorPod.generated.h"

class URefineryExtractorPodAnimInstance;
class USkeletalMeshComponent;
class UWidgetComponent;

UCLASS(Blueprintable)
class ARefineryExtractorPod : public ARessuplyPod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* ProgressWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh_Base;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScreenSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ExtractorState, meta=(AllowPrivateAccess=true))
    ERefineryExtractorPodState ExtractorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URefineryExtractorPodAnimInstance*> AnimBlueprints;
    
public:
    ARefineryExtractorPod(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TakeOff();
    
    UFUNCTION(BlueprintCallable)
    void StartExtraction();
    
    UFUNCTION(BlueprintCallable)
    void SetIsReturning(const bool InIsReturning);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPumping(const bool InIsPumping);
    
    UFUNCTION(BlueprintCallable)
    void SetIsOpen(const bool InIsOpen);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtractorState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPipeLineCompleted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtractorStateChanged(ERefineryExtractorPodState NewState);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeExtractorState(ERefineryExtractorPodState NewState);
    
};

