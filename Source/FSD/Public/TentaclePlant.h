#pragma once
#include "CoreMinimal.h"
#include "ShootingPlant.h"
#include "Templates/SubclassOf.h"
#include "TentaclePlant.generated.h"

class AEnemyPawn;
class ATentaclePlantNode;
class UDebrisPositioning;

UCLASS(Blueprintable)
class ATentaclePlant : public AShootingPlant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsVulnerable, meta=(AllowPrivateAccess=true))
    bool IsVulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceBetweenNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEnemyPawn> NodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* NodePositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATentaclePlantNode*> NodeInstances;
    
public:
    ATentaclePlant(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsVulnerable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNodeDestroyed(ATentaclePlantNode* InNode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNodeDamaged(ATentaclePlantNode* InNode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsVulnerable();
    
    UFUNCTION(BlueprintCallable)
    void DestroyNode(ATentaclePlantNode* Node);
    
};

