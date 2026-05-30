#include "FSDLoggingBlueprintLibrary.h"

UFSDLoggingBlueprintLibrary::UFSDLoggingBlueprintLibrary() {
}

void UFSDLoggingBlueprintLibrary::PrintText(const UObject* WorldContextObject, const FText InText, const FString& InCategory, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float duration, const FName Key) {
}

void UFSDLoggingBlueprintLibrary::PrintString(const UObject* WorldContextObject, const FString& InString, const FString& InCategory, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float duration, const FName Key) {
}

void UFSDLoggingBlueprintLibrary::PrintLogShipping(const UObject* WorldContextObject, const FString& InString, const FString& InCategory, const FName Key) {
}

void UFSDLoggingBlueprintLibrary::LogString(const FString& InString, const FString& InCategory, bool bPrintToLog) {
}


