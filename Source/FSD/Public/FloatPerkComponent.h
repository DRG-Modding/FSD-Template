#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FloatPerkComponent.generated.h"

class APlayerCharacter;

UCLASS(Abstract, Blueprintable, meta=(BlueprintSpawnableComponent))
class UFloatPerkComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* PlayerCharacter;
    
public:
    UFloatPerkComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnInitialized();
    
};

