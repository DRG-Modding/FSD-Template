#pragma once
#include "CoreMinimal.h"
#include "DebrisActorComponent.h"
#include "EDebrisCarvedType.h"
#include "DebrisVeinComponent.generated.h"

class UTerrainMaterial;
class UVeinResourceCreator;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDebrisVeinComponent : public UDebrisActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebrisCarvedType CarverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVeinResourceCreator* VeinCreator;
    
    UDebrisVeinComponent();
};

