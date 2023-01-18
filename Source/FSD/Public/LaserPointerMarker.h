#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LaserPointerData.h"
#include "LaserPointerMarker.generated.h"

class APlayerCharacter;
class UPrimitiveComponent;
class UTerrainMaterial;

UCLASS(Abstract, Blueprintable)
class ALaserPointerMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaserPointerData LookAtData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* LookAtActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* LookAtComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* LookAtTerrainMaterial;
    
    ALaserPointerMarker();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetCharacter() const;
    
};

