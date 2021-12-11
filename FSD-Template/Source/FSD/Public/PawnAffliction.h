#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "PawnAffliction.generated.h"

class UAfflictionEffect;
class UPlayerAfflictionOverlay;
class UTexture2D;
class UDialogDataAsset;

UCLASS(BlueprintType)
class UPawnAffliction : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor IconColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor IconColorBG;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowPlayerIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowOnEnemyHealthbar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPlayerAfflictionOverlay* AfflictionOverlay;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UAfflictionEffect>> EnemyEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UAfflictionEffect>> PlayerFirstPersonEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UAfflictionEffect>> PlayerThirdPersonEffects;
    
    UPROPERTY(EditAnywhere)
    UDialogDataAsset* PlayerShoutOnBegin;
    
public:
    UPawnAffliction();
};

