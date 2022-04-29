#pragma once
#include "CoreMinimal.h"
#include "UsableComponentBase.h"
#include "UsableComponent.generated.h"

class UDialogDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UUsableComponent : public UUsableComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ShoutBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UseText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ResetOnFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwitchToUsingState;
    
public:
    UUsableComponent();
    UFUNCTION(BlueprintCallable)
    void SetUseText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDuration() const;
    
};

