#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DefaultPickaxeParts.h"
#include "Engine/DataAsset.h"
#include "PickaxeSettings.generated.h"

class UItemID;
class UPlayerCharacterID;
class UPickaxePart;
class APickaxePreviewActor;
class UAnimMontage;

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

