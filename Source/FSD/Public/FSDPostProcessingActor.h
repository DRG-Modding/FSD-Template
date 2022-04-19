#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPostProcessingType.h"
#include "Engine/Scene.h"
#include "FSDPostProcessingActor.generated.h"

class UBlendableInterface;
class IBlendableInterface;
class UObject;
class UPostProcessComponent;
class UMaterialInstanceDynamic;
class APostProcessingManager;
class UMaterialInterface;

UCLASS(Abstract)
class AFSDPostProcessingActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPostProcessingType PostProcessingType;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FWeightedBlendables InitialBlendables;
    
public:
    AFSDPostProcessingActor();
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
    
};

