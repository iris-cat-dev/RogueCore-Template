#include "ChunckIDAndOffsetBox.h"

FChunckIDAndOffsetBox::FChunckIDAndOffsetBox() {
    this->ChunkId = FChunkId();
    this->minOffset = FChunkOffset();
    this->maxOffset = FChunkOffset();
}

