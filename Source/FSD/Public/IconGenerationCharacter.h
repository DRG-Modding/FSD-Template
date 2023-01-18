#pragma once
#include "CoreMinimal.h"
#include "IconGenerationBase.h"
#include "IconGenerationCharacter.generated.h"

class UBeardColorVanityItem;
class UIconSceneCaptureComponent;
class UMaterialInterface;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AIconGenerationCharacter : public AIconGenerationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OrigBaseMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBeardColorVanityItem* HairColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ArmorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UIconSceneCaptureComponent*> CaptureComponents;
    
public:
    AIconGenerationCharacter();
};

