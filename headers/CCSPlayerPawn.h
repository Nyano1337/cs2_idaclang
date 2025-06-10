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

class alignas(8) CEntityIdentity;
class alignas(8) CScriptComponent;
class alignas(8) CEntityInstance
{
	void* __vftable;
public:
	CUtlSymbolLarge m_iszPrivateVScripts;
	CEntityIdentity* m_pEntity;
private:
	uint8 pad_0018[16];
public:
	CScriptComponent* m_CScriptComponent;
	bool m_bVisibleinPVS;
};

class alignas(8) CBodyComponent;
class alignas(8) CNetworkTransmitComponent
{
	void* __vftable;
	uint8 pad_0008[380];
public:
	uint8 m_nTransmitStateOwnedCounter;
private:
	uint8 pad_0185[56];
};

class alignas(8) thinkfunc_t;
template <typename A>
class CUtlVector;

template<>
class alignas(8) CUtlVector<thinkfunc_t>
{
	uint8 pad_0000[24];
};

class alignas(4) GameTick_t
{
public:
	int32 m_Value;
};

template <size_t A>
class CTypedBitVec;

template<>
class alignas(4) CTypedBitVec<64>
{
	uint8 pad_0000[8];
};

class alignas(8) ResponseContext_t;
template <typename A>
class CUtlVector;

template<>
class alignas(8) CUtlVector<ResponseContext_t>
{
	uint8 pad_0000[24];
};

enum class TakeDamageFlags_t : uint64
{
	DFLAG_NONE = 0,
	DFLAG_SUPPRESS_HEALTH_CHANGES = 1, // (1 << 0)
	DFLAG_SUPPRESS_PHYSICS_FORCE = 2, // (1 << 1)
	DFLAG_SUPPRESS_EFFECTS = 4, // (1 << 2)
	DFLAG_PREVENT_DEATH = 8, // (1 << 3)
	DFLAG_FORCE_DEATH = 16, // (1 << 4)
	DFLAG_ALWAYS_GIB = 32, // (1 << 5)
	DFLAG_NEVER_GIB = 64, // (1 << 6)
	DFLAG_REMOVE_NO_RAGDOLL = 128, // (1 << 7)
	DFLAG_SUPPRESS_DAMAGE_MODIFICATION = 256, // (1 << 8)
	DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS = 512, // (1 << 9)
	DFLAG_RADIUS_DMG = 1024, // (1 << 10)
	DFLAG_FORCEREDUCEARMOR_DMG = 2048, // (1 << 11)
	DFLAG_SUPPRESS_INTERRUPT_FLINCH = 4096, // (1 << 12)
	DMG_LASTDFLAG = 4096, // (1 << 12)
	DFLAG_IGNORE_ARMOR = 8192, // (1 << 13)
	DFLAG_SUPPRESS_UTILREMOVE = 16384, // (1 << 14)
};

enum class EntityPlatformTypes_t : uint8
{
	ENTITY_NOT_PLATFORM = 0,
	ENTITY_PLATFORM_PLAYER_FOLLOWS_YAW = 1,
	ENTITY_PLATFORM_PLAYER_IGNORES_YAW = 2,
};

enum class MoveCollide_t : uint8
{
	MOVECOLLIDE_DEFAULT = 0,
	MOVECOLLIDE_FLY_BOUNCE = 1,
	MOVECOLLIDE_FLY_CUSTOM = 2,
	MOVECOLLIDE_FLY_SLIDE = 3,
	MOVECOLLIDE_COUNT = 4,
	MOVECOLLIDE_MAX_BITS = 3,
};

enum class MoveType_t : uint8
{
	MOVETYPE_NONE = 0,
	MOVETYPE_OBSOLETE = 1,
	MOVETYPE_WALK = 2,
	MOVETYPE_FLY = 3,
	MOVETYPE_FLYGRAVITY = 4,
	MOVETYPE_VPHYSICS = 5,
	MOVETYPE_PUSH = 6,
	MOVETYPE_NOCLIP = 7,
	MOVETYPE_OBSERVER = 8,
	MOVETYPE_LADDER = 9,
	MOVETYPE_CUSTOM = 10,
	MOVETYPE_LAST = 11,
	MOVETYPE_INVALID = 11,
	MOVETYPE_MAX_BITS = 5,
};

class alignas(8) CBaseFilter;
template <typename A>
class CHandle;

template<>
class alignas(4) CHandle<CBaseFilter>
{
	uint8 pad_0000[4];
};

class alignas(4) CUtlStringToken
{
	uint8 pad_0000[4];
};

class alignas(4) GameTime_t
{
public:
	float32 m_Value;
};

class alignas(4) Vector
{
	uint8 pad_0000[12];
};

class alignas(8) CUtlString
{
	uint8 pad_0000[8];
};

class alignas(1) CVariantDefaultAllocator;
template <typename A>
class CVariantBase;

template<>
class alignas(8) CVariantBase<CVariantDefaultAllocator>
{
	uint8 pad_0000[16];
};

class alignas(8) CEntityIOOutput
{
	void* __vftable;
	uint8 pad_0008[16];
public:
	CVariantBase<CVariantDefaultAllocator> m_Value;
};

class alignas(4) CNetworkedQuantizedFloat
{
	uint8 pad_0000[8];
};

class alignas(4) CNetworkVelocityVector
{
	uint8 pad_0000[16];
public:
	CNetworkedQuantizedFloat m_vecX;
	CNetworkedQuantizedFloat m_vecY;
	CNetworkedQuantizedFloat m_vecZ;
};

class alignas(8) CCollisionProperty;
class alignas(8) CBaseEntity;
template <typename A>
class CHandle;

template<>
class alignas(4) CHandle<CBaseEntity>
{
	uint8 pad_0000[4];
};

class alignas(4) QAngle
{
	uint8 pad_0000[12];
};

enum class BloodType : int32
{
	None = -1,
	ColorRed = 0,
	ColorYellow = 1,
	ColorGreen = 2,
	ColorRedLVL2 = 3,
	ColorRedLVL3 = 4,
	ColorRedLVL4 = 5,
	ColorRedLVL5 = 6,
	ColorRedLVL6 = 7,
};

class alignas(8) CBaseEntity : public CEntityInstance
{
public:
	CBodyComponent* m_CBodyComponent;
	CNetworkTransmitComponent m_NetworkTransmitComponent;
private:
	uint8 pad_0200[64];
public:
	CUtlVector<thinkfunc_t> m_aThinkFunctions;
	int32 m_iCurrentThinkContext;
	GameTick_t m_nLastThinkTick;
	bool m_bDisabledContextThinks;
private:
	uint8 pad_0264[12];
public:
	CTypedBitVec<64> m_isSteadyState;
	float32 m_lastNetworkChange;
private:
	uint8 pad_0280[8];
public:
	CUtlVector<ResponseContext_t> m_ResponseContexts;
	CUtlSymbolLarge m_iszResponseContext;
private:
	uint8 pad_02A8[32];
public:
	int32 m_iHealth;
	int32 m_iMaxHealth;
	uint8 m_lifeState;
	float32 m_flDamageAccumulator;
	bool m_bTakesDamage;
	TakeDamageFlags_t m_nTakeDamageFlags;
	EntityPlatformTypes_t m_nPlatformType;
private:
	uint8 pad_02E9[1];
public:
	MoveCollide_t m_MoveCollide;
	MoveType_t m_MoveType;
	MoveType_t m_nActualMoveType;
	uint8 m_nWaterTouch;
	uint8 m_nSlimeTouch;
	bool m_bRestoreInHierarchy;
	CUtlSymbolLarge m_target;
	CHandle<CBaseFilter> m_hDamageFilter;
	CUtlSymbolLarge m_iszDamageFilterName;
	float32 m_flMoveDoneTime;
	CUtlStringToken m_nSubclassID;
private:
	uint8 pad_0310[8];
public:
	float32 m_flAnimTime;
	float32 m_flSimulationTime;
	GameTime_t m_flCreateTime;
	bool m_bClientSideRagdoll;
	uint8 m_ubInterpolationFrame;
	Vector m_vPrevVPhysicsUpdatePos;
	uint8 m_iTeamNum;
	CUtlSymbolLarge m_iGlobalname;
	int32 m_iSentToClients;
	float32 m_flSpeed;
	CUtlString m_sUniqueHammerID;
	uint32 m_spawnflags;
	GameTick_t m_nNextThinkTick;
	int32 m_nSimulationTick;
	CEntityIOOutput m_OnKilled;
	uint32 m_fFlags;
	Vector m_vecAbsVelocity;
	CNetworkVelocityVector m_vecVelocity;
private:
	uint8 pad_03C0[8];
public:
	Vector m_vecBaseVelocity;
	int32 m_nPushEnumCount;
	CCollisionProperty* m_pCollision;
	CHandle<CBaseEntity> m_hEffectEntity;
	CHandle<CBaseEntity> m_hOwnerEntity;
	uint32 m_fEffects;
	CHandle<CBaseEntity> m_hGroundEntity;
	int32 m_nGroundBodyIndex;
	float32 m_flFriction;
	float32 m_flElasticity;
	float32 m_flGravityScale;
	float32 m_flTimeScale;
	float32 m_flWaterLevel;
	bool m_bAnimatedEveryTick;
	bool m_bDisableLowViolence;
	uint8 m_nWaterType;
	int32 m_iEFlags;
	CEntityIOOutput m_OnUser1;
	CEntityIOOutput m_OnUser2;
	CEntityIOOutput m_OnUser3;
	CEntityIOOutput m_OnUser4;
	int32 m_iInitialTeamNum;
	GameTime_t m_flNavIgnoreUntilTime;
	QAngle m_vecAngVelocity;
	bool m_bNetworkQuantizeOriginAndAngles;
	bool m_bLagCompensate;
	float32 m_flOverriddenFriction;
	CHandle<CBaseEntity> m_pBlocker;
	float32 m_flLocalTime;
	float32 m_flVPhysicsUpdateLocalTime;
	BloodType m_nBloodType;
};

class alignas(8) CRenderComponent;
class alignas(8) CEntityComponent
{
	void* __vftable;
};

class alignas(8) CHitboxComponent : public CEntityComponent
{
	uint8 pad_0008[28];
public:
	uint32 m_bvDisabledHitGroups[1];
};

enum class HitGroup_t : int32
{
	HITGROUP_INVALID = -1,
	HITGROUP_GENERIC = 0,
	HITGROUP_HEAD = 1,
	HITGROUP_CHEST = 2,
	HITGROUP_STOMACH = 3,
	HITGROUP_LEFTARM = 4,
	HITGROUP_RIGHTARM = 5,
	HITGROUP_LEFTLEG = 6,
	HITGROUP_RIGHTLEG = 7,
	HITGROUP_NECK = 8,
	HITGROUP_UNUSED = 9,
	HITGROUP_GEAR = 10,
	HITGROUP_SPECIAL = 11,
	HITGROUP_COUNT = 12,
};

enum class RenderMode_t : uint8
{
	kRenderNormal = 0,
	kRenderTransColor = 1,
	kRenderTransTexture = 2,
	kRenderGlow = 3,
	kRenderTransAlpha = 4,
	kRenderTransAdd = 5,
	kRenderEnvironmental = 6,
	kRenderTransAddFrameBlend = 7,
	kRenderTransAlphaAdd = 8,
	kRenderWorldGlow = 9,
	kRenderNone = 10,
	kRenderDevVisualizer = 11,
	kRenderModeCount = 12,
};

enum class RenderFx_t : uint8
{
	kRenderFxNone = 0,
	kRenderFxPulseSlow = 1,
	kRenderFxPulseFast = 2,
	kRenderFxPulseSlowWide = 3,
	kRenderFxPulseFastWide = 4,
	kRenderFxFadeSlow = 5,
	kRenderFxFadeFast = 6,
	kRenderFxSolidSlow = 7,
	kRenderFxSolidFast = 8,
	kRenderFxStrobeSlow = 9,
	kRenderFxStrobeFast = 10,
	kRenderFxStrobeFaster = 11,
	kRenderFxFlickerSlow = 12,
	kRenderFxFlickerFast = 13,
	kRenderFxNoDissipation = 14,
	kRenderFxFadeOut = 15,
	kRenderFxFadeIn = 16,
	kRenderFxPulseFastWider = 17,
	kRenderFxGlowShell = 18,
	kRenderFxMax = 19,
};

class alignas(1) Color
{
	uint8 pad_0000[4];
};

class alignas(8) EntityRenderAttribute_t;
template <typename A>
class CUtlVectorEmbeddedNetworkVar;

template<>
class alignas(8) CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t>
{
	uint8 pad_0000[80];
};

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
	uint8 pad_0008[8];
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

class alignas(8) CGlowProperty
{
	void* __vftable;
public:
	Vector m_fGlowColor;
private:
	uint8 pad_0014[28];
public:
	int32 m_iGlowType;
	int32 m_iGlowTeam;
	int32 m_nGlowRange;
	int32 m_nGlowRangeMin;
	Color m_glowColorOverride;
	bool m_bFlashing;
	float32 m_flGlowTime;
	float32 m_flGlowStartTime;
	bool m_bEligibleForScreenHighlight;
	bool m_bGlowing;
};

class alignas(8) CBaseModelEntity;
template <typename A>
class CHandle;

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<CHandle<CBaseModelEntity>>
{
	uint8 pad_0000[24];
};

class alignas(4) CNetworkViewOffsetVector
{
	uint8 pad_0000[16];
public:
	CNetworkedQuantizedFloat m_vecX;
	CNetworkedQuantizedFloat m_vecY;
	CNetworkedQuantizedFloat m_vecZ;
};

class alignas(8) CBaseModelEntity : public CBaseEntity
{
public:
	CRenderComponent* m_CRenderComponent;
	CHitboxComponent m_CHitboxComponent;
	HitGroup_t m_nDestructiblePartInitialStateDestructed0;
	HitGroup_t m_nDestructiblePartInitialStateDestructed1;
	HitGroup_t m_nDestructiblePartInitialStateDestructed2;
	HitGroup_t m_nDestructiblePartInitialStateDestructed3;
	HitGroup_t m_nDestructiblePartInitialStateDestructed4;
	int32 m_nLastHitDestructiblePartIndex;
private:
	uint8 pad_0528[40];
public:
	HitGroup_t m_LastHitGroup;
	GameTime_t m_flDissolveStartTime;
	CEntityIOOutput m_OnIgnite;
	RenderMode_t m_nRenderMode;
	RenderFx_t m_nRenderFX;
	bool m_bAllowFadeInView;
private:
	uint8 pad_0583[29];
public:
	Color m_clrRender;
	CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t> m_vecRenderAttributes;
	bool m_bRenderToCubemaps;
	bool m_bNoInterpolate;
	CCollisionProperty m_Collision;
	CGlowProperty m_Glow;
	float32 m_flGlowBackfaceMult;
	float32 m_fadeMinDist;
	float32 m_fadeMaxDist;
	float32 m_flFadeScale;
	float32 m_flShadowStrength;
	uint8 m_nObjectCulling;
	int32 m_nAddDecal;
	Vector m_vDecalPosition;
	Vector m_vDecalForwardAxis;
	float32 m_flDecalHealBloodRate;
	float32 m_flDecalHealHeightRate;
	CNetworkUtlVectorBase<CHandle<CBaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
	CNetworkViewOffsetVector m_vecViewOffset;
private:
	uint8 pad_0788[8];
};

class alignas(8) IChoreoServices;
class CTransform;

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<CTransform>
{
	uint8 pad_0000[24];
};

class alignas(8) PhysicsRagdollPose_t
{
	void* __vftable;
public:
	CNetworkUtlVectorBase<CTransform> m_Transforms;
	CHandle<CBaseEntity> m_hOwner;
};

class alignas(8) CBaseAnimGraph : public CBaseModelEntity
{
	uint8 pad_0790[120];
public:
	bool m_bInitiallyPopulateInterpHistory;
	IChoreoServices* m_pChoreoServices;
	bool m_bAnimGraphUpdateEnabled;
	float32 m_flMaxSlopeDistance;
	Vector m_vLastSlopeCheckPos;
	bool m_bAnimationUpdateScheduled;
	Vector m_vecForce;
	int32 m_nForceBone;
private:
	uint8 pad_0840[16];
public:
	PhysicsRagdollPose_t m_RagdollPose;
	bool m_bRagdollClientSide;
private:
	uint8 pad_087C[292];
public:
	int32 m_nLastDestructiblePartDestroyedAnimgraphSetTick;
};

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<float32>
{
	uint8 pad_0000[24];
};

class alignas(4) SceneEventId_t
{
public:
	uint32 m_Value;
};

class alignas(8) CBaseFlex : public CBaseAnimGraph
{
public:
	CNetworkUtlVectorBase<float32> m_flexWeight;
	Vector m_vLookTargetPosition;
	bool m_blinktoggle;
private:
	uint8 pad_09D0[80];
public:
	GameTime_t m_flAllowResponsesEndTime;
	GameTime_t m_flLastFlexAnimationTime;
	SceneEventId_t m_nNextSceneEventId;
	bool m_bUpdateLayerPriorities;
private:
	uint8 pad_0A2D[8];
};

class alignas(8) CEconWearable;
template <typename A>
class CHandle;

template <typename A>
class CNetworkUtlVectorBase;

template<>
class alignas(8) CNetworkUtlVectorBase<CHandle<CEconWearable>>
{
	uint8 pad_0000[24];
};

class alignas(4) RelationshipOverride_t;
template <typename A>
class CUtlVector;

enum class Hull_t : uint32
{
	HULL_HUMAN = 0,
	HULL_SMALL_CENTERED = 1,
	HULL_WIDE_HUMAN = 2,
	HULL_TINY = 3,
	HULL_MEDIUM = 4,
	HULL_TINY_CENTERED = 5,
	HULL_LARGE = 6,
	HULL_LARGE_CENTERED = 7,
	HULL_MEDIUM_TALL = 8,
	HULL_SMALL = 9,
	NUM_HULLS = 10,
	HULL_NONE = 11,
};

class alignas(8) CBaseCombatCharacter : public CBaseFlex
{
public:
	bool m_bForceServerRagdoll;
	CNetworkUtlVectorBase<CHandle<CEconWearable>> m_hMyWearables;
	float32 m_impactEnergyScale;
	bool m_bApplyStressDamage;
private:
	uint8 pad_0A60[64];
public:
	int32 m_iDamageCount;
	CUtlVector<RelationshipOverride_t>* m_pVecRelationships;
	CUtlSymbolLarge m_strRelationships;
	Hull_t m_eHull;
	uint32 m_nNavHullIdx;
};

class alignas(8) CPlayer_WeaponServices;
class alignas(8) CPlayer_ItemServices;
class alignas(8) CPlayer_AutoaimServices;
class alignas(8) CPlayer_ObserverServices;
class alignas(8) CPlayer_WaterServices;
class alignas(8) CPlayer_UseServices;
class alignas(8) CPlayer_FlashlightServices;
class alignas(8) CPlayer_CameraServices;
class alignas(8) CPlayer_MovementServices;
class alignas(8) ViewAngleServerChange_t;
template <typename A>
class CUtlVectorEmbeddedNetworkVar;

template<>
class alignas(8) CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t>
{
	uint8 pad_0000[80];
};

class alignas(8) fogparams_t
{
	void* __vftable;
public:
	Vector dirPrimary;
	Color colorPrimary;
	Color colorSecondary;
	Color colorPrimaryLerpTo;
	Color colorSecondaryLerpTo;
	float32 start;
	float32 end;
	float32 farz;
	float32 maxdensity;
	float32 exponent;
	float32 HDRColorScale;
	float32 skyboxFogFactor;
	float32 skyboxFogFactorLerpTo;
	float32 startLerpTo;
	float32 endLerpTo;
	float32 maxdensityLerpTo;
	GameTime_t lerptime;
	float32 duration;
	float32 blendtobackground;
	float32 scattering;
	float32 locallightscale;
	bool enable;
	bool blend;
	bool m_bNoReflectionFog;
	bool m_bPadding;
};

class alignas(4) WorldGroupId_t
{
	uint8 pad_0000[4];
};

class alignas(8) sky3dparams_t
{
	void* __vftable;
public:
	int16 scale;
	Vector origin;
	bool bClip3DSkyBoxNearToWorldFar;
	float32 flClip3DSkyBoxNearToWorldFarOffset;
	fogparams_t fog;
	WorldGroupId_t m_nWorldGroupID;
};

class alignas(8) CAI_Expresser;
class alignas(8) CBasePlayerController;
template <typename A>
class CHandle;

template<>
class alignas(4) CHandle<CBasePlayerController>
{
	uint8 pad_0000[4];
};

class alignas(4) CEntityIndex
{
	uint8 pad_0000[4];
};

class alignas(8) sndopvarlatchdata_t;
template <typename A>
class CUtlVector;

template<>
class alignas(8) CUtlVector<sndopvarlatchdata_t>
{
	uint8 pad_0000[24];
};

class alignas(8) CBasePlayerPawn : public CBaseCombatCharacter
{
public:
	CPlayer_WeaponServices* m_pWeaponServices;
	CPlayer_ItemServices* m_pItemServices;
	CPlayer_AutoaimServices* m_pAutoaimServices;
	CPlayer_ObserverServices* m_pObserverServices;
	CPlayer_WaterServices* m_pWaterServices;
	CPlayer_UseServices* m_pUseServices;
	CPlayer_FlashlightServices* m_pFlashlightServices;
	CPlayer_CameraServices* m_pCameraServices;
	CPlayer_MovementServices* m_pMovementServices;
private:
	uint8 pad_0B08[8];
public:
	CUtlVectorEmbeddedNetworkVar<ViewAngleServerChange_t> m_ServerViewAngleChanges;
	uint32 m_nHighestGeneratedServerViewAngleChangeIndex;
	QAngle v_angle;
	QAngle v_anglePrevious;
	uint32 m_iHideHUD;
	sky3dparams_t m_skybox3d;
	GameTime_t m_fTimeLastHurt;
	GameTime_t m_flDeathTime;
	GameTime_t m_fNextSuicideTime;
	bool m_fInitHUD;
	CAI_Expresser* m_pExpresser;
	CHandle<CBasePlayerController> m_hController;
private:
	uint8 pad_0C2C[4];
public:
	float32 m_fHltvReplayDelay;
	float32 m_fHltvReplayEnd;
	CEntityIndex m_iHltvReplayEntity;
	CUtlVector<sndopvarlatchdata_t> m_sndOpvarLatchData;
};

class alignas(8) CTouchExpansionComponent : public CEntityComponent
{
	uint8 pad_0008[72];
};

class alignas(8) CCSPlayer_PingServices;
class alignas(8) CPlayer_ViewModelServices;
enum class CSPlayerState : uint32
{
	STATE_ACTIVE = 0,
	STATE_WELCOME = 1,
	STATE_PICKINGTEAM = 2,
	STATE_PICKINGCLASS = 3,
	STATE_DEATH_ANIM = 4,
	STATE_DEATH_WAIT_FOR_KEY = 5,
	STATE_OBSERVER_MODE = 6,
	STATE_GUNGAME_RESPAWN = 7,
	STATE_DORMANT = 8,
	NUM_PLAYER_STATES = 9,
};

class alignas(8) CCSPlayerController;
template <typename A>
class CHandle;

template<>
class alignas(4) CHandle<CCSPlayerController>
{
	uint8 pad_0000[4];
};

class alignas(8) CCSPlayerPawnBase : public CBasePlayerPawn
{
	uint8 pad_0C58[16];
public:
	CTouchExpansionComponent m_CTouchExpansionComponent;
	CCSPlayer_PingServices* m_pPingServices;
	CPlayer_ViewModelServices* m_pViewModelServices;
	GameTime_t m_blindUntilTime;
	GameTime_t m_blindStartTime;
	CSPlayerState m_iPlayerState;
private:
	uint8 pad_0CD4[172];
public:
	bool m_bRespawning;
	GameTime_t m_fImmuneToGunGameDamageTime;
	bool m_bGunGameImmunity;
	float32 m_fMolotovDamageTime;
	bool m_bHasMovedSinceSpawn;
	int32 m_iNumSpawns;
private:
	uint8 pad_0D98[4];
public:
	float32 m_flIdleTimeSinceLastAction;
	float32 m_fNextRadarUpdateTime;
	float32 m_flFlashDuration;
	float32 m_flFlashMaxAlpha;
	float32 m_flProgressBarStartTime;
	int32 m_iProgressBarDuration;
	QAngle m_angEyeAngles;
	bool m_wasNotKilledNaturally;
	bool m_bCommittingSuicideOnTeamChange;
	CHandle<CCSPlayerController> m_hOriginalController;
};

class alignas(8) CCSPlayer_BulletServices;
class alignas(8) CCSPlayer_HostageServices;
class alignas(8) CCSPlayer_BuyServices;
class alignas(8) CCSPlayer_ActionTrackingServices;
class alignas(8) CCSPlayer_RadioServices;
class alignas(8) CCSPlayer_DamageReactServices;
template <typename A>
class CUtlVector;

template<>
class alignas(8) CUtlVector<CHandle<CBaseEntity>>
{
	uint8 pad_0000[24];
};

enum class loadout_slot_t : int32
{
	LOADOUT_SLOT_PROMOTED = -2,
	LOADOUT_SLOT_INVALID = -1,
	LOADOUT_SLOT_MELEE = 0,
	LOADOUT_SLOT_C4 = 1,
	LOADOUT_SLOT_FIRST_AUTO_BUY_WEAPON = 0,
	LOADOUT_SLOT_LAST_AUTO_BUY_WEAPON = 1,
	LOADOUT_SLOT_SECONDARY0 = 2,
	LOADOUT_SLOT_SECONDARY1 = 3,
	LOADOUT_SLOT_SECONDARY2 = 4,
	LOADOUT_SLOT_SECONDARY3 = 5,
	LOADOUT_SLOT_SECONDARY4 = 6,
	LOADOUT_SLOT_SECONDARY5 = 7,
	LOADOUT_SLOT_SMG0 = 8,
	LOADOUT_SLOT_SMG1 = 9,
	LOADOUT_SLOT_SMG2 = 10,
	LOADOUT_SLOT_SMG3 = 11,
	LOADOUT_SLOT_SMG4 = 12,
	LOADOUT_SLOT_SMG5 = 13,
	LOADOUT_SLOT_RIFLE0 = 14,
	LOADOUT_SLOT_RIFLE1 = 15,
	LOADOUT_SLOT_RIFLE2 = 16,
	LOADOUT_SLOT_RIFLE3 = 17,
	LOADOUT_SLOT_RIFLE4 = 18,
	LOADOUT_SLOT_RIFLE5 = 19,
	LOADOUT_SLOT_HEAVY0 = 20,
	LOADOUT_SLOT_HEAVY1 = 21,
	LOADOUT_SLOT_HEAVY2 = 22,
	LOADOUT_SLOT_HEAVY3 = 23,
	LOADOUT_SLOT_HEAVY4 = 24,
	LOADOUT_SLOT_HEAVY5 = 25,
	LOADOUT_SLOT_FIRST_WHEEL_WEAPON = 2,
	LOADOUT_SLOT_LAST_WHEEL_WEAPON = 25,
	LOADOUT_SLOT_FIRST_PRIMARY_WEAPON = 8,
	LOADOUT_SLOT_LAST_PRIMARY_WEAPON = 25,
	LOADOUT_SLOT_FIRST_WHEEL_GRENADE = 26,
	LOADOUT_SLOT_GRENADE0 = 26,
	LOADOUT_SLOT_GRENADE1 = 27,
	LOADOUT_SLOT_GRENADE2 = 28,
	LOADOUT_SLOT_GRENADE3 = 29,
	LOADOUT_SLOT_GRENADE4 = 30,
	LOADOUT_SLOT_GRENADE5 = 31,
	LOADOUT_SLOT_LAST_WHEEL_GRENADE = 31,
	LOADOUT_SLOT_EQUIPMENT0 = 32,
	LOADOUT_SLOT_EQUIPMENT1 = 33,
	LOADOUT_SLOT_EQUIPMENT2 = 34,
	LOADOUT_SLOT_EQUIPMENT3 = 35,
	LOADOUT_SLOT_EQUIPMENT4 = 36,
	LOADOUT_SLOT_EQUIPMENT5 = 37,
	LOADOUT_SLOT_FIRST_WHEEL_EQUIPMENT = 32,
	LOADOUT_SLOT_LAST_WHEEL_EQUIPMENT = 37,
	LOADOUT_SLOT_CLOTHING_CUSTOMPLAYER = 38,
	LOADOUT_SLOT_CLOTHING_CUSTOMHEAD = 39,
	LOADOUT_SLOT_CLOTHING_FACEMASK = 40,
	LOADOUT_SLOT_CLOTHING_HANDS = 41,
	LOADOUT_SLOT_FIRST_COSMETIC = 41,
	LOADOUT_SLOT_LAST_COSMETIC = 41,
	LOADOUT_SLOT_CLOTHING_EYEWEAR = 42,
	LOADOUT_SLOT_CLOTHING_HAT = 43,
	LOADOUT_SLOT_CLOTHING_LOWERBODY = 44,
	LOADOUT_SLOT_CLOTHING_TORSO = 45,
	LOADOUT_SLOT_CLOTHING_APPEARANCE = 46,
	LOADOUT_SLOT_MISC0 = 47,
	LOADOUT_SLOT_MISC1 = 48,
	LOADOUT_SLOT_MISC2 = 49,
	LOADOUT_SLOT_MISC3 = 50,
	LOADOUT_SLOT_MISC4 = 51,
	LOADOUT_SLOT_MISC5 = 52,
	LOADOUT_SLOT_MISC6 = 53,
	LOADOUT_SLOT_MUSICKIT = 54,
	LOADOUT_SLOT_FLAIR0 = 55,
	LOADOUT_SLOT_SPRAY0 = 56,
	LOADOUT_SLOT_FIRST_ALL_CHARACTER = 54,
	LOADOUT_SLOT_LAST_ALL_CHARACTER = 56,
	LOADOUT_SLOT_COUNT = 57,
};

template <typename A>
class CUtlVector;

template<>
class alignas(8) CUtlVector<QAngle>
{
	uint8 pad_0000[24];
};

class alignas(16) CTransform
{
	uint8 pad_0000[32];
};

class alignas(8) IEconItemInterface
{
	void* __vftable;
};

class alignas(8) CEconItemAttribute;
template <typename A>
class CUtlVectorEmbeddedNetworkVar;

template<>
class alignas(8) CUtlVectorEmbeddedNetworkVar<CEconItemAttribute>
{
	uint8 pad_0000[80];
};

class alignas(8) CAttributeManager;
class alignas(8) CAttributeList
{
	void* __vftable;
public:
	CUtlVectorEmbeddedNetworkVar<CEconItemAttribute> m_Attributes;
	CAttributeManager* m_pManager;
};

class alignas(8) CEconItemView : public IEconItemInterface
{
	uint8 pad_0008[48];
public:
	uint16 m_iItemDefinitionIndex;
	int32 m_iEntityQuality;
	uint32 m_iEntityLevel;
	uint64 m_iItemID;
	uint32 m_iItemIDHigh;
	uint32 m_iItemIDLow;
	uint32 m_iAccountID;
	uint32 m_iInventoryPosition;
private:
	uint8 pad_0060[8];
public:
	bool m_bInitialized;
	CAttributeList m_AttributeList;
	CAttributeList m_NetworkedDynamicAttributes;
	char m_szCustomName[161];
	char m_szCustomNameOverride[161];
};

class alignas(8) EntitySpottedState_t
{
	void* __vftable;
public:
	bool m_bSpotted;
	uint32 m_bSpottedByMask[2];
};

enum class CSPlayerBlockingUseAction_t : uint32
{
	k_CSPlayerBlockingUseAction_None = 0,
	k_CSPlayerBlockingUseAction_DefusingDefault = 1,
	k_CSPlayerBlockingUseAction_DefusingWithKit = 2,
	k_CSPlayerBlockingUseAction_HostageGrabbing = 3,
	k_CSPlayerBlockingUseAction_HostageDropping = 4,
	k_CSPlayerBlockingUseAction_EquippingHeavyArmor = 5,
	k_CSPlayerBlockingUseAction_TakingOffHeavyArmor = 6,
	k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 7,
	k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 8,
	k_CSPlayerBlockingUseAction_MaxCount = 9,
};

class alignas(8) CCSBot;
class alignas(8) PredictedDamageTag_t;
template <typename A>
class CUtlVectorEmbeddedNetworkVar;

template<>
class alignas(8) CUtlVectorEmbeddedNetworkVar<PredictedDamageTag_t>
{
	uint8 pad_0000[80];
};

class alignas(16) CCSPlayerPawn : public CCSPlayerPawnBase
{
	uint8 pad_0DC8[8];
public:
	CCSPlayer_BulletServices* m_pBulletServices;
	CCSPlayer_HostageServices* m_pHostageServices;
	CCSPlayer_BuyServices* m_pBuyServices;
	CCSPlayer_ActionTrackingServices* m_pActionTrackingServices;
	CCSPlayer_RadioServices* m_pRadioServices;
	CCSPlayer_DamageReactServices* m_pDamageReactServices;
	uint16 m_nCharacterDefIndex;
	bool m_bHasFemaleVoice;
	CUtlString m_strVOPrefix;
	char m_szLastPlaceName[18];
private:
	uint8 pad_0E22[174];
public:
	bool m_bInHostageResetZone;
	bool m_bInBuyZone;
	CUtlVector<CHandle<CBaseEntity>> m_TouchingBuyZones;
	bool m_bWasInBuyZone;
	bool m_bInHostageRescueZone;
	bool m_bInBombZone;
	bool m_bWasInHostageRescueZone;
	int32 m_iRetakesOffering;
	int32 m_iRetakesOfferingCard;
	bool m_bRetakesHasDefuseKit;
	bool m_bRetakesMVPLastRound;
	int32 m_iRetakesMVPBoostItem;
	loadout_slot_t m_RetakesMVPBoostExtraUtility;
	GameTime_t m_flHealthShotBoostExpirationTime;
	float32 m_flLandingTimeSeconds;
	QAngle m_aimPunchAngle;
	QAngle m_aimPunchAngleVel;
	int32 m_aimPunchTickBase;
	float32 m_aimPunchTickFraction;
	CUtlVector<QAngle> m_aimPunchCache;
	bool m_bIsBuyMenuOpen;
private:
	uint8 pad_0F50[1696];
public:
	CTransform m_xLastHeadBoneTransform;
	bool m_bLastHeadBoneTransformIsValid;
	GameTime_t m_lastLandTime;
	bool m_bOnGroundLastTick;
	int32 m_iPlayerLocked;
private:
	uint8 pad_1620[4];
public:
	GameTime_t m_flTimeOfLastInjury;
	GameTime_t m_flNextSprayDecalTime;
	bool m_bNextSprayDecalTimeExpedited;
	int32 m_nRagdollDamageBone;
	Vector m_vRagdollDamageForce;
	Vector m_vRagdollDamagePosition;
	char m_szRagdollDamageWeaponName[64];
	bool m_bRagdollDamageHeadshot;
	Vector m_vRagdollServerOrigin;
	CEconItemView m_EconGloves;
	uint8 m_nEconGlovesChanged;
	QAngle m_qDeathEyeAngles;
	bool m_bSkipOneHeadConstraintUpdate;
	bool m_bLeftHanded;
	GameTime_t m_fSwitchedHandednessTime;
	float32 m_flViewmodelOffsetX;
	float32 m_flViewmodelOffsetY;
	float32 m_flViewmodelOffsetZ;
	float32 m_flViewmodelFOV;
	bool m_bIsWalking;
	float32 m_fLastGivenDefuserTime;
	float32 m_fLastGivenBombTime;
	float32 m_flDealtDamageToEnemyMostRecentTimestamp;
	uint32 m_iDisplayHistoryBits;
	float32 m_flLastAttackedTeammate;
	GameTime_t m_allowAutoFollowTime;
	bool m_bResetArmorNextSpawn;
	CEntityIndex m_nLastKillerIndex;
	EntitySpottedState_t m_entitySpottedState;
	int32 m_nSpotRules;
	bool m_bIsScoped;
	bool m_bResumeZoom;
	bool m_bIsDefusing;
	bool m_bIsGrabbingHostage;
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress;
	GameTime_t m_flEmitSoundTime;
	bool m_bInNoDefuseArea;
	CEntityIndex m_iBombSiteIndex;
	int32 m_nWhichBombZone;
	bool m_bInBombZoneTrigger;
	bool m_bWasInBombZoneTrigger;
	int32 m_iShotsFired;
	float32 m_flFlinchStack;
	float32 m_flVelocityModifier;
	float32 m_flHitHeading;
	int32 m_nHitBodyPart;
	Vector m_vecTotalBulletForce;
	bool m_bWaitForNoAttack;
	float32 m_ignoreLadderJumpTime;
	bool m_bKilledByHeadshot;
	int32 m_LastHitBox;
	int32 m_LastHealth;
	CCSBot* m_pBot;
	bool m_bBotAllowActive;
	QAngle m_thirdPersonHeading;
	float32 m_flSlopeDropOffset;
	float32 m_flSlopeDropHeight;
	Vector m_vHeadConstraintOffset;
	int32 m_nLastPickupPriority;
	float32 m_flLastPickupPriorityTime;
	int32 m_ArmorValue;
	uint16 m_unCurrentEquipmentValue;
	uint16 m_unRoundStartEquipmentValue;
	uint16 m_unFreezetimeEndEquipmentValue;
	int32 m_iLastWeaponFireUsercmd;
	bool m_bIsSpawning;
private:
	uint8 pad_1A20[8];
public:
	int32 m_iDeathFlags;
	bool m_bHasDeathInfo;
	float32 m_flDeathInfoTime;
	Vector m_vecDeathInfoOrigin;
	uint32 m_vecPlayerPatchEconIndices[5];
	Color m_GunGameImmunityColor;
	GameTime_t m_grenadeParameterStashTime;
	bool m_bGrenadeParametersStashed;
	QAngle m_angStashedShootAngles;
	Vector m_vecStashedGrenadeThrowPosition;
	Vector m_vecStashedVelocity;
	QAngle m_angShootAngleHistory[2];
	Vector m_vecThrowPositionHistory[2];
	Vector m_vecVelocityHistory[2];
	CUtlVectorEmbeddedNetworkVar<PredictedDamageTag_t> m_PredictedDamageTags;
	int32 m_nHighestAppliedDamageTagTick;
};

