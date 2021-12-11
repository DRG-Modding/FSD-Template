#pragma once
#include "CoreMinimal.h"
#include "Components/SplineMeshComponent.h"
#include "TerrainScannerSplineMesh.generated.h"

class UHealthComponentBase;

UCLASS(EditInlineNew)
class FSD_API UTerrainScannerSplineMesh : public USplineMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bVisibleAtBeginPlay;
    
    UPROPERTY(EditAnywhere)
    bool bHideOnDeath;
    
    UPROPERTY(EditAnywhere)
    bool bUseFogOfWar;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bVisibleOnScanner;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleOnScanner(bool InShowOnScanner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(UHealthComponentBase* InHealthComponent);
    
public:
    UTerrainScannerSplineMesh();
};

