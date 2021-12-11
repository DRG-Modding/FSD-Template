#pragma once
#include "CoreMinimal.h"
#include "DebrisActorComponent.h"
#include "EDebrisCarvedType.h"
#include "DebrisVeinComponent.generated.h"

class UTerrainMaterial;
class UVeinResourceCreator;

UCLASS()
class UDebrisVeinComponent : public UDebrisActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* Material;
    
    UPROPERTY(EditAnywhere)
    EDebrisCarvedType carverType;
    
    UPROPERTY(EditAnywhere, Instanced)
    UVeinResourceCreator* VeinCreator;
    
    UDebrisVeinComponent();
};

