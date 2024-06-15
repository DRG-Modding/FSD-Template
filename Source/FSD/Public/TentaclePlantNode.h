#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
#include "Templates/SubclassOf.h"
#include "TentaclePlantNode.generated.h"

class ASplineCableActor;
class ATentaclePlant;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ATentaclePlantNode : public AEnemyPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASplineCableActor> TentacleCableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASplineCableActor* TentacleCable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ATentaclePlant* TentaclePlant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 TentacleIndex;
    
public:
    ATentaclePlantNode(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnPathCompleted(bool WasCompleted);
    
};

