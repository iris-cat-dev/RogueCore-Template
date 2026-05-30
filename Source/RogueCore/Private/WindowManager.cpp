#include "WindowManager.h"
#include "Templates/SubclassOf.h"

UWindowManager::UWindowManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AudioWindowOpen = nullptr;
}

void UWindowManager::SetSingletonWidgetVisibility(TSubclassOf<UUserWidget> WidgetClass, ESlateVisibility Visibility) {
}

void UWindowManager::ResetHUD() {
}

void UWindowManager::ReplaceWindow(UWindowWidget* Window) {
}

UWindowWidget* UWindowManager::OpenWindowFromSoftClass(TSoftClassPtr<UWindowWidget> WindowClass, int32 ZOrder, bool ShowCursor) {
    return NULL;
}

UWindowWidget* UWindowManager::OpenWindowFromClass(TSubclassOf<UWindowWidget> WindowClass, int32 ZOrder, bool ShowCursor) {
    return NULL;
}

void UWindowManager::OpenWindow(UWindowWidget* Window, bool PlayAudio, bool ShowCursor) {
}

UWindowWidget* UWindowManager::OpenSingleUseWindow(TSubclassOf<UWindowWidget> WindowClass, int32 ZOrder) {
    return NULL;
}

void UWindowManager::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}

bool UWindowManager::IsWindowOpen(const UWindowWidget* Window) const {
    return false;
}

bool UWindowManager::IsTopWindow(UWindowWidget* Window) const {
    return false;
}

UUserWidget* UWindowManager::GetOrCreateSingletonWidget(TSubclassOf<UUserWidget> WidgetClass, bool& WidgetCreated) {
    return NULL;
}

UWindowWidget* UWindowManager::GetCurrentWindow() const {
    return NULL;
}

UWindowWidget* UWindowManager::CreateWindowFromSoftClass(TSoftClassPtr<UWindowWidget> WindowClass, int32 ZOrder) {
    return NULL;
}

UWindowWidget* UWindowManager::CreateWindowFromClass(TSubclassOf<UWindowWidget> WindowClass, int32 ZOrder) {
    return NULL;
}

void UWindowManager::CloseWindowClass(TSubclassOf<UWindowWidget> InWindowClass, bool InAllInstances) {
}

void UWindowManager::CloseWindow(UWindowWidget* Window) {
}

void UWindowManager::CloseTopWindow() {
}

void UWindowManager::CloseAllWindows() {
}

void UWindowManager::CenterCursor() {
}

bool UWindowManager::AnyWindowsOpen() const {
    return false;
}


