#pragma once
#include "CoreMinimal.h"
#include "FloatPerkComponent.h"
#include "Templates/SubclassOf.h"
#include "BeastMasterComponent.generated.h"

class AFSDPawn;
class APlayerCharacter;
class UActorComponent;
class UDamageComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBeastMasterComponent : public UFloatPerkComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowCanCharmIcon;
    
    UBeastMasterComponent();
    UFUNCTION(BlueprintCallable)
    void SetDamage(UDamageComponent* cmp, float dmg);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* AddPetComponent(TSubclassOf<UActorComponent> ComponentClass, AFSDPawn* targetPet, APlayerCharacter* petOwner);
    
};

