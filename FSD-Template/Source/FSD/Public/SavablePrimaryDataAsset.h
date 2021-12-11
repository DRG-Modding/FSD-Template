#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SaveGameIDInterface.h"
#include "UObject/NoExportTypes.h"
#include "SavablePrimaryDataAsset.generated.h"

class UBuildRestriction;

UCLASS()
class USavablePrimaryDataAsset : public UPrimaryDataAsset, public ISaveGameIDInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable)
    int32 BuildRestrictions;
    
    UPROPERTY(AssetRegistrySearchable)
    int32 PlatformRestrictions;
    
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(EditAnywhere)
    FGuid SaveGameID;
    
    UPROPERTY(EditAnywhere)
    UBuildRestriction* BuildRestriction;
    
public:
    USavablePrimaryDataAsset();
    
    // Fix for true pure virtual functions not being implemented
};

