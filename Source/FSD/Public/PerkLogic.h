#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PerkLogic.generated.h"

class APlayerCharacter;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSD_API UPerkLogic : public UActorComponent {
    GENERATED_BODY()
public:
    UPerkLogic();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLogic(int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerCharacter* GetCharacter() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetAdditionalText(int32 Rank) const;
    
};

