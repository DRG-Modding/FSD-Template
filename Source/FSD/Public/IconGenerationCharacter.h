#pragma once
#include "CoreMinimal.h"
#include "IconGenerationBase.h"
#include "IconGenerationCharacter.generated.h"

class UMaterialInterface;
class UIconSceneCaptureComponent;
class UBeardColorVanityItem;
class USkeletalMeshComponent;

UCLASS()
class AIconGenerationCharacter : public AIconGenerationBase {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UMaterialInterface* OrigBaseMaterial;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* BodyMesh;
    
    UPROPERTY(EditAnywhere)
    UBeardColorVanityItem* HairColor;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* ArmorMaterial;
    
    UPROPERTY(Export, Transient)
    TArray<UIconSceneCaptureComponent*> CaptureComponents;
    
public:
    AIconGenerationCharacter();
};

