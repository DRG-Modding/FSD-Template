#pragma once
#include "CoreMinimal.h"
#include "FireCrackerInfo.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "HangingFireCracker.generated.h"

class UInstantUsable;
class UStaticMeshComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class AHangingFireCracker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstantUsable* Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SKMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFireCrackerInfo> CrackerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Crackers;
    
public:
    AHangingFireCracker();
protected:
    UFUNCTION(BlueprintCallable)
    void SetFireToCracker(const FVector& HitPos);
    
};

