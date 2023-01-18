#pragma once
#include "CoreMinimal.h"
#include "DamageData.h"
#include "FloatPerkComponent.h"
#include "Templates/SubclassOf.h"
#include "EyeForEyePerkComponent.generated.h"

class UStatusEffect;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEyeForEyePerkComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStatusEffect> EyeForEyeSTE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> LoadedSTE;
    
public:
    UEyeForEyePerkComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    
};

