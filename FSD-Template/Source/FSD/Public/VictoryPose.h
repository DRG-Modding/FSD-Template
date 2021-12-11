#pragma once
#include "CoreMinimal.h"
#include "SavablePrimaryDataAsset.h"
#include "VictoryPose.generated.h"

class AActor;
class UObject;
class UAnimSequence;
class UPlayerCharacterID;

UCLASS(BlueprintType)
class UVictoryPose : public USavablePrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
protected:
    UPROPERTY(EditAnywhere)
    bool UnlockedFromStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<UAnimSequence>> Walks;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> pose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> Prop_Actor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> Prop_Walk;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> Prop_Pose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> Prop_Idle;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Unlock(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable)
    void ResetUnlock(UObject* WorldContextObject, UPlayerCharacterID* characterID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockedNotFromStart(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlocked(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Equip(UObject* WorldContextObject, UPlayerCharacterID* characterID) const;
    
    UVictoryPose();
};

