#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "OldZiplineSalvage.generated.h"

class AZipLineProjectile;

UCLASS()
class FSD_API AOldZiplineSalvage : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AZipLineProjectile> ZiplineProjectileClass;
    
protected:
    UPROPERTY(EditAnywhere)
    FVector RelativeDestinationLocation;
    
    UFUNCTION(BlueprintCallable)
    void OnMatchStarted();
    
public:
    AOldZiplineSalvage();
};

