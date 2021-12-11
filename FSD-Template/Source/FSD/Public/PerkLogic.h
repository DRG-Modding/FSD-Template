#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PerkLogic.generated.h"

class APlayerCharacter;

UCLASS(Abstract, Blueprintable)
class UPerkLogic : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLogic(int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetCharacter() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetAdditionalText(int32 Rank) const;
    
    UPerkLogic();
};

