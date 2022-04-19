#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectInfoComponent.generated.h"

class APlayerController;
class UTexture2D;
class UDialogDataAsset;
class UPrimitiveComponent;
class UActorContextWidget;

UCLASS(Abstract, BlueprintType, meta=(BlueprintSpawnableComponent))
class UObjectInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UObjectInfoComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDialogDataAsset* GetLookAtShout(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPingableByLaserpointer(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInGameName(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetInGameIcon(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInGameDescription(const UPrimitiveComponent* TargetComponent) const;
    
    UFUNCTION(BlueprintCallable)
    UActorContextWidget* GetContextWidget(APlayerController* InPlayerController);
    
};

