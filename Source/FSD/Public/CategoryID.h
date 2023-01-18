#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameIDInterface.h"
#include "CategoryID.generated.h"

UCLASS(Blueprintable)
class FSD_API UCategoryID : public UDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
public:
    UCategoryID();
    
    // Fix for true pure virtual functions not being implemented
};

