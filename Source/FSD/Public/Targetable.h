#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Targetable.generated.h"

class UParticleSystem;
class UHealthComponentBase;

UINTERFACE(Blueprintable)
class UTargetable : public UInterface {
    GENERATED_BODY()
};

class ITargetable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void ShowDamageEffects(UParticleSystem* Particles, FVector Location, FRotator Orientation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UHealthComponentBase* GetTargetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargetCenterMass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIsTargetable() const;
    
};

