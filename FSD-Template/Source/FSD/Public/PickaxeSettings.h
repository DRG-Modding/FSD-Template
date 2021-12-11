#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "DefaultPickaxeParts.h"
#include "PickaxeSettings.generated.h"

class UPickaxePart;
class UPlayerCharacterID;
class APickaxePreviewActor;
class UItemID;
class UAnimMontage;

UCLASS(BlueprintType)
class UPickaxeSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UPlayerCharacterID*, TSubclassOf<APickaxePreviewActor>> PickaxePreviewActors;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Salute_FP;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* Salute_TP;
    
protected:
    UPROPERTY(Transient)
    TArray<UPickaxePart*> Parts;
    
    UPROPERTY(EditAnywhere)
    TMap<UItemID*, FDefaultPickaxeParts> DefaultParts;
    
public:
    UPickaxeSettings();
};

