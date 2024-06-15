#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeepScanObjectiveBase.h"
#include "DelegateDelegate.h"
#include "EDeepScanState.h"
#include "RandInterval.h"
#include "DeepScanObjective.generated.h"

class ADebrisDataActor;
class UCappedResource;
class UDebrisPositioning;
class UDialogDataAsset;
class UResourceData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDeepScanObjective : public UDeepScanObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDelegate OnObjectiveStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* FirstScanDoneShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* SecondToLastScanDoneShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* GenericScanDoneShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* AllScansDoneShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* AllScansDoneShoutMissingSecondaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HiddenItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtraHiddenItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ItemsCollected, meta=(AllowPrivateAccess=true))
    int32 HiddenItemsFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourceRoomIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandInterval ResourceVeinAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollecResourcsVeinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* CollectResourcePositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* CollectedResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectResourceTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CollectResourceCurrent, meta=(AllowPrivateAccess=true))
    int32 CollectResourceCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EDeepScanState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADebrisDataActor> GemRoomDBA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GeodeLocation;
    
public:
    UDeepScanObjective(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnResourceChanged(UCappedResource* CappedResource, float amount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EDeepScanState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemsCollected(int32 prevAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CollectResourceCurrent(int32 prevAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnCrystalScanned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateUndergroundCave();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeState(EDeepScanState NewState);
    
};

