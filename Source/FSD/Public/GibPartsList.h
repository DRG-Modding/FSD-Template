#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GibPartsList.generated.h"

class UMaterialInstance;
class UNiagaraComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class UGibPartsList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> GibMeshes;
    
    UGibPartsList();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetGibMeshesAndMaterialsOnFX(UNiagaraComponent* ns, UMaterialInstance* Material, float Scale) const;
    
};

