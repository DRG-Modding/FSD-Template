#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LegacySettings.generated.h"

class USkeletalMesh;

UCLASS()
class FSD_API ULegacySettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<USkeletalMesh>> ArmorMeshes;
    
    ULegacySettings();
};

