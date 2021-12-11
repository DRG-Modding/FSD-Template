#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ShowroomManager.generated.h"

class AShowroomStage;
class UTextureRenderTarget2D;
class UShowroomController;

UCLASS(BlueprintType)
class UShowroomManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector ShowroomLocation;
    
protected:
    UPROPERTY(Transient)
    TSubclassOf<AShowroomStage> CurrentStage;
    
    UPROPERTY(Transient)
    AShowroomStage* StageInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UTextureRenderTarget2D* RenderTarget;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UShowroomController* GetController();
    
    UFUNCTION(BlueprintCallable)
    void ClearShowroom();
    
    UShowroomManager();
};

