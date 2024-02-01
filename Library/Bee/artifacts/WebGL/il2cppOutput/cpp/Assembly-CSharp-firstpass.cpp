#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t1D68692B59A0459D88CB117CF9AC5EA8B3FA682F;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_t02482683AE1D9D63176EAA56728B12F9ADCA10BE;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// ExitGames.Client.Photon.EventData
struct EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_t95FBCF58BC80DA852181F0B70F8FC08DE824D9D1;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_t81522842E9975A0B8ADDCB83BBAB7A1A28A95223;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// ExitGames.Client.Photon.NCommand
struct NCommand_t47ACF759A20E471E2A0FCE81D3FA13937C981DA1;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ExitGames.Client.Photon.WaitForRealSeconds
struct WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189;
// ExitGames.Client.Photon.WebSocket
struct WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B;
// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12
struct U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61;
// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct MonoBehaviourExt_t59A041FB03A3F6EB588A5165E7FCBD6E960F9D32;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonSocketState_t7F72F90C12B6D46FEE5435BA595D630D536C97BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062C159E09943C99E139190E5A591006A545AA4A;
IL2CPP_EXTERN_C String_t* _stringLiteral14B62430EC3FF6AF6C57F10516C6EC5C8D0497F3;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8DE4CB154AC0296896C7FD3192C85F2FE4730D;
IL2CPP_EXTERN_C String_t* _stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral4B6F259D090A7AB0D2DC04B00C4CAA926D17DD6D;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D;
IL2CPP_EXTERN_C String_t* _stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A;
IL2CPP_EXTERN_C String_t* _stringLiteral6694B5F6F3666B90EF97D3CC74C9D8B36A63411A;
IL2CPP_EXTERN_C String_t* _stringLiteral6A328C89F6BA1B16C6636D0A5824840B5CFB5593;
IL2CPP_EXTERN_C String_t* _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64;
IL2CPP_EXTERN_C String_t* _stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3;
IL2CPP_EXTERN_C String_t* _stringLiteral92AD75AD6FCA907A1DC04172D9D3B3DCA5284978;
IL2CPP_EXTERN_C String_t* _stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23;
IL2CPP_EXTERN_C String_t* _stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C;
IL2CPP_EXTERN_C String_t* _stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155;
IL2CPP_EXTERN_C String_t* _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMonoBehaviourExt_t59A041FB03A3F6EB588A5165E7FCBD6E960F9D32_m38B55F7E47A7BBEADBDF85B3AE8CF4EAA7562ABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_mE3B66760F7FE50D3A47455226841745AD627A20C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket__ctor_mE52B7A950A80A87FE66D698AC21947E33919CC86_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34  : public RuntimeObject
{
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_0;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::Protocol
	uint8_t ___Protocol_1;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::ConnectAddress
	String_t* ___ConnectAddress_4;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_5;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_8;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::<AddressResolvedAsIpv6>k__BackingField
	bool ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlProtocol>k__BackingField
	String_t* ___U3CUrlProtocolU3Ek__BackingField_10;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlPath>k__BackingField
	String_t* ___U3CUrlPathU3Ek__BackingField_11;
};

// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F  : public RuntimeObject
{
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_t81522842E9975A0B8ADDCB83BBAB7A1A28A95223* ___SerializationProtocol_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_2;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* ___PhotonSocket_3;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.String ExitGames.Client.Photon.PeerBase::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_5;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_7;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_8;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t47ACF759A20E471E2A0FCE81D3FA13937C981DA1* ___CommandInCurrentDispatch_9;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_10;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_11;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481* ___ActionQueue_12;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_13;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_14;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_21;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_23;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_24;
	// System.Object ExitGames.Client.Photon.PeerBase::PhotonToken
	RuntimeObject* ___PhotonToken_25;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject* ___CustomInitData_26;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_27;
	// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.PeerBase::reusableEventData
	EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* ___reusableEventData_28;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PeerBase::watch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___watch_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::longestSentCall
	int32_t ___longestSentCall_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_33;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_34;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_35;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_36;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_37;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::messageHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___messageHeader_39;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_40;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___lagRandomizer_41;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t1D68692B59A0459D88CB117CF9AC5EA8B3FA682F* ___NetSimListOutgoing_42;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t1D68692B59A0459D88CB117CF9AC5EA8B3FA682F* ___NetSimListIncoming_43;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* ___networkSimulationSettings_44;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_45;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// ExitGames.Client.Photon.WebSocket
struct WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B  : public RuntimeObject
{
	// System.Uri ExitGames.Client.Photon.WebSocket::mUrl
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___mUrl_0;
	// System.String ExitGames.Client.Photon.WebSocket::protocols
	String_t* ___protocols_1;
	// System.Int32 ExitGames.Client.Photon.WebSocket::m_NativeRef
	int32_t ___m_NativeRef_2;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12
struct U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ExitGames.Client.Photon.SocketWebTcp ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::<>4__this
	SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A  : public IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34
{
	// ExitGames.Client.Photon.WebSocket ExitGames.Client.Photon.SocketWebTcp::sock
	WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* ___sock_12;
	// System.Object ExitGames.Client.Photon.SocketWebTcp::syncer
	RuntimeObject* ___syncer_13;
	// UnityEngine.GameObject ExitGames.Client.Photon.SocketWebTcp::websocketConnectionObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___websocketConnectionObject_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// ExitGames.Client.Photon.WaitForRealSeconds
struct WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single ExitGames.Client.Photon.WaitForRealSeconds::_endTime
	float ____endTime_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct MonoBehaviourExt_t59A041FB03A3F6EB588A5165E7FCBD6E960F9D32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// <Module>

// <Module>

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34_StaticFields
{
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerIpAddress>k__BackingField
	String_t* ___U3CServerIpAddressU3Ek__BackingField_7;
};

// ExitGames.Client.Photon.IPhotonSocket

// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F_StaticFields
{
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_22;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_t02482683AE1D9D63176EAA56728B12F9ADCA10BE* ___MessageBufferPool_38;
};

// ExitGames.Client.Photon.PeerBase

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// System.ValueType

// System.ValueType

// ExitGames.Client.Photon.WebSocket

// ExitGames.Client.Photon.WebSocket

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12

// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// ExitGames.Client.Photon.SocketWebTcp

// ExitGames.Client.Photon.SocketWebTcp

// System.Void

// System.Void

// ExitGames.Client.Photon.WaitForRealSeconds

// ExitGames.Client.Photon.WaitForRealSeconds

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.SystemException

// System.SystemException

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt

// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket__ctor_m6B3835EE978E2B363748C5B291A8BCD56A2A5E0E (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___0_peerBase, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_mB49A10CE97A4B3D6F5934FE9FA8A635A8DA16522_inline (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_ServerAddress_m64A4656AE1370555D8778535E059680E9C26E2CD_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_ReportDebugOfLevel_mA64EDC0A11AF42C58BDA2913720540F8ECD772AE (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, uint8_t ___0_levelOfMessage, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1 (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_m013F65B88232E2CECD27EE6DA21AF65278960D54 (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_m95735A5C7FBADA680EBEEC6C65C39806B92F6D89 (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_EnqueueDebugReturn_mB5088055254D8D7831447BA5F748D8F74FD69C58 (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, uint8_t ___0_debugLevel, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt>()
inline MonoBehaviourExt_t59A041FB03A3F6EB588A5165E7FCBD6E960F9D32* GameObject_AddComponent_TisMonoBehaviourExt_t59A041FB03A3F6EB588A5165E7FCBD6E960F9D32_m38B55F7E47A7BBEADBDF85B3AE8CF4EAA7562ABC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviourExt_t59A041FB03A3F6EB588A5165E7FCBD6E960F9D32* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___0_uriString, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.IPhotonSocket::get_SerializationProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_SerializationProtocol_m0A0BB2FB5D70746DFAF69A56366A993187D870EA (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE52B7A950A80A87FE66D698AC21947E33919CC86 (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_url, String_t* ___1_serialization, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_m79839358D0F1E7E3F206CCF812BAC9DE2A416D47 (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ExitGames.Client.Photon.SocketWebTcp::ReceiveLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SocketWebTcp_ReceiveLoop_m463DD0C4966A8A224B8C4A29C467379EA104F180 (SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.SupportClass::ByteArrayToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_ByteArrayToString_mA4F274709726469D43A45095F23D55D81A87B5E5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_list, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_m774347B3305E52A1AD5BD53C7890F77B437E3533 (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleException_m50599D782455D34378626862B68079C79834B2AF (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, int32_t ___0_statusCode, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12__ctor_m9485599626BE66854E73B6C947E6680FE34AFCBD (U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WaitForRealSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRealSeconds__ctor_m6B1BA1EE43A06512E2F8619365010282B9D3C6D0 (WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_m7A79E694815BF31611C90214F5C81D129383D5DF (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_m10F7BAEE54223D7D4D7B73CAB9F9AC608EE00737_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Byte[] ExitGames.Client.Photon.WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WebSocket_Recv_m4AAEC539EC4B70B92A2773104F653A5D99F3D87A (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleReceivedDatagram_mE732DCDE0858559B4F838D8DDF66C979F7DAA974 (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBuffer, int32_t ___1_length, bool ___2_willBeReused, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_mD243A0383DDEED5C10C57C3731DE4FB6B375FAF4 (int32_t ___0_socketInstance, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ptr, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_m26B88F8F318E5A2F07DBFAED1A0C7B75E5EA2F18 (int32_t ___0_socketInstance, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_mFD810AD1AB504EDF6A1295CC1ADFF31618EAF9DC (int32_t ___0_socketInstance, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ptr, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_m327B951D0E5151F0910C7B06CC88A70CCF05005A (String_t* ___0_url, String_t* ___1_protocols, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_mB8CA9E37FC49D2AD48A0ED5B40CB663C9D031564 (int32_t ___0_socketInstance, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_m7D0CC1D04DCB1936E36901BFED4C39AD6BC28D5B (int32_t ___0_socketInstance, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_m5959A57CCE016018920F04FD5088C40518CEB30B (int32_t ___0_socketInstance, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ptr, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketCreate(char*, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketState(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketSend(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketRecv(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketRecvLength(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketClose(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketError(int32_t, uint8_t*, int32_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ExitGames.Client.Photon.WaitForRealSeconds::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForRealSeconds_get_keepWaiting_m810AD3E8C21A7BB583AD78F6B5C0C25008A0AE09 (WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189* __this, const RuntimeMethod* method) 
{
	{
		// get { return this._endTime > Time.realtimeSinceStartup; }
		float L_0 = __this->____endTime_0;
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		return (bool)((((float)L_0) > ((float)L_1))? 1 : 0);
	}
}
// System.Void ExitGames.Client.Photon.WaitForRealSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRealSeconds__ctor_m6B1BA1EE43A06512E2F8619365010282B9D3C6D0 (WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189* __this, float ___0_seconds, const RuntimeMethod* method) 
{
	{
		// public WaitForRealSeconds(float seconds)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// this._endTime = Time.realtimeSinceStartup + seconds;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = ___0_seconds;
		__this->____endTime_0 = ((float)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SocketWebTcp::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketWebTcp__ctor_m6611701E55BA3E024A20FB1639D8E7B4D7122813 (SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* __this, PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___0_npeer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B6F259D090A7AB0D2DC04B00C4CAA926D17DD6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly object syncer = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___syncer_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___syncer_13), (void*)L_0);
		// public SocketWebTcp(PeerBase npeer) : base(npeer)
		PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* L_1 = ___0_npeer;
		IPhotonSocket__ctor_m6B3835EE978E2B363748C5B291A8BCD56A2A5E0E(__this, L_1, NULL);
		// this.ServerAddress = npeer.ServerAddress;
		PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* L_2 = ___0_npeer;
		String_t* L_3;
		L_3 = PeerBase_get_ServerAddress_mB49A10CE97A4B3D6F5934FE9FA8A635A8DA16522_inline(L_2, NULL);
		IPhotonSocket_set_ServerAddress_m64A4656AE1370555D8778535E059680E9C26E2CD_inline(__this, L_3, NULL);
		// if (this.ReportDebugOfLevel(DebugLevel.INFO))
		bool L_4;
		L_4 = IPhotonSocket_ReportDebugOfLevel_mA64EDC0A11AF42C58BDA2913720540F8ECD772AE(__this, 3, NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "new SocketWebTcp() for Unity. Server: " + this.ServerAddress);
		RuntimeObject* L_5;
		L_5 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
		String_t* L_6;
		L_6 = IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline(__this, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4B6F259D090A7AB0D2DC04B00C4CAA926D17DD6D, L_6, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_5, 3, L_7);
	}

IL_0043:
	{
		// this.PollReceive = false;
		((IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)__this)->___PollReceive_2 = (bool)0;
		// }
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketWebTcp_Dispose_mD62E8A6F02B19EA081A9E6AE2C3E6D2855895065 (SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* __this, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* G_B6_3 = NULL;
	Exception_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* G_B5_3 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* G_B7_3 = NULL;
	{
		// this.State = PhotonSocketState.Disconnecting;
		IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline(__this, 3, NULL);
		// if (this.sock != null)
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_0 = __this->___sock_12;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// if (this.sock.Connected) this.sock.Close();
			WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_1 = __this->___sock_12;
			bool L_2;
			L_2 = WebSocket_get_Connected_m013F65B88232E2CECD27EE6DA21AF65278960D54(L_1, NULL);
			if (!L_2)
			{
				goto IL_0027_1;
			}
		}
		{
			// if (this.sock.Connected) this.sock.Close();
			WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_3 = __this->___sock_12;
			WebSocket_Close_m95735A5C7FBADA680EBEEC6C65C39806B92F6D89(L_3, NULL);
		}

IL_0027_1:
		{
			// }
			goto IL_004a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// this.EnqueueDebugReturn(DebugLevel.INFO, "Exception in Dispose(): " + ex);
			Exception_t* L_4 = V_0;
			Exception_t* L_5 = L_4;
			G_B5_0 = L_5;
			G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A));
			G_B5_2 = 3;
			G_B5_3 = __this;
			if (L_5)
			{
				G_B6_0 = L_5;
				G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral665908BFFBC2A550A5A9FF79CD8BAB040074DC9A));
				G_B6_2 = 3;
				G_B6_3 = __this;
				goto IL_0039;
			}
		}
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_003e;
		}

IL_0039:
		{
			String_t* L_6;
			L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
			G_B7_0 = L_6;
			G_B7_1 = G_B6_1;
			G_B7_2 = G_B6_2;
			G_B7_3 = G_B6_3;
		}

IL_003e:
		{
			String_t* L_7;
			L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B7_1, G_B7_0, NULL);
			IPhotonSocket_EnqueueDebugReturn_mB5088055254D8D7831447BA5F748D8F74FD69C58(G_B7_3, G_B7_2, L_7, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_004a;
		}
	}// end catch (depth: 1)

IL_004a:
	{
		// this.sock = null;
		__this->___sock_12 = (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sock_12), (void*)(WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B*)NULL);
		// this.State = PhotonSocketState.Disconnected;
		IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline(__this, 0, NULL);
		// }
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketWebTcp_Connect_m9AC949A59F6D881176029CA078C6AF81347827C3 (SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMonoBehaviourExt_t59A041FB03A3F6EB588A5165E7FCBD6E960F9D32_m38B55F7E47A7BBEADBDF85B3AE8CF4EAA7562ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B62430EC3FF6AF6C57F10516C6EC5C8D0497F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.State = PhotonSocketState.Connecting;
		IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline(__this, 1, NULL);
		// if (this.websocketConnectionObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___websocketConnectionObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// UnityEngine.Object.Destroy(this.websocketConnectionObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___websocketConnectionObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0020:
	{
		// this.websocketConnectionObject = new GameObject("websocketConnectionObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral14B62430EC3FF6AF6C57F10516C6EC5C8D0497F3, NULL);
		__this->___websocketConnectionObject_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___websocketConnectionObject_14), (void*)L_3);
		// MonoBehaviour mb = this.websocketConnectionObject.AddComponent<MonoBehaviourExt>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___websocketConnectionObject_14;
		MonoBehaviourExt_t59A041FB03A3F6EB588A5165E7FCBD6E960F9D32* L_5;
		L_5 = GameObject_AddComponent_TisMonoBehaviourExt_t59A041FB03A3F6EB588A5165E7FCBD6E960F9D32_m38B55F7E47A7BBEADBDF85B3AE8CF4EAA7562ABC(L_4, GameObject_AddComponent_TisMonoBehaviourExt_t59A041FB03A3F6EB588A5165E7FCBD6E960F9D32_m38B55F7E47A7BBEADBDF85B3AE8CF4EAA7562ABC_RuntimeMethod_var);
		// this.websocketConnectionObject.hideFlags = HideFlags.HideInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___websocketConnectionObject_14;
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_6, 1, NULL);
		// UnityEngine.Object.DontDestroyOnLoad(this.websocketConnectionObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___websocketConnectionObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_7, NULL);
		// this.sock = new WebSocket(new Uri(this.ConnectAddress), this.SerializationProtocol);
		String_t* L_8 = ((IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)__this)->___ConnectAddress_4;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_9 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_9, L_8, NULL);
		String_t* L_10;
		L_10 = IPhotonSocket_get_SerializationProtocol_m0A0BB2FB5D70746DFAF69A56366A993187D870EA(__this, NULL);
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_11 = (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B*)il2cpp_codegen_object_new(WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B_il2cpp_TypeInfo_var);
		WebSocket__ctor_mE52B7A950A80A87FE66D698AC21947E33919CC86(L_11, L_9, L_10, NULL);
		__this->___sock_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sock_12), (void*)L_11);
		// this.sock.Connect();
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_12 = __this->___sock_12;
		WebSocket_Connect_m79839358D0F1E7E3F206CCF812BAC9DE2A416D47(L_12, NULL);
		// mb.StartCoroutine(this.ReceiveLoop());
		RuntimeObject* L_13;
		L_13 = SocketWebTcp_ReceiveLoop_m463DD0C4966A8A224B8C4A29C467379EA104F180(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_5, L_13, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketWebTcp_Disconnect_mDD9B8BFA017825BD0C24894313310ECDE93B5466 (SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92AD75AD6FCA907A1DC04172D9D3B3DCA5284978);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	RuntimeObject* G_B7_3 = NULL;
	Exception_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	RuntimeObject* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	RuntimeObject* G_B8_3 = NULL;
	{
		// if (this.ReportDebugOfLevel(DebugLevel.INFO))
		bool L_0;
		L_0 = IPhotonSocket_ReportDebugOfLevel_mA64EDC0A11AF42C58BDA2913720540F8ECD772AE(__this, 3, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "SocketWebTcp.Disconnect()");
		RuntimeObject* L_1;
		L_1 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_1, 3, _stringLiteral92AD75AD6FCA907A1DC04172D9D3B3DCA5284978);
	}

IL_001a:
	{
		// this.State = PhotonSocketState.Disconnecting;
		IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline(__this, 3, NULL);
		// lock (this.syncer)
		RuntimeObject* L_2 = __this->___syncer_13;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0076:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_007f;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_007f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
				// if (this.sock != null)
				WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_6 = __this->___sock_12;
				if (!L_6)
				{
					goto IL_0074_1;
				}
			}
			try
			{// begin try (depth: 2)
				// this.sock.Close();
				WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_7 = __this->___sock_12;
				WebSocket_Close_m95735A5C7FBADA680EBEEC6C65C39806B92F6D89(L_7, NULL);
				// }
				goto IL_006d_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0047_1;
				}
				throw e;
			}

CATCH_0047_1:
			{// begin catch(System.Exception)
				{
					// catch (Exception ex)
					V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					// this.Listener.DebugReturn(DebugLevel.ERROR, "Exception in Disconnect(): " + ex);
					RuntimeObject* L_8;
					L_8 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
					Exception_t* L_9 = V_2;
					Exception_t* L_10 = L_9;
					G_B6_0 = L_10;
					G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C));
					G_B6_2 = 1;
					G_B6_3 = L_8;
					if (L_10)
					{
						G_B7_0 = L_10;
						G_B7_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA2076A563A22DA628C30B53A80EA51616D9C8C7C));
						G_B7_2 = 1;
						G_B7_3 = L_8;
						goto IL_005c_1;
					}
				}
				{
					G_B8_0 = ((String_t*)(NULL));
					G_B8_1 = G_B6_1;
					G_B8_2 = G_B6_2;
					G_B8_3 = G_B6_3;
					goto IL_0061_1;
				}

IL_005c_1:
				{
					String_t* L_11;
					L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
					G_B8_0 = L_11;
					G_B8_1 = G_B7_1;
					G_B8_2 = G_B7_2;
					G_B8_3 = G_B7_3;
				}

IL_0061_1:
				{
					String_t* L_12;
					L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B8_1, G_B8_0, NULL);
					InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var)), G_B8_3, G_B8_2, L_12);
					// }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_006d_1;
				}
			}// end catch (depth: 2)

IL_006d_1:
			{
				// this.sock = null;
				__this->___sock_12 = (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___sock_12), (void*)(WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B*)NULL);
			}

IL_0074_1:
			{
				// }
				goto IL_0080;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0080:
	{
		// if (this.websocketConnectionObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___websocketConnectionObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0099;
		}
	}
	{
		// UnityEngine.Object.Destroy(this.websocketConnectionObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___websocketConnectionObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_15, NULL);
	}

IL_0099:
	{
		// this.State = PhotonSocketState.Disconnected;
		IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline(__this, 0, NULL);
		// return true;
		return (bool)1;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketWebTcp::Send(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketWebTcp_Send_m84223FE8F49555DB10E713A67110C40005F5B1ED (SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6694B5F6F3666B90EF97D3CC74C9D8B36A63411A);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Exception_t* V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (this.State != PhotonSocketState.Connected)
		int32_t L_0;
		L_0 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000b;
		}
	}
	{
		// return PhotonSocketError.Skipped;
		return (int32_t)(1);
	}

IL_000b:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (data.Length > length)
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
			int32_t L_2 = ___1_length;
			if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) <= ((int32_t)L_2)))
			{
				goto IL_0026_1;
			}
		}
		{
			// byte[] trimmedData = new byte[length];
			int32_t L_3 = ___1_length;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
			V_0 = L_4;
			// Buffer.BlockCopy(data, 0, trimmedData, 0, length);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_data;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
			int32_t L_7 = ___1_length;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
			// data = trimmedData;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
			___0_data = L_8;
		}

IL_0026_1:
		{
			// if (this.ReportDebugOfLevel(DebugLevel.ALL))
			bool L_9;
			L_9 = IPhotonSocket_ReportDebugOfLevel_mA64EDC0A11AF42C58BDA2913720540F8ECD772AE(__this, 5, NULL);
			if (!L_9)
			{
				goto IL_004b_1;
			}
		}
		{
			// this.Listener.DebugReturn(DebugLevel.ALL, "Sending: " + SupportClassPun.ByteArrayToString(data));
			RuntimeObject* L_10;
			L_10 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_data;
			il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
			String_t* L_12;
			L_12 = SupportClass_ByteArrayToString_mA4F274709726469D43A45095F23D55D81A87B5E5(L_11, NULL);
			String_t* L_13;
			L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6694B5F6F3666B90EF97D3CC74C9D8B36A63411A, L_12, NULL);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_10, 5, L_13);
		}

IL_004b_1:
		{
			// if (this.sock != null)
			WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_14 = __this->___sock_12;
			if (!L_14)
			{
				goto IL_005f_1;
			}
		}
		{
			// this.sock.Send(data);
			WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_15 = __this->___sock_12;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_data;
			WebSocket_Send_m774347B3305E52A1AD5BD53C7890F77B437E3533(L_15, L_16, NULL);
		}

IL_005f_1:
		{
			// }
			goto IL_0098;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0061;
		}
		throw e;
	}

CATCH_0061:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Cannot send to: " + this.ServerAddress + ". " + e.Message);
		RuntimeObject* L_17;
		L_17 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
		String_t* L_18;
		L_18 = IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline(__this, NULL);
		Exception_t* L_19 = V_1;
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_19);
		String_t* L_21;
		L_21 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A328C89F6BA1B16C6636D0A5824840B5CFB5593)), L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434)), L_20, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var)), L_17, 1, L_21);
		// this.HandleException(StatusCode.Exception);
		IPhotonSocket_HandleException_m50599D782455D34378626862B68079C79834B2AF(__this, ((int32_t)1026), NULL);
		// return PhotonSocketError.Exception;
		V_2 = 3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009a;
	}// end catch (depth: 1)

IL_0098:
	{
		// return PhotonSocketError.Success;
		return (int32_t)(0);
	}

IL_009a:
	{
		// }
		int32_t L_22 = V_2;
		return L_22;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketWebTcp::Receive(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketWebTcp_Receive_mCC54710288C9A9DC2DA19F3A254EB9703C66C1A5 (SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_data, const RuntimeMethod* method) 
{
	{
		// data = null;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = ___0_data;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// return PhotonSocketError.NoData;
		return (int32_t)(2);
	}
}
// System.Collections.IEnumerator ExitGames.Client.Photon.SocketWebTcp::ReceiveLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SocketWebTcp_ReceiveLoop_m463DD0C4966A8A224B8C4A29C467379EA104F180 (SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61* L_0 = (U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61*)il2cpp_codegen_object_new(U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61_il2cpp_TypeInfo_var);
		U3CReceiveLoopU3Ed__12__ctor_m9485599626BE66854E73B6C947E6680FE34AFCBD(L_0, 0, NULL);
		U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourExt__ctor_mBFF1769EFE88D2636A4A99EBC3A186536D711891 (MonoBehaviourExt_t59A041FB03A3F6EB588A5165E7FCBD6E960F9D32* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12__ctor_m9485599626BE66854E73B6C947E6680FE34AFCBD (U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12_System_IDisposable_Dispose_mBDDCB2E87C54EA9FC54C380F3E1BE17892CE6785 (U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReceiveLoopU3Ed__12_MoveNext_mAA6B727949D9B4CC4A0CDB77D64F871DD25A024D (U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonSocketState_t7F72F90C12B6D46FEE5435BA595D630D536C97BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8DE4CB154AC0296896C7FD3192C85F2FE4730D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B31_0 = NULL;
	int32_t G_B31_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B31_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B31_3 = NULL;
	int32_t G_B31_4 = 0;
	SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* G_B31_5 = NULL;
	Exception_t* G_B30_0 = NULL;
	int32_t G_B30_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B30_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B30_3 = NULL;
	int32_t G_B30_4 = 0;
	SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* G_B30_5 = NULL;
	String_t* G_B32_0 = NULL;
	int32_t G_B32_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B32_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B32_3 = NULL;
	int32_t G_B32_4 = 0;
	SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* G_B32_5 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_01ef;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (this.sock != null)
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_3 = V_1;
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_4 = L_3->___sock_12;
		if (!L_4)
		{
			goto IL_02dc;
		}
	}
	{
		goto IL_0056;
	}

IL_0036:
	{
		// yield return new WaitForRealSeconds(0.1f);
		WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189* L_5 = (WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189*)il2cpp_codegen_object_new(WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_m6B1BA1EE43A06512E2F8619365010282B9D3C6D0(L_5, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0056:
	{
		// while (this.sock != null && !this.sock.Connected && this.sock.Error == null)
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_6 = V_1;
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_7 = L_6->___sock_12;
		if (!L_7)
		{
			goto IL_0078;
		}
	}
	{
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_8 = V_1;
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_9 = L_8->___sock_12;
		bool L_10;
		L_10 = WebSocket_get_Connected_m013F65B88232E2CECD27EE6DA21AF65278960D54(L_9, NULL);
		if (L_10)
		{
			goto IL_0078;
		}
	}
	{
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_11 = V_1;
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_12 = L_11->___sock_12;
		String_t* L_13;
		L_13 = WebSocket_get_Error_m7A79E694815BF31611C90214F5C81D129383D5DF(L_12, NULL);
		if (!L_13)
		{
			goto IL_0036;
		}
	}

IL_0078:
	{
		// if (this.sock != null)
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_14 = V_1;
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_15 = L_14->___sock_12;
		if (!L_15)
		{
			goto IL_02dc;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_16 = V_1;
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_17 = L_16->___sock_12;
		String_t* L_18;
		L_18 = WebSocket_get_Error_m7A79E694815BF31611C90214F5C81D129383D5DF(L_17, NULL);
		if (!L_18)
		{
			goto IL_00f7;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread. Server: " + this.ServerAddress + ":" + this.ServerPort + " Error: " + this.sock.Error);
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_19 = V_1;
		RuntimeObject* L_20;
		L_20 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(L_19, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		ArrayElementTypeCheck (L_22, _stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_24 = V_1;
		String_t* L_25;
		L_25 = IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline(L_24, NULL);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_23;
		ArrayElementTypeCheck (L_26, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_28 = V_1;
		int32_t L_29;
		L_29 = IPhotonSocket_get_ServerPort_m10F7BAEE54223D7D4D7B73CAB9F9AC608EE00737_inline(L_28, NULL);
		V_2 = L_29;
		String_t* L_30;
		L_30 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_27;
		ArrayElementTypeCheck (L_31, _stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_33 = V_1;
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_34 = L_33->___sock_12;
		String_t* L_35;
		L_35 = WebSocket_get_Error_m7A79E694815BF31611C90214F5C81D129383D5DF(L_34, NULL);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_35);
		String_t* L_36;
		L_36 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_32, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_20, 1, L_36);
		// this.HandleException(StatusCode.ExceptionOnConnect);
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_37 = V_1;
		IPhotonSocket_HandleException_m50599D782455D34378626862B68079C79834B2AF(L_37, ((int32_t)1023), NULL);
		goto IL_02dc;
	}

IL_00f7:
	{
		// if (this.ReportDebugOfLevel(DebugLevel.ALL))
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_38 = V_1;
		bool L_39;
		L_39 = IPhotonSocket_ReportDebugOfLevel_mA64EDC0A11AF42C58BDA2913720540F8ECD772AE(L_38, 5, NULL);
		if (!L_39)
		{
			goto IL_012a;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ALL, "Receiving by websocket. this.State: " + this.State);
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_40 = V_1;
		RuntimeObject* L_41;
		L_41 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(L_40, NULL);
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_42 = V_1;
		int32_t L_43;
		L_43 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(L_42, NULL);
		V_3 = L_43;
		Il2CppFakeBox<int32_t> L_44(PhotonSocketState_t7F72F90C12B6D46FEE5435BA595D630D536C97BB_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_45;
		L_45 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_44), NULL);
		String_t* L_46;
		L_46 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B, L_45, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_41, 5, L_46);
	}

IL_012a:
	{
		// this.State = PhotonSocketState.Connected;
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_47 = V_1;
		IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline(L_47, 2, NULL);
		// this.peerBase.OnConnect();
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_48 = V_1;
		PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* L_49 = ((IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)L_48)->___peerBase_0;
		VirtualActionInvoker0::Invoke(10 /* System.Void ExitGames.Client.Photon.PeerBase::OnConnect() */, L_49);
		goto IL_02d0;
	}

IL_0141:
	{
		// if (this.sock != null)
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_50 = V_1;
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_51 = L_50->___sock_12;
		if (!L_51)
		{
			goto IL_02d0;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_52 = V_1;
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_53 = L_52->___sock_12;
		String_t* L_54;
		L_54 = WebSocket_get_Error_m7A79E694815BF31611C90214F5C81D129383D5DF(L_53, NULL);
		if (!L_54)
		{
			goto IL_01c0;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread (inside loop). Server: " + this.ServerAddress + ":" + this.ServerPort + " Error: " + this.sock.Error);
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_55 = V_1;
		RuntimeObject* L_56;
		L_56 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(L_55, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_57;
		ArrayElementTypeCheck (L_58, _stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = L_58;
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_60 = V_1;
		String_t* L_61;
		L_61 = IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline(L_60, NULL);
		ArrayElementTypeCheck (L_59, L_61);
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_61);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_59;
		ArrayElementTypeCheck (L_62, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_62)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = L_62;
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_64 = V_1;
		int32_t L_65;
		L_65 = IPhotonSocket_get_ServerPort_m10F7BAEE54223D7D4D7B73CAB9F9AC608EE00737_inline(L_64, NULL);
		V_2 = L_65;
		String_t* L_66;
		L_66 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		ArrayElementTypeCheck (L_63, L_66);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_66);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_63;
		ArrayElementTypeCheck (L_67, _stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		(L_67)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = L_67;
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_69 = V_1;
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_70 = L_69->___sock_12;
		String_t* L_71;
		L_71 = WebSocket_get_Error_m7A79E694815BF31611C90214F5C81D129383D5DF(L_70, NULL);
		ArrayElementTypeCheck (L_68, L_71);
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_71);
		String_t* L_72;
		L_72 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_68, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_56, 1, L_72);
		// this.HandleException(StatusCode.ExceptionOnReceive);
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_73 = V_1;
		IPhotonSocket_HandleException_m50599D782455D34378626862B68079C79834B2AF(L_73, ((int32_t)1039), NULL);
		// break;
		goto IL_02dc;
	}

IL_01c0:
	{
		// byte[] inBuff = this.sock.Recv();
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_74 = V_1;
		WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* L_75 = L_74->___sock_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76;
		L_76 = WebSocket_Recv_m4AAEC539EC4B70B92A2773104F653A5D99F3D87A(L_75, NULL);
		V_4 = L_76;
		// if (inBuff == null || inBuff.Length == 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = V_4;
		if (!L_77)
		{
			goto IL_01d6;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_4;
		if ((((RuntimeArray*)L_78)->max_length))
		{
			goto IL_01fb;
		}
	}

IL_01d6:
	{
		// yield return new WaitForRealSeconds(0.02f);
		WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189* L_79 = (WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189*)il2cpp_codegen_object_new(WaitForRealSeconds_t527A0EE3FB15BBC822490A5CCB86E407B83E5189_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_m6B1BA1EE43A06512E2F8619365010282B9D3C6D0(L_79, (0.0199999996f), NULL);
		__this->___U3CU3E2__current_1 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_79);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_01ef:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_02d0;
	}

IL_01fb:
	{
		// if (this.ReportDebugOfLevel(DebugLevel.ALL))
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_80 = V_1;
		bool L_81;
		L_81 = IPhotonSocket_ReportDebugOfLevel_mA64EDC0A11AF42C58BDA2913720540F8ECD772AE(L_80, 5, NULL);
		if (!L_81)
		{
			goto IL_0232;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ALL, "TCP << " + inBuff.Length + " = " + SupportClassPun.ByteArrayToString(inBuff));
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_82 = V_1;
		RuntimeObject* L_83;
		L_83 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(L_82, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = V_4;
		V_2 = ((int32_t)(((RuntimeArray*)L_84)->max_length));
		String_t* L_85;
		L_85 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_4;
		il2cpp_codegen_runtime_class_init_inline(SupportClass_t32D0DFFDDE8571589E7CEE5BEA6955AD56E8D4A7_il2cpp_TypeInfo_var);
		String_t* L_87;
		L_87 = SupportClass_ByteArrayToString_mA4F274709726469D43A45095F23D55D81A87B5E5(L_86, NULL);
		String_t* L_88;
		L_88 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral1D8DE4CB154AC0296896C7FD3192C85F2FE4730D, L_85, _stringLiteral746515BB60DB24A53499870A86D28FF7244B3B64, L_87, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_83, 5, L_88);
	}

IL_0232:
	{
		// if (inBuff.Length > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_4;
		if (!(((RuntimeArray*)L_89)->max_length))
		{
			goto IL_02d0;
		}
	}
	try
	{// begin try (depth: 1)
		// this.HandleReceivedDatagram(inBuff, inBuff.Length, false);
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_90 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = V_4;
		IPhotonSocket_HandleReceivedDatagram_mE732DCDE0858559B4F838D8DDF66C979F7DAA974(L_90, L_91, ((int32_t)(((RuntimeArray*)L_92)->max_length)), (bool)0, NULL);
		// }
		goto IL_02d0;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_024c;
		}
		throw e;
	}

CATCH_024c:
	{// begin catch(System.Exception)
		{
			// catch (Exception e)
			V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// if (this.State != PhotonSocketState.Disconnecting && this.State != PhotonSocketState.Disconnected)
			SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_93 = V_1;
			int32_t L_94;
			L_94 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(L_93, NULL);
			if ((((int32_t)L_94) == ((int32_t)3)))
			{
				goto IL_02ce;
			}
		}
		{
			SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_95 = V_1;
			int32_t L_96;
			L_96 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(L_95, NULL);
			if (!L_96)
			{
				goto IL_02ce;
			}
		}
		{
			// if (this.ReportDebugOfLevel(DebugLevel.ERROR))
			SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_97 = V_1;
			bool L_98;
			L_98 = IPhotonSocket_ReportDebugOfLevel_mA64EDC0A11AF42C58BDA2913720540F8ECD772AE(L_97, 1, NULL);
			if (!L_98)
			{
				goto IL_02c3;
			}
		}
		{
			// this.EnqueueDebugReturn(DebugLevel.ERROR, "Receive issue. State: " + this.State + ". Server: '" + this.ServerAddress + "' Exception: " + e);
			SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_99 = V_1;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_100 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_101 = L_100;
			ArrayElementTypeCheck (L_101, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			(L_101)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_102 = L_101;
			SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_103 = V_1;
			int32_t L_104;
			L_104 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(L_103, NULL);
			V_3 = L_104;
			Il2CppFakeBox<int32_t> L_105(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhotonSocketState_t7F72F90C12B6D46FEE5435BA595D630D536C97BB_il2cpp_TypeInfo_var)), (&V_3));
			String_t* L_106;
			L_106 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_105), NULL);
			ArrayElementTypeCheck (L_102, L_106);
			(L_102)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_106);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107 = L_102;
			ArrayElementTypeCheck (L_107, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			(L_107)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_108 = L_107;
			SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_109 = V_1;
			String_t* L_110;
			L_110 = IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline(L_109, NULL);
			ArrayElementTypeCheck (L_108, L_110);
			(L_108)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_110);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_111 = L_108;
			ArrayElementTypeCheck (L_111, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			(L_111)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_112 = L_111;
			Exception_t* L_113 = V_5;
			Exception_t* L_114 = L_113;
			G_B30_0 = L_114;
			G_B30_1 = 5;
			G_B30_2 = L_112;
			G_B30_3 = L_112;
			G_B30_4 = 1;
			G_B30_5 = L_99;
			if (L_114)
			{
				G_B31_0 = L_114;
				G_B31_1 = 5;
				G_B31_2 = L_112;
				G_B31_3 = L_112;
				G_B31_4 = 1;
				G_B31_5 = L_99;
				goto IL_02b3;
			}
		}
		{
			G_B32_0 = ((String_t*)(NULL));
			G_B32_1 = G_B30_1;
			G_B32_2 = G_B30_2;
			G_B32_3 = G_B30_3;
			G_B32_4 = G_B30_4;
			G_B32_5 = G_B30_5;
			goto IL_02b8;
		}

IL_02b3:
		{
			String_t* L_115;
			L_115 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B31_0);
			G_B32_0 = L_115;
			G_B32_1 = G_B31_1;
			G_B32_2 = G_B31_2;
			G_B32_3 = G_B31_3;
			G_B32_4 = G_B31_4;
			G_B32_5 = G_B31_5;
		}

IL_02b8:
		{
			ArrayElementTypeCheck (G_B32_2, G_B32_0);
			(G_B32_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B32_1), (String_t*)G_B32_0);
			String_t* L_116;
			L_116 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B32_3, NULL);
			IPhotonSocket_EnqueueDebugReturn_mB5088055254D8D7831447BA5F748D8F74FD69C58(G_B32_5, G_B32_4, L_116, NULL);
		}

IL_02c3:
		{
			// this.HandleException(StatusCode.ExceptionOnReceive);
			SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_117 = V_1;
			IPhotonSocket_HandleException_m50599D782455D34378626862B68079C79834B2AF(L_117, ((int32_t)1039), NULL);
		}

IL_02ce:
		{
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_02d0;
		}
	}// end catch (depth: 1)

IL_02d0:
	{
		// while (this.State == PhotonSocketState.Connected)
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_118 = V_1;
		int32_t L_119;
		L_119 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(L_118, NULL);
		if ((((int32_t)L_119) == ((int32_t)2)))
		{
			goto IL_0141;
		}
	}

IL_02dc:
	{
		// this.Disconnect();
		SocketWebTcp_t1F8B28CFFF704DB3769B10DBB3290A133248008A* L_120 = V_1;
		bool L_121;
		L_121 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, L_120);
		// }
		return (bool)0;
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReceiveLoopU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6CE17D6D10ACFEA62A98D7F8CDBBA812E9CBFF30 (U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_mE3B66760F7FE50D3A47455226841745AD627A20C (U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_mE3B66760F7FE50D3A47455226841745AD627A20C_RuntimeMethod_var)));
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_get_Current_mEFF1FD20669187427E930D2A03285AB5E9A105DC (U3CReceiveLoopU3Ed__12_t72754E38058F5DB3ED908CA704EE891C0C465B61* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.WebSocket::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE52B7A950A80A87FE66D698AC21947E33919CC86 (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_url, String_t* ___1_serialization, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// private string protocols = "GpBinaryV16";
		__this->___protocols_1 = _stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___protocols_1), (void*)_stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D);
		// public WebSocket(Uri url, string serialization = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.mUrl = url;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___0_url;
		__this->___mUrl_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUrl_0), (void*)L_0);
		// if (serialization != null)
		String_t* L_1 = ___1_serialization;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// this.protocols = serialization;
		String_t* L_2 = ___1_serialization;
		__this->___protocols_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___protocols_1), (void*)L_2);
	}

IL_0022:
	{
		// string protocol = mUrl.Scheme;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = __this->___mUrl_0;
		String_t* L_4;
		L_4 = Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F(L_3, NULL);
		V_0 = L_4;
		// if (!protocol.Equals("ws") && !protocol.Equals("wss"))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_5, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, NULL);
		if (L_6)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_7, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, NULL);
		if (L_8)
		{
			goto IL_0059;
		}
	}
	{
		// throw new ArgumentException("Unsupported protocol: " + protocol);
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket__ctor_mE52B7A950A80A87FE66D698AC21947E33919CC86_RuntimeMethod_var)));
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::SendString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SendString_mFA35A53AE8AE858780D5469450A4549E3A47287C (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	{
		// Send(Encoding.UTF8.GetBytes (str));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___0_str;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		WebSocket_Send_m774347B3305E52A1AD5BD53C7890F77B437E3533(__this, L_2, NULL);
		// }
		return;
	}
}
// System.String ExitGames.Client.Photon.WebSocket::RecvString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_RecvString_m5B415FB96BBDB9482C8C1DA938EE6C8325D1F5E1 (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] retval = Recv();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = WebSocket_Recv_m4AAEC539EC4B70B92A2773104F653A5D99F3D87A(__this, NULL);
		V_0 = L_0;
		// if (retval == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_000c:
	{
		// return Encoding.UTF8.GetString (retval);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_m327B951D0E5151F0910C7B06CC88A70CCF05005A (String_t* ___0_url, String_t* ___1_protocols, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_url' to native representation
	char* ____0_url_marshaled = NULL;
	____0_url_marshaled = il2cpp_codegen_marshal_string(___0_url);

	// Marshaling of parameter '___1_protocols' to native representation
	char* ____1_protocols_marshaled = NULL;
	____1_protocols_marshaled = il2cpp_codegen_marshal_string(___1_protocols);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketCreate)(____0_url_marshaled, ____1_protocols_marshaled);

	// Marshaling cleanup of parameter '___0_url' native representation
	il2cpp_codegen_marshal_free(____0_url_marshaled);
	____0_url_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_protocols' native representation
	il2cpp_codegen_marshal_free(____1_protocols_marshaled);
	____1_protocols_marshaled = NULL;

	return returnValue;
}
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_m7D0CC1D04DCB1936E36901BFED4C39AD6BC28D5B (int32_t ___0_socketInstance, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketState)(___0_socketInstance);

	return returnValue;
}
// System.Void ExitGames.Client.Photon.WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_mD243A0383DDEED5C10C57C3731DE4FB6B375FAF4 (int32_t ___0_socketInstance, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ptr, int32_t ___2_length, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___1_ptr' to native representation
	uint8_t* ____1_ptr_marshaled = NULL;
	if (___1_ptr != NULL)
	{
		____1_ptr_marshaled = reinterpret_cast<uint8_t*>((___1_ptr)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketSend)(___0_socketInstance, ____1_ptr_marshaled, ___2_length);

}
// System.Void ExitGames.Client.Photon.WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_mFD810AD1AB504EDF6A1295CC1ADFF31618EAF9DC (int32_t ___0_socketInstance, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ptr, int32_t ___2_length, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___1_ptr' to native representation
	uint8_t* ____1_ptr_marshaled = NULL;
	if (___1_ptr != NULL)
	{
		____1_ptr_marshaled = reinterpret_cast<uint8_t*>((___1_ptr)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketRecv)(___0_socketInstance, ____1_ptr_marshaled, ___2_length);

}
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_m26B88F8F318E5A2F07DBFAED1A0C7B75E5EA2F18 (int32_t ___0_socketInstance, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketRecvLength)(___0_socketInstance);

	return returnValue;
}
// System.Void ExitGames.Client.Photon.WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_mB8CA9E37FC49D2AD48A0ED5B40CB663C9D031564 (int32_t ___0_socketInstance, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketClose)(___0_socketInstance);

}
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_m5959A57CCE016018920F04FD5088C40518CEB30B (int32_t ___0_socketInstance, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ptr, int32_t ___2_length, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___1_ptr' to native representation
	uint8_t* ____1_ptr_marshaled = NULL;
	if (___1_ptr != NULL)
	{
		____1_ptr_marshaled = reinterpret_cast<uint8_t*>((___1_ptr)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketError)(___0_socketInstance, ____1_ptr_marshaled, ___2_length);

	return returnValue;
}
// System.Void ExitGames.Client.Photon.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_m774347B3305E52A1AD5BD53C7890F77B437E3533 (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) 
{
	{
		// SocketSend (m_NativeRef, buffer, buffer.Length);
		int32_t L_0 = __this->___m_NativeRef_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_buffer;
		WebSocket_SocketSend_mD243A0383DDEED5C10C57C3731DE4FB6B375FAF4(L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		// }
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WebSocket_Recv_m4AAEC539EC4B70B92A2773104F653A5D99F3D87A (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// int length = SocketRecvLength (m_NativeRef);
		int32_t L_0 = __this->___m_NativeRef_2;
		int32_t L_1;
		L_1 = WebSocket_SocketRecvLength_m26B88F8F318E5A2F07DBFAED1A0C7B75E5EA2F18(L_0, NULL);
		V_0 = L_1;
		// if (length == 0)
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0011:
	{
		// byte[] buffer = new byte[length];
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// SocketRecv (m_NativeRef, buffer, length);
		int32_t L_5 = __this->___m_NativeRef_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		int32_t L_7 = V_0;
		WebSocket_SocketRecv_mFD810AD1AB504EDF6A1295CC1ADFF31618EAF9DC(L_5, L_6, L_7, NULL);
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		return L_8;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_m79839358D0F1E7E3F206CCF812BAC9DE2A416D47 (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, const RuntimeMethod* method) 
{
	{
		// m_NativeRef = SocketCreate (mUrl.ToString(), this.protocols);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___mUrl_0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2 = __this->___protocols_1;
		int32_t L_3;
		L_3 = WebSocket_SocketCreate_m327B951D0E5151F0910C7B06CC88A70CCF05005A(L_1, L_2, NULL);
		__this->___m_NativeRef_2 = L_3;
		// }
		return;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_m95735A5C7FBADA680EBEEC6C65C39806B92F6D89 (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, const RuntimeMethod* method) 
{
	{
		// SocketClose(m_NativeRef);
		int32_t L_0 = __this->___m_NativeRef_2;
		WebSocket_SocketClose_mB8CA9E37FC49D2AD48A0ED5B40CB663C9D031564(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_m013F65B88232E2CECD27EE6DA21AF65278960D54 (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, const RuntimeMethod* method) 
{
	{
		// get { return SocketState(m_NativeRef) != 0; }
		int32_t L_0 = __this->___m_NativeRef_2;
		int32_t L_1;
		L_1 = WebSocket_SocketState_m7D0CC1D04DCB1936E36901BFED4C39AD6BC28D5B(L_0, NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.String ExitGames.Client.Photon.WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_m7A79E694815BF31611C90214F5C81D129383D5DF (WebSocket_t3418687572A0C7161926227B37A9BBE7876D6F2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] buffer = new byte[bufsize];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// int result = SocketError (m_NativeRef, buffer, bufsize);
		int32_t L_1 = __this->___m_NativeRef_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		int32_t L_3;
		L_3 = WebSocket_SocketError_m5959A57CCE016018920F04FD5088C40518CEB30B(L_1, L_2, ((int32_t)1024), NULL);
		// if (result == 0)
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0020:
	{
		// return Encoding.UTF8.GetString (buffer);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_4, L_5);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_mB49A10CE97A4B3D6F5934FE9FA8A635A8DA16522_inline (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CServerAddressU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_ServerAddress_m64A4656AE1370555D8778535E059680E9C26E2CD_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CServerAddressU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServerAddressU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CServerAddressU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CStateU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_m10F7BAEE54223D7D4D7B73CAB9F9AC608EE00737_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CServerPortU3Ek__BackingField_8;
		return L_0;
	}
}
