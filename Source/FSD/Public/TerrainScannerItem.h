#pragma once
#include "CoreMinimal.h"
#include "AnimatedItem.h"
#include "TerrainScannerItem.generated.h"

class USceneCaptureComponent2D;
class USceneComponent;
class UAnimMontage;

UCLASS()
class ATerrainScannerItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TerrainScannerZoomDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScannerAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerrainScannerStartAngle;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float TerrainScannerScale;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float DelayedTerrainScannerScale;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    float DelayedTerrainScannerZoom;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, ReplicatedUsing=OnRep_IsLookingAtMap, meta=(AllowPrivateAccess=true))
    bool IsLookingAtMap;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateMapToolActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> UseLoopsFP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndFP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> UseLoopsTP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndTP;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneComponent* TerrainScannerRoot;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* TerrainScannerCapture;
    
public:
    ATerrainScannerItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIslookingAtMap(bool lookingAtMap);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLookingAtMap();
    
};

