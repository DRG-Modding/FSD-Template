#pragma once
#include "CoreMinimal.h"
#include "FloatPerkComponent.h"
#include "SalutePerkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USalutePerkComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FleeRadius;
    
public:
    USalutePerkComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSalute();
    
};

