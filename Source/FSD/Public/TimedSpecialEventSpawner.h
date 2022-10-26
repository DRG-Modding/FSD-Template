#pragma once
#include "CoreMinimal.h"
#include "SpecialEventSpawner.h"
#include "TimedSpecialEventSpawner.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UTimedSpecialEventSpawner : public USpecialEventSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> EventActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTime;
    
public:
    UTimedSpecialEventSpawner();
    UFUNCTION(BlueprintCallable)
    void SpawnEvent() const;
    
};

