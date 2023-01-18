#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BEELoaderSequence.h"
#include "BEESettings.generated.h"

class UBEEMissionTemplate;
class UDialogDataAsset;
class UMissionMutator;
class UMissionNameBank;
class UMissionWarning;
class UMutator;
class UUserWidget;

UCLASS(Blueprintable)
class UBEESettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBEEMissionTemplate* MissionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMutator*> BaseMutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionMutator*> Mutators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMissionWarning*> Warnings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDialogDataAsset*> BEEMissionCompleteShouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBEELoaderSequence> LoaderSequnces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionNameBank* DeepDiveNameBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> MissionBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> MissionEndScreen;
    
    UBEESettings();
};

