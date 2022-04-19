#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "DefaultPickaxeParts.h"
#include "PickaxeSettings.generated.h"

class UPickaxePart;
class UAnimMontage;
class UPlayerCharacterID;
class APickaxePreviewActor;
class UItemID;

UCLASS(BlueprintType)
class UPickaxeSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPlayerCharacterID*, TSubclassOf<APickaxePreviewActor>> PickaxePreviewActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Salute_FP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Salute_TP;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPickaxePart*> Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UItemID*, FDefaultPickaxeParts> DefaultParts;
    
public:
    UPickaxeSettings();
};

