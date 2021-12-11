#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ReplicatedCharacterData.h"
#include "UObject/NoExportTypes.h"
#include "CharacterSightComponent.generated.h"

class UPawnAfflictionComponent;
class AActor;
class UPrimitiveComponent;
class APlayerCharacter;
class UTemperatureComponent;
class USimpleObjectInfoComponent;
class UHealth;
class IHealth;
class UTargetable;
class ITargetable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterSightComponentOnTargetChanged, AActor*, NewTarget, UPrimitiveComponent*, NewPrimitive);

UCLASS(Blueprintable)
class UCharacterSightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCharacterSightComponentOnTargetChanged OnTargetChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    float TargetMaxDistance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> IgnoredActors;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> TargetPrimitive;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<USimpleObjectInfoComponent> TargetInfo;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UTemperatureComponent> TargetTemperature;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UPawnAfflictionComponent> TargetAfflictions;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TScriptInterface<IHealth> TargetHealth;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TScriptInterface<ITargetable> TargetTargetable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TargetTime;
    
    UPROPERTY(Replicated, Transient)
    FReplicatedCharacterData ReplicatedData;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UpdateTarget(AActor* NewActor, UPrimitiveComponent* NewPrimitive);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoreActor(AActor* InActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTargetInSightTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTargetChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSightStartAndEnd(float InMaxDistance, FVector& OutStartLocation, FVector& OutEndLocation);
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreActor(AActor* InActor);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UCharacterSightComponent();
};

