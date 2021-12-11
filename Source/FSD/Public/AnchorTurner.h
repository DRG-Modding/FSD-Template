#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AnchorTurner.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class USphereComponent;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAnchorTurnerOnSpunUp);

UCLASS()
class AAnchorTurner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* PushCollider1;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* PushCollider2;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* PushCollider3;
    
    UPROPERTY(Export, VisibleAnywhere)
    USphereComponent* PushCollider4;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FAnchorTurnerOnSpunUp OnSpunUp;
    
protected:
    UPROPERTY(EditAnywhere)
    FVector AttatchmentOffset;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AttachmentPoints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PerPlayerMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TurnSpeed;
    
    UPROPERTY(Replicated, Transient)
    float Progress;
    
    UPROPERTY(EditAnywhere)
    float MaxProgress;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Finished)
    bool Finished;
    
    UPROPERTY(EditAnywhere)
    float DecaySpeed;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Finished();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLeftPushpoint(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEnteredPushpoint(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GeneratorSpunUp();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AAnchorTurner();
};

