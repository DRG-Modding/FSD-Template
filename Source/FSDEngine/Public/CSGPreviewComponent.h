#pragma once
#include "CoreMinimal.h"
#include "ChunkId.h"
#include "Components/SceneComponent.h"
#include "CSGPreviewComponent.generated.h"

class ACSGBuilderBase;
class UDeepProceduralMeshComponent;
class UBakeConfig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API UCSGPreviewComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACSGBuilderBase* BaseBuilder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBakeConfig* CurrentBakeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<FChunkId, UDeepProceduralMeshComponent*> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool UsePreviewScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ChangeCount;
    
    UCSGPreviewComponent();
};

