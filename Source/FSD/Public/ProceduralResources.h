#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/LatentActionManager.h"
#include "ProceduralResources.generated.h"

class AProceduralSetup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UProceduralResources : public UActorComponent {
    GENERATED_BODY()
public:
    UProceduralResources();
    UFUNCTION(BlueprintCallable)
    void GenerateResources();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GenerateCarvedResources_Async(AProceduralSetup*& setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GenerateCarvedResources();
    
    UFUNCTION(BlueprintCallable)
    void CreateResourcesFromObjectives();
    
};

