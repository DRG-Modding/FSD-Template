#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ReplicatedCharacterData.h"
#include "CharacterSightComponent.generated.h"

class UTemperatureComponent;
class AActor;
class UPrimitiveComponent;
class APlayerCharacter;
class UHealth;
class IHealth;
class USimpleObjectInfoComponent;
class UPawnAfflictionComponent;
class UTargetable;
class ITargetable;
class UCharacterSightSensorBase;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UCharacterSightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTargetChangedSignature, AActor*, NewTarget, UPrimitiveComponent*, NewPrimitive);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTargetChangedSignature OnTargetChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> IgnoredActors;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> TargetPrimitive;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USimpleObjectInfoComponent> TargetInfo;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTemperatureComponent> TargetTemperature;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPawnAfflictionComponent> TargetAfflictions;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IHealth> TargetHealth;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ITargetable> TargetTargetable;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float TargetTime;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UCharacterSightSensorBase>> TargetSensors;
    
    UPROPERTY(Replicated, Transient, meta=(AllowPrivateAccess=true))
    FReplicatedCharacterData ReplicatedData;
    
public:
    UCharacterSightComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateTarget(AActor* NewActor, UPrimitiveComponent* NewPrimitive);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoreActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSightStartAndEnd(float InMaxDistance, FVector& OutStartLocation, FVector& OutEndLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreActor(AActor* InActor);
    
};

