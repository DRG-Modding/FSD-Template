#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SaveGameIDInterface.h"
#include "UObject/NoExportTypes.h"
#include "SavableDataAsset.generated.h"

class UBuildRestriction;

UCLASS(BlueprintType)
class USavableDataAsset : public UDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(EditAnywhere)
    UBuildRestriction* BuildRestriction;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetSavegameID() const;
    
    USavableDataAsset();
    
    // Fix for true pure virtual functions not being implemented
};

