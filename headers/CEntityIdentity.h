#include "stdint.h"
#include "tier1.h"

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

typedef CUtlStringToken WorldGroupId_t;
typedef uint32 SpawnGroupHandle_t;

class alignas(4) ChangeAccessorFieldPathIndex_t
{
public:
	int32 m_Value;
};

class CEntityInstance;
class CEntityClass;

enum EntityFlags_t : uint32 {
	EF_IS_INVALID_EHANDLE = 0x1,
	EF_SPAWN_IN_PROGRESS = 0x2,
	EF_IN_STAGING_LIST = 0x4,
	EF_IN_POST_DATA_UPDATE = 0x8,
	EF_DELETE_IN_PROGRESS = 0x10,
	EF_IN_STASIS = 0x20,
	EF_IS_ISOLATED_ALLOCATION_NETWORKABLE = 0x40,
	EF_IS_DORMANT = 0x80,
	EF_IS_PRE_SPAWN = 0x100,
	EF_MARKED_FOR_DELETE = 0x200,
	EF_IS_CONSTRUCTION_IN_PROGRESS = 0x400,
	EF_IS_ISOLATED_ALLOCATION = 0x800,
	EF_HAS_BEEN_UNSERIALIZED = 0x1000,
	EF_IS_SUSPENDED = 0x2000,
	EF_IS_ANONYMOUS_ALLOCATION = 0x4000,
	EF_SUSPEND_OUTSIDE_PVS = 0x8000,
};

class CEntityHandle
{
	union
	{
		uint32 m_Index;
		struct
		{
			uint32 m_EntityIndex : 15;
			uint32 m_Serial : 17;
		} m_Parts;
	};
};

class CEntityIdentity
{
public:
	CEntityInstance* m_pInstance; // 0x0
	CEntityClass* m_pClass; // 0x8
	CEntityHandle m_EHandle; // 0x10
	int32 m_nameStringableIndex; // 0x14	
	CUtlSymbolLarge m_name; // 0x18
	CUtlSymbolLarge m_designerName; // 0x20
private:
	uint64 m_hPublicScope; // 0x28 - CEntityPublicScriptScope
public:
	EntityFlags_t m_flags; // 0x30	
private:
	SpawnGroupHandle_t m_hSpawnGroup; // 0x34
public:
	WorldGroupId_t m_worldGroupId; // 0x38
	uint32 m_fDataObjectTypes; // 0x3c	
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40
private:
	void* m_pAttributes; // 0x48 - CUtlObjectAttributeTable<CEntityIdentity, CUtlStringToken>
	void* m_pRenderAttrs; // 0x50 - CRenderAttributesDoubleBuffered
public:
	CEntityIdentity* m_pPrev; // 0x58	
	CEntityIdentity* m_pNext; // 0x60	
	CEntityIdentity* m_pPrevByClass; // 0x68	
	CEntityIdentity* m_pNextByClass; // 0x70	
};

