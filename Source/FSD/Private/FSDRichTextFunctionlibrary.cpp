#include "FSDRichTextFunctionlibrary.h"

void UFSDRichTextFunctionlibrary::SplitRichText(const FRichTextParseResult& Parser, int32 SplitIndex, bool bKeepLeftFormatting, bool bKeepRightFormatting, FText& OutLeftText, FText& OutRightText) {
}

FRichTextParseResult UFSDRichTextFunctionlibrary::ParseRichText(const FText& InText) {
    return FRichTextParseResult{};
}

FText UFSDRichTextFunctionlibrary::MidRichText(const FRichTextParseResult& Parser, int32 StartIndex, int32 count, bool bKeepFormatting) {
    return FText::GetEmpty();
}

UFSDRichTextFunctionlibrary::UFSDRichTextFunctionlibrary() {
}

