#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DJSONArray.generated.h"

class UDJSONArray;
class UDJSONObject;

UCLASS(Blueprintable)
class DSTELEMETRY_API UDJSONArray : public UObject {
    GENERATED_BODY()
public:
    UDJSONArray();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDJSONArray* CreateJSONArray(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool Clear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString AsString() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddStringItem(const FString& Item);
    
    UFUNCTION(BlueprintCallable)
    bool AddStringArrayItem(const TArray<FString>& Item);
    
    UFUNCTION(BlueprintCallable)
    bool AddJSONObjectItem(const UDJSONObject* Item);
    
    UFUNCTION(BlueprintCallable)
    bool AddJSONObjectArrayItem(const TArray<UDJSONObject*>& Item);
    
    UFUNCTION(BlueprintCallable)
    bool AddJSONArrayItem(const UDJSONArray* Item);
    
    UFUNCTION(BlueprintCallable)
    bool AddJSONArrayArrayItem(const TArray<UDJSONArray*>& Item);
    
    UFUNCTION(BlueprintCallable)
    bool AddIntegerItem(const int32 Item);
    
    UFUNCTION(BlueprintCallable)
    bool AddIntegerArrayItem(const TArray<int32>& Item);
    
    UFUNCTION(BlueprintCallable)
    bool AddFloatItem(const float Item);
    
    UFUNCTION(BlueprintCallable)
    bool AddFloatArrayItem(const TArray<float>& Item);
    
    UFUNCTION(BlueprintCallable)
    bool AddEmptyItem();
    
    UFUNCTION(BlueprintCallable)
    bool AddBooleanItem(const bool Item);
    
    UFUNCTION(BlueprintCallable)
    bool AddBooleanArrayItem(const TArray<bool>& Item);
    
};

