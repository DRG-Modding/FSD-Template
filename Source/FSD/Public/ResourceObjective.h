#pragma once
#include "CoreMinimal.h"
#include "ResourceBasedObjective.h"
#include "ResourceObjective.generated.h"

class UResourceData;
class UCappedResource;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UResourceObjective : public UResourceBasedObjective {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    float ResourcesRequired;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ResourcesCollected)
    float ResourcesCollected;
    
    UPROPERTY(EditAnywhere)
    float ResourceBuffer;
    
    UPROPERTY(EditAnywhere)
    float RoundToNearest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectivesText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CreditsRewardText;
    
public:
    UResourceObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnResourceChanged(UCappedResource* CappedResource, float Amount);
    
    UFUNCTION()
    void OnRep_ResourcesCollected(float prevAmount);
    
public:
    UFUNCTION(BlueprintPure)
    float GetRequiredAmount(float missionScaling) const;
    
};

