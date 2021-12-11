#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "MissionMutator.generated.h"

class UMutator;
class URunningMissionBP;
class UObjective;
class UTexture2D;

UCLASS(BlueprintType)
class UMissionMutator : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<URunningMissionBP> MissionBP;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UObjective>> BannedObjectives;
    
    UPROPERTY(EditAnywhere)
    TArray<UMutator*> Mutators;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText RichDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
public:
    UMissionMutator();
};

