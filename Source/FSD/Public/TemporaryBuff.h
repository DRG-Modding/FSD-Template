#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TemporaryBuff.generated.h"

class APlayerCharacter;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class UTemporaryBuff : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActivatesOnlyOnceWhenDrinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTodaysSpecialBuff;
    
public:
    UTemporaryBuff();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActivateOnlyWhenDrinking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DeActivateBuff(APlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ActivateBuff(APlayerCharacter* Player) const;
    
};

