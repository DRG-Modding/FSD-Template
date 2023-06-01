#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Curves/CurveFloat.h"
#include "DisplayCaseDelegateDelegate.h"
#include "DisplayContent.h"
#include "DisplayCase.generated.h"

class UDialogDataAsset;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ADisplayCase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ContentAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ContentMesh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplayCaseDelegate OnContentUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve RelativeZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ReactZOffsetCof;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ReactTimeDilationCof;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDisplayContent> Contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeerMugSpawnChancePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarrelSpawnChancePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ContentIndex, meta=(AllowPrivateAccess=true))
    int32 ContentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* BeerMugShout;
    
public:
    ADisplayCase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RefreshContent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayReactionAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ContentIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpecialContent() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeCase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentContent(FDisplayContent& currentContent) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeContent();
    
};

