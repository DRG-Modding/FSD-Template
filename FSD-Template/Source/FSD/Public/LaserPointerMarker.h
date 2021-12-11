#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaserPointerData.h"
#include "LaserPointerMarker.generated.h"

class UPrimitiveComponent;
class APlayerCharacter;
class UTerrainMaterial;

UCLASS(Abstract)
class ALaserPointerMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FLaserPointerData LookAtData;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    AActor* LookAtActor;
    
    UPROPERTY(BlueprintReadOnly, Export, Replicated, Transient)
    UPrimitiveComponent* LookAtComponent;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    UTerrainMaterial* LookAtTerrainMaterial;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetCharacter() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ALaserPointerMarker();
};

