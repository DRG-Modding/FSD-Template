#pragma once
#include "CoreMinimal.h"
#include "AmmoDrivenWeapon.h"
#include "Revoler.generated.h"

class AActor;
class UFSDPhysicalMaterial;

UCLASS()
class ARevoler : public AAmmoDrivenWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float OnKillFearFactor;
    
    UPROPERTY(EditAnywhere)
    float OnKillFearRange;
    
    UFUNCTION(BlueprintCallable)
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
    
public:
    ARevoler();
};

