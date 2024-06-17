#pragma once
#include "CoreMinimal.h"
#include "DeepScanObjectiveBase.h"
#include "DeepScanSecondaryObjective.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDeepScanSecondaryObjective : public UDeepScanObjectiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HiddenItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtraHiddenItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ItemsCollected, meta=(AllowPrivateAccess=true))
    int32 HiddenItemsFound;
    
public:
    UDeepScanSecondaryObjective(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemsCollected(int32 prevAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnCrystalScanned();
    
};

