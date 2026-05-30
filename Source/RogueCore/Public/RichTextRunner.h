#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RichTextRunner.generated.h"

class UDataTable;
class URichTextRunnerInternal;

UCLASS(Blueprintable, EditInlineNew)
class URichTextRunner : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TextStyleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextRunnerInternal* InternalRichText;
    
public:
    URichTextRunner();

    UFUNCTION(BlueprintCallable)
    void SetTextStyleSet(UDataTable* NewTextStyleSet);
    
    UFUNCTION(BlueprintCallable)
    void SetText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetTextStyleSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
};

