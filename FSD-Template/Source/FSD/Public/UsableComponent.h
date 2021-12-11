#pragma once
#include "CoreMinimal.h"
#include "UsableComponentBase.h"
#include "UsableComponent.generated.h"

class UDialogDataAsset;

UCLASS()
class UUsableComponent : public UUsableComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDialogDataAsset* ShoutBegin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText UseText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ResetOnFail;
    
    UPROPERTY(EditAnywhere)
    bool SwitchToUsingState;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUseText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDuration() const;
    
    UUsableComponent();
};

