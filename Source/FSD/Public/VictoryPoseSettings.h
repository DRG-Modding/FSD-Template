#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "VictoryPoseSettings.generated.h"

class AActor;
class UActorComponent;
class UTexture2D;
class UVictoryPose;

UCLASS(Blueprintable)
class UVictoryPoseSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GenericVictoryPoseIcon;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVictoryPose*> LoadedVictoryPoses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVictoryPose* RandomVictoryPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UActorComponent>> ModReferencesHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ModProxyHack;
    
public:
    UVictoryPoseSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UVictoryPose*> GetVictoryPoses() const;
    
};

