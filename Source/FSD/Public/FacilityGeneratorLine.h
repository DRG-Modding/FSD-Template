#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FacilityGeneratorLine.generated.h"

class ATetherStation;
class USplineComponent;
class UMaterialInterface;
class USplineDecoratorComponent;
class UStaticMesh;

UCLASS()
class FSD_API AFacilityGeneratorLine : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTransform StartTransform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FTransform> EndTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffsetMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffsetMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSegmentLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarveRadius;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineDecoratorComponent* SplineDecorator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> LineMeshPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialConnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MaterialUnconnected;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    ATetherStation* Station;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* MeshInstance;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_Path, meta=(AllowPrivateAccess=true))
    TArray<FVector> ReplicatedPath;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_Connected, meta=(AllowPrivateAccess=true))
    bool Connected;
    
public:
    AFacilityGeneratorLine();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetConnected(bool InConnected);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginPathFinding();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Path();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Connected();
    
};

