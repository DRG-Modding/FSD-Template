#pragma once
#include "CoreMinimal.h"
#include "AnimatedItem.h"
#include "TerrainScannerItem.generated.h"

class USceneComponent;
class UAnimMontage;
class USceneCaptureComponent2D;

UCLASS()
class ATerrainScannerItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 TerrainScannerZoomDirection;
    
    UPROPERTY(EditAnywhere)
    FName ScannerAttachSocketName;
    
    UPROPERTY(EditAnywhere)
    float TerrainScannerStartAngle;
    
    UPROPERTY(Transient, VisibleAnywhere)
    float TerrainScannerScale;
    
    UPROPERTY(Transient, VisibleAnywhere)
    float DelayedTerrainScannerScale;
    
    UPROPERTY(Transient, VisibleAnywhere)
    float DelayedTerrainScannerZoom;
    
    UPROPERTY(Transient, VisibleAnywhere, ReplicatedUsing=OnRep_IsLookingAtMap)
    bool IsLookingAtMap;
    
    UPROPERTY(Transient, VisibleAnywhere)
    bool UpdateMapToolActors;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> UseLoopsFP;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* EndFP;
    
    UPROPERTY(EditAnywhere)
    TArray<UAnimMontage*> UseLoopsTP;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* EndTP;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* TerrainScannerRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneCaptureComponent2D* TerrainScannerCapture;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetIslookingAtMap(bool lookingAtMap);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLookingAtMap();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATerrainScannerItem();
};

