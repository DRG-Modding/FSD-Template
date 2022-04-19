#pragma once
#include "CoreMinimal.h"
#include "IconGenerationBase.h"
#include "IconGenerationCharacter.generated.h"

class UMaterialInterface;
class USkeletalMeshComponent;
class UBeardColorVanityItem;
class UIconSceneCaptureComponent;

UCLASS()
class AIconGenerationCharacter : public AIconGenerationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OrigBaseMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBeardColorVanityItem* HairColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ArmorMaterial;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UIconSceneCaptureComponent*> CaptureComponents;
    
public:
    AIconGenerationCharacter();
};

