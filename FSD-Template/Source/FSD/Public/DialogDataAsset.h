#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DialogStruct.h"
#include "DialogDataAsset.generated.h"

class UObject;
class USoundSubmixBase;

UCLASS(BlueprintType)
class UDialogDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Enabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AudioOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShoutDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShoutCoolDown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShoutChance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDialogStruct> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<USoundSubmixBase*> SubmixSends;
    
protected:
    UPROPERTY(Transient)
    TArray<int32> ShuffledIndices;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 SelectIndex(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SelectEntry(UObject* WorldContext, FDialogStruct& Dialog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDialogStruct GetShout(int32 Index) const;
    
    UDialogDataAsset();
};

