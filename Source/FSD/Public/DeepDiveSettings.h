#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DeepDiveLoaderSequence.h"
#include "DeepDiveSettings.generated.h"

class UDeepDiveTemplate;
class UDialogDataAsset;
class UMissionMutator;
class UMissionNameBank;
class UMissionWarning;
class UMutator;
class UUserWidget;

UCLASS(Blueprintable)
class UDeepDiveSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeepDiveTemplate* NormalTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeepDiveTemplate* HardTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> BaseMutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionMutator*> Mutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionWarning*> Warnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDialogDataAsset*> DeepDiveMissionCompleteShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeepDiveLoaderSequence> LoaderSequnces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionNameBank* DeepDiveNameBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> MissionBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> MissionEndScreen_Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> MissionEndScreen_Failure;
    
    UDeepDiveSettings();
};

