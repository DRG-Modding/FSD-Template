#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ChunkId.h"
#include "CSGPreviewComponent.generated.h"

class ACSGBuilderBase;
class UBakeConfig;
class UDeepProceduralMeshComponent;

UCLASS()
class FSDENGINE_API UCSGPreviewComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ACSGBuilderBase* BaseBuilder;
    
    UPROPERTY(Transient)
    UBakeConfig* CurrentBakeConfig;
    
    UPROPERTY(Export, Transient)
    TMap<FChunkId, UDeepProceduralMeshComponent*> Meshes;
    
    UPROPERTY(Transient)
    bool UsePreviewScene;
    
    UPROPERTY(Transient)
    int32 ChangeCount;
    
    UCSGPreviewComponent();
};

