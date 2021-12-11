#pragma once
#include "CoreMinimal.h"
#include "GDResources.generated.h"

class UGemResourceData;
class UResourceData;

USTRUCT(BlueprintType)
struct FGDResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* CreditsResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* MOMResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* GoldResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* NitraResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* HollomiteResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* MagniteResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* NeromiteResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* QuantriteResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* UmaniteResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* CropaniteResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* DystrumResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* IronResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* EnorResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* BismorResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* OilShaleResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* Barly1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* Barly2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* Barly3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* Barly4;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGemResourceData* JadizResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGemResourceData* BittergemResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGemResourceData* MotherlodeGemResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* RedSugarResource;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UResourceData* BlankSchematics;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<UResourceData*> CraftingResources;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<UResourceData*> AllResources;
    
    FSD_API FGDResources();
};

