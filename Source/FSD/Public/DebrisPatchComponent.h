#pragma once
#include "CoreMinimal.h"
#include "DebrisActorComponent.h"
#include "DebrisPatchComponent.generated.h"

class UPatchResourceCreator;
class UTerrainMaterial;

UCLASS()
class UDebrisPatchComponent : public UDebrisActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* Material;
    
    UPROPERTY(EditAnywhere, Instanced)
    UPatchResourceCreator* PatchCreator;
    
    UDebrisPatchComponent();
};

