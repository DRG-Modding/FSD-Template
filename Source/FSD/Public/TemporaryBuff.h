#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TemporaryBuff.generated.h"

class UTexture2D;
class APlayerCharacter;
class AFSDPlayerController;

UCLASS(Abstract, Blueprintable)
class UTemporaryBuff : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
public:
    UTemporaryBuff();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DeActivateBuff(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ActivateBuffOnPlayer(APlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ActivateBuffOnController(AFSDPlayerController* Player) const;
    
};

