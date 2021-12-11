#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TetherStation.generated.h"

class USceneComponent;
class USkeletalMeshComponent;
class AFacilityGeneratorLine;

UCLASS()
class FSD_API ATetherStation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    USkeletalMeshComponent* BaseMesh;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AFacilityGeneratorLine> FacilityGeneratorLineType;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_AreGeneratorsReady)
    bool AreGeneratorsReady;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=Onrep_FacilityActive)
    bool FacilityActive;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnGeneratorLines(const FTransform& startL, const FTransform& startR, const TArray<FTransform>& endL, const TArray<FTransform>& endR, AFacilityGeneratorLine*& outLineL, AFacilityGeneratorLine*& outLineR);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGeneratorsReady(bool ready);
    
private:
    UFUNCTION(BlueprintCallable)
    void Onrep_FacilityActive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AreGeneratorsReady();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGeneratorsReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableShields();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ActivateFacility();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ATetherStation();
};

