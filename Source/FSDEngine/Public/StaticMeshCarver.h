#pragma once
#include "CoreMinimal.h"
#include "DeepCSGFloatTreePacked.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "DeepCSGFloatTree.h"
#include "StaticMeshCarver.generated.h"

class UStaticMesh;

UCLASS(BlueprintType, MinimalAPI)
class UStaticMeshCarver : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FBox AABB;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTree BSPTree;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FDeepCSGFloatTreePacked BSPTreePacked;
    
    UStaticMeshCarver();
    UFUNCTION(BlueprintCallable)
    void Generate();
    
    UFUNCTION(BlueprintCallable)
    void ExportPreviewMesh();
    
};

