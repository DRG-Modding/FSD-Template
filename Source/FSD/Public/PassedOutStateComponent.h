#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "PassedOutStateComponent.generated.h"

class UDialogDataAsset;

UCLASS(MinimalAPI)
class UPassedOutStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* ReviveShout;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bAllPlayersPassedOut;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTeamPassedOut();
    
public:
    UPassedOutStateComponent();
};

