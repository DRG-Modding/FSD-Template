#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LegacySettings.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class FSD_API ULegacySettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeletalMesh>> ArmorMeshes;
    
    ULegacySettings();
};

