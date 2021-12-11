#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPostProcessingType.h"
#include "Engine/Scene.h"
#include "FSDPostProcessingActor.generated.h"

class UPostProcessComponent;
class APostProcessingManager;
class UMaterialInterface;
class UBlendableInterface;
class IBlendableInterface;
class UObject;
class UMaterialInstanceDynamic;

UCLASS(Abstract)
class AFSDPostProcessingActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPostProcessingType PostProcessingType;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(Transient)
    FWeightedBlendables InitialBlendables;
    
public:
    UFUNCTION(BlueprintCallable)
    static void UnapplyPostProcessingBlendablesByType(UObject* WorldContext, EPostProcessingType Type);
    
    UFUNCTION(BlueprintCallable)
    static void UnapplyPostProcessingBlendablesByID(UObject* WorldContext, const FName InID);
    
    UFUNCTION(BlueprintCallable)
    static void UnapplyPostProcessingBlendable(UObject* WorldContext, EPostProcessingType Type, TScriptInterface<IBlendableInterface> InBlendableObject);
    
    UFUNCTION(BlueprintCallable)
    static void UnapplyAllPostProcessingBlendables(UObject* WorldContext);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupHDRColorGamma();
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessManager(APostProcessingManager* InManager);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMaterialInstanceDynamic* GetPostProcessingMaterialInstance(UObject* WorldContext, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* ApplyPostProcessingMaterial(UObject* WorldContext, EPostProcessingType Type, UMaterialInterface* Material, float InWeight, const FName InID);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPostProcessingBlendable(UObject* WorldContext, EPostProcessingType Type, TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight, const FName InID);
    
    AFSDPostProcessingActor();
};

