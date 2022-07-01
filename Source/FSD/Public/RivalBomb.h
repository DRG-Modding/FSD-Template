#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameEvent.h"
#include "UObject/NoExportTypes.h"
#include "RivalBomb.generated.h"

class UDebrisPositioning;
class ARivalBombNode;
class UCurveFloat;
class AGem;

UCLASS(Blueprintable)
class ARivalBomb : public AGameEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARivalBombNode*> ActiveNodeInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NodeHackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumNodesToHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DataCellPickedUp, meta=(AllowPrivateAccess=true))
    bool bDataCellPickedUp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGem> DataCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARivalBombNode> RivalBomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* NodePositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NodeCostCurve;
    
public:
    ARivalBomb();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateNodesOnStart();
    
private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnDataCell();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDataCellPickedUp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DataCellPickedUp();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDataCellPickedUp(bool Attached, FVector PrevScale);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DeactivateAllNodes(bool failed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateNewNode();
    
};

