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
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 BuildRestrictions;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 PlatformRestrictions;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDangerousSaveGameIDEditing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBuildRestriction* BuildRestriction;
    
public:
    USavablePrimaryDataAsset();
    
    // Fix for true pure virtual functions not being implemented
};

