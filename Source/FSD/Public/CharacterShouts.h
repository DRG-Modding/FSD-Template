#pragma once
#include "CoreMinimal.h"
#include "CharacterShouts.generated.h"

class UDialogDataAsset;

USTRUCT(BlueprintType)
struct FCharacterShouts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* Attention;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* Follow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* standingDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* Downed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* RequestRevive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* Revived;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* Resupply;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* FriendlyFire;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* KillCry;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* Dead;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* Cheating;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ResourceFull;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ResourceFullNoDonkey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* CallDonkey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* CallDonkey_NotInMission;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* Depositing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* DepositingNoDonkey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* OutOfAmmo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* Reloading;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* CharacterSelected;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* UpgradeBought;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* WaitingInDropPod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* Carrying;
    
    FSD_API FCharacterShouts();
};

