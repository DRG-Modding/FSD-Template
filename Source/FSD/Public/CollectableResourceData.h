#pragma once
#include "CoreMinimal.h"
#include "ResourceData.h"
#include "Templates/SubclassOf.h"
#include "CollectableResourceData.generated.h"

class AActor;
class UCollectableResourceCreator;
class UDebrisBase;
class UDebrisPositioning;

UCLASS(Blueprintable)
class UCollectableResourceData : public UResourceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCollectableResourceCreator* ResourceCreator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Positioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfluenceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDebrisBase>> Debris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseTerrainPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> CollectableClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> CollectableClassesLoaded;
    
public:
    UCollectableResourceData();
};

