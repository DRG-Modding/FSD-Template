#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInputKeys.h"
#include "PitchedUsers.h"
#include "HeliumTank.generated.h"

class AHeliumTank;
class APlayerCharacter;
class UAudioComponent;
class UCurveFloat;

UCLASS(Blueprintable)
class AHeliumTank : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PitchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PitchedUsers, meta=(AllowPrivateAccess=true))
    TArray<FPitchedUsers> PitchedUsers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AHeliumTank* Leader;
    
public:
    AHeliumTank();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUsedBy(APlayerCharacter* User, EInputKeys Key);
    
    UFUNCTION(BlueprintCallable)
    void OnShoutStarted(APlayerCharacter* Player, UAudioComponent* audio);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PitchedUsers();
    
};

