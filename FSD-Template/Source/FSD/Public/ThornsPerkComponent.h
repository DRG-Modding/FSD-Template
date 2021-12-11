#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FloatPerkComponent.h"
#include "ThornsPerkComponent.generated.h"

class UDamageClass;
class UStatusEffect;
class AActor;

UCLASS(Abstract)
class UThornsPerkComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDamageClass* DamageClass;
    
    UPROPERTY(EditAnywhere)
    float CoolDown;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> ThornsSTE;
    
    UFUNCTION(BlueprintCallable)
    void OnHit(float Damage, UDamageClass* inDamageClass, AActor* DamageCauser, bool anyHealthLost);
    
public:
    UThornsPerkComponent();
};

