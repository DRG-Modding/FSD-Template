#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Scene.h"
#include "EPostProcessingType.h"
#include "FSDPostProcessingActor.generated.h"

class APostProcessingManager;
class IBlendableInterface;
class UBlendableInterface;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class UPostProcessComponent;

UCLASS(Abstract, Blueprintable)
class AFSDPostProcessingActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPostProcessingType PostProcessingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWeightedBlendables InitialBlendables;
    
public:
    AFSDPostProcessingActor();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnapplyPostProcessingBlendablesByType(UObject* WorldContext, EPostProcessingType Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnapplyPostProcessingBlendablesByID(UObject* WorldContext, const FName InID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnapplyPostProcessingBlendable(UObject* WorldContext, EPostProcessingType Type, TScriptInterface<IBlendableInterface> InBlendableObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void UnapplyAllPostProcessingBlendables(UObject* WorldContext);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupHDRColorGamma();
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessManager(APostProcessingManager* InManager);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMaterialInstanceDynamic* GetPostProcessingMaterialInstance(UObject* WorldContext, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UMaterialInstanceDynamic* ApplyPostProcessingMaterial(UObject* WorldContext, EPostProcessingType Type, UMaterialInterface* Material, float InWeight, const FName InID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ApplyPostProcessingBlendable(UObject* WorldContext, EPostProcessingType Type, TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight, const FName InID);
    
};

