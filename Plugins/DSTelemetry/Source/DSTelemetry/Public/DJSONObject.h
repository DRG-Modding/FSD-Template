#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DJSONObject.generated.h"

class UDJSONArray;
class UDJSONObject;

UCLASS(Blueprintable)
class DSTELEMETRY_API UDJSONObject : public UObject {
    GENERATED_BODY()
public:
    UDJSONObject();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDJSONObject* CreateJSONObject(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool Clear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString AsString() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddStringField(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddStringArrayField(const FString& Key, const TArray<FString>& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddJSONObjectField(const FString& Key, const UDJSONObject* Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddJSONObjectArrayField(const FString& Key, const TArray<UDJSONObject*>& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddJSONArrayField(const FString& Key, const UDJSONArray* Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddJSONArrayArrayField(const FString& Key, const TArray<UDJSONArray*>& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddIntegerField(const FString& Key, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddIntegerArrayField(const FString& Key, const TArray<int32>& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddFloatField(const FString& Key, const float Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddFloatArrayField(const FString& Key, const TArray<float>& Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddEmptyField(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    bool AddBooleanField(const FString& Key, const bool Value);
    
    UFUNCTION(BlueprintCallable)
    bool AddBooleanArrayField(const FString& Key, const TArray<bool>& Value);
    
};

