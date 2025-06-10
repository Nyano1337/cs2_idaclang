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

class alignas(8) CBasePlayerPawn;
template <typename A>
class CHandle;

template<>
class alignas(4) CHandle<CBasePlayerPawn>
{
	uint8 pad_0000[4];
};

class alignas(4) CSplitScreenSlot
{
	uint8 pad_0000[4];
};

class alignas(8) CBasePlayerController;
template <typename A>
class CHandle;

template<>
class alignas(4) CHandle<CBasePlayerController>
{
	uint8 pad_0000[4];
};

template <typename A>
class CUtlVector;

template<>
class alignas(8) CUtlVector<CHandle<CBasePlayerController>>
{
	uint8 pad_0000[24];
};

enum class PlayerConnectedState : int32
{
	PlayerNeverConnected = -1,
	PlayerConnected = 0,
	PlayerConnecting = 1,
	PlayerReconnecting = 2,
	PlayerDisconnecting = 3,
	PlayerDisconnected = 4,
	PlayerReserved = 5,
};

enum class ChatIgnoreType_t : uint32
{
	CHAT_IGNORE_NONE = 0,
	CHAT_IGNORE_ALL = 1,
	CHAT_IGNORE_TEAM = 2,
};

class alignas(8) CBasePlayerController : public CBaseEntity
{
	uint8 pad_04E0[8];
public:
	uint64 m_nInButtonsWhichAreToggles;
	uint32 m_nTickBase;
private:
	uint8 pad_04F4[44];
public:
	CHandle<CBasePlayerPawn> m_hPawn;
	bool m_bKnownTeamMismatch;
	CSplitScreenSlot m_nSplitScreenSlot;
	CHandle<CBasePlayerController> m_hSplitOwner;
	CUtlVector<CHandle<CBasePlayerController>> m_hSplitScreenPlayers;
	bool m_bIsHLTV;
	PlayerConnectedState m_iConnected;
	char m_iszPlayerName[128];
	CUtlString m_szNetworkIDString;
	float32 m_fLerpTime;
	bool m_bLagCompensation;
	bool m_bPredict;
private:
	uint8 pad_05DE[6];
public:
	bool m_bIsLowViolence;
	bool m_bGamePaused;
private:
	uint8 pad_05E8[312];
public:
	ChatIgnoreType_t m_iIgnoreGlobalChat;
	float32 m_flLastPlayerTalkTime;
	float32 m_flLastEntitySteadyState;
	int32 m_nAvailableEntitySteadyState;
	bool m_bHasAnySteadyStateEnts;
private:
	uint8 pad_0738[8];
public:
	uint64 m_steamID;
	uint32 m_iDesiredFOV;
private:
	uint8 pad_074C[40];
};

class alignas(8) CCSPlayerController_InGameMoneyServices;
class alignas(8) CCSPlayerController_InventoryServices;
class alignas(8) CCSPlayerController_ActionTrackingServices;
class alignas(8) CCSPlayerController_DamageServices;
class alignas(1) QuestProgress
{
public:
	enum class Reason : uint32
	{
		QUEST_NONINITIALIZED = 0,
		QUEST_OK = 1,
		QUEST_NOT_ENOUGH_PLAYERS = 2,
		QUEST_WARMUP = 3,
		QUEST_NOT_CONNECTED_TO_STEAM = 4,
		QUEST_NONOFFICIAL_SERVER = 5,
		QUEST_NO_ENTITLEMENT = 6,
		QUEST_NO_QUEST = 7,
		QUEST_PLAYER_IS_BOT = 8,
		QUEST_WRONG_MAP = 9,
		QUEST_WRONG_MODE = 10,
		QUEST_NOT_SYNCED_WITH_SERVER = 11,
		QUEST_REASON_MAX = 12,
	};


private:
	uint8 pad_0000[1];
};

QuestProgress::Reason QuestProgress__Reason;

class alignas(16) CCSPlayerPawn;
template <typename A>
class CHandle;

template<>
class alignas(4) CHandle<CCSPlayerPawn>
{
	uint8 pad_0000[4];
};

class alignas(8) CCSObserverPawn;
template <typename A>
class CHandle;

template<>
class alignas(4) CHandle<CCSObserverPawn>
{
	uint8 pad_0000[4];
};

class alignas(4) CEntityHandle
{
	uint8 pad_0000[4];
};

class alignas(8) CCSPlayerController;
template <typename A>
class CHandle;

template<>
class alignas(4) CHandle<CCSPlayerController>
{
	uint8 pad_0000[4];
};

class alignas(4) WorldGroupId_t
{
	uint8 pad_0000[4];
};

class alignas(8) IntervalTimer
{
	void* __vftable;
public:
	GameTime_t m_timestamp;
	WorldGroupId_t m_nWorldGroupId;
};

class alignas(8) CCSPlayerController : public CBasePlayerController
{
	uint8 pad_0778[16];
public:
	CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices;
	CCSPlayerController_InventoryServices* m_pInventoryServices;
	CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices;
	CCSPlayerController_DamageServices* m_pDamageServices;
	uint32 m_iPing;
	bool m_bHasCommunicationAbuseMute;
	uint32 m_uiCommunicationMuteFlags;
	CUtlSymbolLarge m_szCrosshairCodes;
	uint8 m_iPendingTeamNum;
	GameTime_t m_flForceTeamTime;
	int32 m_iCompTeammateColor;
	bool m_bEverPlayedOnTeam;
	bool m_bAttemptedToGetColor;
	int32 m_iTeammatePreferredColor;
	bool m_bTeamChanged;
	bool m_bInSwitchTeam;
	bool m_bHasSeenJoinGame;
	bool m_bJustBecameSpectator;
	bool m_bSwitchTeamsOnNextRoundReset;
	bool m_bRemoveAllItemsOnNextRoundReset;
	GameTime_t m_flLastJoinTeamTime;
	CUtlSymbolLarge m_szClan;
	char m_szClanName[32];
	int32 m_iCoachingTeam;
	uint64 m_nPlayerDominated;
	uint64 m_nPlayerDominatingMe;
	int32 m_iCompetitiveRanking;
	int32 m_iCompetitiveWins;
	int8 m_iCompetitiveRankType;
	int32 m_iCompetitiveRankingPredicted_Win;
	int32 m_iCompetitiveRankingPredicted_Loss;
	int32 m_iCompetitiveRankingPredicted_Tie;
	int32 m_nEndMatchNextMapVote;
	uint16 m_unActiveQuestId;
	uint32 m_rtActiveMissionPeriod;
	QuestProgress::Reason m_nQuestProgressReason;
	uint32 m_unPlayerTvControlFlags;
private:
	uint8 pad_084C[44];
public:
	int32 m_iDraftIndex;
	uint32 m_msQueuedModeDisconnectionTimestamp;
	uint32 m_uiAbandonRecordedReason;
	uint32 m_eNetworkDisconnectionReason;
	bool m_bCannotBeKicked;
	bool m_bEverFullyConnected;
	bool m_bAbandonAllowsSurrender;
	bool m_bAbandonOffersInstantSurrender;
	bool m_bDisconnection1MinWarningPrinted;
	bool m_bScoreReported;
	int32 m_nDisconnectionTick;
private:
	uint8 pad_0894[12];
public:
	bool m_bControllingBot;
	bool m_bHasControlledBotThisRound;
	bool m_bHasBeenControlledByPlayerThisRound;
	int32 m_nBotsControlledThisRound;
	bool m_bCanControlObservedBot;
	CHandle<CCSPlayerPawn> m_hPlayerPawn;
	CHandle<CCSObserverPawn> m_hObserverPawn;
	int32 m_DesiredObserverMode;
	CEntityHandle m_hDesiredObserverTarget;
	bool m_bPawnIsAlive;
	uint32 m_iPawnHealth;
	int32 m_iPawnArmor;
	bool m_bPawnHasDefuser;
	bool m_bPawnHasHelmet;
	uint16 m_nPawnCharacterDefIndex;
	int32 m_iPawnLifetimeStart;
	int32 m_iPawnLifetimeEnd;
	int32 m_iPawnBotDifficulty;
	CHandle<CCSPlayerController> m_hOriginalControllerOfCurrentPawn;
	int32 m_iScore;
	int32 m_iRoundScore;
	int32 m_iRoundsWon;
	uint8 m_recentKillQueue[8];
	uint8 m_nFirstKill;
	uint8 m_nKillCount;
	bool m_bMvpNoMusic;
	int32 m_eMvpReason;
	int32 m_iMusicKitID;
	int32 m_iMusicKitMVPs;
	int32 m_iMVPs;
	int32 m_nUpdateCounter;
	float32 m_flSmoothedPing;
private:
	uint8 pad_0910[61600];
public:
	IntervalTimer m_lastHeldVoteTimer;
private:
	uint8 pad_F9C0[8];
public:
	bool m_bShowHints;
	int32 m_iNextTimeCheck;
	bool m_bJustDidTeamKill;
	bool m_bPunishForTeamKill;
	bool m_bGaveTeamDamageWarning;
	bool m_bGaveTeamDamageWarningThisRound;
	float64 m_dblLastReceivedPacketPlatFloatTime;
	GameTime_t m_LastTeamDamageWarningTime;
	GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove;
	uint32 m_nSuspiciousHitCount;
	uint32 m_nNonSuspiciousHitStreak;
private:
	uint8 pad_F9F0[161];
public:
	bool m_bFireBulletsSeedSynchronized;
};

