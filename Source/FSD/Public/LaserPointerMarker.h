#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaserPointerData.h"
#include "LaserPointerMarker.generated.h"

class UPrimitiveComponent;
class UTerrainMaterial;
class APlayerCharacter;

UCLASS(Abstract)
class ALaserPointerMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLaserPointerData LookAtData;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* LookAtActor;
    
    UPROPERTY(BlueprintReadWrite, Export, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* LookAtComponent;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* LookAtTerrainMaterial;
    
    ALaserPointerMarker();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetCharacter() const;
    
};

