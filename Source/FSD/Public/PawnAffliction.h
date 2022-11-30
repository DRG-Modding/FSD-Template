#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SoftReferenceProvider.h"
#include "UObject/NoExportTypes.h"
#include "PawnAffliction.generated.h"

class UTexture2D;
class UAfflictionEffect;
class UPlayerAfflictionOverlay;
class UDialogDataAsset;

UCLASS(Blueprintable)
class UPawnAffliction : public UDataAsset, public ISoftReferenceProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor IconColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor IconColorBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPlayerIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowOnEnemyHealthbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerAfflictionOverlay* AfflictionOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UAfflictionEffect>> EnemyEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UAfflictionEffect>> PlayerFirstPersonEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UAfflictionEffect>> PlayerThirdPersonEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* PlayerShoutOnBegin;
    
public:
    UPawnAffliction();
    
    // Fix for true pure virtual functions not being implemented
};

