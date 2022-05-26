#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DialogStruct.h"
#include "DialogDataAsset.generated.h"

class USoundSubmixBase;
class UObject;

UCLASS(Blueprintable)
class UDialogDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AudioOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SelectUsingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoutDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoutCoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoutChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogStruct> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundSubmixBase*> SubmixSends;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> Playlist;
    
public:
    UDialogDataAsset();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 SelectIndex(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SelectEntry(UObject* WorldContext, FDialogStruct& Dialog);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDialogStruct GetShout(int32 Index) const;
    
};

