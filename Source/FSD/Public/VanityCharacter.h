#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "VanityCharacter.generated.h"

class UHeadVanityItem;
class UChildActorComponent;
class UMaterialInterface;
class UAnimSequenceBase;
class USkinColorVanityItem;
class USideburnsVanityItem;
class USkeletalMeshComponent;
class UBeardColorVanityItem;
class UEyeBrowsVanityItem;
class UMoustacheVanityItem;
class UBeardVanityItem;
class UArmorVanityItem;
class UArmorMaterialVanityItem;
class AItem;
class UItemSkin;

UCLASS()
class AVanityCharacter : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UChildActorComponent* ChildActorComponent;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* Animation;
    
    UPROPERTY(EditAnywhere)
    USkinColorVanityItem* skinColor;
    
    UPROPERTY(EditAnywhere)
    UBeardColorVanityItem* BeardColor;
    
    UPROPERTY(EditAnywhere, Instanced)
    UBeardColorVanityItem* DynamicBeardColor;
    
    UPROPERTY(EditAnywhere)
    UHeadVanityItem* Head;
    
    UPROPERTY(EditAnywhere)
    UEyeBrowsVanityItem* EyeBrows;
    
    UPROPERTY(EditAnywhere)
    USideburnsVanityItem* Sideburns;
    
    UPROPERTY(EditAnywhere)
    UMoustacheVanityItem* Moustache;
    
    UPROPERTY(EditAnywhere)
    UBeardVanityItem* Beard;
    
    UPROPERTY(EditAnywhere)
    UArmorVanityItem* Armor;
    
    UPROPERTY(EditAnywhere)
    UArmorMaterialVanityItem* ArmorColor;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* BodyMesh;
    
    UPROPERTY(EditAnywhere)
    UBeardColorVanityItem* DefaultHairColor;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DefaultArmorMaterial;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AItem> itemClass;
    
    UPROPERTY(EditAnywhere)
    UItemSkin* Framework;
    
    UPROPERTY(EditAnywhere)
    UItemSkin* Paintjob;
    
public:
    UFUNCTION(BlueprintCallable)
    void DisplayVanity();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Clean();
    
public:
    AVanityCharacter();
};

