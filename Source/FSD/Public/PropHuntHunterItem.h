#pragma once
#include "CoreMinimal.h"
#include "ECharacterCameraMode.h"
#include "ThrowableItem.h"
#include "PropHuntHunterItem.generated.h"

class UPropHuntContestant;

UCLASS(Abstract, Blueprintable)
class FSD_API APropHuntHunterItem : public AThrowableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPropHuntContestant> ContestantComponent;
    
    APropHuntHunterItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void CameraModeUpdated(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    
};

