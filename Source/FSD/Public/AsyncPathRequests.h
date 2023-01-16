#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AsyncPathRequests.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAsyncPathRequests : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> RequestListeners;
    
    UAsyncPathRequests();
};

