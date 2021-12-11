#pragma once
#include "CoreMinimal.h"
#include "DebrisStaticMesh.h"
#include "DebrisBase.h"
#include "DebrisMesh.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class UDebrisMesh : public UDebrisBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDebrisStaticMesh> Meshes;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* CommonMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText InGameName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName GemTrackerName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText InGameDescription;
    
    UPROPERTY(EditAnywhere)
    float StartCullDistance;
    
    UPROPERTY(EditAnywhere)
    float EndCullDistance;
    
    UDebrisMesh();
};

