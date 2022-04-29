#pragma once
#include "CoreMinimal.h"
#include "SavableDataAsset.h"
#include "EFSDAchievementType.h"
#include "FSDAchievement.generated.h"

class UObject;
class AFSDPlayerController;
class UFSDAchievement;

UCLASS(Blueprintable)
class UFSDAchievement : public USavableDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamAPIAchievementName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SteamAPIStatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString XboxAchievementID;
    
    UPROPERTY(EditAnywhere)
    float AchievementTargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDAchievementType AchievementType;
    
public:
    UFSDAchievement();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAchievementProgressForEntireServer(float Progress, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievementProgress(float Progress, const AFSDPlayerController* Player, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void ResetStatForAchievement(UFSDAchievement* AchievementToReset, const AFSDPlayerController* Player);
    
    UFUNCTION(BlueprintPure)
    float GetAchievementTargetValue();
    
};

