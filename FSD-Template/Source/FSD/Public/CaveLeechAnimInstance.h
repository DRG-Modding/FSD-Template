#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CaveLeechAnimInstance.generated.h"

class USceneComponent;
class ACaveLeech;

UCLASS(NonTransient)
class UCaveLeechAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float HeadOffset;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ACaveLeech* CaveLeech;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    USceneComponent* CaveLeechHead;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator BaseRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector HeadLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator HeadRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIdle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTracking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPulling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRetracting;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDead;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bFrozen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBiting;
    
public:
    UCaveLeechAnimInstance();
};

