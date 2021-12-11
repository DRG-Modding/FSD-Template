#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.h"
#include "ShowroomController.h"
#include "CharacterShowroomController.generated.h"

class APlayerCharacter;
class UObject;
class UCharacterShowroomController;
class UPlayerCharacterID;
class UShowroomCameraKey;

UCLASS(Blueprintable)
class UCharacterShowroomController : public UShowroomController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* CharacterInstance;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_CharacterShown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipWeapon(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable)
    static UCharacterShowroomController* DisplayCharacter(UObject* WorldContextObject, UPlayerCharacterID* characterID, UShowroomCameraKey* Key);
    
    UCharacterShowroomController();
};

