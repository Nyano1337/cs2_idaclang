#include "stdint.h"

typedef int8_t int8;
typedef uint8_t uint8;
typedef int16_t int16;
typedef uint16_t uint16;
typedef int32_t int32;
typedef uint32_t uint32;
typedef int64_t int64;
typedef uint64_t uint64;
typedef float float32;
typedef double float64;

class CBaseModelEntity;

class alignas(8) VPhysicsCollisionAttribute_t
{
	void* __vftable;
public:
	uint64 m_nInteractsAs;
	uint64 m_nInteractsWith;
	uint64 m_nInteractsExclude;
	uint32 m_nEntityId;
	uint32 m_nOwnerId;
	uint16 m_nHierarchyId;
	uint8 m_nCollisionGroup;
	uint8 m_nCollisionFunctionMask;
};

class alignas(4) Vector
{
	uint8 pad_0000[12];
};

enum class SolidType_t : uint8
{
	SOLID_NONE = 0,
	SOLID_BSP = 1,
	SOLID_BBOX = 2,
	SOLID_OBB = 3,
	SOLID_SPHERE = 4,
	SOLID_POINT = 5,
	SOLID_VPHYSICS = 6,
	SOLID_CAPSULE = 7,
	SOLID_LAST = 8,
};

enum class SurroundingBoundsType_t : uint8
{
	USE_OBB_COLLISION_BOUNDS = 0,
	USE_BEST_COLLISION_BOUNDS = 1,
	USE_HITBOXES = 2,
	USE_SPECIFIED_BOUNDS = 3,
	USE_GAME_CODE = 4,
	USE_ROTATION_EXPANDED_BOUNDS = 5,
	USE_ROTATION_EXPANDED_ORIENTED_BOUNDS = 6,
	USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 7,
	USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 8,
	SURROUNDING_TYPE_BIT_COUNT = 3,
};

class alignas(8) CCollisionProperty
{
	void* __vftable;
	CBaseModelEntity* m_pOuter;
public:
	VPhysicsCollisionAttribute_t m_collisionAttribute;
	Vector m_vecMins;
	Vector m_vecMaxs;
private:
	uint8 pad_0058[2];
public:
	uint8 m_usSolidFlags;
	SolidType_t m_nSolidType;
	uint8 m_triggerBloat;
	SurroundingBoundsType_t m_nSurroundType;
	uint8 m_CollisionGroup;
	uint8 m_nEnablePhysics;
	float32 m_flBoundingRadius;
	Vector m_vecSpecifiedSurroundingMins;
	Vector m_vecSpecifiedSurroundingMaxs;
	Vector m_vecSurroundingMaxs;
	Vector m_vecSurroundingMins;
	Vector m_vCapsuleCenter1;
	Vector m_vCapsuleCenter2;
	float32 m_flCapsuleRadius;
};

