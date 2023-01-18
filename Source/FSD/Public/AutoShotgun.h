#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "Templates/SubclassOf.h"
#include "AutoShotgun.generated.h"

class AActor;
class UFSDPhysicalMaterial;
class UHealthComponentBase;
class UPrimitiveComponent;
class UStatusEffect;

UCLASS(Blueprintable)
class AAutoShotgun : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> CQCKillBuff;
    
public:
    AAutoShotgun();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial, bool wasDirectHit);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDamaged(UHealthComponentBase* Health, float Amount, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysicalMaterial);
    
};

