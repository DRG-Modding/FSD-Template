#pragma once
#include "CoreMinimal.h"
#include "RoomGeneratorBase.h"
#include "RoomGenerator.generated.h"

class URoomFeature;

UCLASS()
class URoomGenerator : public URoomGeneratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URoomFeature*> RoomFeatures;
    
    URoomGenerator();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URoomFeature*> GetAllRoomFeatures() const;
    
};

