#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ChunkId.h"
#include "CSGPreviewComponent.generated.h"

class UDeepProceduralMeshComponent;
class ACSGBuilderBase;
class UBakeConfig;

UCLASS(meta=(BlueprintSpawnableComponent))
class FSDENGINE_API UCSGPreviewComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ACSGBuilderBase* BaseBuilder;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UBakeConfig* CurrentBakeConfig;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<FChunkId, UDeepProceduralMeshComponent*> Meshes;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool UsePreviewScene;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 ChangeCount;
    
    UCSGPreviewComponent();
};

