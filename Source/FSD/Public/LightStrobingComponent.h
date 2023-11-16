#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LightStrobeChannel.h"
#include "LightStrobingComponent.generated.h"

class UMaterialInstanceDynamic;
class UMeshComponent;
class UPointLightComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULightStrobingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightStrobeChannel DefaultChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhotosensitiveMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoSetup;
    
public:
    ULightStrobingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FLightStrobeChannel GetChannel(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void AddStrobeChannel(const FLightStrobeChannel& Channel);
    
    UFUNCTION(BlueprintCallable)
    void AddMesh(UMeshComponent* Mesh, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    void AddMaterial(UMaterialInstanceDynamic* Mid, int32 Channel);
    
    UFUNCTION(BlueprintCallable)
    void AddLight(UPointLightComponent* Light, int32 Channel);
    
};

