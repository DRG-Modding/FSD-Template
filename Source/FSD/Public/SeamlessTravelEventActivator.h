#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SeamlessTravelEventActivator.generated.h"

class USeamlessTravelEventKey;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API USeamlessTravelEventActivator : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USeamlessTravelEventKey* EventKey;
    
public:
    USeamlessTravelEventActivator();
};

