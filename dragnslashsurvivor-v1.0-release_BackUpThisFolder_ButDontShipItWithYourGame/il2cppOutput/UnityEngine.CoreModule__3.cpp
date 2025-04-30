#include "pch-cpp.hpp"





template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D;
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
struct Action_2_t39F9A40857E06142231322CA3632F32C6926572A;
struct IList_1_tC8E339739335829E033BD586C8C87927A9561C64;
struct IList_1_t13209DCABB086AFEC4A817F3452AEE277AB63234;
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B;
struct List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4;
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
struct LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE;
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705;
struct BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86;
struct BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22;
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3;
struct BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0;
struct GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A;
struct GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38;
struct GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868;
struct GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF;
struct GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A;
struct GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD;
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LODFadeMode_tF98C8CC3E87AAB362B6E14B28CB522EA78A74052;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6;
struct MethodInfo_t;
struct MotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8;
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
struct String_t;
struct SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934;
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1;
struct OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2;
struct U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C;
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4;
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9909632E27B9F1D1A060845D24FDCBED135D4A61____39D974909C7E64675317DD1A8583B8D8DE92E68B180532FADD22B482AD93DC83_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9909632E27B9F1D1A060845D24FDCBED135D4A61____C77A066B9EC0272B121AD30CBAEDA4AD20F986D49CC6D0007EBF45888D8B09BF_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D;
IL2CPP_EXTERN_C String_t* _stringLiteral05ED6AEC94875AE42F2118950FFBA1D613C05C37;
IL2CPP_EXTERN_C String_t* _stringLiteral132E80EAA09197CF3EE157E8CAFE6EC4A4EE7426;
IL2CPP_EXTERN_C String_t* _stringLiteral146403D8C826A0F54C0964073931E08E849368F7;
IL2CPP_EXTERN_C String_t* _stringLiteral188E04405D8D43DAB34FCE46235E3F3B9E939794;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3707F2DB6891EF40E60A4CFB5A9CBEB40B55F2;
IL2CPP_EXTERN_C String_t* _stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466;
IL2CPP_EXTERN_C String_t* _stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC;
IL2CPP_EXTERN_C String_t* _stringLiteral424B3C6544FA8C37056D18AD8DE5AD44F6874458;
IL2CPP_EXTERN_C String_t* _stringLiteral6DF6556E6F66312FBA88DC7A4B46424E8801D6D7;
IL2CPP_EXTERN_C String_t* _stringLiteral72299294E42201890A5EF94785CD6F2470D566D2;
IL2CPP_EXTERN_C String_t* _stringLiteral725BF586F9C73BB71D89F147D8104043A9221498;
IL2CPP_EXTERN_C String_t* _stringLiteral943B5FA23049468A97315A802F142C5AB76D9234;
IL2CPP_EXTERN_C String_t* _stringLiteralAA1EF620F523327123017878A2862AB13B665F4E;
IL2CPP_EXTERN_C String_t* _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F52958969B20DC3BD23571E03593B2A8948B9F;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237;
IL2CPP_EXTERN_C String_t* _stringLiteralFB7177E6394CDB63713D04A0A8E4B643EB7A825D;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_mA70172E45063B86AA295364218CCD7B7F24650B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MarshalledUnityObject_Marshal_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m2C7D338CAC19265593669E4A53340ECCB1201993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m755CEF37289774CA34DDEC968D5BB1DA8D14E87F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m059A8D85858F860EAE3A55C44915C45DDF29A8D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_m64065F3A83B6E49F9AF8346B2C1BD7DC971B1E48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mE101F26626792732C8CEF56DF3B4833C02AF8575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLODFadeMode_tF98C8CC3E87AAB362B6E14B28CB522EA78A74052_mA6807C7EB95A62D89686F9DC0CB9CE640F86BF42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_m24853A18EB38839670565ED58453E4B144BA1044_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7326129EA795C39F34FE01DBE10C858D72F07327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DF14FFECC3CE4E179B56AB77F3BCC0FF90E92BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIntPtr_t_mCD62BE7854A98BD8A905487337D49E3A2FBC35F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m5DB7623D6218E2B9AF57B3836D4BC9E4D469280C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpriteAtlasManager_Register_m44D4E9341918EA32BEC92A77E851FF9A3BC21505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpriteRendererDataAccessExtensions_SetBatchDeformableBufferAndLocalAABBArray_mAFC805600B21985D7497C5F0C172E5601F04903D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpriteRendererDataAccessExtensions_SetBoneTransformsArray_mE5A944273985FA2B25730C203A5B499441CA57ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpriteRendererDataAccessExtensions_SetDeformableBuffer_m3A000487D1EB0983E49CF13E13AA532787AF2E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_0_mDD0513D453CB4E227C31E11EA4E7D846592D3576_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__34_1_m618998CB113C8FD255564DB98198EA49CFF07F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5;
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
struct LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE;
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B  : public RuntimeObject
{
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4  : public RuntimeObject
{
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t9909632E27B9F1D1A060845D24FDCBED135D4A61  : public RuntimeObject
{
};
struct BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE  : public RuntimeObject
{
};
struct DataUtility_tB86BA45E6A443ED6A080B37BAE1CD8765A89EA20  : public RuntimeObject
{
};
struct GPUDrivenCallbacks_tC30E729FE2BFEE4DE1BC9F8DB922223BEAA87A26  : public RuntimeObject
{
};
struct GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD  : public RuntimeObject
{
};
struct LightmapperUtils_tA76DFC04F9CA5CE874A5443DD3423DB351FD3D6A  : public RuntimeObject
{
};
struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A  : public RuntimeObject
{
};
struct ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF  : public RuntimeObject
{
};
struct ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924  : public RuntimeObject
{
	RuntimeObject* ___U3CimplementationU3Ek__BackingField;
};
struct SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40  : public RuntimeObject
{
};
struct SpriteDataAccessExtensions_t3E42874762D049E221636AD9A719EBAE7F9C9980  : public RuntimeObject
{
};
struct SpriteRendererDataAccessExtensions_t2B7E03E458416961F086FBAD5C339334FBF48B67  : public RuntimeObject
{
};
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C  : public RuntimeObject
{
};
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke
{
};
struct SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C  : public RuntimeObject
{
};
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4  : public RuntimeObject
{
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705* ___indirectDrawCommands;
	BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86* ___proceduralDrawCommands;
	BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50* ___proceduralIndirectDrawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	int32_t* ___drawCommandPickingInstanceIDs;
	int32_t ___drawCommandCount;
	int32_t ___indirectDrawCommandCount;
	int32_t ___proceduralDrawCommandCount;
	int32_t ___proceduralIndirectDrawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 
{
	uint32_t ___renderingLayerMask;
	int32_t ___rendererPriority;
	uint64_t ___m_sceneCullingMask;
	uint8_t ___layer;
	uint8_t ___m_batchLayer;
	uint8_t ___m_motionMode;
	uint8_t ___m_shadowMode;
	uint8_t ___m_receiveShadows;
	uint8_t ___m_staticShadowCaster;
	uint8_t ___m_allDepthSorted;
	uint8_t ___m_isSceneCullingMaskSet;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 
{
	uint32_t ___value;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C 
{
	uint32_t ___value;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
struct BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB 
{
	uint64_t ___handle;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1 
{
	int32_t* ___lodGroupID;
	int32_t* ___lodOffset;
	int32_t* ___lodCount;
	int32_t* ___fadeMode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___worldSpaceReferencePoint;
	float* ___worldSpaceSize;
	int16_t* ___renderersCount;
	bool* ___lastLODIsBillboard;
	uint8_t* ___forceLODMask;
	int32_t ___lodGroupCount;
	int32_t* ___invalidLODGroupID;
	int32_t ___invalidLODGroupCount;
	int16_t* ___lodRenderersCount;
	float* ___lodScreenRelativeTransitionHeight;
	float* ___lodFadeTransitionWidth;
	int32_t ___lodDataCount;
};
struct GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38 
{
	uint32_t ___data;
};
struct GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868 
{
	uint32_t ___data;
};
struct GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB 
{
	uint64_t ___sceneCullingMask;
};
struct GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC 
{
	int32_t* ___rendererGroupID;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___localBounds;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___lightmapScaleOffset;
	int32_t* ___gameObjectLayer;
	uint32_t* ___renderingLayerMask;
	int32_t* ___lodGroupID;
	int32_t* ___motionVecGenMode;
	GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* ___packedRendererData;
	int32_t* ___rendererPriority;
	int32_t* ___meshIndex;
	int16_t* ___subMeshStartIndex;
	int32_t* ___materialsOffset;
	int16_t* ___materialsCount;
	int32_t* ___instancesOffset;
	int32_t* ___instancesCount;
	GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* ___editorData;
	int32_t ___rendererGroupCount;
	int32_t* ___invalidRendererGroupID;
	int32_t ___invalidRendererGroupIDCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___localToWorldMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___prevLocalToWorldMatrix;
	int32_t* ___rendererGroupIndex;
	int32_t ___instanceCount;
	int32_t* ___meshID;
	int16_t* ___subMeshCount;
	int32_t* ___subMeshDescOffset;
	int32_t ___meshCount;
	SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* ___subMeshDesc;
	int32_t ___subMeshDescCount;
	int32_t* ___materialIndex;
	int32_t ___materialIndexCount;
	int32_t* ___materialID;
	GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* ___packedMaterialData;
	int32_t* ___materialFilterFlags;
	int32_t ___materialCount;
};
struct GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 
{
	uint32_t ___value;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	uint8_t ___m_Enabled;
	uint8_t ___m_ReadMask;
	uint8_t ___m_WriteMask;
	uint8_t ___m_Padding;
	uint8_t ___m_CompareFunctionFront;
	uint8_t ___m_PassOperationFront;
	uint8_t ___m_FailOperationFront;
	uint8_t ___m_ZFailOperationFront;
	uint8_t ___m_CompareFunctionBack;
	uint8_t ___m_PassOperationBack;
	uint8_t ___m_FailOperationBack;
	uint8_t ___m_ZFailOperationBack;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_t5BB721AA519269CD0B1FA56A3D852BF76A187688 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t5BB721AA519269CD0B1FA56A3D852BF76A187688__padding[20];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_t7C3B7CC74F701C3685BB71F45ECC1376E5183EDA 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t7C3B7CC74F701C3685BB71F45ECC1376E5183EDA__padding[6];
	};
};
#pragma pack(pop, tp)
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_tC12F25D54F08F8DA4BD1129A6E4B09385A888B62__padding[160];
	};
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AngularFalloffType_t242C7945D5B5A78AC995A2525282F6410310435F 
{
	uint8_t ___value__;
};
struct BatchCullingFlags_tEECC03D99C74958416446D306EA944DBA1C8E3A2 
{
	int32_t ___value__;
};
struct BatchCullingProjectionType_tAD14BC373E72D5F74188E0899F8670FAB51FD481 
{
	int32_t ___value__;
};
struct BatchCullingViewType_tAC2682BF9A489DF44A8960693303B47248C252CF 
{
	int32_t ___value__;
};
struct BatchDrawCommandFlags_tC502FA322382A3181F0800B1EA5A5654027FE034 
{
	int32_t ___value__;
};
struct BatchDrawCommandType_t4829A9A68B9A2A75028B65A098842BC3B95F7BED 
{
	int32_t ___value__;
};
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10  : public RuntimeObject
{
	intptr_t ___m_GroupHandle;
	OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* ___m_PerformCulling;
	OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* ___m_FinishedCulling;
};
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke
{
	intptr_t ___m_GroupHandle;
	Il2CppMethodPointer ___m_PerformCulling;
	Il2CppMethodPointer ___m_FinishedCulling;
};
struct BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com
{
	intptr_t ___m_GroupHandle;
	Il2CppMethodPointer ___m_PerformCulling;
	Il2CppMethodPointer ___m_FinishedCulling;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct ColorSpace_tD0808E0BE85FD3B9774234676F83A872F4EDA3C7 
{
	int32_t ___value__;
};
struct CompareFunction_tF4CB32BA795A16A1488DD63D6CF4DC71B20E1518 
{
	int32_t ___value__;
};
struct Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 
{
	int32_t ___instanceID;
	float ___scale;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizes;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct DefaultFormat_t76E7B829061170DA4EE4B2B6574C47DD182B7BF3 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
};
struct GraphicsFormatUsage_t57084DF17F02CD0238EF07705101FD425F607063 
{
	int32_t ___value__;
};
struct LODFadeMode_tF98C8CC3E87AAB362B6E14B28CB522EA78A74052 
{
	int32_t ___value__;
};
struct LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A 
{
	int32_t ___m_IsOrthographic;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition;
	float ___m_FieldOfView;
	float ___m_OrthoSize;
	int32_t ___m_CameraPixelHeight;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightShadows_t5A3719FE33F8D536E5785AC42B4DF6E6F19666EA 
{
	int32_t ___value__;
};
struct LightType_t2D4D43054E7473EECEB54493C0055AE074780234 
{
	int32_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct LightmapBakeType_tD6FF28E59BAAD80648796C2835AB8DC0B0F8B232 
{
	int32_t ___value__;
};
struct LightmapsMode_tFD829E8DA87775D1630F2CADF2D52C758DDA4EBC 
{
	int32_t ___value__;
};
struct LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA 
{
	intptr_t ___m_KeywordSpace;
};
struct MeshTopology_t815FF5CF04D62195A23E2DF8A5C0A071F11FBCBF 
{
	int32_t ___value__;
};
struct MixedLightingMode_t6B7F0DC1BB531DDE85B2FF98C8BD122840060061 
{
	int32_t ___value__;
};
struct MotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	intptr_t ___m_Handle;
	uint32_t ___m_Version;
};
struct RenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F 
{
	int32_t ___value__;
};
struct RenderTextureReadWrite_t74086C1AE386FE2F1E853FD114ABFAFE68D8B49D 
{
	int32_t ___value__;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct ShaderPropertyFlags_tFC675729F043235B8233376BB117B9D77ED76916 
{
	int32_t ___value__;
};
struct SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 
{
	String_t* ___m_Name;
	String_t* ___m_Guid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	float ___m_Length;
	int32_t ___m_ParentId;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_Color;
};
struct SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Guid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	float ___m_Length;
	int32_t ___m_ParentId;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_Color;
};
struct SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Guid;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
	float ___m_Length;
	int32_t ___m_ParentId;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_Color;
};
struct SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA 
{
	intptr_t ___m_Buffer;
	int32_t ___m_Count;
	int32_t ___m_Offset;
	int32_t ___m_Stride;
};
struct StencilOp_t35EB362AF3CF60D7EC63DF5282B8256BF9985436 
{
	int32_t ___value__;
};
struct TextureCreationFlags_t7671FF285C96A03BDCD7BA2F50388C09ED4A54A3 
{
	int32_t ___value__;
};
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	int32_t ___value__;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct LightmapMixedBakeModes_tA9CBB8FED394CF87363E6013E665FA59267904EF 
{
	int32_t ___value__;
};
struct ReflectionProbeModes_t09C3CE8EDD13F84305A19602D37D51F39E5E3DFC 
{
	int32_t ___value__;
};
struct NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF1FF9717CDE70F718B881DF6F986AC02FE8122AE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0 
{
	int32_t ___flags;
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___batchID;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	uint16_t ___splitVisibilityMask;
	uint16_t ___lightmapIndex;
	int32_t ___sortingPosition;
	uint32_t ___visibleOffset;
	uint32_t ___visibleCount;
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	uint16_t ___submeshIndex;
	uint16_t ___unusedPadding2;
};
struct BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705 
{
	int32_t ___flags;
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___batchID;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	uint16_t ___splitVisibilityMask;
	uint16_t ___lightmapIndex;
	int32_t ___sortingPosition;
	uint32_t ___visibleOffset;
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___topology;
	GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 ___visibleInstancesBufferHandle;
	uint32_t ___visibleInstancesBufferWindowOffset;
	uint32_t ___visibleInstancesBufferWindowSizeBytes;
	GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 ___indirectArgsBufferHandle;
	uint32_t ___indirectArgsBufferOffset;
};
struct BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86 
{
	int32_t ___flags;
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___batchID;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	uint16_t ___splitVisibilityMask;
	uint16_t ___lightmapIndex;
	int32_t ___sortingPosition;
	uint32_t ___visibleOffset;
	uint32_t ___visibleCount;
	int32_t ___topology;
	GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 ___indexBufferHandle;
	uint32_t ___baseVertex;
	uint32_t ___indexOffsetBytes;
	uint32_t ___elementCount;
};
struct BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50 
{
	int32_t ___flags;
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___batchID;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	uint16_t ___splitVisibilityMask;
	uint16_t ___lightmapIndex;
	int32_t ___sortingPosition;
	uint32_t ___visibleOffset;
	int32_t ___topology;
	GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 ___indexBufferHandle;
	GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 ___visibleInstancesBufferHandle;
	uint32_t ___visibleInstancesBufferWindowOffset;
	uint32_t ___visibleInstancesBufferWindowSizeBytes;
	GraphicsBufferHandle_t796AECB7D0D9A7DE09882D9EAC25123F6DFA28B5 ___indirectArgsBufferHandle;
	uint32_t ___indirectArgsBufferOffset;
};
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F 
{
	int32_t ___drawCommandsType;
	uint32_t ___drawCommandsBegin;
	uint32_t ___drawCommandsCount;
	BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 ___filterSettings;
};
struct BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5 
{
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___cullingJobsFence;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___localToWorldMatrix;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___cullingPlanes;
	int32_t ___cullingPlaneCount;
	int32_t ___receiverPlaneOffset;
	int32_t ___receiverPlaneCount;
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___cullingSplits;
	int32_t ___cullingSplitCount;
	int32_t ___viewType;
	int32_t ___projectionType;
	int32_t ___cullingFlags;
	uint64_t ___viewID;
	uint32_t ___cullingLayerMask;
	uint8_t ___splitExclusionMask;
	uint64_t ___sceneCullingMask;
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___drawCommands;
	uint32_t ___brgId;
	intptr_t ___occlusionBuffer;
	intptr_t ___customCullingResult;
};
struct CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB 
{
	int32_t ___instanceID;
	bool ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___penumbraWidthRadian;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction;
};
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke
{
	int32_t ___instanceID;
	int32_t ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___penumbraWidthRadian;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction;
};
struct DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com
{
	int32_t ___instanceID;
	int32_t ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___penumbraWidthRadian;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction;
};
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E 
{
	int32_t ___instanceID;
	bool ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___range;
	float ___radius;
	uint8_t ___falloff;
};
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke
{
	int32_t ___instanceID;
	int32_t ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___range;
	float ___radius;
	uint8_t ___falloff;
};
struct DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com
{
	int32_t ___instanceID;
	int32_t ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___range;
	float ___radius;
	uint8_t ___falloff;
};
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 
{
	int32_t ___probeOcclusionLightIndex;
	int32_t ___occlusionMaskChannel;
	int32_t ___lightmapBakeType;
	int32_t ___mixedLightingMode;
	bool ___isBaked;
};
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_pinvoke
{
	int32_t ___probeOcclusionLightIndex;
	int32_t ___occlusionMaskChannel;
	int32_t ___lightmapBakeType;
	int32_t ___mixedLightingMode;
	int32_t ___isBaked;
};
struct LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90_marshaled_com
{
	int32_t ___probeOcclusionLightIndex;
	int32_t ___occlusionMaskChannel;
	int32_t ___lightmapBakeType;
	int32_t ___mixedLightingMode;
	int32_t ___isBaked;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB 
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___m_SpaceInfo;
	String_t* ___m_Name;
	uint32_t ___m_Index;
};
struct LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_pinvoke
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___m_SpaceInfo;
	char* ___m_Name;
	uint32_t ___m_Index;
};
struct LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_com
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___m_SpaceInfo;
	Il2CppChar* ___m_Name;
	uint32_t ___m_Index;
};
struct MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7 
{
	int32_t ___instanceID;
	bool ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___range;
	float ___sphereRadius;
	uint8_t ___falloff;
};
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke
{
	int32_t ___instanceID;
	int32_t ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___range;
	float ___sphereRadius;
	uint8_t ___falloff;
};
struct PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com
{
	int32_t ___instanceID;
	int32_t ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___range;
	float ___sphereRadius;
	uint8_t ___falloff;
};
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 
{
	int32_t ___instanceID;
	bool ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___range;
	float ___width;
	float ___height;
	uint8_t ___falloff;
};
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke
{
	int32_t ___instanceID;
	int32_t ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___range;
	float ___width;
	float ___height;
	uint8_t ___falloff;
};
struct RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com
{
	int32_t ___instanceID;
	int32_t ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___range;
	float ___width;
	float ___height;
	uint8_t ___falloff;
};
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 
{
	int32_t ___instanceID;
	bool ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___range;
	float ___sphereRadius;
	float ___coneAngle;
	float ___innerConeAngle;
	uint8_t ___falloff;
	uint8_t ___angularFalloff;
};
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke
{
	int32_t ___instanceID;
	int32_t ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___range;
	float ___sphereRadius;
	float ___coneAngle;
	float ___innerConeAngle;
	uint8_t ___falloff;
	uint8_t ___angularFalloff;
};
struct SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com
{
	int32_t ___instanceID;
	int32_t ___shadow;
	uint8_t ___mode;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	float ___range;
	float ___sphereRadius;
	float ___coneAngle;
	float ___innerConeAngle;
	uint8_t ___falloff;
	uint8_t ___angularFalloff;
};
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct SpriteIntermediateRendererInfo_tCE099727551F5747789D3AD0D3A9CA66E9DEB934 
{
	int32_t ___SpriteID;
	int32_t ___TextureID;
	int32_t ___MaterialID;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___Transform;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___Bounds;
	int32_t ___Layer;
	int32_t ___SortingLayer;
	int32_t ___SortingOrder;
	uint64_t ___SceneCullingMask;
	intptr_t ___IndexData;
	intptr_t ___VertexData;
	int32_t ___IndexCount;
	int32_t ___VertexCount;
	int32_t ___ShaderChannelMask;
};
struct SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___U3CboundsU3Ek__BackingField;
	int32_t ___U3CtopologyU3Ek__BackingField;
	int32_t ___U3CindexStartU3Ek__BackingField;
	int32_t ___U3CindexCountU3Ek__BackingField;
	int32_t ___U3CbaseVertexU3Ek__BackingField;
	int32_t ___U3CfirstVertexU3Ek__BackingField;
	int32_t ___U3CvertexCountU3Ek__BackingField;
};
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6  : public RuntimeObject
{
	int32_t ___U3CreflectionProbeModesU3Ek__BackingField;
	int32_t ___U3CdefaultMixedLightingModesU3Ek__BackingField;
	int32_t ___U3CmixedLightingModesU3Ek__BackingField;
	int32_t ___U3ClightmapBakeTypesU3Ek__BackingField;
	int32_t ___U3ClightmapsModesU3Ek__BackingField;
	bool ___U3CenlightenLightmapperU3Ek__BackingField;
	bool ___U3CenlightenU3Ek__BackingField;
	bool ___U3CskyOcclusionU3Ek__BackingField;
	bool ___U3ClightProbeProxyVolumesU3Ek__BackingField;
	bool ___U3CmotionVectorsU3Ek__BackingField;
	bool ___U3CreceiveShadowsU3Ek__BackingField;
	bool ___U3CreflectionProbesU3Ek__BackingField;
	bool ___U3CreflectionProbesBlendDistanceU3Ek__BackingField;
	bool ___U3CrendererPriorityU3Ek__BackingField;
	bool ___U3CrendersUIOverlayU3Ek__BackingField;
	bool ___U3CoverridesEnvironmentLightingU3Ek__BackingField;
	bool ___U3CoverridesFogU3Ek__BackingField;
	bool ___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField;
	bool ___U3CoverridesOtherLightingSettingsU3Ek__BackingField;
	bool ___U3CeditableMaterialRenderQueueU3Ek__BackingField;
	bool ___U3CoverridesLODBiasU3Ek__BackingField;
	bool ___U3CoverridesMaximumLODLevelU3Ek__BackingField;
	bool ___U3CoverridesEnableLODCrossFadeU3Ek__BackingField;
	bool ___U3CrendererProbesU3Ek__BackingField;
	bool ___U3CparticleSystemInstancingU3Ek__BackingField;
	bool ___U3CambientProbeBakingU3Ek__BackingField;
	bool ___U3CdefaultReflectionProbeBakingU3Ek__BackingField;
	bool ___U3CoverridesShadowmaskU3Ek__BackingField;
	bool ___U3CoverridesLightProbeSystemU3Ek__BackingField;
	bool ___U3CsupportsHDRU3Ek__BackingField;
	bool ___U3CsupportsCloudsU3Ek__BackingField;
	String_t* ___U3CoverridesLightProbeSystemWarningMessageU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle;
};
struct TexturePlayableOutput_t289BEACD45B8E5183E91E8021EBD353110F5BC4B 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D  : public MulticastDelegate_t
{
};
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};
struct Action_2_t39F9A40857E06142231322CA3632F32C6926572A  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 
{
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___cullingPlanes;
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 ___cullingSplits;
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___lodParameters;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___localToWorldMatrix;
	int32_t ___viewType;
	int32_t ___projectionType;
	int32_t ___cullingFlags;
	BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB ___viewID;
	uint32_t ___cullingLayerMask;
	uint64_t ___sceneCullingMask;
	uint16_t ___splitExclusionMask;
	uint8_t ___isOrthographic;
	int32_t ___receiverPlaneOffset;
	int32_t ___receiverPlaneCount;
	intptr_t ___occlusionBuffer;
};
struct BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F 
{
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A ___drawCommands;
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___customCullingResult;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___lodGroupID;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___lodOffset;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___lodCount;
	NativeArray_1_tF1FF9717CDE70F718B881DF6F986AC02FE8122AE ___fadeMode;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___worldSpaceReferencePoint;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___worldSpaceSize;
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 ___renderersCount;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___lastLODIsBillboard;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___forceLODMask;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___invalidLODGroupID;
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 ___lodRenderersCount;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___lodScreenRelativeTransitionHeight;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___lodFadeTransitionWidth;
};
struct GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A  : public MulticastDelegate_t
{
};
struct GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A  : public MulticastDelegate_t
{
};
struct GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___rendererGroupID;
	NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 ___localBounds;
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___lightmapScaleOffset;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___gameObjectLayer;
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 ___renderingLayerMask;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___lodGroupID;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___lightmapIndex;
	NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C ___packedRendererData;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___rendererPriority;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___meshIndex;
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 ___subMeshStartIndex;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___materialsOffset;
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 ___materialsCount;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___instancesOffset;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___instancesCount;
	NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 ___editorData;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___invalidRendererGroupID;
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___localToWorldMatrix;
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___prevLocalToWorldMatrix;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___rendererGroupIndex;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___meshID;
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 ___subMeshCount;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___subMeshDescOffset;
	NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 ___subMeshDesc;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___materialIndex;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___materialID;
	NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 ___packedMaterialData;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___materialFilterFlags;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1  : public MulticastDelegate_t
{
};
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB  : public MulticastDelegate_t
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0  : public MulticastDelegate_t
{
};
struct GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF  : public MulticastDelegate_t
{
};
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent;
};
struct OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2  : public MulticastDelegate_t
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B_StaticFields
{
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___s_emptyArray;
};
struct List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4_StaticFields
{
	MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_t9909632E27B9F1D1A060845D24FDCBED135D4A61_StaticFields
{
	__StaticArrayInitTypeSizeU3D6_t7C3B7CC74F701C3685BB71F45ECC1376E5183EDA ___0EBBFED81071BF15F38AA1387D6D74E5788591B4AA6E85C7B739CF903789D438;
	__StaticArrayInitTypeSizeU3D20_t5BB721AA519269CD0B1FA56A3D852BF76A187688 ___39D974909C7E64675317DD1A8583B8D8DE92E68B180532FADD22B482AD93DC83;
	__StaticArrayInitTypeSizeU3D20_t5BB721AA519269CD0B1FA56A3D852BF76A187688 ___C77A066B9EC0272B121AD30CBAEDA4AD20F986D49CC6D0007EBF45888D8B09BF;
};
struct GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields
{
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___tableNoStencil;
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* ___tableStencil;
};
struct Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields
{
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_DefaultDelegate;
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_RequestLightsDelegate;
};
struct ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields
{
	ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* ___s_Instance;
};
struct SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_StaticFields
{
	Action_2_t39F9A40857E06142231322CA3632F32C6926572A* ___atlasRequested;
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___atlasRegistered;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_StaticFields
{
	U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C* ___U3CU3E9;
};
struct U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields
{
	U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* ___U3CU3E9;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_StaticFields
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___Null;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_StaticFields
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___Null;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_StaticFields
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08_StaticFields
{
	GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* ___s_NativeRendererCallback;
	GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* ___s_NativeLODGroupCallback;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null;
};
struct SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields
{
	SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___s_Active;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9  : public RuntimeArray
{
	ALIGN_FIELD (8) LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB m_Items[1];

	inline LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
	}
	inline LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
	}
};
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
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990  : public RuntimeArray
{
	ALIGN_FIELD (8) Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* m_Items[1];

	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE  : public RuntimeArray
{
	ALIGN_FIELD (8) SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 m_Items[1];

	inline SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Guid), (void*)NULL);
		#endif
	}
	inline SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Guid), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28  : public RuntimeArray
{
	ALIGN_FIELD (8) SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* m_Items[1];

	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555_gshared (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_m64065F3A83B6E49F9AF8346B2C1BD7DC971B1E48_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mE101F26626792732C8CEF56DF3B4833C02AF8575_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_m24853A18EB38839670565ED58453E4B144BA1044_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m059A8D85858F860EAE3A55C44915C45DDF29A8D5_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE0DCAF7ED58915BC160F767E310F0F0A55B6BC75 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF3737ED3A12338AE7A41EB25EFAF1F04CCEBEC28_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m755CEF37289774CA34DDEC968D5BB1DA8D14E87F_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DF14FFECC3CE4E179B56AB77F3BCC0FF90E92BF_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIntPtr_t_mCD62BE7854A98BD8A905487337D49E3A2FBC35F0_gshared (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7326129EA795C39F34FE01DBE10C858D72F07327_gshared (NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m5DB7623D6218E2B9AF57B3836D4BC9E4D469280C_gshared (NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mC22A7EFFB28AA32D8F797E456E92BA88DBA19A08 (bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF (int32_t ___0_mixedMode, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mE48C26F367ABEC734BDB7A8A66FEB8796A401AAF (int32_t ___0_mixedMode, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691 (int32_t ___0_bakeType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mABE7E2BC06CA25519079DF4EEC89667EB51B8460 (int32_t ___0_bakeType, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_ambientProbeBaking_m8751A132081498EC99522A242C256DE8476F8BF4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_defaultReflectionProbeBaking_m4A35EDF34332159BE52C9035D9AC1D52F006F089_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_overridesLightProbeSystem_m62C56592C44FDD2FC89EAA4ADE71435CDE65EB64_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchID_GetHashCode_m3F4DFD3D722865BBC47F74C5E452E985B6BBBA3A (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchID_Equals_m4207BA1B44B5BF1DA2847571B6D9A981F5AE3CFF (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* __this, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchID_Equals_m953C8EE9ABF083CFAA3D7210F1085C9FD7EED71D (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchMaterialID_GetHashCode_mE28980612614E66848ADABB7825CA73FFA39DD09 (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMaterialID_Equals_m073A3DECD4CDE73F0CC314024B89399982E5BA83 (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* __this, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMaterialID_Equals_m776A152CA1957E92FCD24B4E2EDAF8A6D78E953E (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchMeshID_GetHashCode_m62EDD33030F375FAAD44A23FAD7901A2BE1D08A9 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMeshID_Equals_m985986D473BB12E9F43C59B41846660884B15C06 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMeshID_Equals_mA501F8E992E7B32BD8985DD68D5D0B360A104A42 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchPackedCullingViewID_GetHashCode_m588865495A1A1F2AC79A62D76B2DDC91D743F4A5 (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchPackedCullingViewID_Equals_mD7B8D7EFB1678D80FC11B9FA1171988669CD0C7E (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchPackedCullingViewID_Equals_m2E5BC66A5B8D6737BABE5D6A0019F901192D2A9F (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchCullingContext__ctor_mCBB93A14809CFC7FE19E3C68BC1426C5C29F1531 (BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659* __this, NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___0_inCullingPlanes, NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 ___1_inCullingSplits, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___2_inLodParameters, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_inLocalToWorldMatrix, int32_t ___4_inViewType, int32_t ___5_inProjectionType, int32_t ___6_inBatchCullingFlags, uint64_t ___7_inViewID, uint32_t ___8_inCullingLayerMask, uint64_t ___9_inSceneCullingMask, uint8_t ___10_inExclusionSplitMask, int32_t ___11_inReceiverPlaneOffset, int32_t ___12_inReceiverPlaneCount, intptr_t ___13_inOcclusionBuffer, const RuntimeMethod* method) ;
inline NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_ScheduleBatchedJobs_mCA0E146397E30E31FB57C96DAA1820451886DACA (const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555 (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_inline (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_inline (OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataNativeCallback_Invoke_m2FD60D31CB8AF021EBED864016E07698F6A5BAEF_inline (GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* __this, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* ___0_lodGroupDataNative, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* ___1_callback, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenRendererDataNativeCallback_Invoke_m840ADD6953FD8B5DFD7C308DE6C3212A07532994_inline (GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* __this, GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* ___0_rendererDataNative, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* ___1_meshes, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___2_materials, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* ___3_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenRendererDataNativeCallback__ctor_m05C3A717F3C233AEC54816DCAEDAC506A33C22C4 (GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataNativeCallback__ctor_mDBEABDE8F0FD910A05540376160F1FA406CBE64D (GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7CBF700309FD1B965872C8D658A056A2539AD139 (U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C* __this, const RuntimeMethod* method) ;
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_m64065F3A83B6E49F9AF8346B2C1BD7DC971B1E48 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_m64065F3A83B6E49F9AF8346B2C1BD7DC971B1E48_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mE101F26626792732C8CEF56DF3B4833C02AF8575 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mE101F26626792732C8CEF56DF3B4833C02AF8575_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_m24853A18EB38839670565ED58453E4B144BA1044 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_m24853A18EB38839670565ED58453E4B144BA1044_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m059A8D85858F860EAE3A55C44915C45DDF29A8D5 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m059A8D85858F860EAE3A55C44915C45DDF29A8D5_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenRendererDataCallback_Invoke_mC4CC0435DC39A1319F88C79F23ACB41D86180155_inline (GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568* ___0_rendererData, RuntimeObject* ___1_meshes, RuntimeObject* ___2_materials, const RuntimeMethod* method) ;
inline NativeArray_1_tF1FF9717CDE70F718B881DF6F986AC02FE8122AE NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLODFadeMode_tF98C8CC3E87AAB362B6E14B28CB522EA78A74052_mA6807C7EB95A62D89686F9DC0CB9CE640F86BF42 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tF1FF9717CDE70F718B881DF6F986AC02FE8122AE (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF3737ED3A12338AE7A41EB25EFAF1F04CCEBEC28_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m755CEF37289774CA34DDEC968D5BB1DA8D14E87F (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m755CEF37289774CA34DDEC968D5BB1DA8D14E87F_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_inline (GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenPackedRendererData__ctor_m9BB0A7721F2D693B95778E2A49FCBF5DB5D0B63B (GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenPackedMaterialData__ctor_m34253BB6931FB0BB4B2822088231C581C1D56C0E (GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalKeyword_get_name_mA96B483DF4F6F069F6DFE1BF84150028BF7034C0 (LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalKeyword_ToString_mCBEF3D50F71CBB79268F0E3644173694E8CF8FE2 (LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalKeyword_Equals_mDAD1B018013FC5991AD295C4F3F7EBA720496C0B (LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* __this, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB ___0_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalKeyword_Equals_m8D31C93AA8E3230CAC337955B60C721FB18DB1D5 (LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalKeywordSpace_op_Equality_mA52BDE9E51D3FB2D9EA0126FC685188B2DBE554E (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___0_lhs, LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocalKeywordSpace_GetHashCode_mF3B74C7113D2C02A6EACBB72CD955B5ABCEBB1DF (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocalKeyword_GetHashCode_m593C9D65515ED5F19577184AA3584FA969FC2786 (LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* LocalKeywordSpace_GetKeywords_m885390A995D762664950F8A776DAC86AFA936CE8 (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* LocalKeywordSpace_get_keywords_m40979F9042B6FF15D8B44B239983555448584368 (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalKeywordSpace_Equals_m90ED506A341F7AAD4DAFC8359ED2EDF0C00785A7 (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* __this, LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___0_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalKeywordSpace_Equals_m6E7BBA5D0C2C190A46681C2EEAB945C58A637C10 (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_multiplier, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Black_mF5AEFA40487500C1683D14FFA58554BF4D7B1A42 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_intensity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Mathf_CorrelatedColorTemperatureToRGB_m595A3D1E887CD42FE21CD2893D8E377B3F44153C (float ___0_kelvin, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D (int32_t ___0_baketype, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_cct, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___1_lightColor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_dilatedRange_mE24AF6780C101F6C5671BB2E7A1A4BE205CE1BF7 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
inline NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___1_dir, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___1_point, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___1_spot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___1_rect, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___1_disc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058 (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7 (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mB9E291EB1EC96594074112E54A7B9CAC20FC7BFA (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B (int32_t ___0_minimumDepthBits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_IsFormatSupported_mD3D93E82BD677BDF6194258C4F221DBDB257F680 (int32_t ___0_format, int32_t ___1_usage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCompressedFormat_Native_TextureFormat_m3CE0D5ED90F6323D412C876460BE13792C8CCC0C (int32_t ___0_format, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6 (int32_t ___0_format, bool ___1_wholeImage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sprite_GetInnerUVs_m68A07E15B8D8F07E33559998000B524B54E1951A (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sprite_GetOuterUVs_m0239F5571EA1AE399B426DE9362EEAC73A3ECC42 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sprite_GetPadding_mF346EAFF67C810A108E64366EB5CB3CB2E01D066 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Sprite_get_border_m024C8361A808BF597EC6E1849AADDA9C756B459F (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpriteBone_get_name_m822CC2EC1F299FBF5D0BE58FF5A1B8D50150BA78 (SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpriteBone_get_guid_m983BEAD64D2519AFBDE254CDB4258CCA663BD381 (SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SpriteBone_get_position_m512E4C6E181DDA48DAF02054271AF4298B3128F5 (SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SpriteBone_get_rotation_m363B993B4BFCEDC17F2EBCE5F6637CA2A969DF07 (SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteBone_get_parentId_m847E0268FE032A5BDC0409F9D4FF62264237220B (SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15 (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18 (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA SpriteDataAccessExtensions_GetBindPoseInfo_mE042F0A5CFC1AF65B6B2FBCF58ACFBB8F3EEA75D (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE* SpriteDataAccessExtensions_GetBoneInfo_mA40FBF7C3F228C92FAEBE4768140D92046DEFC9B (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01 (RuntimeObject* ___0_obj, String_t* ___1_parameterName, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_inline (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteDataAccessExtensions_HasVertexAttribute_Injected_mD516FB2910839882A81C460D24AE5331E4249862 (intptr_t ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteDataAccessExtensions_GetVertexCount_Injected_mC77FFF92A25884369ED7E801BDA92D6760869C1E (intptr_t ___0_sprite, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_GetBindPoseInfo_Injected_m156FAE743D37B360515CA6F5D21F7FC03EA65DB1 (intptr_t ___0_sprite, SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* ___1_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_GetChannelInfo_Injected_m3EA850359C800609F857FE45D49E6BA4247AE15D (intptr_t ___0_sprite, int32_t ___1_channel, SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* ___2_ret, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE* SpriteDataAccessExtensions_GetBoneInfo_Injected_mFC19028DFA44472EDAAACADDBBA752389AB6F4D5 (intptr_t ___0_sprite, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_Marshal_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m2C7D338CAC19265593669E4A53340ECCB1201993_inline (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteDataAccessExtensions_GetPrimaryVertexStreamSize_Injected_mE6A20DC411F150A4E112FE6816500274C0F69507 (intptr_t ___0_sprite, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteDataAccessExtensions_GetPrimaryVertexStreamSize_m4D2B0EE7D74850C98512144B1822B856A63985EA (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DF14FFECC3CE4E179B56AB77F3BCC0FF90E92BF (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DF14FFECC3CE4E179B56AB77F3BCC0FF90E92BF_gshared)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetDeformableBuffer_m966F22061EC5AABA16536B79B49F880D97FB68E6 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_spriteRenderer, void* ___1_src, int32_t ___2_count, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIntPtr_t_mCD62BE7854A98BD8A905487337D49E3A2FBC35F0 (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIntPtr_t_mCD62BE7854A98BD8A905487337D49E3A2FBC35F0_gshared)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_gshared)(___0_nativeArray, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7326129EA795C39F34FE01DBE10C858D72F07327 (NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7326129EA795C39F34FE01DBE10C858D72F07327_gshared)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetBatchDeformableBufferAndLocalAABBArray_mF03EE3427E03E439C9D15337F8E61CBD7830ACF0 (SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___0_spriteRenderers, void* ___1_buffers, void* ___2_bufferSizes, void* ___3_bounds, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetBoneTransformsArray_m360CD16BF6BFC0E7C76B22338A0787493D93D44E (SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___0_spriteRenderers, void* ___1_buffers, void* ___2_bufferSizes, void* ___3_bounds, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRendererDataAccessExtensions_IsUsingDeformableBuffer_mEA70BDFEF3569B9735E3287B775D973582F59540 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_spriteRenderer, void* ___1_buffer, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m5DB7623D6218E2B9AF57B3836D4BC9E4D469280C (NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m5DB7623D6218E2B9AF57B3836D4BC9E4D469280C_gshared)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetBoneTransforms_m604922869219056393B417141C3EAE8DBC9AC630 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_spriteRenderer, void* ___1_src, int32_t ___2_count, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_inline (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_DeactivateDeformableBuffer_Injected_m96EACCBE6F53D8F715527DB2F444149917F373D6 (intptr_t ___0_renderer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetLocalAABB_Injected_m9FE8CA455455CD6DBEFF0DE4A2642D57C7F96BA2 (intptr_t ___0_renderer, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_aabb, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetDeformableBuffer_Injected_mF5C565693BAD9BB1A817370A4D61CC728A4BDD22 (intptr_t ___0_spriteRenderer, void* ___1_src, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRendererDataAccessExtensions_IsUsingDeformableBuffer_Injected_m03AB09F29CCE5282A8D13E432383639BDC034FB7 (intptr_t ___0_spriteRenderer, void* ___1_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetBoneTransforms_Injected_m394ECDDA6AFF6C3026F44CFE61C59A4FB8FD39E1 (intptr_t ___0_spriteRenderer, void* ___1_src, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetupMaterialProperties_Injected_m408DF1B1473D6C96D8B3E72BE99491BC16A0CAA7 (intptr_t ___0_spriteRenderer, const RuntimeMethod* method) ;
inline void Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_2_Invoke_mA430E6535AAD3C65C12911DAF89C62ACC8592846_inline (Action_2_t39F9A40857E06142231322CA3632F32C6926572A* __this, String_t* ___0_arg1, Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t39F9A40857E06142231322CA3632F32C6926572A*, String_t*, Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
inline void Action_1_Invoke_m9C0FDD39CBEA968B10871576A8DAFEEC5360339F_inline (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* __this, SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*, SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
inline intptr_t MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_inline (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8*, const RuntimeMethod*))MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_Register_Injected_mCB60524604B497372C4F6DB8C6E46C54CF627212 (intptr_t ___0_spriteAtlas, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_mA70172E45063B86AA295364218CCD7B7F24650B7_inline (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteAtlas_CanBindTo_Injected_m3439431E3C5BAB100AB8F44FD3D5A95DC9A7F6F2 (intptr_t ___0__unity_self, intptr_t ___1_sprite, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (RuntimeObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_mC22A7EFFB28AA32D8F797E456E92BA88DBA19A08(L_0, NULL);
		__this->___m_Enabled = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_enabled_m6DC861C699D1044E896E833D2DAE69B82F796564(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___m_ReadMask = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_readMask_m1BA8F9033413889D4E77DA343DC0029566A9BB9B(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		__this->___m_WriteMask = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65_AdjustorThunk (RuntimeObject* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_writeMask_m94471C671E03D42F36DA61436B1068B362375D65(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_CompareFunctionFront = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_compareFunctionFront_m1388C37901DAB6AF9D23C0F01946DCCE19BC9BFC(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_PassOperationFront = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_passOperationFront_m1F15CC29366DAEAA6CCE1DB0622C70D6ECC5A3EB(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_FailOperationFront = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_failOperationFront_mADCECAE5D2E75ABAE51650F1F314E661D09C2CD6(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_ZFailOperationFront = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_zFailOperationFront_mC7D8F0A08B9AEC4203BD6B352CB795E8011EFBB6(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_CompareFunctionBack = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_compareFunctionBack_m8AF73F4E8FC95A46D33E3192C50702D2AA15D61D(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_PassOperationBack = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_passOperationBack_m4B1395FE21F5B5C809DC6F31D5824A90E05ED220(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_FailOperationBack = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_failOperationBack_mD279271DD1F99EE5B8BC19F5AE60988E6C6F0E4A(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_ZFailOperationBack = (uint8_t)((int32_t)(uint8_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	StencilState_set_zFailOperationBack_mC092ABD8A5EA87245640A10E54C6A1990C4F6864(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B12_0 = 0;
	{
		uint8_t L_0 = __this->___m_Enabled;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_1 = ___0_other;
		uint8_t L_2 = L_1.___m_Enabled;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_3 = __this->___m_ReadMask;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_4 = ___0_other;
		uint8_t L_5 = L_4.___m_ReadMask;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_6 = __this->___m_WriteMask;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_7 = ___0_other;
		uint8_t L_8 = L_7.___m_WriteMask;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_9 = __this->___m_CompareFunctionFront;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_10 = ___0_other;
		uint8_t L_11 = L_10.___m_CompareFunctionFront;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_11))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_12 = __this->___m_PassOperationFront;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_13 = ___0_other;
		uint8_t L_14 = L_13.___m_PassOperationFront;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_15 = __this->___m_FailOperationFront;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_16 = ___0_other;
		uint8_t L_17 = L_16.___m_FailOperationFront;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_18 = __this->___m_ZFailOperationFront;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_19 = ___0_other;
		uint8_t L_20 = L_19.___m_ZFailOperationFront;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_20))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_21 = __this->___m_CompareFunctionBack;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_22 = ___0_other;
		uint8_t L_23 = L_22.___m_CompareFunctionBack;
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_24 = __this->___m_PassOperationBack;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_25 = ___0_other;
		uint8_t L_26 = L_25.___m_PassOperationBack;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_26))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_27 = __this->___m_FailOperationBack;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_28 = ___0_other;
		uint8_t L_29 = L_28.___m_FailOperationBack;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_29))))
		{
			goto IL_00a3;
		}
	}
	{
		uint8_t L_30 = __this->___m_ZFailOperationBack;
		StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 L_31 = ___0_other;
		uint8_t L_32 = L_31.___m_ZFailOperationBack;
		G_B12_0 = ((((int32_t)L_30) == ((int32_t)L_32))? 1 : 0);
		goto IL_00a4;
	}

IL_00a3:
	{
		G_B12_0 = 0;
	}

IL_00a4:
	{
		V_0 = (bool)G_B12_0;
		goto IL_00a7;
	}

IL_00a7:
	{
		bool L_33 = V_0;
		return L_33;
	}
}
IL2CPP_EXTERN_C  bool StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051_AdjustorThunk (RuntimeObject* __this, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___0_other, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___0_obj;
		bool L_4;
		L_4 = StencilState_Equals_m9FFB8A41D8838FD128875CB2D4DAA760C6DF1051(__this, ((*(StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*)UnBox(L_3, StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9_il2cpp_TypeInfo_var))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	bool _returnValue;
	_returnValue = StencilState_Equals_mEA45A5D2BF2223B15EE0FB8BCEDBA9CB534ADF4B(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint8_t* L_0 = (uint8_t*)(&__this->___m_Enabled);
		int32_t L_1;
		L_1 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		uint8_t* L_3 = (uint8_t*)(&__this->___m_ReadMask);
		int32_t L_4;
		L_4 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_3, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, ((int32_t)397)))^L_4));
		int32_t L_5 = V_0;
		uint8_t* L_6 = (uint8_t*)(&__this->___m_WriteMask);
		int32_t L_7;
		L_7 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)397)))^L_7));
		int32_t L_8 = V_0;
		uint8_t* L_9 = (uint8_t*)(&__this->___m_CompareFunctionFront);
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_9, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)397)))^L_10));
		int32_t L_11 = V_0;
		uint8_t* L_12 = (uint8_t*)(&__this->___m_PassOperationFront);
		int32_t L_13;
		L_13 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_12, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)397)))^L_13));
		int32_t L_14 = V_0;
		uint8_t* L_15 = (uint8_t*)(&__this->___m_FailOperationFront);
		int32_t L_16;
		L_16 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_15, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)397)))^L_16));
		int32_t L_17 = V_0;
		uint8_t* L_18 = (uint8_t*)(&__this->___m_ZFailOperationFront);
		int32_t L_19;
		L_19 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_18, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)397)))^L_19));
		int32_t L_20 = V_0;
		uint8_t* L_21 = (uint8_t*)(&__this->___m_CompareFunctionBack);
		int32_t L_22;
		L_22 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_21, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_20, ((int32_t)397)))^L_22));
		int32_t L_23 = V_0;
		uint8_t* L_24 = (uint8_t*)(&__this->___m_PassOperationBack);
		int32_t L_25;
		L_25 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_24, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)397)))^L_25));
		int32_t L_26 = V_0;
		uint8_t* L_27 = (uint8_t*)(&__this->___m_FailOperationBack);
		int32_t L_28;
		L_28 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_27, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)397)))^L_28));
		int32_t L_29 = V_0;
		uint8_t* L_30 = (uint8_t*)(&__this->___m_ZFailOperationBack);
		int32_t L_31;
		L_31 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_30, NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_29, ((int32_t)397)))^L_31));
		int32_t L_32 = V_0;
		V_1 = L_32;
		goto IL_00da;
	}

IL_00da:
	{
		int32_t L_33 = V_1;
		return L_33;
	}
}
IL2CPP_EXTERN_C  int32_t StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = StencilState_GetHashCode_mB4A02DEE780377C853D16FFF49CCB9D9F4F711A5(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = ((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active;
		V_0 = (bool)((((RuntimeObject*)(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_2 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active), (void*)L_2);
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3 = ((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_set_active_mB2A1A6137C816592E6526CD3DA7405260EAEA8AE (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdefaultMixedLightingModesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmixedLightingModesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapBakeTypesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapsModesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrendersUIOverlayU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_ambientProbeBaking_m8751A132081498EC99522A242C256DE8476F8BF4 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CambientProbeBakingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_defaultReflectionProbeBaking_m4A35EDF34332159BE52C9035D9AC1D52F006F089 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdefaultReflectionProbeBakingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_overridesLightProbeSystem_m62C56592C44FDD2FC89EAA4ADE71435CDE65EB64 (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CoverridesLightProbeSystemU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackMixedLightingModeByRef_mEC3BA55F7A145AFCD9762F1FD752CA4D587D0F88 (intptr_t ___0_fallbackModePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ___0_fallbackModePtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (int32_t*)L_1;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_2;
		L_2 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_4;
		L_4 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_4, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_6;
		L_6 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_6, NULL);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_8;
		L_8 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_8, NULL);
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)L_5&(int32_t)L_7))) == ((int32_t)L_9))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B3_0 = 0;
	}

IL_0038:
	{
		V_1 = (bool)G_B3_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_11;
		L_11 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline(L_11, NULL);
		V_3 = L_12;
		int32_t L_13 = V_3;
		V_2 = L_13;
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0050;
	}

IL_0050:
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)4)))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0060;
	}

IL_0056:
	{
		int32_t* L_16 = V_0;
		*((int32_t*)L_16) = (int32_t)2;
		goto IL_0065;
	}

IL_005b:
	{
		int32_t* L_17 = V_0;
		*((int32_t*)L_17) = (int32_t)1;
		goto IL_0065;
	}

IL_0060:
	{
		int32_t* L_18 = V_0;
		*((int32_t*)L_18) = (int32_t)0;
		goto IL_0065;
	}

IL_0065:
	{
		goto IL_008e;
	}

IL_0067:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF(2, NULL);
		V_4 = L_19;
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_21 = V_0;
		*((int32_t*)L_21) = (int32_t)2;
		goto IL_008e;
	}

IL_0079:
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF(1, NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_008b;
		}
	}
	{
		int32_t* L_24 = V_0;
		*((int32_t*)L_24) = (int32_t)1;
		goto IL_008e;
	}

IL_008b:
	{
		int32_t* L_25 = V_0;
		*((int32_t*)L_25) = (int32_t)0;
	}

IL_008e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsMixedLightingModeSupported_m11E0ADD90300D5396090ED9B2EFD9924524D50AF (int32_t ___0_mixedMode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_mixedMode;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mE48C26F367ABEC734BDB7A8A66FEB8796A401AAF(L_0, L_1, NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsMixedLightingModeSupportedByRef_mE48C26F367ABEC734BDB7A8A66FEB8796A401AAF (int32_t ___0_mixedMode, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool* G_B4_0 = NULL;
	bool* G_B3_0 = NULL;
	bool* G_B10_0 = NULL;
	bool* G_B6_0 = NULL;
	bool* G_B5_0 = NULL;
	bool* G_B8_0 = NULL;
	bool* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	bool* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	bool* G_B11_1 = NULL;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691(1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		bool* L_4 = V_0;
		*((int8_t*)L_4) = (int8_t)0;
		goto IL_005b;
	}

IL_001b:
	{
		bool* L_5 = V_0;
		int32_t L_6 = ___0_mixedMode;
		if (L_6)
		{
			G_B4_0 = L_5;
			goto IL_002e;
		}
		G_B3_0 = L_5;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_7;
		L_7 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_7, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_8&1))) == ((int32_t)1)))
		{
			G_B10_0 = G_B3_0;
			goto IL_0059;
		}
		G_B4_0 = G_B3_0;
	}

IL_002e:
	{
		int32_t L_9 = ___0_mixedMode;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			G_B6_0 = G_B4_0;
			goto IL_0041;
		}
		G_B5_0 = G_B4_0;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_10;
		L_10 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_10, NULL);
		if ((((int32_t)((int32_t)((int32_t)L_11&2))) == ((int32_t)2)))
		{
			G_B10_0 = G_B5_0;
			goto IL_0059;
		}
		G_B6_0 = G_B5_0;
	}

IL_0041:
	{
		int32_t L_12 = ___0_mixedMode;
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			G_B8_0 = G_B6_0;
			goto IL_0056;
		}
		G_B7_0 = G_B6_0;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_13;
		L_13 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_13, NULL);
		G_B9_0 = ((((int32_t)((int32_t)((int32_t)L_14&4))) == ((int32_t)4))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0057:
	{
		G_B11_0 = G_B9_0;
		G_B11_1 = G_B9_1;
		goto IL_005a;
	}

IL_0059:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_005a:
	{
		*((int8_t*)G_B11_1) = (int8_t)G_B11_0;
	}

IL_005b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691 (int32_t ___0_bakeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = ___0_bakeType;
		intptr_t L_1;
		memset((&L_1), 0, sizeof(L_1));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_1), (void*)((uintptr_t)(&V_0)), NULL);
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mABE7E2BC06CA25519079DF4EEC89667EB51B8460(L_0, L_1, NULL);
		bool L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapBakeTypeSupportedByRef_mABE7E2BC06CA25519079DF4EEC89667EB51B8460 (int32_t ___0_bakeType, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		int32_t L_2 = ___0_bakeType;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SupportedRenderingFeatures_IsLightmapBakeTypeSupported_mE8EE2ACBE267FDAEFA6229CD67298C9D3A16C691(2, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_6;
		L_6 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline(L_6, NULL);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 1;
	}

IL_002b:
	{
		V_3 = (bool)G_B4_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		bool* L_9 = V_0;
		*((int8_t*)L_9) = (int8_t)0;
		goto IL_0064;
	}

IL_0035:
	{
	}

IL_0036:
	{
		bool* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_11;
		L_11 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline(L_11, NULL);
		int32_t L_13 = ___0_bakeType;
		int32_t L_14 = ___0_bakeType;
		*((int8_t*)L_10) = (int8_t)((((int32_t)((int32_t)((int32_t)L_12&(int32_t)L_13))) == ((int32_t)L_14))? 1 : 0);
		int32_t L_15 = ___0_bakeType;
		if ((!(((uint32_t)L_15) == ((uint32_t)4))))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_16;
		L_16 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_16);
		bool L_17;
		L_17 = SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline(L_16, NULL);
		G_B10_0 = ((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}

IL_005a:
	{
		G_B10_0 = 0;
	}

IL_005b:
	{
		V_4 = (bool)G_B10_0;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		bool* L_19 = V_0;
		*((int8_t*)L_19) = (int8_t)0;
	}

IL_0064:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapsModeSupportedByRef_m99BF1104DDA5C0EB37E529F76670E7F10E6319E8 (int32_t ___0_mode, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline(L_3, NULL);
		int32_t L_5 = ___0_mode;
		int32_t L_6 = ___0_mode;
		*((int8_t*)L_2) = (int8_t)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))) == ((int32_t)L_6))? 1 : 0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsLightmapperSupportedByRef_m891045E2F4FF9AC667E6FC75F6119D5AB546FBDB (int32_t ___0_lightmapper, intptr_t ___1_isSupportedPtr, const RuntimeMethod* method) 
{
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___1_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		int32_t L_3 = ___0_lightmapper;
		*((int8_t*)L_2) = (int8_t)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsUIOverlayRenderedBySRP_m15CF763E502A362DC677DEBBEC12A9B45CEEB458 (intptr_t ___0_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsAmbientProbeBakingSupported_m5083D6F2732FC1080326420ACF674F928C8B070B (intptr_t ___0_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_ambientProbeBaking_m8751A132081498EC99522A242C256DE8476F8BF4_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_IsDefaultReflectionProbeBakingSupported_m423DD42921D3B9EC30FD5F8A6AB633C4C8FF3D71 (intptr_t ___0_isSupportedPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_isSupportedPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_defaultReflectionProbeBaking_m4A35EDF34332159BE52C9035D9AC1D52F006F089_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_OverridesLightProbeSystem_mB8D7CE26D5DA36E58988A09F399227549F3B7B08 (intptr_t ___0_overridesPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* V_0 = NULL;
	{
		intptr_t L_0 = ___0_overridesPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (bool*)L_1;
		bool* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_3;
		L_3 = SupportedRenderingFeatures_get_active_m09012C98E24D5B2E8C09F6657FC5CD19B2AF3054(NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = SupportedRenderingFeatures_get_overridesLightProbeSystem_m62C56592C44FDD2FC89EAA4ADE71435CDE65EB64_inline(L_3, NULL);
		*((int8_t*)L_2) = (int8_t)L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures_FallbackLightmapperByRef_mBA3E826098F185845769A99830E50C43294304FF (intptr_t ___0_lightmapperPtr, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		intptr_t L_0 = ___0_lightmapperPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F52958969B20DC3BD23571E03593B2A8948B9F);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CreflectionProbeModesU3Ek__BackingField = 0;
		__this->___U3CdefaultMixedLightingModesU3Ek__BackingField = 0;
		__this->___U3CmixedLightingModesU3Ek__BackingField = 7;
		__this->___U3ClightmapBakeTypesU3Ek__BackingField = 7;
		__this->___U3ClightmapsModesU3Ek__BackingField = 1;
		__this->___U3CenlightenLightmapperU3Ek__BackingField = (bool)0;
		__this->___U3CenlightenU3Ek__BackingField = (bool)1;
		__this->___U3CskyOcclusionU3Ek__BackingField = (bool)0;
		__this->___U3ClightProbeProxyVolumesU3Ek__BackingField = (bool)1;
		__this->___U3CmotionVectorsU3Ek__BackingField = (bool)1;
		__this->___U3CreceiveShadowsU3Ek__BackingField = (bool)1;
		__this->___U3CreflectionProbesU3Ek__BackingField = (bool)1;
		__this->___U3CreflectionProbesBlendDistanceU3Ek__BackingField = (bool)1;
		__this->___U3CrendererPriorityU3Ek__BackingField = (bool)0;
		__this->___U3CrendersUIOverlayU3Ek__BackingField = (bool)0;
		__this->___U3CoverridesEnvironmentLightingU3Ek__BackingField = (bool)0;
		__this->___U3CoverridesFogU3Ek__BackingField = (bool)0;
		__this->___U3CoverridesRealtimeReflectionProbesU3Ek__BackingField = (bool)0;
		__this->___U3CoverridesOtherLightingSettingsU3Ek__BackingField = (bool)0;
		__this->___U3CeditableMaterialRenderQueueU3Ek__BackingField = (bool)1;
		__this->___U3CoverridesLODBiasU3Ek__BackingField = (bool)0;
		__this->___U3CoverridesMaximumLODLevelU3Ek__BackingField = (bool)0;
		__this->___U3CoverridesEnableLODCrossFadeU3Ek__BackingField = (bool)0;
		__this->___U3CrendererProbesU3Ek__BackingField = (bool)1;
		__this->___U3CparticleSystemInstancingU3Ek__BackingField = (bool)1;
		__this->___U3CambientProbeBakingU3Ek__BackingField = (bool)1;
		__this->___U3CdefaultReflectionProbeBakingU3Ek__BackingField = (bool)1;
		__this->___U3CoverridesShadowmaskU3Ek__BackingField = (bool)0;
		__this->___U3CoverridesLightProbeSystemU3Ek__BackingField = (bool)0;
		__this->___U3CsupportsHDRU3Ek__BackingField = (bool)0;
		__this->___U3CsupportsCloudsU3Ek__BackingField = (bool)0;
		__this->___U3CoverridesLightProbeSystemWarningMessageU3Ek__BackingField = _stringLiteralD8F52958969B20DC3BD23571E03593B2A8948B9F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoverridesLightProbeSystemWarningMessageU3Ek__BackingField), (void*)_stringLiteralD8F52958969B20DC3BD23571E03593B2A8948B9F);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportedRenderingFeatures__cctor_mD97BB2123C1AC4DAEF2B5D8D1DC8219C31968416 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* L_0 = (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6*)il2cpp_codegen_object_new(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var);
		SupportedRenderingFeatures__ctor_mF7728980F81142B7BD45FBB25AB001B17A4BF0ED(L_0, NULL);
		((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_StaticFields*)il2cpp_codegen_static_fields_for(SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6_il2cpp_TypeInfo_var))->___s_Active), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchID_GetHashCode_m3F4DFD3D722865BBC47F74C5E452E985B6BBBA3A (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t* L_0 = (uint32_t*)(&__this->___value);
		int32_t L_1;
		L_1 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t BatchID_GetHashCode_m3F4DFD3D722865BBC47F74C5E452E985B6BBBA3A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchID_GetHashCode_m3F4DFD3D722865BBC47F74C5E452E985B6BBBA3A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchID_Equals_m953C8EE9ABF083CFAA3D7210F1085C9FD7EED71D (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BatchID_Equals_m4207BA1B44B5BF1DA2847571B6D9A981F5AE3CFF(__this, ((*(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*)UnBox(L_2, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var))), NULL);
		V_1 = L_3;
		goto IL_0022;
	}

IL_001e:
	{
		V_1 = (bool)0;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool BatchID_Equals_m953C8EE9ABF083CFAA3D7210F1085C9FD7EED71D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchID_Equals_m953C8EE9ABF083CFAA3D7210F1085C9FD7EED71D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchID_Equals_m4207BA1B44B5BF1DA2847571B6D9A981F5AE3CFF (BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* __this, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0 = __this->___value;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_1 = ___0_other;
		uint32_t L_2 = L_1.___value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool BatchID_Equals_m4207BA1B44B5BF1DA2847571B6D9A981F5AE3CFF_AdjustorThunk (RuntimeObject* __this, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___0_other, const RuntimeMethod* method)
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchID_Equals_m4207BA1B44B5BF1DA2847571B6D9A981F5AE3CFF(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchID__cctor_m64258A0EFBDACA106FC41F54A1CF9936A884A4B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770));
		(&V_0)->___value = 0;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_0 = V_0;
		((BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_StaticFields*)il2cpp_codegen_static_fields_for(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_il2cpp_TypeInfo_var))->___Null = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchMaterialID_GetHashCode_mE28980612614E66848ADABB7825CA73FFA39DD09 (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t* L_0 = (uint32_t*)(&__this->___value);
		int32_t L_1;
		L_1 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t BatchMaterialID_GetHashCode_mE28980612614E66848ADABB7825CA73FFA39DD09_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchMaterialID_GetHashCode_mE28980612614E66848ADABB7825CA73FFA39DD09(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMaterialID_Equals_m776A152CA1957E92FCD24B4E2EDAF8A6D78E953E (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BatchMaterialID_Equals_m073A3DECD4CDE73F0CC314024B89399982E5BA83(__this, ((*(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C*)UnBox(L_2, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var))), NULL);
		V_1 = L_3;
		goto IL_0022;
	}

IL_001e:
	{
		V_1 = (bool)0;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool BatchMaterialID_Equals_m776A152CA1957E92FCD24B4E2EDAF8A6D78E953E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchMaterialID_Equals_m776A152CA1957E92FCD24B4E2EDAF8A6D78E953E(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMaterialID_Equals_m073A3DECD4CDE73F0CC314024B89399982E5BA83 (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* __this, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0 = __this->___value;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C L_1 = ___0_other;
		uint32_t L_2 = L_1.___value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool BatchMaterialID_Equals_m073A3DECD4CDE73F0CC314024B89399982E5BA83_AdjustorThunk (RuntimeObject* __this, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___0_other, const RuntimeMethod* method)
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchMaterialID_Equals_m073A3DECD4CDE73F0CC314024B89399982E5BA83(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchMaterialID__cctor_mCAFD39D3BA87D50321EA76B09E7CD4B8028E9A35 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C));
		(&V_0)->___value = 0;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C L_0 = V_0;
		((BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_StaticFields*)il2cpp_codegen_static_fields_for(BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_il2cpp_TypeInfo_var))->___Null = L_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchMeshID_GetHashCode_m62EDD33030F375FAAD44A23FAD7901A2BE1D08A9 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t* L_0 = (uint32_t*)(&__this->___value);
		int32_t L_1;
		L_1 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t BatchMeshID_GetHashCode_m62EDD33030F375FAAD44A23FAD7901A2BE1D08A9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchMeshID_GetHashCode_m62EDD33030F375FAAD44A23FAD7901A2BE1D08A9(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMeshID_Equals_mA501F8E992E7B32BD8985DD68D5D0B360A104A42 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BatchMeshID_Equals_m985986D473BB12E9F43C59B41846660884B15C06(__this, ((*(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0*)UnBox(L_2, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var))), NULL);
		V_1 = L_3;
		goto IL_0022;
	}

IL_001e:
	{
		V_1 = (bool)0;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool BatchMeshID_Equals_mA501F8E992E7B32BD8985DD68D5D0B360A104A42_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchMeshID_Equals_mA501F8E992E7B32BD8985DD68D5D0B360A104A42(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchMeshID_Equals_m985986D473BB12E9F43C59B41846660884B15C06 (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint32_t L_0 = __this->___value;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_1 = ___0_other;
		uint32_t L_2 = L_1.___value;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool BatchMeshID_Equals_m985986D473BB12E9F43C59B41846660884B15C06_AdjustorThunk (RuntimeObject* __this, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___0_other, const RuntimeMethod* method)
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchMeshID_Equals_m985986D473BB12E9F43C59B41846660884B15C06(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchMeshID__cctor_mC7DF8454B495B27D09F84E06E8D42B5F4224043A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0));
		(&V_0)->___value = 0;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 L_0 = V_0;
		((BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_StaticFields*)il2cpp_codegen_static_fields_for(BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_il2cpp_TypeInfo_var))->___Null = L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchPackedCullingViewID_GetHashCode_m588865495A1A1F2AC79A62D76B2DDC91D743F4A5 (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint64_t* L_0 = (uint64_t*)(&__this->___handle);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t BatchPackedCullingViewID_GetHashCode_m588865495A1A1F2AC79A62D76B2DDC91D743F4A5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchPackedCullingViewID_GetHashCode_m588865495A1A1F2AC79A62D76B2DDC91D743F4A5(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchPackedCullingViewID_Equals_mD7B8D7EFB1678D80FC11B9FA1171988669CD0C7E (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		uint64_t L_0 = __this->___handle;
		BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB L_1 = ___0_other;
		uint64_t L_2 = L_1.___handle;
		V_0 = (bool)((((int64_t)L_0) == ((int64_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool BatchPackedCullingViewID_Equals_mD7B8D7EFB1678D80FC11B9FA1171988669CD0C7E_AdjustorThunk (RuntimeObject* __this, BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB ___0_other, const RuntimeMethod* method)
{
	BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchPackedCullingViewID_Equals_mD7B8D7EFB1678D80FC11B9FA1171988669CD0C7E(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchPackedCullingViewID_Equals_m2E5BC66A5B8D6737BABE5D6A0019F901192D2A9F (BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0025;
	}

IL_0016:
	{
		RuntimeObject* L_2 = ___0_obj;
		bool L_3;
		L_3 = BatchPackedCullingViewID_Equals_mD7B8D7EFB1678D80FC11B9FA1171988669CD0C7E(__this, ((*(BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB*)UnBox(L_2, BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB_il2cpp_TypeInfo_var))), NULL);
		V_1 = L_3;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool BatchPackedCullingViewID_Equals_m2E5BC66A5B8D6737BABE5D6A0019F901192D2A9F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchPackedCullingViewID_Equals_m2E5BC66A5B8D6737BABE5D6A0019F901192D2A9F(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchCullingContext__ctor_mCBB93A14809CFC7FE19E3C68BC1426C5C29F1531 (BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659* __this, NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___0_inCullingPlanes, NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 ___1_inCullingSplits, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___2_inLodParameters, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_inLocalToWorldMatrix, int32_t ___4_inViewType, int32_t ___5_inProjectionType, int32_t ___6_inBatchCullingFlags, uint64_t ___7_inViewID, uint32_t ___8_inCullingLayerMask, uint64_t ___9_inSceneCullingMask, uint8_t ___10_inExclusionSplitMask, int32_t ___11_inReceiverPlaneOffset, int32_t ___12_inReceiverPlaneCount, intptr_t ___13_inOcclusionBuffer, const RuntimeMethod* method) 
{
	BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_0 = ___0_inCullingPlanes;
		__this->___cullingPlanes = L_0;
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_1 = ___1_inCullingSplits;
		__this->___cullingSplits = L_1;
		LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_2 = ___2_inLodParameters;
		__this->___lodParameters = L_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = ___3_inLocalToWorldMatrix;
		__this->___localToWorldMatrix = L_3;
		int32_t L_4 = ___4_inViewType;
		__this->___viewType = L_4;
		int32_t L_5 = ___5_inProjectionType;
		__this->___projectionType = L_5;
		int32_t L_6 = ___6_inBatchCullingFlags;
		__this->___cullingFlags = L_6;
		il2cpp_codegen_initobj((&V_0), sizeof(BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB));
		uint64_t L_7 = ___7_inViewID;
		(&V_0)->___handle = L_7;
		BatchPackedCullingViewID_t1E7EE8631C02555CAA181FA566CDC604B9FEFEBB L_8 = V_0;
		__this->___viewID = L_8;
		uint32_t L_9 = ___8_inCullingLayerMask;
		__this->___cullingLayerMask = L_9;
		uint64_t L_10 = ___9_inSceneCullingMask;
		__this->___sceneCullingMask = L_10;
		uint8_t L_11 = ___10_inExclusionSplitMask;
		__this->___splitExclusionMask = L_11;
		int32_t L_12 = ___11_inReceiverPlaneOffset;
		__this->___receiverPlaneOffset = L_12;
		int32_t L_13 = ___12_inReceiverPlaneCount;
		__this->___receiverPlaneCount = L_13;
		__this->___isOrthographic = (uint8_t)0;
		intptr_t L_14 = ___13_inOcclusionBuffer;
		__this->___occlusionBuffer = L_14;
		return;
	}
}
IL2CPP_EXTERN_C  void BatchCullingContext__ctor_mCBB93A14809CFC7FE19E3C68BC1426C5C29F1531_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 ___0_inCullingPlanes, NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 ___1_inCullingSplits, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___2_inLodParameters, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_inLocalToWorldMatrix, int32_t ___4_inViewType, int32_t ___5_inProjectionType, int32_t ___6_inBatchCullingFlags, uint64_t ___7_inViewID, uint32_t ___8_inCullingLayerMask, uint64_t ___9_inSceneCullingMask, uint8_t ___10_inExclusionSplitMask, int32_t ___11_inReceiverPlaneOffset, int32_t ___12_inReceiverPlaneCount, intptr_t ___13_inOcclusionBuffer, const RuntimeMethod* method)
{
	BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659*>(__this + _offset);
	BatchCullingContext__ctor_mCBB93A14809CFC7FE19E3C68BC1426C5C29F1531(_thisAdjusted, ___0_inCullingPlanes, ___1_inCullingSplits, ___2_inLodParameters, ___3_inLocalToWorldMatrix, ___4_inViewType, ___5_inProjectionType, ___6_inBatchCullingFlags, ___7_inViewID, ___8_inCullingLayerMask, ___9_inSceneCullingMask, ___10_inExclusionSplitMask, ___11_inReceiverPlaneOffset, ___12_inReceiverPlaneCount, ___13_inOcclusionBuffer, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_PerformCullingException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCullingException, NULL);
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_back(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke& marshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_PerformCullingException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCullingException, NULL);
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_pinvoke_cleanup(BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_com(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_PerformCullingException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCullingException, NULL);
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_com_back(const BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com& marshaled, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___m_PerformCullingException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10____m_PerformCulling_FieldInfo_var, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_PerformCullingException, NULL);
}
IL2CPP_EXTERN_C void BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshal_com_cleanup(BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchRendererGroup_InvokeOnPerformCulling_mCBE957A7C05B4023359DE8EADB3B17D93956CCC3 (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_group, BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* ___1_context, LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* ___2_lodParameters, intptr_t ___3_userContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A V_2;
	memset((&V_2), 0, sizeof(V_2));
	BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F V_3;
	memset((&V_3), 0, sizeof(V_3));
	BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_0 = ___1_context;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_1 = L_0->___cullingPlanes;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_2 = ___1_context;
		int32_t L_3 = L_2->___cullingPlaneCount;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_4;
		L_4 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441((void*)L_1, L_3, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_RuntimeMethod_var);
		V_0 = L_4;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_5 = ___1_context;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6 = L_5->___cullingSplits;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_7 = ___1_context;
		int32_t L_8 = L_7->___cullingSplitCount;
		NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_9;
		L_9 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238((void*)L_6, L_8, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m78078BBD88FE66CA0836BD408C17B7A555CA5238_RuntimeMethod_var);
		V_1 = L_9;
		BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_10 = ___1_context;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_11 = L_10->___drawCommands;
		NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_12;
		L_12 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976((void*)L_11, 1, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m80E640F909CF44B11BAA14373E8DA1D738DE6976_RuntimeMethod_var);
		V_2 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d1:
			{
				JobHandle_ScheduleBatchedJobs_mCA0E146397E30E31FB57C96DAA1820451886DACA(NULL);
				return;
			}
		});
		try
		{
			il2cpp_codegen_initobj((&V_4), sizeof(BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F));
			NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A L_13 = V_2;
			(&V_4)->___drawCommands = L_13;
			NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 L_14;
			memset((&L_14), 0, sizeof(L_14));
			NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555((&L_14), 1, 2, 1, NativeArray_1__ctor_m7F6F81F733C05D8966C6EEC4916B5277B4E19555_RuntimeMethod_var);
			(&V_4)->___customCullingResult = L_14;
			BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F L_15 = V_4;
			V_3 = L_15;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_16 = ___1_context;
			BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* L_17 = ___0_group;
			NullCheck(L_17);
			OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* L_18 = L_17->___m_PerformCulling;
			BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* L_19 = ___0_group;
			NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_20 = V_0;
			NativeArray_1_t73992261AA60020B6BE20D83C50B3F925CC89F31 L_21 = V_1;
			LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A* L_22 = ___2_lodParameters;
			LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A L_23 = (*(LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A*)L_22);
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_24 = ___1_context;
			Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_25 = L_24->___localToWorldMatrix;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_26 = ___1_context;
			int32_t L_27 = L_26->___viewType;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_28 = ___1_context;
			int32_t L_29 = L_28->___projectionType;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_30 = ___1_context;
			int32_t L_31 = L_30->___cullingFlags;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_32 = ___1_context;
			uint64_t L_33 = L_32->___viewID;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_34 = ___1_context;
			uint32_t L_35 = L_34->___cullingLayerMask;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_36 = ___1_context;
			uint64_t L_37 = L_36->___sceneCullingMask;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_38 = ___1_context;
			uint8_t L_39 = L_38->___splitExclusionMask;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_40 = ___1_context;
			int32_t L_41 = L_40->___receiverPlaneOffset;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_42 = ___1_context;
			int32_t L_43 = L_42->___receiverPlaneCount;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_44 = ___1_context;
			intptr_t L_45 = L_44->___occlusionBuffer;
			BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 L_46;
			memset((&L_46), 0, sizeof(L_46));
			BatchCullingContext__ctor_mCBB93A14809CFC7FE19E3C68BC1426C5C29F1531((&L_46), L_20, L_21, L_23, L_25, L_27, L_29, L_31, L_33, L_35, L_37, L_39, L_41, L_43, L_45, NULL);
			BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F L_47 = V_3;
			intptr_t L_48 = ___3_userContext;
			NullCheck(L_18);
			JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_49;
			L_49 = OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_inline(L_18, L_19, L_46, L_47, L_48, NULL);
			L_16->___cullingJobsFence = L_49;
			BatchRendererCullingOutput_t1BE6CDE8585B80F15D394EE66125879E391125D5* L_50 = ___1_context;
			NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9* L_51 = (NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9*)(&(&V_3)->___customCullingResult);
			intptr_t L_52;
			L_52 = IL2CPP_NATIVEARRAY_GET_ITEM(intptr_t, (L_51)->___m_Buffer, 0);
			L_50->___customCullingResult = L_52;
			goto IL_00da;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00da:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchRendererGroup_InvokeOnFinishedCulling_mE26998AD08461A7307421BB877EE91BC42A6EA17 (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_group, intptr_t ___1_customCullingResult, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{
		{
			BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* L_0 = ___0_group;
			NullCheck(L_0);
			OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* L_1 = L_0->___m_FinishedCulling;
			V_0 = (bool)((!(((RuntimeObject*)(OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_001c_1;
			}
		}
		{
			BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* L_3 = ___0_group;
			NullCheck(L_3);
			OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* L_4 = L_3->___m_FinishedCulling;
			intptr_t L_5 = ___1_customCullingResult;
			NullCheck(L_4);
			OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_inline(L_4, L_5, NULL);
		}

IL_001c_1:
		{
			goto IL_002b;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001f;
		}
		throw e;
	}

CATCH_001f:
	{
		Exception_t* L_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_1 = L_6;
		Exception_t* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002b;
	}

IL_002b:
	{
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
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_Multicast(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* currentDelegate = reinterpret_cast<OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2*>(delegatesToInvoke[i]);
		typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenInst(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	NullCheck(___0_rendererGroup);
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext, method);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenStatic(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext, method);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenVirtual(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	NullCheck(___0_rendererGroup);
	return VirtualFuncInvoker3< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenInterface(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	NullCheck(___0_rendererGroup);
	return InterfaceFuncInvoker3< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenGenericVirtual(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	NullCheck(___0_rendererGroup);
	return GenericVirtualFuncInvoker3< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t >::Invoke(method, ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext);
}
JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenGenericInterface(OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method)
{
	NullCheck(___0_rendererGroup);
	return GenericInterfaceFuncInvoker3< JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t >::Invoke(method, ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPerformCulling__ctor_mFB91FB8D6D713AC39AFB921AF1C23A50EC80529B (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenGenericInterface;
					else
						__this->___invoke_impl = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenInterface;
					else
						__this->___invoke_impl = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2 (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method) 
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_Multicast(OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* currentDelegate = reinterpret_cast<OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_customCullingResult, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_OpenInst(OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_customCullingResult, method);
}
void OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_OpenStatic(OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_customCullingResult, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1 (OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_customCullingResult);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFinishedCulling__ctor_mA202B9589AE563B23247C3094F5E5D7DB7EC943C (OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807 (OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_customCullingResult, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_Multicast(GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* currentDelegate = reinterpret_cast<GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_lodGroupData, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_OpenInst(GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method)
{
	NullCheck(___0_lodGroupData);
	typedef void (*FunctionPointerType) (GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_lodGroupData, method);
}
void GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_OpenStatic(GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_lodGroupData, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0 (GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_lodGroupData);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataCallback__ctor_m8E3366365D02188CD1B09C74579ECDAC882843A4 (GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8 (GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_lodGroupData, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GPUDrivenLODGroupDataNativeCallback_Invoke_m2FD60D31CB8AF021EBED864016E07698F6A5BAEF_Multicast(GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* __this, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* ___0_lodGroupDataNative, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* ___1_callback, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* currentDelegate = reinterpret_cast<GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1*, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_lodGroupDataNative, ___1_callback, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void GPUDrivenLODGroupDataNativeCallback_Invoke_m2FD60D31CB8AF021EBED864016E07698F6A5BAEF_OpenInst(GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* __this, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* ___0_lodGroupDataNative, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* ___1_callback, const RuntimeMethod* method)
{
	NullCheck(___0_lodGroupDataNative);
	typedef void (*FunctionPointerType) (GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1*, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_lodGroupDataNative, ___1_callback, method);
}
void GPUDrivenLODGroupDataNativeCallback_Invoke_m2FD60D31CB8AF021EBED864016E07698F6A5BAEF_OpenStatic(GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* __this, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* ___0_lodGroupDataNative, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* ___1_callback, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1*, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_lodGroupDataNative, ___1_callback, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A (GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* __this, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* ___0_lodGroupDataNative, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* ___1_callback, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1*, Il2CppMethodPointer);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	il2cppPInvokeFunc(___0_lodGroupDataNative, ____1_callback_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataNativeCallback__ctor_mDBEABDE8F0FD910A05540376160F1FA406CBE64D (GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&GPUDrivenLODGroupDataNativeCallback_Invoke_m2FD60D31CB8AF021EBED864016E07698F6A5BAEF_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&GPUDrivenLODGroupDataNativeCallback_Invoke_m2FD60D31CB8AF021EBED864016E07698F6A5BAEF_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&GPUDrivenLODGroupDataNativeCallback_Invoke_m2FD60D31CB8AF021EBED864016E07698F6A5BAEF_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataNativeCallback_Invoke_m2FD60D31CB8AF021EBED864016E07698F6A5BAEF (GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* __this, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* ___0_lodGroupDataNative, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1*, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_lodGroupDataNative, ___1_callback, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GPUDrivenRendererDataCallback_Invoke_mC4CC0435DC39A1319F88C79F23ACB41D86180155_Multicast(GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568* ___0_rendererData, RuntimeObject* ___1_meshes, RuntimeObject* ___2_materials, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* currentDelegate = reinterpret_cast<GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_rendererData, ___1_meshes, ___2_materials, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void GPUDrivenRendererDataCallback_Invoke_mC4CC0435DC39A1319F88C79F23ACB41D86180155_OpenInst(GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568* ___0_rendererData, RuntimeObject* ___1_meshes, RuntimeObject* ___2_materials, const RuntimeMethod* method)
{
	NullCheck(___0_rendererData);
	typedef void (*FunctionPointerType) (GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_rendererData, ___1_meshes, ___2_materials, method);
}
void GPUDrivenRendererDataCallback_Invoke_mC4CC0435DC39A1319F88C79F23ACB41D86180155_OpenStatic(GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568* ___0_rendererData, RuntimeObject* ___1_meshes, RuntimeObject* ___2_materials, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_rendererData, ___1_meshes, ___2_materials, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenRendererDataCallback__ctor_m53E13F6345B5C0EF66C15468172649A9F9EB3986 (GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&GPUDrivenRendererDataCallback_Invoke_mC4CC0435DC39A1319F88C79F23ACB41D86180155_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&GPUDrivenRendererDataCallback_Invoke_mC4CC0435DC39A1319F88C79F23ACB41D86180155_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&GPUDrivenRendererDataCallback_Invoke_mC4CC0435DC39A1319F88C79F23ACB41D86180155_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenRendererDataCallback_Invoke_mC4CC0435DC39A1319F88C79F23ACB41D86180155 (GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568* ___0_rendererData, RuntimeObject* ___1_meshes, RuntimeObject* ___2_materials, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_rendererData, ___1_meshes, ___2_materials, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GPUDrivenRendererDataNativeCallback_Invoke_m840ADD6953FD8B5DFD7C308DE6C3212A07532994_Multicast(GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* __this, GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* ___0_rendererDataNative, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* ___1_meshes, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___2_materials, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* ___3_callback, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* currentDelegate = reinterpret_cast<GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC*, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4*, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_rendererDataNative, ___1_meshes, ___2_materials, ___3_callback, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void GPUDrivenRendererDataNativeCallback_Invoke_m840ADD6953FD8B5DFD7C308DE6C3212A07532994_OpenInst(GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* __this, GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* ___0_rendererDataNative, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* ___1_meshes, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___2_materials, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* ___3_callback, const RuntimeMethod* method)
{
	NullCheck(___0_rendererDataNative);
	typedef void (*FunctionPointerType) (GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC*, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4*, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_rendererDataNative, ___1_meshes, ___2_materials, ___3_callback, method);
}
void GPUDrivenRendererDataNativeCallback_Invoke_m840ADD6953FD8B5DFD7C308DE6C3212A07532994_OpenStatic(GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* __this, GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* ___0_rendererDataNative, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* ___1_meshes, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___2_materials, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* ___3_callback, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC*, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4*, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_rendererDataNative, ___1_meshes, ___2_materials, ___3_callback, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenRendererDataNativeCallback__ctor_m05C3A717F3C233AEC54816DCAEDAC506A33C22C4 (GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&GPUDrivenRendererDataNativeCallback_Invoke_m840ADD6953FD8B5DFD7C308DE6C3212A07532994_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&GPUDrivenRendererDataNativeCallback_Invoke_m840ADD6953FD8B5DFD7C308DE6C3212A07532994_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&GPUDrivenRendererDataNativeCallback_Invoke_m840ADD6953FD8B5DFD7C308DE6C3212A07532994_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenRendererDataNativeCallback_Invoke_m840ADD6953FD8B5DFD7C308DE6C3212A07532994 (GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* __this, GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* ___0_rendererDataNative, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* ___1_meshes, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___2_materials, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* ___3_callback, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC*, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4*, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_rendererDataNative, ___1_meshes, ___2_materials, ___3_callback, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenCallbacks_InvokeGPUDrivenLODGroupDataNativeCallback_m37ADA6CE5751ECF379BB4108B4A1394A9FAED2C5 (GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* ___0_callback, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* ___1_lodGroupDataNative, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* ___2_target, const RuntimeMethod* method) 
{
	{
		GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* L_0 = ___0_callback;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_1 = ___1_lodGroupDataNative;
		GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* L_2 = ___2_target;
		NullCheck(L_0);
		GPUDrivenLODGroupDataNativeCallback_Invoke_m2FD60D31CB8AF021EBED864016E07698F6A5BAEF_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenCallbacks_InvokeGPUDrivenRendererDataNativeCallback_m782FF25F2D2FBC59AB271B1E3B74BB348A7C03FD (GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* ___0_callback, GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* ___1_rendererDataNative, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* ___2_meshes, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___3_materials, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* ___4_target, const RuntimeMethod* method) 
{
	{
		GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* L_0 = ___0_callback;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_1 = ___1_rendererDataNative;
		List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* L_2 = ___2_meshes;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_3 = ___3_materials;
		GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* L_4 = ___4_target;
		NullCheck(L_0);
		GPUDrivenRendererDataNativeCallback_Invoke_m840ADD6953FD8B5DFD7C308DE6C3212A07532994_inline(L_0, L_1, L_2, L_3, L_4, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenProcessor__cctor_m7F116F4225C6A175B9FC10EA86D95A0E7C96C00F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__34_0_mDD0513D453CB4E227C31E11EA4E7D846592D3576_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__34_1_m618998CB113C8FD255564DB98198EA49CFF07F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_il2cpp_TypeInfo_var);
		U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C* L_0 = ((U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_il2cpp_TypeInfo_var))->___U3CU3E9;
		GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* L_1 = (GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A*)il2cpp_codegen_object_new(GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A_il2cpp_TypeInfo_var);
		GPUDrivenRendererDataNativeCallback__ctor_m05C3A717F3C233AEC54816DCAEDAC506A33C22C4(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__34_0_mDD0513D453CB4E227C31E11EA4E7D846592D3576_RuntimeMethod_var), NULL);
		((GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08_StaticFields*)il2cpp_codegen_static_fields_for(GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08_il2cpp_TypeInfo_var))->___s_NativeRendererCallback = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08_StaticFields*)il2cpp_codegen_static_fields_for(GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08_il2cpp_TypeInfo_var))->___s_NativeRendererCallback), (void*)L_1);
		U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C* L_2 = ((U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_il2cpp_TypeInfo_var))->___U3CU3E9;
		GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* L_3 = (GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A*)il2cpp_codegen_object_new(GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A_il2cpp_TypeInfo_var);
		GPUDrivenLODGroupDataNativeCallback__ctor_mDBEABDE8F0FD910A05540376160F1FA406CBE64D(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__34_1_m618998CB113C8FD255564DB98198EA49CFF07F55_RuntimeMethod_var), NULL);
		((GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08_StaticFields*)il2cpp_codegen_static_fields_for(GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08_il2cpp_TypeInfo_var))->___s_NativeLODGroupCallback = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08_StaticFields*)il2cpp_codegen_static_fields_for(GPUDrivenProcessor_tB1BC3D8A5CF027C45CB4015CE5C88705BB717E08_il2cpp_TypeInfo_var))->___s_NativeLODGroupCallback), (void*)L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB790C6D4A3BDBBBA50AFAFA5B4697A20D9F3CC8B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C* L_0 = (U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C*)il2cpp_codegen_object_new(U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7CBF700309FD1B965872C8D658A056A2539AD139(L_0, NULL);
		((U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7CBF700309FD1B965872C8D658A056A2539AD139 (U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__34_0_mDD0513D453CB4E227C31E11EA4E7D846592D3576 (U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C* __this, GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* ___0_nativeData, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* ___1_meshes, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___2_materials, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* ___3_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m059A8D85858F860EAE3A55C44915C45DDF29A8D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_m64065F3A83B6E49F9AF8346B2C1BD7DC971B1E48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mE101F26626792732C8CEF56DF3B4833C02AF8575_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_m24853A18EB38839670565ED58453E4B144BA1044_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_6;
	memset((&V_6), 0, sizeof(V_6));
	NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C V_7;
	memset((&V_7), 0, sizeof(V_7));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_9;
	memset((&V_9), 0, sizeof(V_9));
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 V_10;
	memset((&V_10), 0, sizeof(V_10));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_11;
	memset((&V_11), 0, sizeof(V_11));
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 V_12;
	memset((&V_12), 0, sizeof(V_12));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_13;
	memset((&V_13), 0, sizeof(V_13));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_14;
	memset((&V_14), 0, sizeof(V_14));
	NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 V_15;
	memset((&V_15), 0, sizeof(V_15));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_16;
	memset((&V_16), 0, sizeof(V_16));
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_17;
	memset((&V_17), 0, sizeof(V_17));
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_18;
	memset((&V_18), 0, sizeof(V_18));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_19;
	memset((&V_19), 0, sizeof(V_19));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_20;
	memset((&V_20), 0, sizeof(V_20));
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 V_21;
	memset((&V_21), 0, sizeof(V_21));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_22;
	memset((&V_22), 0, sizeof(V_22));
	NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 V_23;
	memset((&V_23), 0, sizeof(V_23));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_24;
	memset((&V_24), 0, sizeof(V_24));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_25;
	memset((&V_25), 0, sizeof(V_25));
	NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 V_26;
	memset((&V_26), 0, sizeof(V_26));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_27;
	memset((&V_27), 0, sizeof(V_27));
	GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568 V_28;
	memset((&V_28), 0, sizeof(V_28));
	GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568 V_29;
	memset((&V_29), 0, sizeof(V_29));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* G_B2_0 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* G_B3_1 = NULL;
	int32_t* G_B5_0 = NULL;
	int32_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	int32_t* G_B6_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* G_B8_0 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* G_B9_1 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* G_B11_0 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* G_B12_1 = NULL;
	GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* G_B14_0 = NULL;
	GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* G_B15_1 = NULL;
	int32_t* G_B17_0 = NULL;
	int32_t* G_B16_0 = NULL;
	int32_t G_B18_0 = 0;
	int32_t* G_B18_1 = NULL;
	{
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_0 = ___0_nativeData;
		int32_t* L_1 = L_0->___rendererGroupID;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_2 = ___0_nativeData;
		int32_t L_3 = L_2->___rendererGroupCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_4;
		L_4 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_1, L_3, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_0 = L_4;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_5 = ___0_nativeData;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6 = L_5->___localBounds;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_7 = ___0_nativeData;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_8 = L_7->___localBounds;
		if ((((intptr_t)L_8) == ((intptr_t)((uintptr_t)0))))
		{
			G_B2_0 = L_6;
			goto IL_002c;
		}
		G_B1_0 = L_6;
	}
	{
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_9 = ___0_nativeData;
		int32_t L_10 = L_9->___rendererGroupCount;
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 L_11;
		L_11 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805((void*)G_B3_1, G_B3_0, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m48A3B3FF9BCBA094F23891CCDC1E601EF9EDC805_RuntimeMethod_var);
		V_1 = L_11;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_12 = ___0_nativeData;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_13 = L_12->___lightmapScaleOffset;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_14 = ___0_nativeData;
		int32_t L_15 = L_14->___rendererGroupCount;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_16;
		L_16 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2((void*)L_13, L_15, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_RuntimeMethod_var);
		V_2 = L_16;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_17 = ___0_nativeData;
		int32_t* L_18 = L_17->___gameObjectLayer;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_19 = ___0_nativeData;
		int32_t L_20 = L_19->___rendererGroupCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_21;
		L_21 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_18, L_20, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_3 = L_21;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_22 = ___0_nativeData;
		uint32_t* L_23 = L_22->___renderingLayerMask;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_24 = ___0_nativeData;
		int32_t L_25 = L_24->___rendererGroupCount;
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_26;
		L_26 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A((void*)L_23, L_25, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEECEE87DEFB44346F99B77138291333E52CFF94A_RuntimeMethod_var);
		V_4 = L_26;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_27 = ___0_nativeData;
		int32_t* L_28 = L_27->___lodGroupID;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_29 = ___0_nativeData;
		int32_t* L_30 = L_29->___lodGroupID;
		if ((((intptr_t)L_30) == ((intptr_t)((uintptr_t)0))))
		{
			G_B5_0 = L_28;
			goto IL_0086;
		}
		G_B4_0 = L_28;
	}
	{
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_31 = ___0_nativeData;
		int32_t L_32 = L_31->___rendererGroupCount;
		G_B6_0 = L_32;
		G_B6_1 = G_B4_0;
		goto IL_0087;
	}

IL_0086:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0087:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_33;
		L_33 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)G_B6_1, G_B6_0, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_5 = L_33;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_34 = ___0_nativeData;
		int32_t* L_35 = L_34->___motionVecGenMode;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_36 = ___0_nativeData;
		int32_t L_37 = L_36->___rendererGroupCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_38;
		L_38 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_35, L_37, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_6 = L_38;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_39 = ___0_nativeData;
		GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* L_40 = L_39->___packedRendererData;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_41 = ___0_nativeData;
		int32_t L_42 = L_41->___rendererGroupCount;
		NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C L_43;
		L_43 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_m64065F3A83B6E49F9AF8346B2C1BD7DC971B1E48((void*)L_40, L_42, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868_m64065F3A83B6E49F9AF8346B2C1BD7DC971B1E48_RuntimeMethod_var);
		V_7 = L_43;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_44 = ___0_nativeData;
		int32_t* L_45 = L_44->___rendererPriority;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_46 = ___0_nativeData;
		int32_t L_47 = L_46->___rendererGroupCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_48;
		L_48 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_45, L_47, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_8 = L_48;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_49 = ___0_nativeData;
		int32_t* L_50 = L_49->___meshIndex;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_51 = ___0_nativeData;
		int32_t L_52 = L_51->___rendererGroupCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_53;
		L_53 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_50, L_52, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_9 = L_53;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_54 = ___0_nativeData;
		int16_t* L_55 = L_54->___subMeshStartIndex;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_56 = ___0_nativeData;
		int32_t L_57 = L_56->___rendererGroupCount;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_58;
		L_58 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8((void*)L_55, L_57, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_RuntimeMethod_var);
		V_10 = L_58;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_59 = ___0_nativeData;
		int32_t* L_60 = L_59->___materialsOffset;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_61 = ___0_nativeData;
		int32_t L_62 = L_61->___rendererGroupCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_63;
		L_63 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_60, L_62, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_11 = L_63;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_64 = ___0_nativeData;
		int16_t* L_65 = L_64->___materialsCount;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_66 = ___0_nativeData;
		int32_t L_67 = L_66->___rendererGroupCount;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_68;
		L_68 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8((void*)L_65, L_67, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_RuntimeMethod_var);
		V_12 = L_68;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_69;
		L_69 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)((uintptr_t)0), 0, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_13 = L_69;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_70;
		L_70 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)((uintptr_t)0), 0, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_14 = L_70;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_71 = ___0_nativeData;
		GPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB* L_72 = L_71->___editorData;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_73 = ___0_nativeData;
		int32_t L_74 = L_73->___rendererGroupCount;
		NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 L_75;
		L_75 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mE101F26626792732C8CEF56DF3B4833C02AF8575((void*)L_72, L_74, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenRendererEditorData_t24652A12A94D8B8464B94D2A691269951AD0EDAB_mE101F26626792732C8CEF56DF3B4833C02AF8575_RuntimeMethod_var);
		V_15 = L_75;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_76 = ___0_nativeData;
		int32_t* L_77 = L_76->___invalidRendererGroupID;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_78 = ___0_nativeData;
		int32_t L_79 = L_78->___invalidRendererGroupIDCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_80;
		L_80 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_77, L_79, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_16 = L_80;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_81 = ___0_nativeData;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_82 = L_81->___localToWorldMatrix;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_83 = ___0_nativeData;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_84 = L_83->___localToWorldMatrix;
		if ((((intptr_t)L_84) == ((intptr_t)((uintptr_t)0))))
		{
			G_B8_0 = L_82;
			goto IL_0171;
		}
		G_B7_0 = L_82;
	}
	{
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_85 = ___0_nativeData;
		int32_t L_86 = L_85->___rendererGroupCount;
		G_B9_0 = L_86;
		G_B9_1 = G_B7_0;
		goto IL_0172;
	}

IL_0171:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0172:
	{
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_87;
		L_87 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F((void*)G_B9_1, G_B9_0, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_RuntimeMethod_var);
		V_17 = L_87;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_88 = ___0_nativeData;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_89 = L_88->___prevLocalToWorldMatrix;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_90 = ___0_nativeData;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_91 = L_90->___prevLocalToWorldMatrix;
		if ((((intptr_t)L_91) == ((intptr_t)((uintptr_t)0))))
		{
			G_B11_0 = L_89;
			goto IL_0192;
		}
		G_B10_0 = L_89;
	}
	{
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_92 = ___0_nativeData;
		int32_t L_93 = L_92->___rendererGroupCount;
		G_B12_0 = L_93;
		G_B12_1 = G_B10_0;
		goto IL_0193;
	}

IL_0192:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_0193:
	{
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_94;
		L_94 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F((void*)G_B12_1, G_B12_0, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_RuntimeMethod_var);
		V_18 = L_94;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_95;
		L_95 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)((uintptr_t)0), 0, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_19 = L_95;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_96 = ___0_nativeData;
		int32_t* L_97 = L_96->___meshID;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_98 = ___0_nativeData;
		int32_t L_99 = L_98->___meshCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_100;
		L_100 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_97, L_99, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_20 = L_100;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_101 = ___0_nativeData;
		int16_t* L_102 = L_101->___subMeshCount;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_103 = ___0_nativeData;
		int32_t L_104 = L_103->___meshCount;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_105;
		L_105 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8((void*)L_102, L_104, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_RuntimeMethod_var);
		V_21 = L_105;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_106 = ___0_nativeData;
		int32_t* L_107 = L_106->___subMeshDescOffset;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_108 = ___0_nativeData;
		int32_t L_109 = L_108->___meshCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_110;
		L_110 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_107, L_109, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_22 = L_110;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_111 = ___0_nativeData;
		SubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934* L_112 = L_111->___subMeshDesc;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_113 = ___0_nativeData;
		int32_t L_114 = L_113->___subMeshDescCount;
		NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 L_115;
		L_115 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_m24853A18EB38839670565ED58453E4B144BA1044((void*)L_112, L_114, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSubMeshDescriptor_t699E32E3F27A97CF89B0030F74C82D5FB7DEF934_m24853A18EB38839670565ED58453E4B144BA1044_RuntimeMethod_var);
		V_23 = L_115;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_116 = ___0_nativeData;
		int32_t* L_117 = L_116->___materialIndex;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_118 = ___0_nativeData;
		int32_t L_119 = L_118->___materialIndexCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_120;
		L_120 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_117, L_119, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_24 = L_120;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_121 = ___0_nativeData;
		int32_t* L_122 = L_121->___materialID;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_123 = ___0_nativeData;
		int32_t L_124 = L_123->___materialCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_125;
		L_125 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_122, L_124, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_25 = L_125;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_126 = ___0_nativeData;
		GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* L_127 = L_126->___packedMaterialData;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_128 = ___0_nativeData;
		GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* L_129 = L_128->___packedMaterialData;
		if ((((intptr_t)L_129) == ((intptr_t)((uintptr_t)0))))
		{
			G_B14_0 = L_127;
			goto IL_0236;
		}
		G_B13_0 = L_127;
	}
	{
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_130 = ___0_nativeData;
		int32_t L_131 = L_130->___materialCount;
		G_B15_0 = L_131;
		G_B15_1 = G_B13_0;
		goto IL_0237;
	}

IL_0236:
	{
		G_B15_0 = 0;
		G_B15_1 = G_B14_0;
	}

IL_0237:
	{
		NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 L_132;
		L_132 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m059A8D85858F860EAE3A55C44915C45DDF29A8D5((void*)G_B15_1, G_B15_0, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisGPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38_m059A8D85858F860EAE3A55C44915C45DDF29A8D5_RuntimeMethod_var);
		V_26 = L_132;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_133 = ___0_nativeData;
		int32_t* L_134 = L_133->___materialFilterFlags;
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_135 = ___0_nativeData;
		GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* L_136 = L_135->___packedMaterialData;
		if ((((intptr_t)L_136) == ((intptr_t)((uintptr_t)0))))
		{
			G_B17_0 = L_134;
			goto IL_0257;
		}
		G_B16_0 = L_134;
	}
	{
		GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* L_137 = ___0_nativeData;
		int32_t L_138 = L_137->___materialCount;
		G_B18_0 = L_138;
		G_B18_1 = G_B16_0;
		goto IL_0258;
	}

IL_0257:
	{
		G_B18_0 = 0;
		G_B18_1 = G_B17_0;
	}

IL_0258:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_139;
		L_139 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)G_B18_1, G_B18_0, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_27 = L_139;
		il2cpp_codegen_initobj((&V_29), sizeof(GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_140 = V_0;
		(&V_29)->___rendererGroupID = L_140;
		NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 L_141 = V_1;
		(&V_29)->___localBounds = L_141;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_142 = V_2;
		(&V_29)->___lightmapScaleOffset = L_142;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_143 = V_3;
		(&V_29)->___gameObjectLayer = L_143;
		NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 L_144 = V_4;
		(&V_29)->___renderingLayerMask = L_144;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_145 = V_5;
		(&V_29)->___lodGroupID = L_145;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_146 = V_6;
		(&V_29)->___lightmapIndex = L_146;
		NativeArray_1_t1A9BB89FE5439D8C850AB18E4601D3C0502C8A5C L_147 = V_7;
		(&V_29)->___packedRendererData = L_147;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_148 = V_8;
		(&V_29)->___rendererPriority = L_148;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_149 = V_9;
		(&V_29)->___meshIndex = L_149;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_150 = V_10;
		(&V_29)->___subMeshStartIndex = L_150;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_151 = V_11;
		(&V_29)->___materialsOffset = L_151;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_152 = V_12;
		(&V_29)->___materialsCount = L_152;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_153 = V_13;
		(&V_29)->___instancesOffset = L_153;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_154 = V_14;
		(&V_29)->___instancesCount = L_154;
		NativeArray_1_t671C61BFD2F520DB36712AFCE9CE9BA1FC6BE4B5 L_155 = V_15;
		(&V_29)->___editorData = L_155;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_156 = V_16;
		(&V_29)->___invalidRendererGroupID = L_156;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_157 = V_17;
		(&V_29)->___localToWorldMatrix = L_157;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_158 = V_18;
		(&V_29)->___prevLocalToWorldMatrix = L_158;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_159 = V_19;
		(&V_29)->___rendererGroupIndex = L_159;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_160 = V_20;
		(&V_29)->___meshID = L_160;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_161 = V_21;
		(&V_29)->___subMeshCount = L_161;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_162 = V_22;
		(&V_29)->___subMeshDescOffset = L_162;
		NativeArray_1_tF670CAD185DDF5208060ECE543F68A06A3852A92 L_163 = V_23;
		(&V_29)->___subMeshDesc = L_163;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_164 = V_24;
		(&V_29)->___materialIndex = L_164;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_165 = V_25;
		(&V_29)->___materialID = L_165;
		NativeArray_1_t712BAFB3B7FD80607F953479B6E3EE2D54BD9446 L_166 = V_26;
		(&V_29)->___packedMaterialData = L_166;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_167 = V_27;
		(&V_29)->___materialFilterFlags = L_167;
		GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568 L_168 = V_29;
		V_28 = L_168;
		GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* L_169 = ___3_callback;
		List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* L_170 = ___1_meshes;
		List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* L_171 = ___2_materials;
		NullCheck(L_169);
		GPUDrivenRendererDataCallback_Invoke_mC4CC0435DC39A1319F88C79F23ACB41D86180155_inline(L_169, (&V_28), L_170, L_171, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__34_1_m618998CB113C8FD255564DB98198EA49CFF07F55 (U3CU3Ec_t0FDF704B5C038B46C398F62C7D272BDEC3F85E3C* __this, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* ___0_nativeData, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m755CEF37289774CA34DDEC968D5BB1DA8D14E87F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLODFadeMode_tF98C8CC3E87AAB362B6E14B28CB522EA78A74052_mA6807C7EB95A62D89686F9DC0CB9CE640F86BF42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tF1FF9717CDE70F718B881DF6F986AC02FE8122AE V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB V_7;
	memset((&V_7), 0, sizeof(V_7));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_9;
	memset((&V_9), 0, sizeof(V_9));
	NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 V_10;
	memset((&V_10), 0, sizeof(V_10));
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_11;
	memset((&V_11), 0, sizeof(V_11));
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_12;
	memset((&V_12), 0, sizeof(V_12));
	GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7 V_14;
	memset((&V_14), 0, sizeof(V_14));
	{
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_0 = ___0_nativeData;
		int32_t* L_1 = L_0->___lodGroupID;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_2 = ___0_nativeData;
		int32_t L_3 = L_2->___lodGroupCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_4;
		L_4 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_1, L_3, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_0 = L_4;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_5 = ___0_nativeData;
		int32_t* L_6 = L_5->___lodOffset;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_7 = ___0_nativeData;
		int32_t L_8 = L_7->___lodGroupCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_9;
		L_9 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_6, L_8, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_1 = L_9;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_10 = ___0_nativeData;
		int32_t* L_11 = L_10->___lodCount;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_12 = ___0_nativeData;
		int32_t L_13 = L_12->___lodGroupCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_14;
		L_14 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_11, L_13, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_2 = L_14;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_15 = ___0_nativeData;
		int32_t* L_16 = L_15->___fadeMode;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_17 = ___0_nativeData;
		int32_t L_18 = L_17->___lodGroupCount;
		NativeArray_1_tF1FF9717CDE70F718B881DF6F986AC02FE8122AE L_19;
		L_19 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLODFadeMode_tF98C8CC3E87AAB362B6E14B28CB522EA78A74052_mA6807C7EB95A62D89686F9DC0CB9CE640F86BF42((void*)L_16, L_18, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLODFadeMode_tF98C8CC3E87AAB362B6E14B28CB522EA78A74052_mA6807C7EB95A62D89686F9DC0CB9CE640F86BF42_RuntimeMethod_var);
		V_3 = L_19;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_20 = ___0_nativeData;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = L_20->___worldSpaceReferencePoint;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_22 = ___0_nativeData;
		int32_t L_23 = L_22->___lodGroupCount;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_24;
		L_24 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C((void*)L_21, L_23, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_RuntimeMethod_var);
		V_4 = L_24;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_25 = ___0_nativeData;
		float* L_26 = L_25->___worldSpaceSize;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_27 = ___0_nativeData;
		int32_t L_28 = L_27->___lodGroupCount;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_29;
		L_29 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577((void*)L_26, L_28, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_RuntimeMethod_var);
		V_5 = L_29;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_30 = ___0_nativeData;
		int16_t* L_31 = L_30->___renderersCount;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_32 = ___0_nativeData;
		int32_t L_33 = L_32->___lodGroupCount;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_34;
		L_34 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8((void*)L_31, L_33, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_RuntimeMethod_var);
		V_6 = L_34;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_35 = ___0_nativeData;
		bool* L_36 = L_35->___lastLODIsBillboard;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_37 = ___0_nativeData;
		int32_t L_38 = L_37->___lodGroupCount;
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_39;
		L_39 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m755CEF37289774CA34DDEC968D5BB1DA8D14E87F((void*)L_36, L_38, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m755CEF37289774CA34DDEC968D5BB1DA8D14E87F_RuntimeMethod_var);
		V_7 = L_39;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_40 = ___0_nativeData;
		uint8_t* L_41 = L_40->___forceLODMask;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_42 = ___0_nativeData;
		int32_t L_43 = L_42->___lodGroupCount;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_44;
		L_44 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA((void*)L_41, L_43, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_RuntimeMethod_var);
		V_8 = L_44;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_45 = ___0_nativeData;
		int32_t* L_46 = L_45->___invalidLODGroupID;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_47 = ___0_nativeData;
		int32_t L_48 = L_47->___invalidLODGroupCount;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_49;
		L_49 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550((void*)L_46, L_48, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_9 = L_49;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_50 = ___0_nativeData;
		int16_t* L_51 = L_50->___lodRenderersCount;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_52 = ___0_nativeData;
		int32_t L_53 = L_52->___lodDataCount;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_54;
		L_54 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8((void*)L_51, L_53, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mC4941734FE8EF73CA24C2646508E084FEF5BF3B8_RuntimeMethod_var);
		V_10 = L_54;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_55 = ___0_nativeData;
		float* L_56 = L_55->___lodScreenRelativeTransitionHeight;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_57 = ___0_nativeData;
		int32_t L_58 = L_57->___lodDataCount;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_59;
		L_59 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577((void*)L_56, L_58, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_RuntimeMethod_var);
		V_11 = L_59;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_60 = ___0_nativeData;
		float* L_61 = L_60->___lodFadeTransitionWidth;
		GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* L_62 = ___0_nativeData;
		int32_t L_63 = L_62->___lodDataCount;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_64;
		L_64 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577((void*)L_61, L_63, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m774F73A324062BD75AF0FA48903D9C9056F70577_RuntimeMethod_var);
		V_12 = L_64;
		il2cpp_codegen_initobj((&V_14), sizeof(GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_65 = V_0;
		(&V_14)->___lodGroupID = L_65;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_66 = V_1;
		(&V_14)->___lodOffset = L_66;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_67 = V_2;
		(&V_14)->___lodCount = L_67;
		NativeArray_1_tF1FF9717CDE70F718B881DF6F986AC02FE8122AE L_68 = V_3;
		(&V_14)->___fadeMode = L_68;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_69 = V_4;
		(&V_14)->___worldSpaceReferencePoint = L_69;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_70 = V_5;
		(&V_14)->___worldSpaceSize = L_70;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_71 = V_6;
		(&V_14)->___renderersCount = L_71;
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_72 = V_7;
		(&V_14)->___lastLODIsBillboard = L_72;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_73 = V_8;
		(&V_14)->___forceLODMask = L_73;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_74 = V_9;
		(&V_14)->___invalidLODGroupID = L_74;
		NativeArray_1_t1779DD80E20BBE47D98F52B8F789215FA99BC8C8 L_75 = V_10;
		(&V_14)->___lodRenderersCount = L_75;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_76 = V_11;
		(&V_14)->___lodScreenRelativeTransitionHeight = L_76;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_77 = V_12;
		(&V_14)->___lodFadeTransitionWidth = L_77;
		GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7 L_78 = V_14;
		V_13 = L_78;
		GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* L_79 = ___1_callback;
		NullCheck(L_79);
		GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_inline(L_79, (&V_13), NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenPackedRendererData__ctor_m9BB0A7721F2D693B95778E2A49FCBF5DB5D0B63B (GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* __this, const RuntimeMethod* method) 
{
	{
		__this->___data = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void GPUDrivenPackedRendererData__ctor_m9BB0A7721F2D693B95778E2A49FCBF5DB5D0B63B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GPUDrivenPackedRendererData_t52E9500043C2079223FCFF256E7CCF23CC7CE868*>(__this + _offset);
	GPUDrivenPackedRendererData__ctor_m9BB0A7721F2D693B95778E2A49FCBF5DB5D0B63B(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUDrivenPackedMaterialData__ctor_m34253BB6931FB0BB4B2822088231C581C1D56C0E (GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* __this, const RuntimeMethod* method) 
{
	{
		__this->___data = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void GPUDrivenPackedMaterialData__ctor_m34253BB6931FB0BB4B2822088231C581C1D56C0E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GPUDrivenPackedMaterialData_t9AFE25D18C8FA6EB6A69AEF342C2A19DA824CF38*>(__this + _offset);
	GPUDrivenPackedMaterialData__ctor_m34253BB6931FB0BB4B2822088231C581C1D56C0E(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshal_pinvoke(const LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB& unmarshaled, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_pinvoke& marshaled)
{
	marshaled.___m_SpaceInfo = unmarshaled.___m_SpaceInfo;
	marshaled.___m_Name = il2cpp_codegen_marshal_string(unmarshaled.___m_Name);
	marshaled.___m_Index = unmarshaled.___m_Index;
}
IL2CPP_EXTERN_C void LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshal_pinvoke_back(const LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_pinvoke& marshaled, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB& unmarshaled)
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA unmarshaledm_SpaceInfo_temp_0;
	memset((&unmarshaledm_SpaceInfo_temp_0), 0, sizeof(unmarshaledm_SpaceInfo_temp_0));
	unmarshaledm_SpaceInfo_temp_0 = marshaled.___m_SpaceInfo;
	unmarshaled.___m_SpaceInfo = unmarshaledm_SpaceInfo_temp_0;
	unmarshaled.___m_Name = il2cpp_codegen_marshal_string_result(marshaled.___m_Name);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Name));
	uint32_t unmarshaledm_Index_temp_2 = 0;
	unmarshaledm_Index_temp_2 = marshaled.___m_Index;
	unmarshaled.___m_Index = unmarshaledm_Index_temp_2;
}
IL2CPP_EXTERN_C void LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshal_pinvoke_cleanup(LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name);
	marshaled.___m_Name = NULL;
}
IL2CPP_EXTERN_C void LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshal_com(const LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB& unmarshaled, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_com& marshaled)
{
	marshaled.___m_SpaceInfo = unmarshaled.___m_SpaceInfo;
	marshaled.___m_Name = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Name);
	marshaled.___m_Index = unmarshaled.___m_Index;
}
IL2CPP_EXTERN_C void LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshal_com_back(const LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_com& marshaled, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB& unmarshaled)
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA unmarshaledm_SpaceInfo_temp_0;
	memset((&unmarshaledm_SpaceInfo_temp_0), 0, sizeof(unmarshaledm_SpaceInfo_temp_0));
	unmarshaledm_SpaceInfo_temp_0 = marshaled.___m_SpaceInfo;
	unmarshaled.___m_SpaceInfo = unmarshaledm_SpaceInfo_temp_0;
	unmarshaled.___m_Name = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name));
	uint32_t unmarshaledm_Index_temp_2 = 0;
	unmarshaledm_Index_temp_2 = marshaled.___m_Index;
	unmarshaled.___m_Index = unmarshaledm_Index_temp_2;
}
IL2CPP_EXTERN_C void LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshal_com_cleanup(LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name);
	marshaled.___m_Name = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalKeyword_get_name_mA96B483DF4F6F069F6DFE1BF84150028BF7034C0 (LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Name;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* LocalKeyword_get_name_mA96B483DF4F6F069F6DFE1BF84150028BF7034C0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = LocalKeyword_get_name_mA96B483DF4F6F069F6DFE1BF84150028BF7034C0(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalKeyword_ToString_mCBEF3D50F71CBB79268F0E3644173694E8CF8FE2 (LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Name;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* LocalKeyword_ToString_mCBEF3D50F71CBB79268F0E3644173694E8CF8FE2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = LocalKeyword_ToString_mCBEF3D50F71CBB79268F0E3644173694E8CF8FE2(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalKeyword_Equals_m8D31C93AA8E3230CAC337955B60C721FB18DB1D5 (LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_o;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ___0_o;
		V_0 = ((*(LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB*)UnBox(L_1, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB_il2cpp_TypeInfo_var)));
		LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB L_2 = V_0;
		bool L_3;
		L_3 = LocalKeyword_Equals_mDAD1B018013FC5991AD295C4F3F7EBA720496C0B(__this, L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool LocalKeyword_Equals_m8D31C93AA8E3230CAC337955B60C721FB18DB1D5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB*>(__this + _offset);
	bool _returnValue;
	_returnValue = LocalKeyword_Equals_m8D31C93AA8E3230CAC337955B60C721FB18DB1D5(_thisAdjusted, ___0_o, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalKeyword_Equals_mDAD1B018013FC5991AD295C4F3F7EBA720496C0B (LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* __this, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB ___0_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA L_0 = __this->___m_SpaceInfo;
		LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB L_1 = ___0_rhs;
		LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA L_2 = L_1.___m_SpaceInfo;
		bool L_3;
		L_3 = LocalKeywordSpace_op_Equality_mA52BDE9E51D3FB2D9EA0126FC685188B2DBE554E(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		uint32_t L_4 = __this->___m_Index;
		LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB L_5 = ___0_rhs;
		uint32_t L_6 = L_5.___m_Index;
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_6))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool LocalKeyword_Equals_mDAD1B018013FC5991AD295C4F3F7EBA720496C0B_AdjustorThunk (RuntimeObject* __this, LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB ___0_rhs, const RuntimeMethod* method)
{
	LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB*>(__this + _offset);
	bool _returnValue;
	_returnValue = LocalKeyword_Equals_mDAD1B018013FC5991AD295C4F3F7EBA720496C0B(_thisAdjusted, ___0_rhs, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocalKeyword_GetHashCode_m593C9D65515ED5F19577184AA3584FA969FC2786 (LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		uint32_t* L_0 = (uint32_t*)(&__this->___m_Index);
		int32_t L_1;
		L_1 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_0, NULL);
		LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* L_2 = (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA*)(&__this->___m_SpaceInfo);
		int32_t L_3;
		L_3 = LocalKeywordSpace_GetHashCode_mF3B74C7113D2C02A6EACBB72CD955B5ABCEBB1DF(L_2, NULL);
		V_0 = ((int32_t)(L_1^L_3));
		goto IL_0021;
	}

IL_0021:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t LocalKeyword_GetHashCode_m593C9D65515ED5F19577184AA3584FA969FC2786_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LocalKeyword_tED7F563B432A5461E58CE7032AF6D1CD669CD0CB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = LocalKeyword_GetHashCode_m593C9D65515ED5F19577184AA3584FA969FC2786(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* LocalKeywordSpace_GetKeywords_m885390A995D762664950F8A776DAC86AFA936CE8 (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* __this, const RuntimeMethod* method) 
{
	typedef LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* (*LocalKeywordSpace_GetKeywords_m885390A995D762664950F8A776DAC86AFA936CE8_ftn) (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA*);
	static LocalKeywordSpace_GetKeywords_m885390A995D762664950F8A776DAC86AFA936CE8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (LocalKeywordSpace_GetKeywords_m885390A995D762664950F8A776DAC86AFA936CE8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rendering.LocalKeywordSpace::GetKeywords()");
	LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C  LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* LocalKeywordSpace_GetKeywords_m885390A995D762664950F8A776DAC86AFA936CE8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA*>(__this + _offset);
	LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* _returnValue;
	_returnValue = LocalKeywordSpace_GetKeywords_m885390A995D762664950F8A776DAC86AFA936CE8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* LocalKeywordSpace_get_keywords_m40979F9042B6FF15D8B44B239983555448584368 (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* __this, const RuntimeMethod* method) 
{
	LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* V_0 = NULL;
	{
		LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* L_0;
		L_0 = LocalKeywordSpace_GetKeywords_m885390A995D762664950F8A776DAC86AFA936CE8(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* LocalKeywordSpace_get_keywords_m40979F9042B6FF15D8B44B239983555448584368_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA*>(__this + _offset);
	LocalKeywordU5BU5D_tB7EDF3FB744FE86534FF8190C671AD0E9BE54CA9* _returnValue;
	_returnValue = LocalKeywordSpace_get_keywords_m40979F9042B6FF15D8B44B239983555448584368(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalKeywordSpace_Equals_m6E7BBA5D0C2C190A46681C2EEAB945C58A637C10 (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___0_o;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ___0_o;
		V_0 = ((*(LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA*)UnBox(L_1, LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA_il2cpp_TypeInfo_var)));
		LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA L_2 = V_0;
		bool L_3;
		L_3 = LocalKeywordSpace_Equals_m90ED506A341F7AAD4DAFC8359ED2EDF0C00785A7(__this, L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool LocalKeywordSpace_Equals_m6E7BBA5D0C2C190A46681C2EEAB945C58A637C10_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA*>(__this + _offset);
	bool _returnValue;
	_returnValue = LocalKeywordSpace_Equals_m6E7BBA5D0C2C190A46681C2EEAB945C58A637C10(_thisAdjusted, ___0_o, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalKeywordSpace_Equals_m90ED506A341F7AAD4DAFC8359ED2EDF0C00785A7 (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* __this, LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___0_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_KeywordSpace;
		LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA L_1 = ___0_rhs;
		intptr_t L_2 = L_1.___m_KeywordSpace;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool LocalKeywordSpace_Equals_m90ED506A341F7AAD4DAFC8359ED2EDF0C00785A7_AdjustorThunk (RuntimeObject* __this, LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___0_rhs, const RuntimeMethod* method)
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA*>(__this + _offset);
	bool _returnValue;
	_returnValue = LocalKeywordSpace_Equals_m90ED506A341F7AAD4DAFC8359ED2EDF0C00785A7(_thisAdjusted, ___0_rhs, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalKeywordSpace_op_Equality_mA52BDE9E51D3FB2D9EA0126FC685188B2DBE554E (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___0_lhs, LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA L_0 = ___1_rhs;
		bool L_1;
		L_1 = LocalKeywordSpace_Equals_m90ED506A341F7AAD4DAFC8359ED2EDF0C00785A7((&___0_lhs), L_0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocalKeywordSpace_GetHashCode_mF3B74C7113D2C02A6EACBB72CD955B5ABCEBB1DF (LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = (intptr_t*)(&__this->___m_KeywordSpace);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t LocalKeywordSpace_GetHashCode_mF3B74C7113D2C02A6EACBB72CD955B5ABCEBB1DF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LocalKeywordSpace_t8D56A7A6130EF8C8F8BA247C67F1CB8256DA34AA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = LocalKeywordSpace_GetHashCode_mF3B74C7113D2C02A6EACBB72CD955B5ABCEBB1DF(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_red;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05ED6AEC94875AE42F2118950FFBA1D613C05C37)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___0_value;
		__this->___m_red = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_green;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral188E04405D8D43DAB34FCE46235E3F3B9E939794)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___0_value;
		__this->___m_green = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_blue;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	float _returnValue;
	_returnValue = LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375 (LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___0_value;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___0_value;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_value), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral424B3C6544FA8C37056D18AD8DE5AD44F6874458)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA1EF620F523327123017878A2862AB13B665F4E)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_RuntimeMethod_var)));
	}

IL_0034:
	{
		float L_6 = ___0_value;
		__this->___m_blue = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7*>(__this + _offset);
	LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color, float ___1_intensity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	int32_t G_B7_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9(NULL);
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1 = ___1_intensity;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline((&___0_color), L_1, NULL);
		V_4 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline((&V_4), NULL);
		G_B3_0 = L_3;
		goto IL_002c;
	}

IL_001b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline((&___0_color), NULL);
		V_4 = L_4;
		float L_5 = ___1_intensity;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline((&V_4), L_5, NULL);
		G_B3_0 = L_6;
	}

IL_002c:
	{
		V_0 = G_B3_0;
		float L_7;
		L_7 = Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline((&V_0), NULL);
		V_1 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		float L_9 = L_8.___r;
		if ((((float)L_9) < ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		float L_11 = L_10.___g;
		if ((((float)L_11) < ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		float L_13 = L_12.___b;
		G_B7_0 = ((((float)L_13) < ((float)(0.0f)))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B7_0 = 1;
	}

IL_005f:
	{
		V_5 = (bool)G_B7_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_00c3;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25231130FE0C70CC2141B3D6AF214C0E2CB6C4CC)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		float* L_18 = (float*)(&(&V_0)->___r);
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_18, NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAC507E92A1A38ED15DB6692E1968942985D4237)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		float* L_22 = (float*)(&(&V_0)->___g);
		String_t* L_23;
		L_23 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_22, NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_21;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral008638F66804CEA9D15A6D4279FA7DA7FCC6B35D)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		float* L_26 = (float*)(&(&V_0)->___b);
		String_t* L_27;
		L_27 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_26, NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_27);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_25;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23C02924FA8C5A15B58E9DDD13C84007E2431466)));
		String_t* L_29;
		L_29 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_28, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_30 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_30, L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA_RuntimeMethod_var)));
	}

IL_00c3:
	{
		float L_31 = V_1;
		V_6 = (bool)((((int32_t)((!(((float)L_31) <= ((float)(9.99999968E-21f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_00dd;
		}
	}
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33;
		L_33 = LinearColor_Black_mF5AEFA40487500C1683D14FFA58554BF4D7B1A42(NULL);
		V_7 = L_33;
		goto IL_0125;
	}

IL_00dd:
	{
		float L_34;
		L_34 = Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline((&V_0), NULL);
		V_2 = ((float)((1.0f)/L_34));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = V_0;
		float L_36 = L_35.___r;
		float L_37 = V_2;
		(&V_3)->___m_red = ((float)il2cpp_codegen_multiply(L_36, L_37));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = V_0;
		float L_39 = L_38.___g;
		float L_40 = V_2;
		(&V_3)->___m_green = ((float)il2cpp_codegen_multiply(L_39, L_40));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = V_0;
		float L_42 = L_41.___b;
		float L_43 = V_2;
		(&V_3)->___m_blue = ((float)il2cpp_codegen_multiply(L_42, L_43));
		float L_44 = V_1;
		(&V_3)->___m_intensity = L_44;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_45 = V_3;
		V_7 = L_45;
		goto IL_0125;
	}

IL_0125:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_46 = V_7;
		return L_46;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LinearColor_Black_mF5AEFA40487500C1683D14FFA58554BF4D7B1A42 (const RuntimeMethod* method) 
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0 = (0.0f);
		V_1 = L_0;
		(&V_0)->___m_intensity = L_0;
		float L_1 = V_1;
		float L_2 = L_1;
		V_1 = L_2;
		(&V_0)->___m_blue = L_2;
		float L_3 = V_1;
		float L_4 = L_3;
		V_1 = L_4;
		(&V_0)->___m_green = L_4;
		float L_5 = V_1;
		(&V_0)->___m_red = L_5;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_6 = V_0;
		V_2 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = V_2;
		return L_7;
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
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID = unmarshaled.___instanceID;
	marshaled.___shadow = static_cast<int32_t>(unmarshaled.___shadow);
	marshaled.___mode = unmarshaled.___mode;
	marshaled.___position = unmarshaled.___position;
	marshaled.___orientation = unmarshaled.___orientation;
	marshaled.___color = unmarshaled.___color;
	marshaled.___indirectColor = unmarshaled.___indirectColor;
	marshaled.___penumbraWidthRadian = unmarshaled.___penumbraWidthRadian;
	marshaled.___direction = unmarshaled.___direction;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_back(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID;
	unmarshaled.___instanceID = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow);
	unmarshaled.___shadow = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode;
	unmarshaled.___mode = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position;
	unmarshaled.___position = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation;
	unmarshaled.___orientation = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color;
	unmarshaled.___color = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor;
	unmarshaled.___indirectColor = unmarshaledindirectColor_temp_6;
	float unmarshaledpenumbraWidthRadian_temp_7 = 0.0f;
	unmarshaledpenumbraWidthRadian_temp_7 = marshaled.___penumbraWidthRadian;
	unmarshaled.___penumbraWidthRadian = unmarshaledpenumbraWidthRadian_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_8;
	memset((&unmarshaleddirection_temp_8), 0, sizeof(unmarshaleddirection_temp_8));
	unmarshaleddirection_temp_8 = marshaled.___direction;
	unmarshaled.___direction = unmarshaleddirection_temp_8;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_pinvoke_cleanup(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled)
{
	marshaled.___instanceID = unmarshaled.___instanceID;
	marshaled.___shadow = static_cast<int32_t>(unmarshaled.___shadow);
	marshaled.___mode = unmarshaled.___mode;
	marshaled.___position = unmarshaled.___position;
	marshaled.___orientation = unmarshaled.___orientation;
	marshaled.___color = unmarshaled.___color;
	marshaled.___indirectColor = unmarshaled.___indirectColor;
	marshaled.___penumbraWidthRadian = unmarshaled.___penumbraWidthRadian;
	marshaled.___direction = unmarshaled.___direction;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com_back(const DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID;
	unmarshaled.___instanceID = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow);
	unmarshaled.___shadow = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode;
	unmarshaled.___mode = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position;
	unmarshaled.___position = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation;
	unmarshaled.___orientation = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color;
	unmarshaled.___color = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor;
	unmarshaled.___indirectColor = unmarshaledindirectColor_temp_6;
	float unmarshaledpenumbraWidthRadian_temp_7 = 0.0f;
	unmarshaledpenumbraWidthRadian_temp_7 = marshaled.___penumbraWidthRadian;
	unmarshaled.___penumbraWidthRadian = unmarshaledpenumbraWidthRadian_temp_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaleddirection_temp_8;
	memset((&unmarshaleddirection_temp_8), 0, sizeof(unmarshaleddirection_temp_8));
	unmarshaleddirection_temp_8 = marshaled.___direction;
	unmarshaled.___direction = unmarshaleddirection_temp_8;
}
IL2CPP_EXTERN_C void DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshal_com_cleanup(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID = unmarshaled.___instanceID;
	marshaled.___shadow = static_cast<int32_t>(unmarshaled.___shadow);
	marshaled.___mode = unmarshaled.___mode;
	marshaled.___position = unmarshaled.___position;
	marshaled.___orientation = unmarshaled.___orientation;
	marshaled.___color = unmarshaled.___color;
	marshaled.___indirectColor = unmarshaled.___indirectColor;
	marshaled.___range = unmarshaled.___range;
	marshaled.___sphereRadius = unmarshaled.___sphereRadius;
	marshaled.___falloff = unmarshaled.___falloff;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_back(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID;
	unmarshaled.___instanceID = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow);
	unmarshaled.___shadow = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode;
	unmarshaled.___mode = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position;
	unmarshaled.___position = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation;
	unmarshaled.___orientation = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color;
	unmarshaled.___color = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor;
	unmarshaled.___indirectColor = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range;
	unmarshaled.___range = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius;
	unmarshaled.___sphereRadius = unmarshaledsphereRadius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff;
	unmarshaled.___falloff = unmarshaledfalloff_temp_9;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_pinvoke_cleanup(PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled)
{
	marshaled.___instanceID = unmarshaled.___instanceID;
	marshaled.___shadow = static_cast<int32_t>(unmarshaled.___shadow);
	marshaled.___mode = unmarshaled.___mode;
	marshaled.___position = unmarshaled.___position;
	marshaled.___orientation = unmarshaled.___orientation;
	marshaled.___color = unmarshaled.___color;
	marshaled.___indirectColor = unmarshaled.___indirectColor;
	marshaled.___range = unmarshaled.___range;
	marshaled.___sphereRadius = unmarshaled.___sphereRadius;
	marshaled.___falloff = unmarshaled.___falloff;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com_back(const PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled, PointLight_tD01A1428DC1015D98A527136034187F732433EA7& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID;
	unmarshaled.___instanceID = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow);
	unmarshaled.___shadow = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode;
	unmarshaled.___mode = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position;
	unmarshaled.___position = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation;
	unmarshaled.___orientation = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color;
	unmarshaled.___color = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor;
	unmarshaled.___indirectColor = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range;
	unmarshaled.___range = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius;
	unmarshaled.___sphereRadius = unmarshaledsphereRadius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff;
	unmarshaled.___falloff = unmarshaledfalloff_temp_9;
}
IL2CPP_EXTERN_C void PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshal_com_cleanup(PointLight_tD01A1428DC1015D98A527136034187F732433EA7_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID = unmarshaled.___instanceID;
	marshaled.___shadow = static_cast<int32_t>(unmarshaled.___shadow);
	marshaled.___mode = unmarshaled.___mode;
	marshaled.___position = unmarshaled.___position;
	marshaled.___orientation = unmarshaled.___orientation;
	marshaled.___color = unmarshaled.___color;
	marshaled.___indirectColor = unmarshaled.___indirectColor;
	marshaled.___range = unmarshaled.___range;
	marshaled.___sphereRadius = unmarshaled.___sphereRadius;
	marshaled.___coneAngle = unmarshaled.___coneAngle;
	marshaled.___innerConeAngle = unmarshaled.___innerConeAngle;
	marshaled.___falloff = unmarshaled.___falloff;
	marshaled.___angularFalloff = unmarshaled.___angularFalloff;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_back(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID;
	unmarshaled.___instanceID = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow);
	unmarshaled.___shadow = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode;
	unmarshaled.___mode = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position;
	unmarshaled.___position = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation;
	unmarshaled.___orientation = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color;
	unmarshaled.___color = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor;
	unmarshaled.___indirectColor = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range;
	unmarshaled.___range = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius;
	unmarshaled.___sphereRadius = unmarshaledsphereRadius_temp_8;
	float unmarshaledconeAngle_temp_9 = 0.0f;
	unmarshaledconeAngle_temp_9 = marshaled.___coneAngle;
	unmarshaled.___coneAngle = unmarshaledconeAngle_temp_9;
	float unmarshaledinnerConeAngle_temp_10 = 0.0f;
	unmarshaledinnerConeAngle_temp_10 = marshaled.___innerConeAngle;
	unmarshaled.___innerConeAngle = unmarshaledinnerConeAngle_temp_10;
	uint8_t unmarshaledfalloff_temp_11 = 0;
	unmarshaledfalloff_temp_11 = marshaled.___falloff;
	unmarshaled.___falloff = unmarshaledfalloff_temp_11;
	uint8_t unmarshaledangularFalloff_temp_12 = 0;
	unmarshaledangularFalloff_temp_12 = marshaled.___angularFalloff;
	unmarshaled.___angularFalloff = unmarshaledangularFalloff_temp_12;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_pinvoke_cleanup(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled)
{
	marshaled.___instanceID = unmarshaled.___instanceID;
	marshaled.___shadow = static_cast<int32_t>(unmarshaled.___shadow);
	marshaled.___mode = unmarshaled.___mode;
	marshaled.___position = unmarshaled.___position;
	marshaled.___orientation = unmarshaled.___orientation;
	marshaled.___color = unmarshaled.___color;
	marshaled.___indirectColor = unmarshaled.___indirectColor;
	marshaled.___range = unmarshaled.___range;
	marshaled.___sphereRadius = unmarshaled.___sphereRadius;
	marshaled.___coneAngle = unmarshaled.___coneAngle;
	marshaled.___innerConeAngle = unmarshaled.___innerConeAngle;
	marshaled.___falloff = unmarshaled.___falloff;
	marshaled.___angularFalloff = unmarshaled.___angularFalloff;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com_back(const SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID;
	unmarshaled.___instanceID = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow);
	unmarshaled.___shadow = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode;
	unmarshaled.___mode = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position;
	unmarshaled.___position = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation;
	unmarshaled.___orientation = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color;
	unmarshaled.___color = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor;
	unmarshaled.___indirectColor = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range;
	unmarshaled.___range = unmarshaledrange_temp_7;
	float unmarshaledsphereRadius_temp_8 = 0.0f;
	unmarshaledsphereRadius_temp_8 = marshaled.___sphereRadius;
	unmarshaled.___sphereRadius = unmarshaledsphereRadius_temp_8;
	float unmarshaledconeAngle_temp_9 = 0.0f;
	unmarshaledconeAngle_temp_9 = marshaled.___coneAngle;
	unmarshaled.___coneAngle = unmarshaledconeAngle_temp_9;
	float unmarshaledinnerConeAngle_temp_10 = 0.0f;
	unmarshaledinnerConeAngle_temp_10 = marshaled.___innerConeAngle;
	unmarshaled.___innerConeAngle = unmarshaledinnerConeAngle_temp_10;
	uint8_t unmarshaledfalloff_temp_11 = 0;
	unmarshaledfalloff_temp_11 = marshaled.___falloff;
	unmarshaled.___falloff = unmarshaledfalloff_temp_11;
	uint8_t unmarshaledangularFalloff_temp_12 = 0;
	unmarshaledangularFalloff_temp_12 = marshaled.___angularFalloff;
	unmarshaled.___angularFalloff = unmarshaledangularFalloff_temp_12;
}
IL2CPP_EXTERN_C void SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshal_com_cleanup(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID = unmarshaled.___instanceID;
	marshaled.___shadow = static_cast<int32_t>(unmarshaled.___shadow);
	marshaled.___mode = unmarshaled.___mode;
	marshaled.___position = unmarshaled.___position;
	marshaled.___orientation = unmarshaled.___orientation;
	marshaled.___color = unmarshaled.___color;
	marshaled.___indirectColor = unmarshaled.___indirectColor;
	marshaled.___range = unmarshaled.___range;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___falloff = unmarshaled.___falloff;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_back(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID;
	unmarshaled.___instanceID = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow);
	unmarshaled.___shadow = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode;
	unmarshaled.___mode = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position;
	unmarshaled.___position = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation;
	unmarshaled.___orientation = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color;
	unmarshaled.___color = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor;
	unmarshaled.___indirectColor = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range;
	unmarshaled.___range = unmarshaledrange_temp_7;
	float unmarshaledwidth_temp_8 = 0.0f;
	unmarshaledwidth_temp_8 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_8;
	float unmarshaledheight_temp_9 = 0.0f;
	unmarshaledheight_temp_9 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_9;
	uint8_t unmarshaledfalloff_temp_10 = 0;
	unmarshaledfalloff_temp_10 = marshaled.___falloff;
	unmarshaled.___falloff = unmarshaledfalloff_temp_10;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_pinvoke_cleanup(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled)
{
	marshaled.___instanceID = unmarshaled.___instanceID;
	marshaled.___shadow = static_cast<int32_t>(unmarshaled.___shadow);
	marshaled.___mode = unmarshaled.___mode;
	marshaled.___position = unmarshaled.___position;
	marshaled.___orientation = unmarshaled.___orientation;
	marshaled.___color = unmarshaled.___color;
	marshaled.___indirectColor = unmarshaled.___indirectColor;
	marshaled.___range = unmarshaled.___range;
	marshaled.___width = unmarshaled.___width;
	marshaled.___height = unmarshaled.___height;
	marshaled.___falloff = unmarshaled.___falloff;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com_back(const RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID;
	unmarshaled.___instanceID = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow);
	unmarshaled.___shadow = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode;
	unmarshaled.___mode = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position;
	unmarshaled.___position = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation;
	unmarshaled.___orientation = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color;
	unmarshaled.___color = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor;
	unmarshaled.___indirectColor = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range;
	unmarshaled.___range = unmarshaledrange_temp_7;
	float unmarshaledwidth_temp_8 = 0.0f;
	unmarshaledwidth_temp_8 = marshaled.___width;
	unmarshaled.___width = unmarshaledwidth_temp_8;
	float unmarshaledheight_temp_9 = 0.0f;
	unmarshaledheight_temp_9 = marshaled.___height;
	unmarshaled.___height = unmarshaledheight_temp_9;
	uint8_t unmarshaledfalloff_temp_10 = 0;
	unmarshaledfalloff_temp_10 = marshaled.___falloff;
	unmarshaled.___falloff = unmarshaledfalloff_temp_10;
}
IL2CPP_EXTERN_C void RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshal_com_cleanup(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled)
{
	marshaled.___instanceID = unmarshaled.___instanceID;
	marshaled.___shadow = static_cast<int32_t>(unmarshaled.___shadow);
	marshaled.___mode = unmarshaled.___mode;
	marshaled.___position = unmarshaled.___position;
	marshaled.___orientation = unmarshaled.___orientation;
	marshaled.___color = unmarshaled.___color;
	marshaled.___indirectColor = unmarshaled.___indirectColor;
	marshaled.___range = unmarshaled.___range;
	marshaled.___radius = unmarshaled.___radius;
	marshaled.___falloff = unmarshaled.___falloff;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_back(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID;
	unmarshaled.___instanceID = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow);
	unmarshaled.___shadow = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode;
	unmarshaled.___mode = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position;
	unmarshaled.___position = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation;
	unmarshaled.___orientation = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color;
	unmarshaled.___color = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor;
	unmarshaled.___indirectColor = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range;
	unmarshaled.___range = unmarshaledrange_temp_7;
	float unmarshaledradius_temp_8 = 0.0f;
	unmarshaledradius_temp_8 = marshaled.___radius;
	unmarshaled.___radius = unmarshaledradius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff;
	unmarshaled.___falloff = unmarshaledfalloff_temp_9;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_pinvoke_cleanup(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled)
{
	marshaled.___instanceID = unmarshaled.___instanceID;
	marshaled.___shadow = static_cast<int32_t>(unmarshaled.___shadow);
	marshaled.___mode = unmarshaled.___mode;
	marshaled.___position = unmarshaled.___position;
	marshaled.___orientation = unmarshaled.___orientation;
	marshaled.___color = unmarshaled.___color;
	marshaled.___indirectColor = unmarshaled.___indirectColor;
	marshaled.___range = unmarshaled.___range;
	marshaled.___radius = unmarshaled.___radius;
	marshaled.___falloff = unmarshaled.___falloff;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com_back(const DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E& unmarshaled)
{
	int32_t unmarshaledinstanceID_temp_0 = 0;
	unmarshaledinstanceID_temp_0 = marshaled.___instanceID;
	unmarshaled.___instanceID = unmarshaledinstanceID_temp_0;
	bool unmarshaledshadow_temp_1 = false;
	unmarshaledshadow_temp_1 = static_cast<bool>(marshaled.___shadow);
	unmarshaled.___shadow = unmarshaledshadow_temp_1;
	uint8_t unmarshaledmode_temp_2 = 0;
	unmarshaledmode_temp_2 = marshaled.___mode;
	unmarshaled.___mode = unmarshaledmode_temp_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_3;
	memset((&unmarshaledposition_temp_3), 0, sizeof(unmarshaledposition_temp_3));
	unmarshaledposition_temp_3 = marshaled.___position;
	unmarshaled.___position = unmarshaledposition_temp_3;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledorientation_temp_4;
	memset((&unmarshaledorientation_temp_4), 0, sizeof(unmarshaledorientation_temp_4));
	unmarshaledorientation_temp_4 = marshaled.___orientation;
	unmarshaled.___orientation = unmarshaledorientation_temp_4;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledcolor_temp_5;
	memset((&unmarshaledcolor_temp_5), 0, sizeof(unmarshaledcolor_temp_5));
	unmarshaledcolor_temp_5 = marshaled.___color;
	unmarshaled.___color = unmarshaledcolor_temp_5;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 unmarshaledindirectColor_temp_6;
	memset((&unmarshaledindirectColor_temp_6), 0, sizeof(unmarshaledindirectColor_temp_6));
	unmarshaledindirectColor_temp_6 = marshaled.___indirectColor;
	unmarshaled.___indirectColor = unmarshaledindirectColor_temp_6;
	float unmarshaledrange_temp_7 = 0.0f;
	unmarshaledrange_temp_7 = marshaled.___range;
	unmarshaled.___range = unmarshaledrange_temp_7;
	float unmarshaledradius_temp_8 = 0.0f;
	unmarshaledradius_temp_8 = marshaled.___radius;
	unmarshaled.___radius = unmarshaledradius_temp_8;
	uint8_t unmarshaledfalloff_temp_9 = 0;
	unmarshaledfalloff_temp_9 = marshaled.___falloff;
	unmarshaled.___falloff = unmarshaledfalloff_temp_9;
}
IL2CPP_EXTERN_C void DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshal_com_cleanup(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID;
		__this->___instanceID = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID;
		__this->___cookieID = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale;
		__this->___cookieScale = L_5;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color;
		__this->___color = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor;
		__this->___indirectColor = L_9;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation;
		__this->___orientation = L_11;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position;
		__this->___position = L_13;
		__this->___range = (0.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_14 = ___1_cookie;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&L_14->___sizes);
		float L_16 = L_15->___x;
		__this->___coneAngle = L_16;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_17 = ___1_cookie;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&L_17->___sizes);
		float L_19 = L_18->___y;
		__this->___innerConeAngle = L_19;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_20 = ___0_light;
		float L_21 = L_20->___penumbraWidthRadian;
		__this->___shape0 = L_21;
		__this->___shape1 = (0.0f);
		__this->___type = 0;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_22 = ___0_light;
		uint8_t L_23 = L_22->___mode;
		__this->___mode = L_23;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_24 = ___0_light;
		bool L_25 = L_24->___shadow;
		if (L_25)
		{
			G_B2_0 = __this;
			goto IL_00b8;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00b9;
	}

IL_00b8:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00b9:
	{
		G_B3_1->___shadow = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		__this->___falloff = 4;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207_AdjustorThunk (RuntimeObject* __this, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207(_thisAdjusted, ___0_light, ___1_cookie, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID;
		__this->___instanceID = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID;
		__this->___cookieID = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale;
		__this->___cookieScale = L_5;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color;
		__this->___color = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor;
		__this->___indirectColor = L_9;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation;
		__this->___orientation = L_11;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position;
		__this->___position = L_13;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_14 = ___0_light;
		float L_15 = L_14->___range;
		__this->___range = L_15;
		__this->___coneAngle = (0.0f);
		__this->___innerConeAngle = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_16 = ___0_light;
		float L_17 = L_16->___sphereRadius;
		__this->___shape0 = L_17;
		__this->___shape1 = (0.0f);
		__this->___type = 1;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_18 = ___0_light;
		uint8_t L_19 = L_18->___mode;
		__this->___mode = L_19;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_20 = ___0_light;
		bool L_21 = L_20->___shadow;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00ae:
	{
		G_B3_1->___shadow = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_22 = ___0_light;
		uint8_t L_23 = L_22->___falloff;
		__this->___falloff = L_23;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A_AdjustorThunk (RuntimeObject* __this, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A(_thisAdjusted, ___0_light, ___1_cookie, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID;
		__this->___instanceID = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID;
		__this->___cookieID = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale;
		__this->___cookieScale = L_5;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color;
		__this->___color = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor;
		__this->___indirectColor = L_9;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation;
		__this->___orientation = L_11;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position;
		__this->___position = L_13;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_14 = ___0_light;
		float L_15 = L_14->___range;
		__this->___range = L_15;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_16 = ___0_light;
		float L_17 = L_16->___coneAngle;
		__this->___coneAngle = L_17;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_18 = ___0_light;
		float L_19 = L_18->___innerConeAngle;
		__this->___innerConeAngle = L_19;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_20 = ___0_light;
		float L_21 = L_20->___sphereRadius;
		__this->___shape0 = L_21;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_22 = ___0_light;
		uint8_t L_23 = L_22->___angularFalloff;
		__this->___shape1 = ((float)L_23);
		__this->___type = 2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_24 = ___0_light;
		uint8_t L_25 = L_24->___mode;
		__this->___mode = L_25;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_26 = ___0_light;
		bool L_27 = L_26->___shadow;
		if (L_27)
		{
			G_B2_0 = __this;
			goto IL_00b1;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00b2;
	}

IL_00b1:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00b2:
	{
		G_B3_1->___shadow = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_28 = ___0_light;
		uint8_t L_29 = L_28->___falloff;
		__this->___falloff = L_29;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B_AdjustorThunk (RuntimeObject* __this, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B(_thisAdjusted, ___0_light, ___1_cookie, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID;
		__this->___instanceID = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID;
		__this->___cookieID = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale;
		__this->___cookieScale = L_5;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color;
		__this->___color = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor;
		__this->___indirectColor = L_9;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation;
		__this->___orientation = L_11;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position;
		__this->___position = L_13;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_14 = ___0_light;
		float L_15 = L_14->___range;
		__this->___range = L_15;
		__this->___coneAngle = (0.0f);
		__this->___innerConeAngle = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_16 = ___0_light;
		float L_17 = L_16->___width;
		__this->___shape0 = L_17;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_18 = ___0_light;
		float L_19 = L_18->___height;
		__this->___shape1 = L_19;
		__this->___type = 3;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_20 = ___0_light;
		uint8_t L_21 = L_20->___mode;
		__this->___mode = L_21;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_22 = ___0_light;
		bool L_23 = L_22->___shadow;
		if (L_23)
		{
			G_B2_0 = __this;
			goto IL_00ae;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00af;
	}

IL_00ae:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00af:
	{
		G_B3_1->___shadow = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_24 = ___0_light;
		uint8_t L_25 = L_24->___falloff;
		__this->___falloff = L_25;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038_AdjustorThunk (RuntimeObject* __this, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038(_thisAdjusted, ___0_light, ___1_cookie, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B2_0 = NULL;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* G_B3_1 = NULL;
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___0_light;
		int32_t L_1 = L_0->___instanceID;
		__this->___instanceID = L_1;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_2 = ___1_cookie;
		int32_t L_3 = L_2->___instanceID;
		__this->___cookieID = L_3;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_4 = ___1_cookie;
		float L_5 = L_4->___scale;
		__this->___cookieScale = L_5;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_6 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = L_6->___color;
		__this->___color = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___0_light;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_9 = L_8->___indirectColor;
		__this->___indirectColor = L_9;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_10 = ___0_light;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10->___orientation;
		__this->___orientation = L_11;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_12 = ___0_light;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position;
		__this->___position = L_13;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_14 = ___0_light;
		float L_15 = L_14->___range;
		__this->___range = L_15;
		__this->___coneAngle = (0.0f);
		__this->___innerConeAngle = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_16 = ___0_light;
		float L_17 = L_16->___radius;
		__this->___shape0 = L_17;
		__this->___shape1 = (0.0f);
		__this->___type = 4;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_18 = ___0_light;
		uint8_t L_19 = L_18->___mode;
		__this->___mode = L_19;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_20 = ___0_light;
		bool L_21 = L_20->___shadow;
		if (L_21)
		{
			G_B2_0 = __this;
			goto IL_00ad;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_00ae:
	{
		G_B3_1->___shadow = (uint8_t)((int32_t)(uint8_t)G_B3_0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_22 = ___0_light;
		uint8_t L_23 = L_22->___falloff;
		__this->___falloff = L_23;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632_AdjustorThunk (RuntimeObject* __this, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___0_light, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632(_thisAdjusted, ___0_light, ___1_cookie, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43 (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_lightInstanceID;
		__this->___instanceID = L_0;
		__this->___mode = 3;
		return;
	}
}
IL2CPP_EXTERN_C  void LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43_AdjustorThunk (RuntimeObject* __this, int32_t ___0_lightInstanceID, const RuntimeMethod* method)
{
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*>(__this + _offset);
	LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43(_thisAdjusted, ___0_lightInstanceID, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D (int32_t ___0_baketype, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___0_baketype;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_baketype;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		G_B4_0 = 2;
		goto IL_000d;
	}

IL_000c:
	{
		G_B4_0 = 1;
	}

IL_000d:
	{
		G_B6_0 = G_B4_0;
		goto IL_0010;
	}

IL_000f:
	{
		G_B6_0 = 0;
	}

IL_0010:
	{
		V_0 = G_B6_0;
		goto IL_0013;
	}

IL_0013:
	{
		uint8_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_0, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2 = ___0_l;
		NullCheck(L_2);
		float L_3;
		L_3 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_2, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_bounceIntensity_m535008F539A0EF22BBB831113EC34F20D6331FAE(L_4, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_6;
		L_6 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_1, ((float)il2cpp_codegen_multiply(L_3, L_5)), NULL);
		V_0 = L_6;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_7 = V_0;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		float L_1;
		L_1 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_0, NULL);
		float L_2;
		L_2 = tanf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_1, (0.5f))), (0.0174532924f))));
		float L_3;
		L_3 = atanf(((float)(((float)il2cpp_codegen_multiply(L_2, (46.0f)))/(64.0f))));
		V_0 = ((float)il2cpp_codegen_multiply((2.0f), L_3));
		goto IL_0032;
	}

IL_0032:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_0), (1.0f), (1.0f), (1.0f), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = ___0_l;
		NullCheck(L_0);
		bool L_1;
		L_1 = Light_get_useColorTemperature_mD76967684F904F6068B58EE78BD65001D8AFF3EF(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsSettings_t01785CE5CB5C5105CB527619AF4D74BEF417EF1A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = GraphicsSettings_get_lightsUseLinearIntensity_m74D1A18837CB7E9D3A9BF20D44212F94DD1F67B9(NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_colorTemperature_mA5B7C9A5B315B27625764B8CE7EF5ADC06060B08(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Mathf_CorrelatedColorTemperatureToRGB_m595A3D1E887CD42FE21CD2893D8E377B3F44153C(L_5, NULL);
		V_0 = L_6;
	}

IL_0037:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		V_2 = L_7;
		goto IL_003b;
	}

IL_003b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_cct, LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* ___1_lightColor, const RuntimeMethod* method) 
{
	{
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_0 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_1 = L_0;
		float L_2;
		L_2 = LinearColor_get_red_m376617B8E3156420835055189BB28D953FE46A2A(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_cct;
		float L_4 = L_3.___r;
		LinearColor_set_red_m0ACFCEDDD205A6F235BE95936816E92898B01B52(L_1, ((float)il2cpp_codegen_multiply(L_2, L_4)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_5 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_6 = L_5;
		float L_7;
		L_7 = LinearColor_get_green_mCCE90A662234EE3605368F3AEC14E51572665AE5(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_cct;
		float L_9 = L_8.___g;
		LinearColor_set_green_mBD9C7EA6415DC54B3F6B643C3CD02B71565F0694(L_6, ((float)il2cpp_codegen_multiply(L_7, L_9)), NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_10 = ___1_lightColor;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7* L_11 = L_10;
		float L_12;
		L_12 = LinearColor_get_blue_mAFAEA5D5590DD14CFC48BC18DF4BFEBBDCB0A99A(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_cct;
		float L_14 = L_13.___b;
		LinearColor_set_blue_m3FEEAF946772BB177733B67D9DA4B72D84874375(L_11, ((float)il2cpp_codegen_multiply(L_12, L_14)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* ___1_dir, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_0 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID = L_2;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_3 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode = L_7;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_8 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_11 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position = L_14;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_15 = ___1_dir;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_30 = ___1_dir;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color = L_31;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_32 = ___1_dir;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor = L_33;
		DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB* L_34 = ___1_dir;
		L_34->___penumbraWidthRadian = (0.0f);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, PointLight_tD01A1428DC1015D98A527136034187F732433EA7* ___1_point, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_0 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID = L_2;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_3 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode = L_7;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_8 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_11 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position = L_14;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_15 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_30 = ___1_point;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color = L_31;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_32 = ___1_point;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor = L_33;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_34 = ___1_point;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range = L_36;
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_37 = ___1_point;
		L_37->___sphereRadius = (0.0f);
		PointLight_tD01A1428DC1015D98A527136034187F732433EA7* L_38 = ___1_point;
		L_38->___falloff = 3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* ___1_spot, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_0 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID = L_2;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_3 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode = L_7;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_8 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_11 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position = L_14;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_15 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_30 = ___1_spot;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color = L_31;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_32 = ___1_spot;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor = L_33;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_34 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_range_m4156F07BA6CD289DA47080B590D632721D975A22(L_35, NULL);
		L_34->___range = L_36;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_37 = ___1_spot;
		L_37->___sphereRadius = (0.0f);
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_38 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_39 = ___0_l;
		NullCheck(L_39);
		float L_40;
		L_40 = Light_get_spotAngle_m28B2CD7ADE25422693E7B1FA23E8615E9D7098FC(L_39, NULL);
		L_38->___coneAngle = ((float)il2cpp_codegen_multiply(L_40, (0.0174532924f)));
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_41 = ___1_spot;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_42 = ___0_l;
		float L_43;
		L_43 = LightmapperUtils_ExtractInnerCone_m8B2B838A7D49A49D64813232503D5C3CA8957C5E(L_42, NULL);
		L_41->___innerConeAngle = L_43;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_44 = ___1_spot;
		L_44->___falloff = 3;
		SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869* L_45 = ___1_spot;
		L_45->___angularFalloff = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* ___1_rect, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_0 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID = L_2;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_3 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode = L_7;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_8 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_11 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position = L_14;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_15 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_30 = ___1_rect;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color = L_31;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_32 = ___1_rect;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor = L_33;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_34 = ___1_rect;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_dilatedRange_mE24AF6780C101F6C5671BB2E7A1A4BE205CE1BF7(L_35, NULL);
		L_34->___range = L_36;
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_37 = ___1_rect;
		L_37->___width = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_38 = ___1_rect;
		L_38->___height = (0.0f);
		RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698* L_39 = ___1_rect;
		L_39->___falloff = 3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* ___1_disc, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_0 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_1, NULL);
		L_0->___instanceID = L_2;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_3 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		LightBakingOutput_t6212AB0B6B34C94F1982FE964FC48201854B5B90 L_5;
		L_5 = Light_get_bakingOutput_mF383DB97CFD32D65DA468329E18DD2DD61521CED(L_4, NULL);
		int32_t L_6 = L_5.___lightmapBakeType;
		uint8_t L_7;
		L_7 = LightmapperUtils_Extract_m936FF4E20F593777EABF072404B37D0C1EB3AF5D(L_6, NULL);
		L_3->___mode = L_7;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_8 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_shadows_m1A11721F202C27838A7A8ED72455E6A727CEE6C5(L_9, NULL);
		L_8->___shadow = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_11 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = ___0_l;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		L_11->___position = L_14;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_15 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = ___0_l;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		L_15->___orientation = L_18;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19 = ___0_l;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = LightmapperUtils_ExtractColorTemperature_mEA79654385184193BC807A191696BE14B04ABEAA(L_19, NULL);
		V_0 = L_20;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21 = ___0_l;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Light_get_color_mE7EB8F11BF394877B50A2F335627441889ADE536(L_21, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = ___0_l;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_25;
		L_25 = LinearColor_Convert_m0E220E18AC54A8040BAD7FFEB0D81538639F9BBA(L_22, L_24, NULL);
		V_1 = L_25;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = ___0_l;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_27;
		L_27 = LightmapperUtils_ExtractIndirect_m5776341FC44CD3BBB634828E668732C2A490BB78(L_26, NULL);
		V_2 = L_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_28, (&V_1), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		LightmapperUtils_ApplyColorTemperature_m5286438BDED2F10292887505A26B1E33C714C325(L_29, (&V_2), NULL);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_30 = ___1_disc;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_31 = V_1;
		L_30->___color = L_31;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_32 = ___1_disc;
		LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 L_33 = V_2;
		L_32->___indirectColor = L_33;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_34 = ___1_disc;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_35 = ___0_l;
		NullCheck(L_35);
		float L_36;
		L_36 = Light_get_dilatedRange_mE24AF6780C101F6C5671BB2E7A1A4BE205CE1BF7(L_35, NULL);
		L_34->___range = L_36;
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_37 = ___1_disc;
		L_37->___radius = (0.0f);
		DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E* L_38 = ___1_disc;
		L_38->___falloff = 3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___0_l, Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* ___1_cookie, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B2_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B3_1 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B5_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B4_0 = NULL;
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B6_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* G_B7_1 = NULL;
	{
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_0 = ___1_cookie;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1 = ___0_l;
		NullCheck(L_1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (L_3)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
		G_B1_0 = L_0;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0012:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = ___0_l;
		NullCheck(L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5;
		L_5 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		G_B3_1->___instanceID = G_B3_0;
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_7 = ___1_cookie;
		L_7->___scale = (1.0f);
		Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0* L_8 = ___1_cookie;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = ___0_l;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_9, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			G_B5_0 = L_8;
			goto IL_0044;
		}
		G_B4_0 = L_8;
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = ___0_l;
		NullCheck(L_11);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12;
		L_12 = Light_get_cookie_m44A0C4B92F6CD6F2F8536A91C51B77FEEF59715E(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_12, NULL);
		if (L_13)
		{
			G_B6_0 = G_B4_0;
			goto IL_0055;
		}
		G_B5_0 = G_B4_0;
	}

IL_0044:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), (1.0f), (1.0f), NULL);
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		goto IL_0066;
	}

IL_0055:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = ___0_l;
		NullCheck(L_15);
		float L_16;
		L_16 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_15, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = ___0_l;
		NullCheck(L_17);
		float L_18;
		L_18 = Light_get_cookieSize_m1BB417985207915659198F63CF825A23A8ED30B0(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_16, L_18, NULL);
		G_B7_0 = L_19;
		G_B7_1 = G_B6_0;
	}

IL_0066:
	{
		G_B7_1->___sizes = G_B7_0;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_SetDelegate_m8BEF0FE5035180FF94119860CD15BBE2BE90129D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___0_del, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* G_B3_0 = NULL;
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ___0_del;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate;
		G_B3_0 = L_1;
		goto IL_000c;
	}

IL_000b:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ___0_del;
		G_B3_0 = L_2;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate), (void*)G_B3_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* Lightmapping_GetDelegate_m073E4FFA73169C20833F77984024BD328003258A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_ResetDelegate_m8D4AAF4F08C8697953B3CB110DD4E6CD130371D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_0 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping_RequestLights_m1967533AFFB328B3386E7E0D1EC414105E509B80 (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_lights, intptr_t ___1_outLightsPtr, int32_t ___2_outLightsCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___1_outLightsPtr;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		int32_t L_2 = ___2_outLightsCount;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_3;
		L_3 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A(L_1, L_2, 1, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_RuntimeMethod_var);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_4 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_5 = ___0_lights;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_6 = V_0;
		NullCheck(L_4);
		RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline(L_4, L_5, L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lightmapping__cctor_m6AEDE40A651280EC1A7944E9CFD161AFB78802B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = ((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9;
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_1 = (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*)il2cpp_codegen_object_new(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB_il2cpp_TypeInfo_var);
		RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6_RuntimeMethod_var), NULL);
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate), (void*)L_1);
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* L_2 = ((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_DefaultDelegate;
		((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_StaticFields*)il2cpp_codegen_static_fields_for(Lightmapping_t8029670A092F9724E230520E9ED17B3ED489DD6A_il2cpp_TypeInfo_var))->___s_RequestLightsDelegate), (void*)L_2);
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
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* currentDelegate = reinterpret_cast<RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenInst(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	NullCheck(___0_requests);
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_requests, ___1_lightsOutput, method);
}
void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStatic(RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_requests, ___1_lightsOutput, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate__ctor_mFFCE8681C67A169A04BEA2201C393E1FC84CAB7D (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m766681161796D9912477BF60542C4DD1EB0D2096 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* L_0 = (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4*)il2cpp_codegen_object_new(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902(L_0, NULL);
		((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4_il2cpp_TypeInfo_var))->___U3CU3E9), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3FBD26AEC83F79DACB13A7EF6FE5F539A71F0902 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__7_0_m3DE1C9F0E58017EDCEAFA5FEC90132A153B492F6 (U3CU3Ec_t480832E6E9C0D190B837CC90FB7A34286511D2E4* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	PointLight_tD01A1428DC1015D98A527136034187F732433EA7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E V_4;
	memset((&V_4), 0, sizeof(V_4));
	Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0 V_5;
	memset((&V_5), 0, sizeof(V_5));
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	bool V_11 = false;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DirectionalLight_t8DB2E20F494363D841151C4E59EEB127E2AEB2FB));
		il2cpp_codegen_initobj((&V_1), sizeof(PointLight_tD01A1428DC1015D98A527136034187F732433EA7));
		il2cpp_codegen_initobj((&V_2), sizeof(SpotLight_t8C9291BCACE4E56454E49756C61511EB95353869));
		il2cpp_codegen_initobj((&V_3), sizeof(RectangleLight_t6291A359474D9745D01709AF7FEDE6B6BE575698));
		il2cpp_codegen_initobj((&V_4), sizeof(DiscLight_t59DBA24695372AB69E18F7197D8215A9BA826B5E));
		il2cpp_codegen_initobj((&V_5), sizeof(Cookie_tA61BB2790E12D696A65444ACF3E636B3EF2AC3A0));
		il2cpp_codegen_initobj((&V_6), sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21));
		V_7 = 0;
		goto IL_0146;
	}

IL_0041:
	{
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_0 = ___0_requests;
		int32_t L_1 = V_7;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_8 = L_3;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = V_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_4, NULL);
		V_10 = L_5;
		int32_t L_6 = V_10;
		V_9 = L_6;
		int32_t L_7 = V_9;
		switch (L_7)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00de;
			}
			case 4:
			{
				goto IL_0100;
			}
		}
	}
	{
		goto IL_0122;
	}

IL_0075:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = V_8;
		LightmapperUtils_Extract_m44511C1C63663F51CD77ABF24CC4B34B9A826F0F(L_8, (&V_0), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_9, (&V_5), NULL);
		LightDataGI_Init_m112DEBB76EC57AC52E6384C97A3E8B2EAA867207((&V_6), (&V_0), (&V_5), NULL);
		goto IL_0133;
	}

IL_009a:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = V_8;
		LightmapperUtils_Extract_m47570BBE32168BBEA4C823D83C8A94A4CBF03AE2(L_10, (&V_1), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_11 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_11, (&V_5), NULL);
		LightDataGI_Init_mACE06E00CC639CA89F3847E9DB55FD0F00812A7A((&V_6), (&V_1), (&V_5), NULL);
		goto IL_0133;
	}

IL_00bc:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = V_8;
		LightmapperUtils_Extract_m9F0C60CB137D268694B8CB324C73E799E1CE73F9(L_12, (&V_2), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_13, (&V_5), NULL);
		LightDataGI_Init_m0A999D118CDCBDA99B9E24231ED057D943C9C67B((&V_6), (&V_2), (&V_5), NULL);
		goto IL_0133;
	}

IL_00de:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_14 = V_8;
		LightmapperUtils_Extract_m3B3FFE050376D624857D5D67413BD532518949F1(L_14, (&V_3), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_15, (&V_5), NULL);
		LightDataGI_Init_mDC887CA8191C6CADE1DB585D7FEB46B080B25038((&V_6), (&V_3), (&V_5), NULL);
		goto IL_0133;
	}

IL_0100:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = V_8;
		LightmapperUtils_Extract_mA319A386DA025BF5F0B7D9C398ACD3BE3AF65ABB(L_16, (&V_4), NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_17 = V_8;
		LightmapperUtils_Extract_mF6521637E4DD97C8BBD71696B5A61C7B7B8C83D4(L_17, (&V_5), NULL);
		LightDataGI_Init_mB2D1C73EDFEA6815E39A0FE3ED2F7BF9A7117632((&V_6), (&V_4), (&V_5), NULL);
		goto IL_0133;
	}

IL_0122:
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_18 = V_8;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_18, NULL);
		LightDataGI_InitNoBake_mBDF2EFB22D4BEE63B6F25F4EE9F1522D2866ED43((&V_6), L_19, NULL);
		goto IL_0133;
	}

IL_0133:
	{
		int32_t L_20 = V_7;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_21 = V_6;
		IL2CPP_NATIVEARRAY_SET_ITEM(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21, ((&___1_lightsOutput))->___m_Buffer, L_20, (L_21));
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0146:
	{
		int32_t L_23 = V_7;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_24 = ___0_requests;
		NullCheck(L_24);
		V_11 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))? 1 : 0);
		bool L_25 = V_11;
		if (L_25)
		{
			goto IL_0041;
		}
	}
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF (CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = CameraPlayable_GetHandle_mA04469CA50B43AF6219F9967B8AEB310CB5455BD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF_AdjustorThunk (RuntimeObject* __this, CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1 ___0_other, const RuntimeMethod* method)
{
	CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CameraPlayable_t7C0B6B53C2B634321B1A077CEE8F68CE17C8BEF1*>(__this + _offset);
	bool _returnValue;
	_returnValue = CameraPlayable_Equals_mD0FA195F3EA6511043E8F0AA1680CEB7E0E2E2CF(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058 (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC (MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = MaterialEffectPlayable_GetHandle_m748319E116317E9ADD1EA36A4EDA488338471058((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC_AdjustorThunk (RuntimeObject* __this, MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504 ___0_other, const RuntimeMethod* method)
{
	MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MaterialEffectPlayable_tB5FEFE2DC83EB4F0FF26F15326E60C92BAC4B504*>(__this + _offset);
	bool _returnValue;
	_returnValue = MaterialEffectPlayable_Equals_mC55640B5D29F90360F9743549FABD43C5AA320EC(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7 (TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = TextureMixerPlayable_GetHandle_mB75CF651C6BDDF347ED6938D0F1DE4BED92BB7CD((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7_AdjustorThunk (RuntimeObject* __this, TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445 ___0_other, const RuntimeMethod* method)
{
	TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TextureMixerPlayable_t88CDAAB0A0742BBD8698D911604F78CB88D62445*>(__this + _offset);
	bool _returnValue;
	_returnValue = TextureMixerPlayable_Equals_m6838329B39779020FC3309B7406B8A0418F44FE7(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_TickRealtimeProbes_m0CD6423541B0FCB022D55498C348A013E06E5F39 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m2CDBD30196F65463B8E86AC97DA2370A4D68762D (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	{
		BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B(__this, (bool)1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem_Dispose_m6B57B7E11B7A095063597FBCB0C6EE7036003F6B (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941 (const RuntimeMethod* method) 
{
	typedef bool (*BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941_ftn) ();
	static BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BuiltinRuntimeReflectionSystem_BuiltinUpdate_m833B3EB0E69D46FDAB5A890FECB417C4D9D5D941_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* BuiltinRuntimeReflectionSystem_Internal_BuiltinRuntimeReflectionSystem_New_mA100197AC7CA73600AAD55A67E43039EEF8D2C27 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* V_0 = NULL;
	{
		BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* L_0 = (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE*)il2cpp_codegen_object_new(BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE_il2cpp_TypeInfo_var);
		BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5(L_0, NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuiltinRuntimeReflectionSystem__ctor_mC85D8357332DEC8325E27837409E463208ACE0E5 (BuiltinRuntimeReflectionSystem_tB099BEB081659A8BC623562DA25A5F863846EEAE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings_set_Internal_ScriptableRuntimeReflectionSystemSettings_system_mA216659518CF27854FB65C184B10197AB74AFBF7 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_0, NULL);
		RuntimeObject* L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_4 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_4, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_7 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(L_7, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
	}

IL_0037:
	{
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_9 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance;
		RuntimeObject* L_10 = ___0_value;
		NullCheck(L_9);
		ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline(L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* ScriptableRuntimeReflectionSystemSettings_get_Internal_ScriptableRuntimeReflectionSystemSettings_instance_mED3776EB64E9E6BF61705125F20F6893C2098E03 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = ((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB (const RuntimeMethod* method) 
{
	typedef void (*ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB_ftn) ();
	static ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance_mCDA2744C4AD02637B40F84222084C18F0FC369EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()");
	_il2cpp_icall_func();
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemSettings__cctor_m8225B0B8673C3B8B4529F9BFDAC91D417F1DB083 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* L_0 = (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924*)il2cpp_codegen_object_new(ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924_il2cpp_TypeInfo_var);
		ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D(L_0, NULL);
		((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_StaticFields*)il2cpp_codegen_static_fields_for(ScriptableRuntimeReflectionSystemSettings_tC865DA64C8DC20410C83A10387A941F88C939AFF_il2cpp_TypeInfo_var))->___s_Instance), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CimplementationU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CimplementationU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplementationU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_Internal_ScriptableRuntimeReflectionSystemWrapper_TickRealtimeProbes_mDC08C9639CAF2D13623E82B3A9C51689D2FED2B3 (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, bool* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		bool* L_0 = ___0_result;
		RuntimeObject* L_1;
		L_1 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(__this, NULL);
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
		G_B1_0 = L_0;
	}
	{
		RuntimeObject* L_2;
		L_2 = ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0, IScriptableRuntimeReflectionSystem_t0E6ED00D872A0EFCF87A494C5C893AE9FBE560AD_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper__ctor_mCF4DB3AC3AEB1FC08CB03DD0C1733E9BDED4DF8D (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mE38154E9B9C810EDAF2FAD3E1F1CD856FFC13F3C (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_format;
		bool L_1 = ___1_isSRGB;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319_ftn) (int32_t, bool);
	static GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat_m4A193B562F6F81CE2C1C755B26B67564C2F65319_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format, ___1_isSRGB);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_mB9E291EB1EC96594074112E54A7B9CAC20FC7BFA (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_format;
		bool L_1 = ___1_isSRGB;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942 (int32_t ___0_format, bool ___1_isSRGB, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942_ftn) (int32_t, bool);
	static GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat_m27057B9C12BF2ADFF0C8A39BD7D03A9615304942_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format, ___1_isSRGB);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m3DD7EAFBC4F60FA47453B93DAA7B392AEC818BD5 (int32_t ___0_format, int32_t ___1_readWrite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = QualitySettings_get_activeColorSpace_m4F47784E7B0FE0A5497C8BAB9CA86BD576FB92F9(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		int32_t L_1 = ___1_readWrite;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_readWrite;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		bool L_3 = V_0;
		G_B3_0 = ((int32_t)(L_3));
	}

IL_0014:
	{
		V_1 = (bool)G_B3_0;
		int32_t L_4 = ___0_format;
		bool L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = GraphicsFormatUtility_GetGraphicsFormat_mB9E291EB1EC96594074112E54A7B9CAC20FC7BFA(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B (int32_t ___0_minimumDepthBits, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B_ftn) (int32_t);
	static GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetDepthStencilFormatFromBitsLegacy_Native(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_minimumDepthBits);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormat_m76EEE7255F874FD3AC8E149830EE48F345DF8425 (int32_t ___0_depthBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_depthBits;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GraphicsFormatUtility_GetDepthStencilFormatFromBitsLegacy_Native_m6C8C3D62D09CAA5333599E53ED45700AEE76E06B(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321 (int32_t ___0_minimumDepthBits, int32_t ___1_minimumStencilBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* G_B26_0 = NULL;
	{
		int32_t L_0 = ___0_minimumDepthBits;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___1_minimumStencilBits;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000b;
	}

IL_000a:
	{
		G_B3_0 = 0;
	}

IL_000b:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		V_3 = 0;
		goto IL_0110;
	}

IL_0016:
	{
		int32_t L_3 = ___0_minimumDepthBits;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___1_minimumStencilBits;
		G_B8_0 = ((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B8_0 = 1;
	}

IL_0021:
	{
		V_4 = (bool)G_B8_0;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral132E80EAA09197CF3EE157E8CAFE6EC4A4EE7426)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var)));
	}

IL_0032:
	{
		int32_t L_7 = ___0_minimumDepthBits;
		V_5 = (bool)((((int32_t)L_7) > ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFB7177E6394CDB63713D04A0A8E4B643EB7A825D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_10 = ___1_minimumStencilBits;
		V_6 = (bool)((((int32_t)L_10) > ((int32_t)8))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D3707F2DB6891EF40E60A4CFB5A9CBEB40B55F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GraphicsFormatUtility_GetDepthStencilFormat_m963D66601AD1C71D4E90483076BCDB175F958321_RuntimeMethod_var)));
	}

IL_005d:
	{
		int32_t L_13 = ___0_minimumDepthBits;
		V_7 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_006e;
		}
	}
	{
		___0_minimumDepthBits = 0;
		goto IL_00a0;
	}

IL_006e:
	{
		int32_t L_15 = ___0_minimumDepthBits;
		V_8 = (bool)((((int32_t)((((int32_t)L_15) > ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0084;
		}
	}
	{
		___0_minimumDepthBits = ((int32_t)16);
		goto IL_00a0;
	}

IL_0084:
	{
		int32_t L_17 = ___0_minimumDepthBits;
		V_9 = (bool)((((int32_t)((((int32_t)L_17) > ((int32_t)((int32_t)24)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_009a;
		}
	}
	{
		___0_minimumDepthBits = ((int32_t)24);
		goto IL_00a0;
	}

IL_009a:
	{
		___0_minimumDepthBits = ((int32_t)32);
	}

IL_00a0:
	{
		int32_t L_19 = ___1_minimumStencilBits;
		V_10 = (bool)((!(((uint32_t)L_19) <= ((uint32_t)0)))? 1 : 0);
		bool L_20 = V_10;
		if (!L_20)
		{
			goto IL_00ad;
		}
	}
	{
		___1_minimumStencilBits = 8;
	}

IL_00ad:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_21 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil;
		NullCheck(L_21);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_22 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil;
		NullCheck(L_22);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))? 1 : 0), NULL);
		int32_t L_23 = ___1_minimumStencilBits;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_00ce;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_24 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil;
		G_B26_0 = L_24;
		goto IL_00d3;
	}

IL_00ce:
	{
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_25 = ((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil;
		G_B26_0 = L_25;
	}

IL_00d3:
	{
		V_0 = G_B26_0;
		int32_t L_26 = ___0_minimumDepthBits;
		V_1 = ((int32_t)(L_26/8));
		int32_t L_27 = V_1;
		V_11 = L_27;
		goto IL_00ff;
	}

IL_00dd:
	{
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_28 = V_0;
		int32_t L_29 = V_11;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		int32_t L_31 = (int32_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_12 = L_31;
		int32_t L_32 = V_12;
		bool L_33;
		L_33 = SystemInfo_IsFormatSupported_mD3D93E82BD677BDF6194258C4F221DBDB257F680(L_32, ((int32_t)16), NULL);
		V_13 = L_33;
		bool L_34 = V_13;
		if (!L_34)
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_35 = V_12;
		V_3 = L_35;
		goto IL_0110;
	}

IL_00f8:
	{
		int32_t L_36 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00ff:
	{
		int32_t L_37 = V_11;
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_38 = V_0;
		NullCheck(L_38);
		V_14 = (bool)((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))? 1 : 0);
		bool L_39 = V_14;
		if (L_39)
		{
			goto IL_00dd;
		}
	}
	{
		V_3 = 0;
		goto IL_0110;
	}

IL_0110:
	{
		int32_t L_40 = V_3;
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53_ftn) (int32_t);
	static GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsSRGBFormat_mF3A393D43D68789A16087FF64CA2C050A8485C53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef int32_t (*GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5_ftn) (int32_t);
	static GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_GetRenderTextureFormat_mA538222F90B6079E95ADA1DFB3DDDA740B27D8D5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCompressedFormat_Native_TextureFormat_m3CE0D5ED90F6323D412C876460BE13792C8CCC0C (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsCompressedFormat_Native_TextureFormat_m3CE0D5ED90F6323D412C876460BE13792C8CCC0C_ftn) (int32_t);
	static GraphicsFormatUtility_IsCompressedFormat_Native_TextureFormat_m3CE0D5ED90F6323D412C876460BE13792C8CCC0C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsCompressedFormat_Native_TextureFormat_m3CE0D5ED90F6323D412C876460BE13792C8CCC0C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedFormat_Native_TextureFormat(UnityEngine.TextureFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCompressedFormat_mE23F74E1C0D8EF955FB7D776C17FD6955FB700DD (int32_t ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___0_format;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GraphicsFormatUtility_IsCompressedFormat_Native_TextureFormat_m3CE0D5ED90F6323D412C876460BE13792C8CCC0C(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6 (int32_t ___0_format, bool ___1_wholeImage, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6_ftn) (int32_t, bool);
	static GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::CanDecompressFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,System.Boolean)");
	bool icallRetVal = _il2cpp_icall_func(___0_format, ___1_wholeImage);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_CanDecompressFormat_m443675E54409D934EE0DC0FDA5CF6D56DE9C4282 (int32_t ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___0_format;
		il2cpp_codegen_runtime_class_init_inline(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = GraphicsFormatUtility_CanDecompressFormat_mDC3A7D8AC07ABAC875EACD11F48C5B571E22CEC6(L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsDepthStencilFormat_mB9AC0AC27E959CF7C23FDE141E3A4D3561FAC616 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsDepthStencilFormat_mB9AC0AC27E959CF7C23FDE141E3A4D3561FAC616_ftn) (int32_t);
	static GraphicsFormatUtility_IsDepthStencilFormat_mB9AC0AC27E959CF7C23FDE141E3A4D3561FAC616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsDepthStencilFormat_mB9AC0AC27E959CF7C23FDE141E3A4D3561FAC616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsDepthStencilFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13 (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13_ftn) (int32_t);
	static GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsPVRTCFormat_m7B1CF5EAD3BAEF83A7B5B198C16F54FC9C081D13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsPVRTCFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCrunchFormat_mEEE165E8F2D82A469181DA2C4A5C227CCF585DAB (int32_t ___0_format, const RuntimeMethod* method) 
{
	typedef bool (*GraphicsFormatUtility_IsCrunchFormat_mEEE165E8F2D82A469181DA2C4A5C227CCF585DAB_ftn) (int32_t);
	static GraphicsFormatUtility_IsCrunchFormat_mEEE165E8F2D82A469181DA2C4A5C227CCF585DAB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GraphicsFormatUtility_IsCrunchFormat_mEEE165E8F2D82A469181DA2C4A5C227CCF585DAB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCrunchFormat(UnityEngine.TextureFormat)");
	bool icallRetVal = _il2cpp_icall_func(___0_format);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsFormatUtility__cctor_mA72A657D7B9FB8670567D2CB6B6FA3A1419980D1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9909632E27B9F1D1A060845D24FDCBED135D4A61____39D974909C7E64675317DD1A8583B8D8DE92E68B180532FADD22B482AD93DC83_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9909632E27B9F1D1A060845D24FDCBED135D4A61____C77A066B9EC0272B121AD30CBAEDA4AD20F986D49CC6D0007EBF45888D8B09BF_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_0 = (GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)SZArrayNew(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var, (uint32_t)5);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9909632E27B9F1D1A060845D24FDCBED135D4A61____39D974909C7E64675317DD1A8583B8D8DE92E68B180532FADD22B482AD93DC83_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableNoStencil), (void*)L_1);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_3 = (GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5*)SZArrayNew(GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5_il2cpp_TypeInfo_var, (uint32_t)5);
		GraphicsFormatU5BU5D_tF6A3D90C430FA3F548B77E5D58D25D71F154E6C5* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9909632E27B9F1D1A060845D24FDCBED135D4A61____C77A066B9EC0272B121AD30CBAEDA4AD20F986D49CC6D0007EBF45888D8B09BF_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_StaticFields*)il2cpp_codegen_static_fields_for(GraphicsFormatUtility_t3DAD8CAC84EA38F28613F98184F871773CB282FD_il2cpp_TypeInfo_var))->___tableStencil), (void*)L_4);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_back(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_pinvoke_cleanup(SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com_back(const SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled, SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C& unmarshaled)
{
}
IL2CPP_EXTERN_C void SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshal_com_cleanup(SpriteRendererGroup_t2925A4576406FAB40F064EDE3A989F9AD410027C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 DataUtility_GetInnerUV_m0CEE9FB4108D7A880A4807F2F5BD5FA98C9917ED (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Sprite_GetInnerUVs_m68A07E15B8D8F07E33559998000B524B54E1951A(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 DataUtility_GetOuterUV_m408EFF91CB39DE165F8D00D42603DF1C49C57CF2 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Sprite_GetOuterUVs_m0239F5571EA1AE399B426DE9362EEAC73A3ECC42(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 DataUtility_GetPadding_mB8E2E01509BFABEEACC45EA11D6A0FCF05F809C6 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Sprite_GetPadding_mF346EAFF67C810A108E64366EB5CB3CB2E01D066(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DataUtility_GetMinSize_m927FDAD3190433E999165BD16CE81677EA9C0896 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		NullCheck(L_0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Sprite_get_border_m024C8361A808BF597EC6E1849AADDA9C756B459F(L_0, NULL);
		float L_2 = L_1.___x;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = ___0_sprite;
		NullCheck(L_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Sprite_get_border_m024C8361A808BF597EC6E1849AADDA9C756B459F(L_3, NULL);
		float L_5 = L_4.___z;
		(&V_0)->___x = ((float)il2cpp_codegen_add(L_2, L_5));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = ___0_sprite;
		NullCheck(L_6);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Sprite_get_border_m024C8361A808BF597EC6E1849AADDA9C756B459F(L_6, NULL);
		float L_8 = L_7.___y;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = ___0_sprite;
		NullCheck(L_9);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		L_10 = Sprite_get_border_m024C8361A808BF597EC6E1849AADDA9C756B459F(L_9, NULL);
		float L_11 = L_10.___w;
		(&V_0)->___y = ((float)il2cpp_codegen_add(L_8, L_11));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		V_1 = L_12;
		goto IL_0041;
	}

IL_0041:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		return L_13;
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
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke(const SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044& unmarshaled, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name = il2cpp_codegen_marshal_string(unmarshaled.___m_Name);
	marshaled.___m_Guid = il2cpp_codegen_marshal_string(unmarshaled.___m_Guid);
	marshaled.___m_Position = unmarshaled.___m_Position;
	marshaled.___m_Rotation = unmarshaled.___m_Rotation;
	marshaled.___m_Length = unmarshaled.___m_Length;
	marshaled.___m_ParentId = unmarshaled.___m_ParentId;
	marshaled.___m_Color = unmarshaled.___m_Color;
}
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_back(const SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_pinvoke& marshaled, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044& unmarshaled)
{
	unmarshaled.___m_Name = il2cpp_codegen_marshal_string_result(marshaled.___m_Name);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Name));
	unmarshaled.___m_Guid = il2cpp_codegen_marshal_string_result(marshaled.___m_Guid);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Guid), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Guid));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledm_Position_temp_2;
	memset((&unmarshaledm_Position_temp_2), 0, sizeof(unmarshaledm_Position_temp_2));
	unmarshaledm_Position_temp_2 = marshaled.___m_Position;
	unmarshaled.___m_Position = unmarshaledm_Position_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledm_Rotation_temp_3;
	memset((&unmarshaledm_Rotation_temp_3), 0, sizeof(unmarshaledm_Rotation_temp_3));
	unmarshaledm_Rotation_temp_3 = marshaled.___m_Rotation;
	unmarshaled.___m_Rotation = unmarshaledm_Rotation_temp_3;
	float unmarshaledm_Length_temp_4 = 0.0f;
	unmarshaledm_Length_temp_4 = marshaled.___m_Length;
	unmarshaled.___m_Length = unmarshaledm_Length_temp_4;
	int32_t unmarshaledm_ParentId_temp_5 = 0;
	unmarshaledm_ParentId_temp_5 = marshaled.___m_ParentId;
	unmarshaled.___m_ParentId = unmarshaledm_ParentId_temp_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledm_Color_temp_6;
	memset((&unmarshaledm_Color_temp_6), 0, sizeof(unmarshaledm_Color_temp_6));
	unmarshaledm_Color_temp_6 = marshaled.___m_Color;
	unmarshaled.___m_Color = unmarshaledm_Color_temp_6;
}
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_pinvoke_cleanup(SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name);
	marshaled.___m_Name = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_Guid);
	marshaled.___m_Guid = NULL;
}
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_com(const SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044& unmarshaled, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_com& marshaled)
{
	marshaled.___m_Name = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Name);
	marshaled.___m_Guid = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Guid);
	marshaled.___m_Position = unmarshaled.___m_Position;
	marshaled.___m_Rotation = unmarshaled.___m_Rotation;
	marshaled.___m_Length = unmarshaled.___m_Length;
	marshaled.___m_ParentId = unmarshaled.___m_ParentId;
	marshaled.___m_Color = unmarshaled.___m_Color;
}
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_com_back(const SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_com& marshaled, SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044& unmarshaled)
{
	unmarshaled.___m_Name = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name));
	unmarshaled.___m_Guid = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Guid);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Guid), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Guid));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledm_Position_temp_2;
	memset((&unmarshaledm_Position_temp_2), 0, sizeof(unmarshaledm_Position_temp_2));
	unmarshaledm_Position_temp_2 = marshaled.___m_Position;
	unmarshaled.___m_Position = unmarshaledm_Position_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledm_Rotation_temp_3;
	memset((&unmarshaledm_Rotation_temp_3), 0, sizeof(unmarshaledm_Rotation_temp_3));
	unmarshaledm_Rotation_temp_3 = marshaled.___m_Rotation;
	unmarshaled.___m_Rotation = unmarshaledm_Rotation_temp_3;
	float unmarshaledm_Length_temp_4 = 0.0f;
	unmarshaledm_Length_temp_4 = marshaled.___m_Length;
	unmarshaled.___m_Length = unmarshaledm_Length_temp_4;
	int32_t unmarshaledm_ParentId_temp_5 = 0;
	unmarshaledm_ParentId_temp_5 = marshaled.___m_ParentId;
	unmarshaled.___m_ParentId = unmarshaledm_ParentId_temp_5;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B unmarshaledm_Color_temp_6;
	memset((&unmarshaledm_Color_temp_6), 0, sizeof(unmarshaledm_Color_temp_6));
	unmarshaledm_Color_temp_6 = marshaled.___m_Color;
	unmarshaled.___m_Color = unmarshaledm_Color_temp_6;
}
IL2CPP_EXTERN_C void SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshal_com_cleanup(SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name);
	marshaled.___m_Name = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Guid);
	marshaled.___m_Guid = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpriteBone_get_name_m822CC2EC1F299FBF5D0BE58FF5A1B8D50150BA78 (SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Name;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* SpriteBone_get_name_m822CC2EC1F299FBF5D0BE58FF5A1B8D50150BA78_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SpriteBone_get_name_m822CC2EC1F299FBF5D0BE58FF5A1B8D50150BA78(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpriteBone_get_guid_m983BEAD64D2519AFBDE254CDB4258CCA663BD381 (SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Guid;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* SpriteBone_get_guid_m983BEAD64D2519AFBDE254CDB4258CCA663BD381_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SpriteBone_get_guid_m983BEAD64D2519AFBDE254CDB4258CCA663BD381(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SpriteBone_get_position_m512E4C6E181DDA48DAF02054271AF4298B3128F5 (SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Position;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SpriteBone_get_position_m512E4C6E181DDA48DAF02054271AF4298B3128F5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = SpriteBone_get_position_m512E4C6E181DDA48DAF02054271AF4298B3128F5(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SpriteBone_get_rotation_m363B993B4BFCEDC17F2EBCE5F6637CA2A969DF07 (SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___m_Rotation;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SpriteBone_get_rotation_m363B993B4BFCEDC17F2EBCE5F6637CA2A969DF07_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = SpriteBone_get_rotation_m363B993B4BFCEDC17F2EBCE5F6637CA2A969DF07(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteBone_get_parentId_m847E0268FE032A5BDC0409F9D4FF62264237220B (SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_ParentId;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t SpriteBone_get_parentId_m847E0268FE032A5BDC0409F9D4FF62264237220B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpriteBone_t92E0FF1412CC4B6A5FC71895699E35FB3EF75044*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SpriteBone_get_parentId_m847E0268FE032A5BDC0409F9D4FF62264237220B(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15 (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		intptr_t L_0 = __this->___m_Buffer;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  void* SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA*>(__this + _offset);
	void* _returnValue;
	_returnValue = SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18 (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Count;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Offset;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Stride;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 SpriteDataAccessExtensions_GetBindPoses_m87EC67C3F203DAA2C480C7D70A2B3CBF81929B67 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA L_1;
		L_1 = SpriteDataAccessExtensions_GetBindPoseInfo_mE042F0A5CFC1AF65B6B2FBCF58ACFBB8F3EEA75D(L_0, NULL);
		V_0 = L_1;
		void* L_2;
		L_2 = SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15((&V_0), NULL);
		int32_t L_3;
		L_3 = SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18((&V_0), NULL);
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_4;
		L_4 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F(L_2, L_3, 1, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9084C95DCF71501F440D82C0A261927C7987EE6F_RuntimeMethod_var);
		V_1 = L_4;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_5 = V_1;
		V_2 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE* SpriteDataAccessExtensions_GetBones_mBAC0E1D048692BB6ECAF6DE4E1229BC109AEDFBB (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) 
{
	SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE* V_0 = NULL;
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE* L_1;
		L_1 = SpriteDataAccessExtensions_GetBoneInfo_mA40FBF7C3F228C92FAEBE4768140D92046DEFC9B(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteDataAccessExtensions_HasVertexAttribute_mC415B72407C4E55E6536A0F8A2CB004028DD0295 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
	}

IL_000e:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___0_sprite;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = ___0_sprite;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		int32_t L_6 = ___1_channel;
		bool L_7;
		L_7 = SpriteDataAccessExtensions_HasVertexAttribute_Injected_mD516FB2910839882A81C460D24AE5331E4249862(G_B4_0, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteDataAccessExtensions_GetVertexCount_m6A46159B2A56C418E37B1CC888B5754389006371 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
	}

IL_000e:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___0_sprite;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = ___0_sprite;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		int32_t L_6;
		L_6 = SpriteDataAccessExtensions_GetVertexCount_Injected_mC77FFF92A25884369ED7E801BDA92D6760869C1E(G_B4_0, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA SpriteDataAccessExtensions_GetBindPoseInfo_mE042F0A5CFC1AF65B6B2FBCF58ACFBB8F3EEA75D (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B);
		s_Il2CppMethodInitialized = true;
	}
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
	}

IL_000e:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___0_sprite;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = ___0_sprite;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		SpriteDataAccessExtensions_GetBindPoseInfo_Injected_m156FAE743D37B360515CA6F5D21F7FC03EA65DB1(G_B4_0, (&V_0), NULL);
		SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA SpriteDataAccessExtensions_GetChannelInfo_mFD515C42E45421F85D62EB47E5EEB5FE99A21CA3 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B);
		s_Il2CppMethodInitialized = true;
	}
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
	}

IL_000e:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___0_sprite;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = ___0_sprite;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		int32_t L_6 = ___1_channel;
		SpriteDataAccessExtensions_GetChannelInfo_Injected_m3EA850359C800609F857FE45D49E6BA4247AE15D(G_B4_0, L_6, (&V_0), NULL);
		SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE* SpriteDataAccessExtensions_GetBoneInfo_mA40FBF7C3F228C92FAEBE4768140D92046DEFC9B (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
	}

IL_000e:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___0_sprite;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = ___0_sprite;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE* L_6;
		L_6 = SpriteDataAccessExtensions_GetBoneInfo_Injected_mFC19028DFA44472EDAAACADDBBA752389AB6F4D5(G_B4_0, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteDataAccessExtensions_GetPrimaryVertexStreamSize_m4D2B0EE7D74850C98512144B1822B856A63985EA (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m2C7D338CAC19265593669E4A53340ECCB1201993_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		intptr_t L_1;
		L_1 = MarshalledUnityObject_Marshal_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m2C7D338CAC19265593669E4A53340ECCB1201993_inline(L_0, MarshalledUnityObject_Marshal_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m2C7D338CAC19265593669E4A53340ECCB1201993_RuntimeMethod_var);
		int32_t L_2;
		L_2 = SpriteDataAccessExtensions_GetPrimaryVertexStreamSize_Injected_mE6A20DC411F150A4E112FE6816500274C0F69507(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteDataAccessExtensions_HasVertexAttribute_Injected_mD516FB2910839882A81C460D24AE5331E4249862 (intptr_t ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) 
{
	typedef bool (*SpriteDataAccessExtensions_HasVertexAttribute_Injected_mD516FB2910839882A81C460D24AE5331E4249862_ftn) (intptr_t, int32_t);
	static SpriteDataAccessExtensions_HasVertexAttribute_Injected_mD516FB2910839882A81C460D24AE5331E4249862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteDataAccessExtensions_HasVertexAttribute_Injected_mD516FB2910839882A81C460D24AE5331E4249862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteDataAccessExtensions::HasVertexAttribute_Injected(System.IntPtr,UnityEngine.Rendering.VertexAttribute)");
	bool icallRetVal = _il2cpp_icall_func(___0_sprite, ___1_channel);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteDataAccessExtensions_GetVertexCount_Injected_mC77FFF92A25884369ED7E801BDA92D6760869C1E (intptr_t ___0_sprite, const RuntimeMethod* method) 
{
	typedef int32_t (*SpriteDataAccessExtensions_GetVertexCount_Injected_mC77FFF92A25884369ED7E801BDA92D6760869C1E_ftn) (intptr_t);
	static SpriteDataAccessExtensions_GetVertexCount_Injected_mC77FFF92A25884369ED7E801BDA92D6760869C1E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteDataAccessExtensions_GetVertexCount_Injected_mC77FFF92A25884369ED7E801BDA92D6760869C1E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteDataAccessExtensions::GetVertexCount_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_sprite);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_GetBindPoseInfo_Injected_m156FAE743D37B360515CA6F5D21F7FC03EA65DB1 (intptr_t ___0_sprite, SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*SpriteDataAccessExtensions_GetBindPoseInfo_Injected_m156FAE743D37B360515CA6F5D21F7FC03EA65DB1_ftn) (intptr_t, SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA*);
	static SpriteDataAccessExtensions_GetBindPoseInfo_Injected_m156FAE743D37B360515CA6F5D21F7FC03EA65DB1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteDataAccessExtensions_GetBindPoseInfo_Injected_m156FAE743D37B360515CA6F5D21F7FC03EA65DB1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteDataAccessExtensions::GetBindPoseInfo_Injected(System.IntPtr,UnityEngine.U2D.SpriteChannelInfo&)");
	_il2cpp_icall_func(___0_sprite, ___1_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_GetChannelInfo_Injected_m3EA850359C800609F857FE45D49E6BA4247AE15D (intptr_t ___0_sprite, int32_t ___1_channel, SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* ___2_ret, const RuntimeMethod* method) 
{
	typedef void (*SpriteDataAccessExtensions_GetChannelInfo_Injected_m3EA850359C800609F857FE45D49E6BA4247AE15D_ftn) (intptr_t, int32_t, SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA*);
	static SpriteDataAccessExtensions_GetChannelInfo_Injected_m3EA850359C800609F857FE45D49E6BA4247AE15D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteDataAccessExtensions_GetChannelInfo_Injected_m3EA850359C800609F857FE45D49E6BA4247AE15D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteDataAccessExtensions::GetChannelInfo_Injected(System.IntPtr,UnityEngine.Rendering.VertexAttribute,UnityEngine.U2D.SpriteChannelInfo&)");
	_il2cpp_icall_func(___0_sprite, ___1_channel, ___2_ret);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE* SpriteDataAccessExtensions_GetBoneInfo_Injected_mFC19028DFA44472EDAAACADDBBA752389AB6F4D5 (intptr_t ___0_sprite, const RuntimeMethod* method) 
{
	typedef SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE* (*SpriteDataAccessExtensions_GetBoneInfo_Injected_mFC19028DFA44472EDAAACADDBBA752389AB6F4D5_ftn) (intptr_t);
	static SpriteDataAccessExtensions_GetBoneInfo_Injected_mFC19028DFA44472EDAAACADDBBA752389AB6F4D5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteDataAccessExtensions_GetBoneInfo_Injected_mFC19028DFA44472EDAAACADDBBA752389AB6F4D5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteDataAccessExtensions::GetBoneInfo_Injected(System.IntPtr)");
	SpriteBoneU5BU5D_t5FAC0426CD2292CFDD7A7AD20A5A9AA051B5FBAE* icallRetVal = _il2cpp_icall_func(___0_sprite);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteDataAccessExtensions_GetPrimaryVertexStreamSize_Injected_mE6A20DC411F150A4E112FE6816500274C0F69507 (intptr_t ___0_sprite, const RuntimeMethod* method) 
{
	typedef int32_t (*SpriteDataAccessExtensions_GetPrimaryVertexStreamSize_Injected_mE6A20DC411F150A4E112FE6816500274C0F69507_ftn) (intptr_t);
	static SpriteDataAccessExtensions_GetPrimaryVertexStreamSize_Injected_mE6A20DC411F150A4E112FE6816500274C0F69507_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteDataAccessExtensions_GetPrimaryVertexStreamSize_Injected_mE6A20DC411F150A4E112FE6816500274C0F69507_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteDataAccessExtensions::GetPrimaryVertexStreamSize_Injected(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_sprite);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetDeformableBuffer_m3A000487D1EB0983E49CF13E13AA532787AF2E28 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_spriteRenderer, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DF14FFECC3CE4E179B56AB77F3BCC0FF90E92BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___0_spriteRenderer;
		NullCheck(L_0);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1;
		L_1 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var)));
		String_t* L_5;
		L_5 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral943B5FA23049468A97315A802F142C5AB76D9234)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpriteRendererDataAccessExtensions_SetDeformableBuffer_m3A000487D1EB0983E49CF13E13AA532787AF2E28_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_7;
		L_7 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_src))->___m_Length);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = ___0_spriteRenderer;
		NullCheck(L_8);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9;
		L_9 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_8, NULL);
		int32_t L_10;
		L_10 = SpriteDataAccessExtensions_GetPrimaryVertexStreamSize_m4D2B0EE7D74850C98512144B1822B856A63985EA(L_9, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_12;
		L_12 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_src))->___m_Length);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.int32_class, &L_13);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15 = ___0_spriteRenderer;
		NullCheck(L_15);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16;
		L_16 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_15, NULL);
		int32_t L_17;
		L_17 = SpriteDataAccessExtensions_GetPrimaryVertexStreamSize_m4D2B0EE7D74850C98512144B1822B856A63985EA(L_16, NULL);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(il2cpp_defaults.int32_class, &L_18);
		String_t* L_20;
		L_20 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral72299294E42201890A5EF94785CD6F2470D566D2)), L_14, L_19, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpriteRendererDataAccessExtensions_SetDeformableBuffer_m3A000487D1EB0983E49CF13E13AA532787AF2E28_RuntimeMethod_var)));
	}

IL_006d:
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_22 = ___0_spriteRenderer;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_23 = ___1_src;
		void* L_24;
		L_24 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DF14FFECC3CE4E179B56AB77F3BCC0FF90E92BF(L_23, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3DF14FFECC3CE4E179B56AB77F3BCC0FF90E92BF_RuntimeMethod_var);
		int32_t L_25;
		L_25 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_src))->___m_Length);
		SpriteRendererDataAccessExtensions_SetDeformableBuffer_m966F22061EC5AABA16536B79B49F880D97FB68E6(L_22, L_24, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetBatchDeformableBufferAndLocalAABBArray_mAFC805600B21985D7497C5F0C172E5601F04903D (SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___0_spriteRenderers, NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___1_buffers, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_bufferSizes, NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 ___3_bounds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7326129EA795C39F34FE01DBE10C858D72F07327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIntPtr_t_mCD62BE7854A98BD8A905487337D49E3A2FBC35F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_0 = ___0_spriteRenderers;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_buffers))->___m_Length);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___2_bufferSizes))->___m_Length);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___3_bounds))->___m_Length);
		G_B4_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 1;
	}

IL_0029:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DF6556E6F66312FBA88DC7A4B46424E8801D6D7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpriteRendererDataAccessExtensions_SetBatchDeformableBufferAndLocalAABBArray_mAFC805600B21985D7497C5F0C172E5601F04903D_RuntimeMethod_var)));
	}

IL_0039:
	{
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_9 = ___0_spriteRenderers;
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 L_10 = ___1_buffers;
		void* L_11;
		L_11 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIntPtr_t_mCD62BE7854A98BD8A905487337D49E3A2FBC35F0(L_10, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIntPtr_t_mCD62BE7854A98BD8A905487337D49E3A2FBC35F0_RuntimeMethod_var);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_12 = ___2_bufferSizes;
		void* L_13;
		L_13 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B(L_12, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_RuntimeMethod_var);
		NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 L_14 = ___3_bounds;
		void* L_15;
		L_15 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7326129EA795C39F34FE01DBE10C858D72F07327(L_14, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7326129EA795C39F34FE01DBE10C858D72F07327_RuntimeMethod_var);
		int32_t L_16 = V_0;
		SpriteRendererDataAccessExtensions_SetBatchDeformableBufferAndLocalAABBArray_mF03EE3427E03E439C9D15337F8E61CBD7830ACF0(L_9, L_11, L_13, L_15, L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetBoneTransformsArray_mE5A944273985FA2B25730C203A5B499441CA57ED (SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___0_spriteRenderers, NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___1_buffers, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___2_bufferSizes, NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 ___3_bounds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7326129EA795C39F34FE01DBE10C858D72F07327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIntPtr_t_mCD62BE7854A98BD8A905487337D49E3A2FBC35F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_0 = ___0_spriteRenderers;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_buffers))->___m_Length);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___2_bufferSizes))->___m_Length);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___3_bounds))->___m_Length);
		G_B4_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B4_0 = 1;
	}

IL_0029:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DF6556E6F66312FBA88DC7A4B46424E8801D6D7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SpriteRendererDataAccessExtensions_SetBoneTransformsArray_mE5A944273985FA2B25730C203A5B499441CA57ED_RuntimeMethod_var)));
	}

IL_0039:
	{
		SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* L_9 = ___0_spriteRenderers;
		NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 L_10 = ___1_buffers;
		void* L_11;
		L_11 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIntPtr_t_mCD62BE7854A98BD8A905487337D49E3A2FBC35F0(L_10, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIntPtr_t_mCD62BE7854A98BD8A905487337D49E3A2FBC35F0_RuntimeMethod_var);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_12 = ___2_bufferSizes;
		void* L_13;
		L_13 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B(L_12, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_RuntimeMethod_var);
		NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 L_14 = ___3_bounds;
		void* L_15;
		L_15 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7326129EA795C39F34FE01DBE10C858D72F07327(L_14, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m7326129EA795C39F34FE01DBE10C858D72F07327_RuntimeMethod_var);
		int32_t L_16 = V_0;
		SpriteRendererDataAccessExtensions_SetBoneTransformsArray_m360CD16BF6BFC0E7C76B22338A0787493D93D44E(L_9, L_11, L_13, L_15, L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRendererDataAccessExtensions_IsUsingDeformableBuffer_mB9F50B728381CFCF86D43EFC6765EC3EE650637C (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_spriteRenderer, intptr_t ___1_buffer, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___0_spriteRenderer;
		intptr_t L_1 = ___1_buffer;
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		bool L_3;
		L_3 = SpriteRendererDataAccessExtensions_IsUsingDeformableBuffer_mEA70BDFEF3569B9735E3287B775D973582F59540(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetBoneTransforms_m831B0B110FEA3999ECCC0AC16798A8DED7C2DECA (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_spriteRenderer, NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 ___1_src, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m5DB7623D6218E2B9AF57B3836D4BC9E4D469280C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___0_spriteRenderer;
		NativeArray_1_t6D4C2D5161FC101BAF06059CD9414A2153CCC2A0 L_1 = ___1_src;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m5DB7623D6218E2B9AF57B3836D4BC9E4D469280C(L_1, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m5DB7623D6218E2B9AF57B3836D4BC9E4D469280C_RuntimeMethod_var);
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___1_src))->___m_Length);
		SpriteRendererDataAccessExtensions_SetBoneTransforms_m604922869219056393B417141C3EAE8DBC9AC630(L_0, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_DeactivateDeformableBuffer_m7B7DC0720A389857101BCA39B42280D30C85296A (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_renderer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725BF586F9C73BB71D89F147D8104043A9221498);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___0_renderer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = ___0_renderer;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral725BF586F9C73BB71D89F147D8104043A9221498, NULL);
	}

IL_000e:
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = ___0_renderer;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = ___0_renderer;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral725BF586F9C73BB71D89F147D8104043A9221498, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		SpriteRendererDataAccessExtensions_DeactivateDeformableBuffer_Injected_m96EACCBE6F53D8F715527DB2F444149917F373D6(G_B4_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetLocalAABB_m8B19B86E4F16CAC28378B0678A6780EE67376672 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_renderer, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_aabb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725BF586F9C73BB71D89F147D8104043A9221498);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___0_renderer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = ___0_renderer;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral725BF586F9C73BB71D89F147D8104043A9221498, NULL);
	}

IL_000e:
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = ___0_renderer;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = ___0_renderer;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral725BF586F9C73BB71D89F147D8104043A9221498, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		SpriteRendererDataAccessExtensions_SetLocalAABB_Injected_m9FE8CA455455CD6DBEFF0DE4A2642D57C7F96BA2(G_B4_0, (&___1_aabb), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetDeformableBuffer_m966F22061EC5AABA16536B79B49F880D97FB68E6 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_spriteRenderer, void* ___1_src, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral146403D8C826A0F54C0964073931E08E849368F7);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___0_spriteRenderer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = ___0_spriteRenderer;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral146403D8C826A0F54C0964073931E08E849368F7, NULL);
	}

IL_000e:
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = ___0_spriteRenderer;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = ___0_spriteRenderer;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral146403D8C826A0F54C0964073931E08E849368F7, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		void* L_6 = ___1_src;
		int32_t L_7 = ___2_count;
		SpriteRendererDataAccessExtensions_SetDeformableBuffer_Injected_mF5C565693BAD9BB1A817370A4D61CC728A4BDD22(G_B4_0, L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetBatchDeformableBufferAndLocalAABBArray_mF03EE3427E03E439C9D15337F8E61CBD7830ACF0 (SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___0_spriteRenderers, void* ___1_buffers, void* ___2_bufferSizes, void* ___3_bounds, int32_t ___4_count, const RuntimeMethod* method) 
{
	typedef void (*SpriteRendererDataAccessExtensions_SetBatchDeformableBufferAndLocalAABBArray_mF03EE3427E03E439C9D15337F8E61CBD7830ACF0_ftn) (SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28*, void*, void*, void*, int32_t);
	static SpriteRendererDataAccessExtensions_SetBatchDeformableBufferAndLocalAABBArray_mF03EE3427E03E439C9D15337F8E61CBD7830ACF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRendererDataAccessExtensions_SetBatchDeformableBufferAndLocalAABBArray_mF03EE3427E03E439C9D15337F8E61CBD7830ACF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteRendererDataAccessExtensions::SetBatchDeformableBufferAndLocalAABBArray(UnityEngine.SpriteRenderer[],System.Void*,System.Void*,System.Void*,System.Int32)");
	_il2cpp_icall_func(___0_spriteRenderers, ___1_buffers, ___2_bufferSizes, ___3_bounds, ___4_count);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRendererDataAccessExtensions_IsUsingDeformableBuffer_mEA70BDFEF3569B9735E3287B775D973582F59540 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_spriteRenderer, void* ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral146403D8C826A0F54C0964073931E08E849368F7);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___0_spriteRenderer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = ___0_spriteRenderer;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral146403D8C826A0F54C0964073931E08E849368F7, NULL);
	}

IL_000e:
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = ___0_spriteRenderer;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = ___0_spriteRenderer;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral146403D8C826A0F54C0964073931E08E849368F7, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		void* L_6 = ___1_buffer;
		bool L_7;
		L_7 = SpriteRendererDataAccessExtensions_IsUsingDeformableBuffer_Injected_m03AB09F29CCE5282A8D13E432383639BDC034FB7(G_B4_0, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetBoneTransforms_m604922869219056393B417141C3EAE8DBC9AC630 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_spriteRenderer, void* ___1_src, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral146403D8C826A0F54C0964073931E08E849368F7);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___0_spriteRenderer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = ___0_spriteRenderer;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral146403D8C826A0F54C0964073931E08E849368F7, NULL);
	}

IL_000e:
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = ___0_spriteRenderer;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = ___0_spriteRenderer;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral146403D8C826A0F54C0964073931E08E849368F7, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		void* L_6 = ___1_src;
		int32_t L_7 = ___2_count;
		SpriteRendererDataAccessExtensions_SetBoneTransforms_Injected_m394ECDDA6AFF6C3026F44CFE61C59A4FB8FD39E1(G_B4_0, L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetBoneTransformsArray_m360CD16BF6BFC0E7C76B22338A0787493D93D44E (SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___0_spriteRenderers, void* ___1_buffers, void* ___2_bufferSizes, void* ___3_bounds, int32_t ___4_count, const RuntimeMethod* method) 
{
	typedef void (*SpriteRendererDataAccessExtensions_SetBoneTransformsArray_m360CD16BF6BFC0E7C76B22338A0787493D93D44E_ftn) (SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28*, void*, void*, void*, int32_t);
	static SpriteRendererDataAccessExtensions_SetBoneTransformsArray_m360CD16BF6BFC0E7C76B22338A0787493D93D44E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRendererDataAccessExtensions_SetBoneTransformsArray_m360CD16BF6BFC0E7C76B22338A0787493D93D44E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteRendererDataAccessExtensions::SetBoneTransformsArray(UnityEngine.SpriteRenderer[],System.Void*,System.Void*,System.Void*,System.Int32)");
	_il2cpp_icall_func(___0_spriteRenderers, ___1_buffers, ___2_bufferSizes, ___3_bounds, ___4_count);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetupMaterialProperties_mAF13B2214531974498D311CED0C616CD0B126A5C (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___0_spriteRenderer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral146403D8C826A0F54C0964073931E08E849368F7);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = ___0_spriteRenderer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = ___0_spriteRenderer;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteral146403D8C826A0F54C0964073931E08E849368F7, NULL);
	}

IL_000e:
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = ___0_spriteRenderer;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_inline(L_2, MarshalledUnityObject_MarshalNotNull_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m9E17DAED8F06785033B999496C835FF215CF6F41_RuntimeMethod_var);
		intptr_t L_4 = L_3;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0023;
		}
		G_B3_0 = L_4;
	}
	{
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = ___0_spriteRenderer;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_5, _stringLiteral146403D8C826A0F54C0964073931E08E849368F7, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0023:
	{
		SpriteRendererDataAccessExtensions_SetupMaterialProperties_Injected_m408DF1B1473D6C96D8B3E72BE99491BC16A0CAA7(G_B4_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRendererDataAccessExtensions_IsGPUSkinningEnabled_m5F44883B46BCB4124C90F0D168ED64681E08C1F4 (const RuntimeMethod* method) 
{
	typedef bool (*SpriteRendererDataAccessExtensions_IsGPUSkinningEnabled_m5F44883B46BCB4124C90F0D168ED64681E08C1F4_ftn) ();
	static SpriteRendererDataAccessExtensions_IsGPUSkinningEnabled_m5F44883B46BCB4124C90F0D168ED64681E08C1F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRendererDataAccessExtensions_IsGPUSkinningEnabled_m5F44883B46BCB4124C90F0D168ED64681E08C1F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteRendererDataAccessExtensions::IsGPUSkinningEnabled()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_DeactivateDeformableBuffer_Injected_m96EACCBE6F53D8F715527DB2F444149917F373D6 (intptr_t ___0_renderer, const RuntimeMethod* method) 
{
	typedef void (*SpriteRendererDataAccessExtensions_DeactivateDeformableBuffer_Injected_m96EACCBE6F53D8F715527DB2F444149917F373D6_ftn) (intptr_t);
	static SpriteRendererDataAccessExtensions_DeactivateDeformableBuffer_Injected_m96EACCBE6F53D8F715527DB2F444149917F373D6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRendererDataAccessExtensions_DeactivateDeformableBuffer_Injected_m96EACCBE6F53D8F715527DB2F444149917F373D6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteRendererDataAccessExtensions::DeactivateDeformableBuffer_Injected(System.IntPtr)");
	_il2cpp_icall_func(___0_renderer);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetLocalAABB_Injected_m9FE8CA455455CD6DBEFF0DE4A2642D57C7F96BA2 (intptr_t ___0_renderer, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_aabb, const RuntimeMethod* method) 
{
	typedef void (*SpriteRendererDataAccessExtensions_SetLocalAABB_Injected_m9FE8CA455455CD6DBEFF0DE4A2642D57C7F96BA2_ftn) (intptr_t, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static SpriteRendererDataAccessExtensions_SetLocalAABB_Injected_m9FE8CA455455CD6DBEFF0DE4A2642D57C7F96BA2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRendererDataAccessExtensions_SetLocalAABB_Injected_m9FE8CA455455CD6DBEFF0DE4A2642D57C7F96BA2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteRendererDataAccessExtensions::SetLocalAABB_Injected(System.IntPtr,UnityEngine.Bounds&)");
	_il2cpp_icall_func(___0_renderer, ___1_aabb);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetDeformableBuffer_Injected_mF5C565693BAD9BB1A817370A4D61CC728A4BDD22 (intptr_t ___0_spriteRenderer, void* ___1_src, int32_t ___2_count, const RuntimeMethod* method) 
{
	typedef void (*SpriteRendererDataAccessExtensions_SetDeformableBuffer_Injected_mF5C565693BAD9BB1A817370A4D61CC728A4BDD22_ftn) (intptr_t, void*, int32_t);
	static SpriteRendererDataAccessExtensions_SetDeformableBuffer_Injected_mF5C565693BAD9BB1A817370A4D61CC728A4BDD22_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRendererDataAccessExtensions_SetDeformableBuffer_Injected_mF5C565693BAD9BB1A817370A4D61CC728A4BDD22_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteRendererDataAccessExtensions::SetDeformableBuffer_Injected(System.IntPtr,System.Void*,System.Int32)");
	_il2cpp_icall_func(___0_spriteRenderer, ___1_src, ___2_count);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRendererDataAccessExtensions_IsUsingDeformableBuffer_Injected_m03AB09F29CCE5282A8D13E432383639BDC034FB7 (intptr_t ___0_spriteRenderer, void* ___1_buffer, const RuntimeMethod* method) 
{
	typedef bool (*SpriteRendererDataAccessExtensions_IsUsingDeformableBuffer_Injected_m03AB09F29CCE5282A8D13E432383639BDC034FB7_ftn) (intptr_t, void*);
	static SpriteRendererDataAccessExtensions_IsUsingDeformableBuffer_Injected_m03AB09F29CCE5282A8D13E432383639BDC034FB7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRendererDataAccessExtensions_IsUsingDeformableBuffer_Injected_m03AB09F29CCE5282A8D13E432383639BDC034FB7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteRendererDataAccessExtensions::IsUsingDeformableBuffer_Injected(System.IntPtr,System.Void*)");
	bool icallRetVal = _il2cpp_icall_func(___0_spriteRenderer, ___1_buffer);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetBoneTransforms_Injected_m394ECDDA6AFF6C3026F44CFE61C59A4FB8FD39E1 (intptr_t ___0_spriteRenderer, void* ___1_src, int32_t ___2_count, const RuntimeMethod* method) 
{
	typedef void (*SpriteRendererDataAccessExtensions_SetBoneTransforms_Injected_m394ECDDA6AFF6C3026F44CFE61C59A4FB8FD39E1_ftn) (intptr_t, void*, int32_t);
	static SpriteRendererDataAccessExtensions_SetBoneTransforms_Injected_m394ECDDA6AFF6C3026F44CFE61C59A4FB8FD39E1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRendererDataAccessExtensions_SetBoneTransforms_Injected_m394ECDDA6AFF6C3026F44CFE61C59A4FB8FD39E1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteRendererDataAccessExtensions::SetBoneTransforms_Injected(System.IntPtr,System.Void*,System.Int32)");
	_il2cpp_icall_func(___0_spriteRenderer, ___1_src, ___2_count);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRendererDataAccessExtensions_SetupMaterialProperties_Injected_m408DF1B1473D6C96D8B3E72BE99491BC16A0CAA7 (intptr_t ___0_spriteRenderer, const RuntimeMethod* method) 
{
	typedef void (*SpriteRendererDataAccessExtensions_SetupMaterialProperties_Injected_m408DF1B1473D6C96D8B3E72BE99491BC16A0CAA7_ftn) (intptr_t);
	static SpriteRendererDataAccessExtensions_SetupMaterialProperties_Injected_m408DF1B1473D6C96D8B3E72BE99491BC16A0CAA7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteRendererDataAccessExtensions_SetupMaterialProperties_Injected_m408DF1B1473D6C96D8B3E72BE99491BC16A0CAA7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteRendererDataAccessExtensions::SetupMaterialProperties_Injected(System.IntPtr)");
	_il2cpp_icall_func(___0_spriteRenderer);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteAtlasManager_RequestAtlas_mE6D9398ADA0A5CB1A76407B59511779F2DAA2593 (String_t* ___0_tag, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteAtlasManager_Register_m44D4E9341918EA32BEC92A77E851FF9A3BC21505_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Action_2_t39F9A40857E06142231322CA3632F32C6926572A* L_0 = ((SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var))->___atlasRequested;
		V_0 = (bool)((!(((RuntimeObject*)(Action_2_t39F9A40857E06142231322CA3632F32C6926572A*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		Action_2_t39F9A40857E06142231322CA3632F32C6926572A* L_2 = ((SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var))->___atlasRequested;
		String_t* L_3 = ___0_tag;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_4 = (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)il2cpp_codegen_object_new(Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3(L_4, NULL, (intptr_t)((void*)SpriteAtlasManager_Register_m44D4E9341918EA32BEC92A77E851FF9A3BC21505_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Action_2_Invoke_mA430E6535AAD3C65C12911DAF89C62ACC8592846_inline(L_2, L_3, L_4, NULL);
		V_1 = (bool)1;
		goto IL_002e;
	}

IL_002a:
	{
		V_1 = (bool)0;
		goto IL_002e;
	}

IL_002e:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_add_atlasRegistered_mA46A6A347F25B2E03DB4FD8044B93B4FD8ED50A5 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* V_0 = NULL;
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* V_1 = NULL;
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* V_2 = NULL;
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_0 = ((SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var))->___atlasRegistered;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_1 = V_0;
		V_1 = L_1;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_2 = V_1;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)Castclass((RuntimeObject*)L_4, Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var));
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_5 = V_2;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_6 = V_1;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*>((&((SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var))->___atlasRegistered), L_5, L_6);
		V_0 = L_7;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_8 = V_0;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)L_8) == ((RuntimeObject*)(Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_remove_atlasRegistered_m67E745D3503463E3DB9CC12C157ABB4F469ABE79 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* V_0 = NULL;
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* V_1 = NULL;
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* V_2 = NULL;
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_0 = ((SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var))->___atlasRegistered;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_1 = V_0;
		V_1 = L_1;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_2 = V_1;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)Castclass((RuntimeObject*)L_4, Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var));
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_5 = V_2;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_6 = V_1;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*>((&((SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var))->___atlasRegistered), L_5, L_6);
		V_0 = L_7;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_8 = V_0;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)L_8) == ((RuntimeObject*)(Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_PostRegisteredAtlas_mEBA789EAA074F9C6450ADF50722343BEF4509110 (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___0_spriteAtlas, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* G_B2_0 = NULL;
	Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* G_B1_0 = NULL;
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_0 = ((SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t6EC3C89938E10FD91479FD54C9FD30367B529C40_il2cpp_TypeInfo_var))->___atlasRegistered;
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* L_2 = ___0_spriteAtlas;
		NullCheck(G_B2_0);
		Action_1_Invoke_m9C0FDD39CBEA968B10871576A8DAFEEC5360339F_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_Register_m44D4E9341918EA32BEC92A77E851FF9A3BC21505 (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___0_spriteAtlas, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* L_0 = ___0_spriteAtlas;
		intptr_t L_1;
		L_1 = MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_inline(L_0, MarshalledUnityObject_Marshal_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_m599B052593B0725CFCE967619492F19EFDA31A68_RuntimeMethod_var);
		SpriteAtlasManager_Register_Injected_mCB60524604B497372C4F6DB8C6E46C54CF627212(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_Register_Injected_mCB60524604B497372C4F6DB8C6E46C54CF627212 (intptr_t ___0_spriteAtlas, const RuntimeMethod* method) 
{
	typedef void (*SpriteAtlasManager_Register_Injected_mCB60524604B497372C4F6DB8C6E46C54CF627212_ftn) (intptr_t);
	static SpriteAtlasManager_Register_Injected_mCB60524604B497372C4F6DB8C6E46C54CF627212_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteAtlasManager_Register_Injected_mCB60524604B497372C4F6DB8C6E46C54CF627212_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteAtlasManager::Register_Injected(System.IntPtr)");
	_il2cpp_icall_func(___0_spriteAtlas);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteAtlas_CanBindTo_mB4326EC04E7C2CC9D43AE04AEE9B91171F3BFA01 (SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_mA70172E45063B86AA295364218CCD7B7F24650B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	intptr_t G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	intptr_t G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_sprite;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_1, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
	}

IL_000e:
	{
		intptr_t L_2;
		L_2 = MarshalledUnityObject_MarshalNotNull_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_mA70172E45063B86AA295364218CCD7B7F24650B7_inline(__this, MarshalledUnityObject_MarshalNotNull_TisSpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8_mA70172E45063B86AA295364218CCD7B7F24650B7_RuntimeMethod_var);
		intptr_t L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_001e;
		}
		G_B3_0 = L_3;
	}
	{
		ThrowHelper_ThrowNullReferenceException_mA9C7629D32240EE0218631933DAC647668CA63CF(__this, NULL);
		G_B4_0 = G_B3_0;
	}

IL_001e:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___0_sprite;
		intptr_t L_5;
		L_5 = MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_inline(L_4, MarshalledUnityObject_MarshalNotNull_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m209A5984E7E9A4C919DAC0C290C488BDBCB09086_RuntimeMethod_var);
		intptr_t L_6 = L_5;
		if (L_6)
		{
			G_B6_0 = L_6;
			G_B6_1 = G_B4_0;
			goto IL_0033;
		}
		G_B5_0 = L_6;
		G_B5_1 = G_B4_0;
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = ___0_sprite;
		ThrowHelper_ThrowArgumentNullException_m57232D0804E4F65D1C0D86129C5BFD0DC950CA01(L_7, _stringLiteralD42593B36009988B7DFCED5665C5E429C09E1B1B, NULL);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0033:
	{
		bool L_8;
		L_8 = SpriteAtlas_CanBindTo_Injected_m3439431E3C5BAB100AB8F44FD3D5A95DC9A7F6F2(G_B6_1, G_B6_0, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteAtlas_CanBindTo_Injected_m3439431E3C5BAB100AB8F44FD3D5A95DC9A7F6F2 (intptr_t ___0__unity_self, intptr_t ___1_sprite, const RuntimeMethod* method) 
{
	typedef bool (*SpriteAtlas_CanBindTo_Injected_m3439431E3C5BAB100AB8F44FD3D5A95DC9A7F6F2_ftn) (intptr_t, intptr_t);
	static SpriteAtlas_CanBindTo_Injected_m3439431E3C5BAB100AB8F44FD3D5A95DC9A7F6F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteAtlas_CanBindTo_Injected_m3439431E3C5BAB100AB8F44FD3D5A95DC9A7F6F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteAtlas::CanBindTo_Injected(System.IntPtr,System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___0__unity_self, ___1_sprite);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_defaultMixedLightingModes_m7F9FDF9012EC41E36466613C8A9103D74666CBC4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CdefaultMixedLightingModesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_mixedLightingModes_m929C0CE80A4990993EBCAB8B46C1E273A0829137_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmixedLightingModesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapBakeTypes_m1311A5AD5BE1A6BA3251238C893D7D340358C156_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapBakeTypesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_enlighten_m6F973FEB7CCF0BB1B7A2F25317EADC5F6FD95ED6_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CenlightenU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SupportedRenderingFeatures_get_lightmapsModes_m925D670110EF7109A26BE1B228066E1201FAAE38_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3ClightmapsModesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_rendersUIOverlay_m657FFFC5B360F7BCE9964EF50E7449779224AEFC_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrendersUIOverlayU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_ambientProbeBaking_m8751A132081498EC99522A242C256DE8476F8BF4_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CambientProbeBakingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_defaultReflectionProbeBaking_m4A35EDF34332159BE52C9035D9AC1D52F006F089_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdefaultReflectionProbeBakingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupportedRenderingFeatures_get_overridesLightProbeSystem_m62C56592C44FDD2FC89EAA4ADE71435CDE65EB64_inline (SupportedRenderingFeatures_t569A94D488395E4967F2CA349DB518EA7BD117A6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CoverridesLightProbeSystemU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 OnPerformCulling_Invoke_m9DA6498101531B96227E97025316476D1EB79DF2_inline (OnPerformCulling_t02E073FD42F34E90694BF7D1C321EC8007FB45F2* __this, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10* ___0_rendererGroup, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659 ___1_cullingContext, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F ___2_cullingOutput, intptr_t ___3_userContext, const RuntimeMethod* method) 
{
	typedef JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*FunctionPointerType) (RuntimeObject*, BatchRendererGroup_t452089ECEC9BF01E82CD6AE044B6D75B8CD12D10*, BatchCullingContext_t6133D8CF3B9A93AED429E017C62DC2F5BD64A659, BatchCullingOutput_tF997DE602CE8F5E44654FD157113EF455DBE785F, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_rendererGroup, ___1_cullingContext, ___2_cullingOutput, ___3_userContext, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnFinishedCulling_Invoke_m5E05688ED0457471B0410E6D2F571E45BF116807_inline (OnFinishedCulling_t94AEBB560F52F9A2FF21D11548FFE40CCF5417E1* __this, intptr_t ___0_customCullingResult, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_customCullingResult, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataNativeCallback_Invoke_m2FD60D31CB8AF021EBED864016E07698F6A5BAEF_inline (GPUDrivenLODGroupDataNativeCallback_t3C7AFECDD582B8AAA0205A4075B00C42ED1AE75A* __this, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1* ___0_lodGroupDataNative, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenLODGroupDataNative_tD133313274F6B8ECC29496847018460D432F0EE1*, GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_lodGroupDataNative, ___1_callback, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenRendererDataNativeCallback_Invoke_m840ADD6953FD8B5DFD7C308DE6C3212A07532994_inline (GPUDrivenRendererDataNativeCallback_t74A4C778AB0444EA3F0CB9D4A0BAB569DECB1F1A* __this, GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC* ___0_rendererDataNative, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4* ___1_meshes, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B* ___2_materials, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* ___3_callback, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenRendererGroupDataNative_t0F3CB2B0F5060E3CFD77A1B09EABB3CAE8DB65DC*, List_1_t43FB89B126C93A6B04630BC64C751BBE95AFEAF4*, List_1_t386E09F4F22DDE4D2AC41A8567FFF283C254537B*, GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_rendererDataNative, ___1_meshes, ___2_materials, ___3_callback, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenRendererDataCallback_Invoke_mC4CC0435DC39A1319F88C79F23ACB41D86180155_inline (GPUDrivenRendererDataCallback_t4152C087393A384E442BAFE6B3AE0FAFB80C2EFF* __this, GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568* ___0_rendererData, RuntimeObject* ___1_meshes, RuntimeObject* ___2_materials, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenRendererGroupData_t8A323BA9775EF8B8B2D025EE16F29E81A770C568*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_rendererData, ___1_meshes, ___2_materials, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GPUDrivenLODGroupDataCallback_Invoke_m1C0F12933FF390C6F4C08D136D03DF803E09E0D8_inline (GPUDrivenLODGroupDataCallback_t513D83047833752F3C25B9C0AAAB474E94D71DA0* __this, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7* ___0_lodGroupData, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GPUDrivenLODGroupData_t9DB773CE44C3AB0E8266B0E60C304BDD016E02F7*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_lodGroupData, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_RGBMultiplied_m4B3BAE4310EA98451D608E0300331012AFFF1B01_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_multiplier, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->___r;
		float L_1 = ___0_multiplier;
		float L_2 = __this->___g;
		float L_3 = ___0_multiplier;
		float L_4 = __this->___b;
		float L_5 = ___0_multiplier;
		float L_6 = __this->___a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), ((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_4, L_5)), L_6, NULL);
		V_0 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_linear_m76EB88E15DA4E00D615DF33D1CEE51092683117C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->___r;
		float L_1;
		L_1 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_0, NULL);
		float L_2 = __this->___g;
		float L_3;
		L_3 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_2, NULL);
		float L_4 = __this->___b;
		float L_5;
		L_5 = Mathf_GammaToLinearSpace_mEF9E26BAD322E55448B286ABDCDF4A2CC236547F(L_4, NULL);
		float L_6 = __this->___a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), L_1, L_3, L_5, L_6, NULL);
		V_0 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Color_get_maxColorComponent_m97D2940D48767ACC21D76F8CCEAD6898B722529C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___r;
		float L_1 = __this->___g;
		float L_2;
		L_2 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_0, L_1, NULL);
		float L_3 = __this->___b;
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		__this->___a = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RequestLightsDelegate_Invoke_m01792B793691E6471596FF9B30E4D6F8EA18227E_inline (RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* __this, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* ___0_requests, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D ___1_lightsOutput, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990*, NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_requests, ___1_lightsOutput, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ScriptableRuntimeReflectionSystemWrapper_get_implementation_m1AFA781CCFEFE334D758AC43A9FAB9E0FB0F5C40_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CimplementationU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScriptableRuntimeReflectionSystemWrapper_set_implementation_mF1552E093F0F437DF191D7CBB0CF7981C36744D8_inline (ScriptableRuntimeReflectionSystemWrapper_t5E4ABCD6EBCCBC665EFFD6A654A6355D5744F924* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CimplementationU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimplementationU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_1 = 0;
		goto IL_001f;
	}

IL_0016:
	{
		RuntimeObject* L_2 = ___0_obj;
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		intptr_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
