#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BoolDelegateDelegate.h"
#include "FakeFallComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFakeFallComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnFallingChanged;
    
    UFakeFallComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartFakeFall();
    
};

