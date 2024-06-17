#include "DetailedTagLibrary.h"

UDetailedTagLibrary::UDetailedTagLibrary() {
}

bool UDetailedTagLibrary::TagsMatch(const TMap<UDetailedTagCategory*, FDetailedTagSet>& SearchExpr, const FDetailedTagSet& Tags) {
    return false;
}

FText UDetailedTagLibrary::TagSetToText(const FDetailedTagSet& InSet) {
    return FText::GetEmpty();
}

bool UDetailedTagLibrary::TagQueryMatches(const FDetailedTagQuery& InQuery, const FDetailedTagSet& InTags) {
    return false;
}

FDetailedTagQuery UDetailedTagLibrary::MakeTagQueryFromArray(const TArray<UDetailedTag*>& InTags) {
    return FDetailedTagQuery{};
}

FDetailedTagQuery UDetailedTagLibrary::MakeTagQuery(const FDetailedTagSet& InTags) {
    return FDetailedTagQuery{};
}

FDetailedTagSet UDetailedTagLibrary::MakeDetailedTagSet(const TArray<UDetailedTag*>& InTags) {
    return FDetailedTagSet{};
}

bool UDetailedTagLibrary::IsSetEmpty(const FDetailedTagSet& InSet) {
    return false;
}

TMap<UDetailedTagCategory*, FDetailedTagSet> UDetailedTagLibrary::GetCategoryMap(const FDetailedTagSet& InSet) {
    return TMap<UDetailedTagCategory*, FDetailedTagSet>();
}

TArray<UDetailedTag*> UDetailedTagLibrary::GetArraySorted(const FDetailedTagSet& InSet, bool InSortByCategory) {
    return TArray<UDetailedTag*>();
}

TArray<UDetailedTag*> UDetailedTagLibrary::GetArray(const FDetailedTagSet& InSet) {
    return TArray<UDetailedTag*>();
}

bool UDetailedTagLibrary::Contains(const FDetailedTagSet& InSet, UDetailedTag* InTag) {
    return false;
}

void UDetailedTagLibrary::AppendSet(FDetailedTagSet& InSet1, const FDetailedTagSet& InSet2) {
}

void UDetailedTagLibrary::AppendArray(FDetailedTagSet& InSet, const TArray<UDetailedTag*>& inArray) {
}


