#pragma once
#include "CoreMinimal.h"
#include "Objective.h"
#include "DeepScanObjectiveBase.generated.h"

class ADeepScanHiddenCrystal;
class APlayerCharacter;
class UDeepScanPlayerComponent;
class UGemResourceData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDeepScanObjectiveBase : public UObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGemResourceData* HiddenItemResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<ADeepScanHiddenCrystal*> HiddenItemInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDeepScanPlayerComponent* UIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDeepScanPlayerComponent> PlayerComponentClass;
    
public:
    UDeepScanObjectiveBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerRegistered(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void All_TryAddPingUIComponent(APlayerCharacter* Player);
    
};

