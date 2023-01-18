#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "HugeExplosionComponent.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHugeExplosionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplosionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionSize;
    
public:
    UHugeExplosionComponent();
    UFUNCTION(BlueprintCallable)
    void TriggerExplosion(FVector Location);
    
};

