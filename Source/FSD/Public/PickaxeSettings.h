#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DefaultPickaxeParts.h"
#include "Templates/SubclassOf.h"
#include "PickaxeSettings.generated.h"

class APickaxePreviewActor;
class UAnimMontage;
class UItemID;
class UPickaxePart;
class UPlayerCharacterID;

UCLASS(Blueprintable)
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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPickaxePart*> Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UItemID*, FDefaultPickaxeParts> DefaultParts;
    
public:
    UPickaxeSettings();
};

