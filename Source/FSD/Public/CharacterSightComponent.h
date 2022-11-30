#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ReplicatedCharacterData.h"
#include "CharacterSightComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class APlayerCharacter;
class UTemperatureComponent;
class USimpleObjectInfoComponent;
class UPawnAfflictionComponent;
class UHealth;
class IHealth;
class UCharacterSightSensorBase;
class UTargetable;
class ITargetable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterSightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTargetChangedSignature, AActor*, NewTarget, UPrimitiveComponent*, NewPrimitive);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetChangedSignature OnTargetChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AActor>> IgnoredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> TargetPrimitive;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USimpleObjectInfoComponent> TargetInfo;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UTemperatureComponent> TargetTemperature;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UPawnAfflictionComponent> TargetAfflictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IHealth> TargetHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ITargetable> TargetTargetable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetTime;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UCharacterSightSensorBase>> TargetSensors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
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

