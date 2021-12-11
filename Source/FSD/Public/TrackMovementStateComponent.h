#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "EExitTrackMode.h"
#include "PipelineMovementData.h"
#include "TrackMovementStateComponent.generated.h"

class AZipLineConnector;
class UDialogDataAsset;
class USoundBase;
class UAudioComponent;

UCLASS()
class FSD_API UTrackMovementStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    UAudioComponent* AudioStartComponent;
    
    UPROPERTY(Export)
    UAudioComponent* AudioDuringComponent;
    
    UPROPERTY(Export)
    UAudioComponent* AudioStopComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* AudioOnStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* AudioOnDuring;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundBase* AudioOnStop;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AudioOnFadeOut;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* StateUpdateShout;
    
    UPROPERTY(EditAnywhere)
    float StateUpdateShoutFrequencySecsMin;
    
    UPROPERTY(EditAnywhere)
    float StateUpdateShoutFrequencySecsMax;
    
    UPROPERTY(BlueprintReadOnly)
    float AudioDuringSlidingSpeedParam;
    
    UPROPERTY(EditAnywhere)
    float SpeedTarget;
    
    UPROPERTY(EditAnywhere)
    float SpeedMin;
    
    UPROPERTY(EditAnywhere)
    float SpeedMax;
    
    UPROPERTY(EditAnywhere)
    float AccelerationBase;
    
    UPROPERTY(EditAnywhere)
    float AccelerationMultiplier;
    
    UPROPERTY(EditAnywhere)
    float DecelerationMultiplier;
    
    UPROPERTY(EditAnywhere)
    float AccelerationOnSlopeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float DecelerationOnSlopeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float StoppingDeceleration;
    
    UPROPERTY(EditAnywhere)
    float StoppingDistance;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AZipLineConnector> ConnectorClass;
    
    UPROPERTY()
    AZipLineConnector* Connector;
    
    UPROPERTY(EditAnywhere)
    EExitTrackMode ExitMode;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TrackMovementdata)
    FPipelineMovementData TrackMovementData;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExitMode(EExitTrackMode eMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddTemporaryAcceration(float Acceleration, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrackMovementdata(FPipelineMovementData& oldState);
    
    UFUNCTION(BlueprintCallable)
    void JumpPressed();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UTrackMovementStateComponent();
};

