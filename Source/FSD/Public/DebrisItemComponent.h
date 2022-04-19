#pragma once
#include "CoreMinimal.h"
#include "IRandRange.h"
#include "DebrisActorComponent.h"
#include "DebrisItemActorItem.h"
#include "EDebrisItemPass.h"
#include "DebrisItemComponent.generated.h"

class UDebrisPositioning;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDebrisItemComponent : public UDebrisActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDebrisPositioning* Debris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebrisItemActorItem> Actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebrisItemPass ItemPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfluenceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToImportantLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRandRange Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountSearchMultiplier;
    
    UDebrisItemComponent();
};

