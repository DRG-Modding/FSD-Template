#pragma once
#include "CoreMinimal.h"
#include "CharacterStateComponent.h"
#include "PassedOutStateComponent.generated.h"

class UDialogDataAsset;

UCLASS(MinimalAPI, meta=(BlueprintSpawnableComponent))
class UPassedOutStateComponent : public UCharacterStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ReviveShout;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bAllPlayersPassedOut;
    
public:
    UPassedOutStateComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTeamPassedOut();
    
};

