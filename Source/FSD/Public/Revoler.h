#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "Revoler.generated.h"

class AActor;
class UFSDPhysicalMaterial;

UCLASS(Blueprintable)
class ARevoler : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnKillFearFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnKillFearRange;
    
public:
    ARevoler();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat, bool wasDirectHit);
    
};

