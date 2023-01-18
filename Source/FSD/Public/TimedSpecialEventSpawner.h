#pragma once
#include "CoreMinimal.h"
#include "SpecialEventSpawner.h"
#include "TimedSpecialEventSpawner.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UTimedSpecialEventSpawner : public USpecialEventSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> BlockStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> EventActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTime;
    
public:
    UTimedSpecialEventSpawner();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void UnblockEventSpawn(UObject* blocker);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEvent() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void BlockEventSpawn(UObject* blocker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreEventSpawnsBlocked() const;
    
};

