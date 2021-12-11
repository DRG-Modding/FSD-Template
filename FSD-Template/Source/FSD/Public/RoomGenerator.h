#pragma once
#include "CoreMinimal.h"
#include "RoomGeneratorBase.h"
#include "RoomGenerator.generated.h"

class URoomFeature;

UCLASS()
class URoomGenerator : public URoomGeneratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    TArray<URoomFeature*> RoomFeatures;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URoomFeature*> GetAllRoomFeatures() const;
    
    URoomGenerator();
};

