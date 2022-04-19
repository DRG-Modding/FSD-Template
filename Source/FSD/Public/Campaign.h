#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ECampaignType.h"
#include "ECampaignMutators.h"
#include "Campaign.generated.h"

class UTexture2D;
class UCampaignMission;
class UCampaignRequirement;
class UPlayerCharacterID;
class UDifficultySetting;
class AFSDPlayerController;
class UMissionStat;
class UGameActivityAssignmentType;
class UCampaign;
class APlayerController;

UCLASS(Abstract, BlueprintType)
class FSD_API UCampaign : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UCampaignMission*> missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UCampaignRequirement*> Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UCampaignRequirement*> VisibilityRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerCharacterID* RequiredCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDifficultySetting*> RestrictedToDifficulties;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanAbort;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitlePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardFlavorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Picture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECampaignType campaigntype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMissionStat* CampaignCompletedMissionStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameActivityAssignmentType* CampaignActivity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECampaignMutators Mutators;
    
public:
    UCampaign();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCampaignComplete(UObject* WorldContext, TSubclassOf<UCampaign> Campaign);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCampaign* GetReference(TSubclassOf<UCampaign> Campaign);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCampaignMission* GetPreviousMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetPicture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetCampaignTitle(TSubclassOf<UCampaign> Campaign);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCampaignMission* GetActiveMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartCampaign(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSeeCampaign(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreRestrictionsMet(AFSDPlayerController* Player, UDifficultySetting* optionalDifficulty) const;
    
};

