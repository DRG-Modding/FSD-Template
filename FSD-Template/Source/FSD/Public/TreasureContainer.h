#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInputKeys.h"
#include "TreasureWeight.h"
#include "TreasureContainer.generated.h"

class UItemAquisitionSource;
class USceneComponent;
class APlayerCharacter;
class UOncePerPlayerUsableComponent;
class UTreasureRewarder;

UCLASS()
class FSD_API ATreasureContainer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOncePerPlayerUsableComponent* CollectUsable;
    
protected:
    UPROPERTY(EditAnywhere)
    UItemAquisitionSource* AquisitionSource;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Collectors)
    TArray<APlayerCharacter*> Collectors;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_LastJoiner)
    APlayerCharacter* LastJoiner;
    
    UPROPERTY(EditAnywhere)
    TArray<FTreasureWeight> PossibleRewarders;
    
    UPROPERTY(Export, Transient)
    UTreasureRewarder* TreasureRewarder;
    
private:
    UPROPERTY()
    bool PreventLatejoiners;
    
public:
    UFUNCTION(BlueprintCallable)
    void TestAwardTreasure();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPreventFurtherLatejoiners(bool prevent);
    
    UFUNCTION(BlueprintCallable)
    void SetCanCollectTreasure(bool canCollect);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LastJoiner();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Collectors();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerLatejoined(APlayerCharacter* joiner);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerCollectedTreasure(APlayerCharacter* collector, EInputKeys Key);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerCollectedTreasure(APlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisableChestLocally();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContainerActivated();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetPreventFurtherLatejoiners() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATreasureContainer();
};

