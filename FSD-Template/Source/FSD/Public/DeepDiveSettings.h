#pragma once
#include "CoreMinimal.h"
#include "DeepDiveLoaderSequence.h"
#include "Engine/DataAsset.h"
#include "DeepDiveSettings.generated.h"

class UMutator;
class UMissionWarning;
class UMissionMutator;
class UDeepDiveTemplate;
class UMissionNameBank;
class UDialogDataAsset;

UCLASS()
class UDeepDiveSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDeepDiveTemplate* NormalTemplate;
    
    UPROPERTY(EditAnywhere)
    UDeepDiveTemplate* HardTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<UMutator*> BaseMutators;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionMutator*> Mutators;
    
    UPROPERTY(EditAnywhere)
    TArray<UMissionWarning*> Warnings;
    
    UPROPERTY(EditAnywhere)
    TArray<UDialogDataAsset*> DeepDiveMissionCompleteShouts;
    
    UPROPERTY(EditAnywhere)
    TArray<FDeepDiveLoaderSequence> LoaderSequnces;
    
    UPROPERTY(EditAnywhere)
    UMissionNameBank* DeepDiveNameBank;
    
    UDeepDiveSettings();
};

