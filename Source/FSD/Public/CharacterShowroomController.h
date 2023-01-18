#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.h"
#include "ShowroomController.h"
#include "CharacterShowroomController.generated.h"

class APlayerCharacter;
class UCharacterShowroomController;
class UObject;
class UPlayerCharacterID;
class UShowroomCameraKey;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCharacterShowroomController : public UShowroomController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* CharacterInstance;
    
public:
    UCharacterShowroomController();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_CharacterShown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipWeapon(EItemCategory Category);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCharacterShowroomController* DisplayCharacter(UObject* WorldContextObject, UPlayerCharacterID* characterID, UShowroomCameraKey* Key);
    
};

