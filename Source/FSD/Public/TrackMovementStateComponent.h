#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "PipelineMovementData.h"
#include "EExitTrackMode.h"
#include "TrackMovementStateComponent.generated.h"

class UAudioComponent;
class USoundBase;
class UDialogDataAsset;
class AZipLineConnector;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UTrackMovementStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioStartComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioDuringComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioStopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioOnDuring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AudioOnStop;
    
    UPROPERTY(EditAnywhere)
    float AudioOnFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* StateUpdateShout;
    
    UPROPERTY(EditAnywhere)
    float StateUpdateShoutFrequencySecsMin;
    
    UPROPERTY(EditAnywhere)
    float StateUpdateShoutFrequencySecsMax;
    
    UPROPERTY(EditAnywhere)
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AZipLineConnector> ConnectorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZipLineConnector* Connector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExitTrackMode ExitMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TrackMovementdata, meta=(AllowPrivateAccess=true))
    FPipelineMovementData TrackMovementData;
    
public:
    UTrackMovementStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExitMode(EExitTrackMode eMode);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAddTemporaryAcceration(float Acceleration, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TrackMovementdata(FPipelineMovementData& oldState);
    
    UFUNCTION(BlueprintCallable)
    void JumpPressed();
    
};

