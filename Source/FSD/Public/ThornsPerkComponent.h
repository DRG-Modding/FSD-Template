#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FloatPerkComponent.h"
#include "DamageData.h"
#include "ThornsPerkComponent.generated.h"

class UDamageClass;
class UStatusEffect;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UThornsPerkComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> ThornsSTE;
    
public:
    UThornsPerkComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    
};

