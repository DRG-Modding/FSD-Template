#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SaveGameIDInterface.h"
#include "UObject/NoExportTypes.h"
#include "CategoryID.generated.h"

UCLASS()
class FSD_API UCategoryID : public UDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
public:
    UCategoryID();
    
    // Fix for true pure virtual functions not being implemented
};

