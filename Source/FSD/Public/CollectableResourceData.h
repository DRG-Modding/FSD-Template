#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ResourceData.h"
#include "CollectableResourceData.generated.h"

class UDebrisPositioning;
class UDebrisBase;
class AActor;

UCLASS()
class UCollectableResourceData : public UResourceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    float Rarity;
    
    UPROPERTY(EditAnywhere)
    float InfluenceRadius;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    
    UPROPERTY(EditAnywhere)
    bool UseTerrainPlacement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<AActor>> CollectableClasses;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<AActor>> CollectableClassesLoaded;
    
public:
    UCollectableResourceData();
};

