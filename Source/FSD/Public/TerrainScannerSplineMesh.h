#pragma once
#include "CoreMinimal.h"
#include "Components/SplineMeshComponent.h"
#include "TerrainScannerSplineMesh.generated.h"

class UHealthComponentBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UTerrainScannerSplineMesh : public USplineMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleAtBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFogOfWar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bVisibleOnScanner;
    
public:
    UTerrainScannerSplineMesh();
    UFUNCTION(BlueprintCallable)
    void SetVisibleOnScanner(bool InShowOnScanner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(UHealthComponentBase* InHealthComponent);
    
};

