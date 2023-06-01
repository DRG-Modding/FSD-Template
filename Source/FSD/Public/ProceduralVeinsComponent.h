#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/LatentActionManager.h"
#include "EDebrisCarvedType.h"
#include "VeinResource.h"
#include "ProceduralVeinsComponent.generated.h"

class AProceduralSetup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UProceduralVeinsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVeinResource> VeinResources;
    
public:
    UProceduralVeinsComponent();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GenerateResourceVeins_Async(AProceduralSetup*& Setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GenerateResourceVeins();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GenerateMissingResourceVeins_Async(AProceduralSetup*& Setup, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GenerateMissingResourceVeins();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void GenerateDebrisVeins_Async(AProceduralSetup*& Setup, EDebrisCarvedType CarverType, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GenerateDebrisVeins(EDebrisCarvedType CarverType);
    
    UFUNCTION(BlueprintCallable)
    void CountGeneratedResourcesInVeins();
    
    UFUNCTION(BlueprintCallable)
    void CountFinalGeneratedResourcesInVeins();
    
    UFUNCTION(BlueprintCallable)
    void CalculateResourceDistribution();
    
};

