#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitReactionComponent.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UHitReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> HitReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstHitReactBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideHitReactBlendIn;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
public:
    UHitReactionComponent();
    UFUNCTION(BlueprintCallable)
    void PlayHitReaction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(float Amount);
    
};

