#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DetailedTagQuery.h"
#include "DetailedTagSet.h"
#include "DetailedTagLibrary.generated.h"

class UDetailedTag;
class UDetailedTagCategory;

UCLASS(Blueprintable)
class UDetailedTagLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDetailedTagLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TagsMatch(const TMap<UDetailedTagCategory*, FDetailedTagSet>& SearchExpr, const FDetailedTagSet& Tags);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TagSetToText(const FDetailedTagSet& InSet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TagQueryMatches(const FDetailedTagQuery& InQuery, const FDetailedTagSet& InTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDetailedTagQuery MakeTagQueryFromArray(const TArray<UDetailedTag*>& InTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDetailedTagQuery MakeTagQuery(const FDetailedTagSet& InTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDetailedTagSet MakeDetailedTagSet(const TArray<UDetailedTag*>& InTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSetEmpty(const FDetailedTagSet& InSet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<UDetailedTagCategory*, FDetailedTagSet> GetCategoryMap(const FDetailedTagSet& InSet);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UDetailedTag*> GetArraySorted(const FDetailedTagSet& InSet, bool InSortByCategory);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UDetailedTag*> GetArray(const FDetailedTagSet& InSet);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Contains(const FDetailedTagSet& InSet, UDetailedTag* InTag);
    
    UFUNCTION(BlueprintCallable)
    static void AppendSet(UPARAM(Ref) FDetailedTagSet& InSet1, const FDetailedTagSet& InSet2);
    
    UFUNCTION(BlueprintCallable)
    static void AppendArray(UPARAM(Ref) FDetailedTagSet& InSet, const TArray<UDetailedTag*>& inArray);
    
};

