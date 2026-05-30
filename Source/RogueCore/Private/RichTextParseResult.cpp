#include "RichTextParseResult.h"

FRichTextParseResult::FRichTextParseResult() {
    this->UnformattedLength = 0;
    this->SourceText = FText::GetEmpty();
    this->UnformattedString = FString();
}

