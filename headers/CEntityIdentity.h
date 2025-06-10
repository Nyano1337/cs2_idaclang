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

class alignas(8) CUtlSymbolLarge
{
	uint8 pad_0000[8];
};

class alignas(4) WorldGroupId_t
{
	uint8 pad_0000[4];
};

class alignas(4) ChangeAccessorFieldPathIndex_t
{
public:
	int32 m_Value;
};

class alignas(8) CEntityIdentity;
class alignas(8) CEntityIdentity
{
	uint8 pad_0000[20];
public:
	int32 m_nameStringableIndex;
	CUtlSymbolLarge m_name;
	CUtlSymbolLarge m_designerName;
private:
	uint8 pad_0028[8];
public:
	uint32 m_flags;
private:
	uint8 pad_0034[4];
public:
	WorldGroupId_t m_worldGroupId;
	uint32 m_fDataObjectTypes;
	ChangeAccessorFieldPathIndex_t m_PathIndex;
private:
	uint8 pad_0048[16];
public:
	CEntityIdentity* m_pPrev;
	CEntityIdentity* m_pNext;
	CEntityIdentity* m_pPrevByClass;
	CEntityIdentity* m_pNextByClass;
};

