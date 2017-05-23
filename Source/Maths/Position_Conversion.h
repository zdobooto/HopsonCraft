#ifndef POSITION_CONVERSION_H_INCLUDED
#define POSITION_CONVERSION_H_INCLUDED

#include "../Glm_Common.h"
#include "../World/Chunk/CPosition.h"
#include "../World/Block/Block_Position.h"

namespace Maths {
namespace Convert
{
    Chunk::Chunklet_Position    worldToChunkletPosition      (const Vector3& position);
    Chunk::Position             worldToChunkPosition         (const Vector3& position);

    Block::Position worldToSectionBlockPosition         (const Vector3& position);
    Block::Position worldToChunkBlockPosition           (const Vector3& position);
    Block::Position chunkBlockToSectionBlockPosition    (const Block::Position& position);
}
}

#endif // POSITION_CONVERSION_H_INCLUDED
