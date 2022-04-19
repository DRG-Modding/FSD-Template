#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "ESchematicType.h"
#include "SchematicType.h"
#include "SchematicSettings.generated.h"

class UItemSkinSchematicCollection;
class USchematic;
class UDataTable;
class UOverclockBank;
class USchematicBank;
class USchematicBankBase;
class USchematicCategory;
class USchematicPricingTier;
class USchematicRarity;

UCLASS(BlueprintType)
class USchematicSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PricingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematic* BlankSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<USchematicBank*> SchematicBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UOverclockBank*> OverclockBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UItemSkinSchematicCollection*> SkinSchematicCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<USchematicBankBase*> VanitySchematicBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESchematicType, FSchematicType> SchematicTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicBank* EndlessSchematics;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TSet<USchematicCategory*> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USchematicCategory*> OverclockCategories;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USchematicCategory*> VanityCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USchematicCategory*> EndlessCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicPricingTier* OverclockPricingTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USchematicPricingTier*> VanityPricingTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USchematicRarity*> VanityRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USchematicRarity*> OverclockRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USchematicRarity*> EndlessRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* VanityCatHeadWear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* VanityCatMoustache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* VanityCatBeard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* VanityCatArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* VanityCatEyebrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* VanityCatHairColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* VanityCatSideburn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* VanityCatSkinColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USchematicCategory* VanityCatVictoryPose;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, USchematic*> AllSchematicsMap;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TSet<USchematic*> AllSchematics;
    
public:
    USchematicSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ValidateVanitySchematics() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSchematicType GetSchematicTypeData(ESchematicType InType);
    
    UFUNCTION(BlueprintCallable)
    TSet<USchematic*> GetSchematics() const;
    
};

