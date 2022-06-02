#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Boil.generated.h"

class UFSDPhysicalMaterial;

UCLASS(Blueprintable)
class ABoil : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFSDPhysicalMaterial*> PhysicalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MaterialIndex, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
public:
    ABoil();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MaterialIndex();
    
};

