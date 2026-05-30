#include "BlueprintFriend.h"

FBlueprintFriend::FBlueprintFriend() {
    this->OnlineStatus = EFriendOnlineStatusEnum::Online;
    this->DisplayName = FString();
    this->RealName = FString();
    this->UniqueNetId = FString();
}

