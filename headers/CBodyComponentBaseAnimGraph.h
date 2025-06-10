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

class alignas(8) CEntityComponent
{
	void* __vftable;
};

class alignas(16) CGameSceneNode;
class alignas(4) ChangeAccessorFieldPathIndex_t
{
public:
	int32 m_Value;
};

class alignas(4) CNetworkVarChainer
{
	uint8 pad_0000[32];
public:
	ChangeAccessorFieldPathIndex_t m_PathIndex;
private:
	uint8 pad_0024[4];
};

class alignas(8) CBodyComponent : public CEntityComponent
{
public:
	CGameSceneNode* m_pSceneNode;
private:
	uint8 pad_0010[16];
public:
	CNetworkVarChainer __m_pChainEntity;
private:
	uint8 pad_0048[8];
};

class alignas(16) CTransform
{
	uint8 pad_0000[32];
};

class alignas(8) CEntityInstance;
class alignas(4) CEntityHandle
{
	uint8 pad_0000[4];
};

class alignas(4) CUtlStringToken
{
	uint8 pad_0000[4];
};

class alignas(8) CGameSceneNodeHandle
{
	void* __vftable;
public:
	CEntityHandle m_hOwner;
	CUtlStringToken m_name;
};

class alignas(4) CNetworkedQuantizedFloat
{
	uint8 pad_0000[8];
};

class alignas(4) CNetworkOriginCellCoordQuantizedVector
{
	uint8 pad_0000[16];
public:
	uint16 m_cellX;
	uint16 m_cellY;
	uint16 m_cellZ;
	uint16 m_nOutsideWorld;
	CNetworkedQuantizedFloat m_vecX;
	CNetworkedQuantizedFloat m_vecY;
	CNetworkedQuantizedFloat m_vecZ;
};

class alignas(4) QAngle
{
	uint8 pad_0000[12];
};

class alignas(4) Vector
{
	uint8 pad_0000[12];
};

class alignas(16) CGameSceneNode
{
	void* __vftable;
	uint8 pad_0008[8];
public:
	CTransform m_nodeToWorld;
	CEntityInstance* m_pOwner;
	CGameSceneNode* m_pParent;
	CGameSceneNode* m_pChild;
	CGameSceneNode* m_pNextSibling;
private:
	uint8 pad_0050[40];
public:
	CGameSceneNodeHandle m_hParent;
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin;
private:
	uint8 pad_00B8[8];
public:
	QAngle m_angRotation;
	float32 m_flScale;
	Vector m_vecAbsOrigin;
	QAngle m_angAbsRotation;
	float32 m_flAbsScale;
	int16 m_nParentAttachmentOrBone;
	bool m_bDebugAbsOriginChanges;
	bool m_bDormant;
	bool m_bForceParentToBeNetworked;
	int8 m_bDirtyHierarchy : 1;
	int8 m_bDirtyBoneMergeInfo : 1;
	int8 m_bNetworkedPositionChanged : 1;
	int8 m_bNetworkedAnglesChanged : 1;
	int8 m_bNetworkedScaleChanged : 1;
	int8 m_bWillBeCallingPostDataUpdate : 1;
	int8 m_bBoneMergeFlex : 1;
	int8 m_nLatchAbsOrigin : 2;
	int8 m_bDirtyBoneMergeBoneToRoot : 1;
	uint8 m_nHierarchicalDepth;
	uint8 m_nHierarchyType;
	uint8 m_nDoNotSetAnimTimeInInvalidatePhysicsCount;
	CUtlStringToken m_name;
private:
	uint8 pad_00FC[60];
public:
	CUtlStringToken m_hierarchyAttachName;
	float32 m_flZOffset;
	float32 m_flClientLocalScale;
	Vector m_vRenderOrigin;
private:
	uint8 pad_0150[16];
};

class alignas(1) InfoForResourceTypeCModel;
template <typename A>
class CStrongHandle;

template<>
class alignas(8) CStrongHandle<InfoForResourceTypeCModel>
{
	uint8 pad_0000[8];
};

class alignas(8) CUtlSymbolLarge
{
	uint8 pad_0000[8];
};

class alignas(8) CModelState
{
	void* __vftable;
	uint8 pad_0008[152];
public:
	CStrongHandle<InfoForResourceTypeCModel> m_hModel;
	CUtlSymbolLarge m_ModelName;
private:
	uint8 pad_00B0[56];
public:
	bool m_bClientClothCreationSuppressed;
private:
	uint8 pad_00F0[168];
public:
	uint64 m_MeshGroupMask;
private:
	uint8 pad_01A0[122];
public:
	int8 m_nIdealMotionType;
	int8 m_nForceLOD;
	int8 m_nClothUpdateFlags;
private:
	uint8 pad_021D[16];
};

class alignas(16) CSkeletonInstance : public CGameSceneNode
{
	uint8 pad_0160[16];
public:
	CModelState m_modelState;
	bool m_bIsAnimationEnabled;
	bool m_bUseParentRenderBounds;
	bool m_bDisableSolidCollisionsForHierarchy;
	int8 m_bDirtyMotionType : 1;
	int8 m_bIsGeneratingLatchedParentSpaceState : 1;
	CUtlStringToken m_materialGroup;
	uint8 m_nHitboxSet;
private:
	uint8 pad_03A9[144];
};

class alignas(16) CBodyComponentSkeletonInstance : public CBodyComponent
{
public:
	CSkeletonInstance m_skeletonInstance;
};

class alignas(8) ISkeletonAnimationController
{
	void* __vftable;
};

class alignas(8) CSkeletonAnimationController : public ISkeletonAnimationController
{
public:
	CSkeletonInstance* m_pSkeletonInstance;
};

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<uint32>
{
	uint8 pad_0000[24];
};

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<uint8>
{
	uint8 pad_0000[24];
};

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<uint16>
{
	uint8 pad_0000[24];
};

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<int32>
{
	uint8 pad_0000[24];
};

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<uint64>
{
	uint8 pad_0000[24];
};

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<float32>
{
	uint8 pad_0000[24];
};

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<Vector>
{
	uint8 pad_0000[24];
};

class Quaternion;

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<Quaternion>
{
	uint8 pad_0000[24];
};

class CGlobalSymbol;

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<CGlobalSymbol>
{
	uint8 pad_0000[24];
};

class alignas(8) CAnimGraphNetworkedVariables
{
	void* __vftable;
public:
	CNetworkUtlVectorBase<uint32> m_PredNetBoolVariables;
	CNetworkUtlVectorBase<uint8> m_PredNetByteVariables;
	CNetworkUtlVectorBase<uint16> m_PredNetUInt16Variables;
	CNetworkUtlVectorBase<int32> m_PredNetIntVariables;
	CNetworkUtlVectorBase<uint32> m_PredNetUInt32Variables;
	CNetworkUtlVectorBase<uint64> m_PredNetUInt64Variables;
	CNetworkUtlVectorBase<float32> m_PredNetFloatVariables;
	CNetworkUtlVectorBase<Vector> m_PredNetVectorVariables;
	CNetworkUtlVectorBase<Quaternion> m_PredNetQuaternionVariables;
	CNetworkUtlVectorBase<CGlobalSymbol> m_PredNetGlobalSymbolVariables;
	CNetworkUtlVectorBase<uint32> m_OwnerOnlyPredNetBoolVariables;
	CNetworkUtlVectorBase<uint8> m_OwnerOnlyPredNetByteVariables;
	CNetworkUtlVectorBase<uint16> m_OwnerOnlyPredNetUInt16Variables;
	CNetworkUtlVectorBase<int32> m_OwnerOnlyPredNetIntVariables;
	CNetworkUtlVectorBase<uint32> m_OwnerOnlyPredNetUInt32Variables;
	CNetworkUtlVectorBase<uint64> m_OwnerOnlyPredNetUInt64Variables;
	CNetworkUtlVectorBase<float32> m_OwnerOnlyPredNetFloatVariables;
	CNetworkUtlVectorBase<Vector> m_OwnerOnlyPredNetVectorVariables;
	CNetworkUtlVectorBase<Quaternion> m_OwnerOnlyPredNetQuaternionVariables;
	CNetworkUtlVectorBase<CGlobalSymbol> m_OwnerOnlyPredNetGlobalSymbolVariables;
	int32 m_nBoolVariablesCount;
	int32 m_nOwnerOnlyBoolVariablesCount;
	int32 m_nRandomSeedOffset;
	float32 m_flLastTeleportTime;
private:
	uint8 pad_01F8[16];
};

class alignas(4) HSequence
{
public:
	int32 m_Value;
};

class alignas(4) GameTime_t
{
public:
	float32 m_Value;
};

enum class AnimLoopMode_t : int32
{
	ANIM_LOOP_MODE_INVALID = -1,
	ANIM_LOOP_MODE_NOT_LOOPING = 0,
	ANIM_LOOP_MODE_LOOPING = 1,
	ANIM_LOOP_MODE_USE_SEQUENCE_SETTINGS = 2,
	ANIM_LOOP_MODE_COUNT = 3,
};

enum class SequenceFinishNotifyState_t : uint8
{
	eDoNotNotify = 0,
	eNotifyWhenFinished = 1,
	eNotifyTriggered = 2,
};

class alignas(8) CBaseAnimGraphController : public CSkeletonAnimationController
{
	uint8 pad_0010[8];
public:
	CAnimGraphNetworkedVariables m_animGraphNetworkedVars;
	bool m_bSequenceFinished;
	float32 m_flSoundSyncTime;
	uint32 m_nActiveIKChainMask;
	HSequence m_hSequence;
	GameTime_t m_flSeqStartTime;
	float32 m_flSeqFixedCycle;
	AnimLoopMode_t m_nAnimLoopMode;
	CNetworkedQuantizedFloat m_flPlaybackRate;
private:
	uint8 pad_0244[4];
public:
	SequenceFinishNotifyState_t m_nNotifyState;
private:
	uint8 pad_0249[1];
public:
	bool m_bNetworkedAnimationInputsChanged;
	bool m_bNetworkedSequenceChanged;
	bool m_bLastUpdateSkipped;
	GameTime_t m_flPrevAnimUpdateTime;
private:
	uint8 pad_0254[808];
};

class alignas(16) CBodyComponentBaseAnimGraph : public CBodyComponentSkeletonInstance
{
public:
	CBaseAnimGraphController m_animationController;
};

