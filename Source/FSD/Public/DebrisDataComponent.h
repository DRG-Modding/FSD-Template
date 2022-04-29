#pragma once
#include "CoreMinimal.h"
#include "DebrisActorComponent.h"
#include "DebrisDataComponent.generated.h"

class UDebrisBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDebrisDataComponent : public UDebrisActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisBase* Debris;
    
    UDebrisDataComponent();
};

