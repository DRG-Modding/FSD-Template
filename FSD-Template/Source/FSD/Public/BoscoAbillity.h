#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EBoscoAbillityTargetPreference.h"
#include "BoscoAbillity.generated.h"

class UAnimSequenceBase;
class USoundBase;

UCLASS()
class UBoscoAbillity : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AbillityName;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* AbillityAnimation;
    
    UPROPERTY(EditAnywhere)
    USoundBase* VoiceOnUse;
    
    UPROPERTY(EditAnywhere)
    EBoscoAbillityTargetPreference TargetType;
    
    UPROPERTY(EditAnywhere)
    float CoolDown;
    
    UPROPERTY(EditAnywhere)
    float WindUp;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float range;
    
    UPROPERTY(EditAnywhere)
    float RechargeTime;
    
    UPROPERTY(EditAnywhere)
    int32 MaxCharges;
    
    UPROPERTY(EditAnywhere)
    bool TargetActorIfValid;
    
    UPROPERTY(EditAnywhere)
    bool RotateTowardsTarget;
    
    UBoscoAbillity();
};

