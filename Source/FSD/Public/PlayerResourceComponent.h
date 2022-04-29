#pragma once
#include "CoreMinimal.h"
#include "ResourcesComponent.h"
#include "PlayerResourceComponent.generated.h"

class UPlayerResourceComponent;
class APlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerResourceComponent : public UResourcesComponent {
    GENERATED_BODY()
public:
    UPlayerResourceComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayerResourceComponent* GetFromPlayer(APlayerCharacter* PlayerCharacter);
    
};

