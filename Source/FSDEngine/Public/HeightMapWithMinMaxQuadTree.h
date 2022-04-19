#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HMMinMaxLevel.h"
#include "HeightMapWithMinMaxQuadTree.generated.h"

class UTextureRenderTarget2D;
class UTexture;

UCLASS(BlueprintType)
class FSDENGINE_API UHeightMapWithMinMaxQuadTree : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureRenderTarget2D> InputRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> InputTexture;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FHMMinMaxLevel> MinMaxTree;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MinHeight;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float MaxHeight;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<float> Heights;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 Dimensions;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool Initialized;
    
    UHeightMapWithMinMaxQuadTree();
    UFUNCTION(BlueprintCallable)
    void Generate();
    
};

