#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TemporaryBuff.generated.h"

class UTexture2D;
class AFSDPlayerController;
class APlayerCharacter;

UCLASS(Abstract, BlueprintType)
class UTemporaryBuff : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Icon;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DeActivateBuff(AFSDPlayerController* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ActivateBuffOnPlayer(APlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ActivateBuffOnController(AFSDPlayerController* Player) const;
    
    UTemporaryBuff();
};

