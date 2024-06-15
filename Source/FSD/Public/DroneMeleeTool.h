#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DroneMeleeTool.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDroneMeleeTool : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeDamageAmount;
    
public:
    UDroneMeleeTool(const FObjectInitializer& ObjectInitializer);

};

