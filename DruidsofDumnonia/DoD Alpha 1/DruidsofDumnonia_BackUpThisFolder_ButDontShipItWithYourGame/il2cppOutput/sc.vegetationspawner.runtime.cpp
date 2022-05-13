#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[0...,0...]>
struct Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05;
// System.Func`2<UnityEngine.TreeInstance,System.Boolean>
struct Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.TreeInstance>
struct IEnumerable_1_tEE434BBF3409C2705D9485F99D847610F075AEFB;
// System.Collections.Generic.IEnumerable`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>
struct IEnumerable_1_t12A4A9C51C16760B647D261D94D3E82D9D4D8643;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Terrain>
struct IEqualityComparer_1_t8471499CD7A31BA5A396479A70608CD8708DFFB4;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[0...,0...]>
struct KeyCollection_t0875EACB9FEF58B4D4603F1D2B90DF03D19E56B7;
// System.Collections.Generic.List`1<UnityEngine.DetailPrototype>
struct List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Terrain>
struct List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C;
// System.Collections.Generic.List`1<UnityEngine.TreeInstance>
struct List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B;
// System.Collections.Generic.List`1<UnityEngine.TreePrototype>
struct List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>
struct List_1_t868FA79F2DD4048265354F01579A6C5503166310;
// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>
struct List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B;
// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>
struct List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0;
// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreeType>
struct List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C;
// System.Predicate`1<UnityEngine.TreeInstance>
struct Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[0...,0...]>
struct ValueCollection_tC3D3598F83FBDA08C6682927E36F8577663B6062;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[0...,0...]>[]
struct EntryU5BU5D_t12EE09F5F443B0617E717973DCDB26241770E42E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.DetailPrototype[]
struct DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t3F6CC238FDF6EE231EDBF5ECD9C6CDE42F003C57;
// UnityEngine.TreeInstance[]
struct TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8;
// UnityEngine.TreePrototype[]
struct TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab[]
struct GrassPrefabU5BU5D_t66D459680124A9F0310185B0E071140C96C44E62;
// sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask[]
struct TerrainLayerMaskU5BU5D_tA86C52FD9AB8CB3BA5876CA7E5F6DAA12379DAAA;
// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab[]
struct TreePrefabU5BU5D_t36A4D64DDF99A1A9B462DD9865902029C6475D6E;
// sc.terrain.vegetationspawner.SpawnerBase/TreeType[]
struct TreeTypeU5BU5D_tED48D3BA63FCD2FBE63F03C9F75C2AAE6AED01F4;
// sc.terrain.vegetationspawner.Cell[0...,0...]
struct CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC;
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// sc.terrain.vegetationspawner.Cell
struct Cell_tC218009E45576409E5AA876C2A7086E8CC17829E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.DetailPrototype
struct DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// sc.terrain.vegetationspawner.SpawnerBase
struct SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E;
// System.String
struct String_t;
// UnityEngine.Terrain
struct Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836;
// UnityEngine.TerrainData
struct TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.TreePrototype
struct TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5;
// System.Type
struct Type_t;
// sc.terrain.vegetationspawner.VegetationSpawner
struct VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab
struct GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A;
// sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask
struct TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3;
// sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings
struct TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F;
// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab
struct TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95;
// sc.terrain.vegetationspawner.SpawnerBase/TreeType
struct TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554;
// sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab
struct VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA;
// sc.terrain.vegetationspawner.TerrainSampler/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1;
// sc.terrain.vegetationspawner.VegetationSpawner/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C;
// sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn
struct OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3;
// sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn
struct OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109;

IL2CPP_EXTERN_C RuntimeClass* CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cell_tC218009E45576409E5AA876C2A7086E8CC17829E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t868FA79F2DD4048265354F01579A6C5503166310_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15980ECBB85D4417BC69FA2F4646889A2441022A;
IL2CPP_EXTERN_C String_t* _stringLiteral44DE4CE1EDAB1A33F57CDCE0ED1296223AE76C1A;
IL2CPP_EXTERN_C String_t* _stringLiteralB4F317521E78A48BBEE99F717E5DC5694027DA48;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m61D20897BACDEB8B33E823A8C943D9C0D039D9D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m95A609BC172A70468CBCE2C4FEFB5A4A621C01C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF2FCFB39A1F3969A4F2A22FB82FD9F0B0FC921B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFED326EAF9CD8C70A443F5AE9B6C0E80D9513A97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mF38058353BA0E4FFE0A25A3A9C7D7168449945C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAC1368B0A50168E41BF5E79CFCFF0916E2608092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_mAE13A7F62E684A96957FF38FEC097CE5963FB601_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_m30B6D63B7C50B3BCE25F0EF72D8C87391D1644DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0534F988FF1A4C3773534E07E042F7948D38E197_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2110E34613EFD27F45A4E5922123639E70AA6F91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m91BCBD82CE20375C9C8E6715DBB1DEDD597F82DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD7D430F523AFBCF33E1A00E9116FB57399D693ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m38B8371B5090211A5DA66391E66F26F9C91C5FBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5669064B78AC360A980CDAAE14D111A670D504D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7BC5E16951688506518B218BFABB0B74E07C7EF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC68653D21A679CDBC43710B0F2F4EA9D13626079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3F7EE5B9D1AD8E34B161CE15D03DBC79FE6CCD9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m835C8795A6071884C8AE8A426F0C9203CBCDEEF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m95C2BA3A5C54659972CBE703853E5E6C16F38D3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEBBC026AC7250C41C498697AB2A25E6488D98070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m9B44BB9D07E6A9A0CBADB3393C2A9BEA17CC8E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m546A734A6544DC035D49116D0CD687A6C8221B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m88CF0236FEFF3E7778D28555AE60D8747E658307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA3B4C31452FB3D9DB7663B1E6512AEA87B3E09D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAB711B779EE61A74EC5415D51D6538FF7506D308_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1A6EC38ACB5AE88107AE9AA708188DC43491D562_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m424703C0B126BA08F0AFD5C79573A6189B04C23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m54105E3113A4BDCFC79817993666F50B02AC76EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m88853AE7E5F279215C4BFE990330FD81E54ED3DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_m15A35FE88025F5BE41030782B5520A1001A291E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3FE0140B2EA3ACE813701577E2A73D337F640CA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m21F17D5E7482A64132A302B9DA52A1E5E200B1F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m31E93B06A427F3AA7ED8222B54D2B17F1BEDBDCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mA637A9038ED810D97784A0FE25F47F736EA8CF54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m09ABC1748B59924D289BE5BF5BF4F0293164AB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m363BF8E74346EE20B9B4AE4F1F909214DD3B9268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4C5C1CE352D1DA7D20B6F69AFB9FA02D082C72C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7097AC1F2ED336D752E577B054841ECA6B5BBD93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m827AB1CFAFE8AF5AD4E8A9804055C7074C96642B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m931982C5FB85776191FAC03ED5A45FA97880613D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9B2F8EF530DD4B08653DC663E408A2DCB6914E24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA3C067389B7E10ABABFDCEA76BD81B7CBA414BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD05861CB441B51B66CC7BE1D4EE47451402DE21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1324B1A88A743144CEA79C190309E6F31208258C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1E15530AA28DA76DD9909083CA672047C42944E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2ED5C0182B69FFD97B850EB77276F5F7BBE9D28B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4CF68A0019B3DE6317E399542BF3A49A9DC2DB00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5C6674FA950981B337FEABD2C9C25815AF075ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7D35090FBDF168F5493258D0FAD0332D7552884C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m805BCA48AB339EA259A0596DAE5D44D41ECF29E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m12630212D3819AD8AD72E2EB189EE84254B7DD2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4486B34786432CD9C1F27AB4F109B1A1DD655211_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDE80778F2E42E3DF2DF43FB3977A79F1C190CAF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mD2D20330BD534516423193E1D930928CD0423A3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_mC9C38EB409403C7B88175B017DA376752FF95029_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CSpawnTreeOnTerrainU3Eb__0_m43DE2911E5721F8C5F6DE66EF2EC816162791C1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CGetTreeInstancesU3Eb__0_m2F107CFB224B53C426320D69A0DA52BF6CF37636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TerrainCollider_t7B0DDF9DE78C22137804E29293567456BDDB9D9F_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8;
struct TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC;
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t013E3B233A5414540B1C9A9FC3B8286B37D5FECE 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[0...,0...]>
struct  Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t12EE09F5F443B0617E717973DCDB26241770E42E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0875EACB9FEF58B4D4603F1D2B90DF03D19E56B7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC3D3598F83FBDA08C6682927E36F8577663B6062 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05, ___entries_1)); }
	inline EntryU5BU5D_t12EE09F5F443B0617E717973DCDB26241770E42E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t12EE09F5F443B0617E717973DCDB26241770E42E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t12EE09F5F443B0617E717973DCDB26241770E42E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05, ___keys_7)); }
	inline KeyCollection_t0875EACB9FEF58B4D4603F1D2B90DF03D19E56B7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0875EACB9FEF58B4D4603F1D2B90DF03D19E56B7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0875EACB9FEF58B4D4603F1D2B90DF03D19E56B7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05, ___values_8)); }
	inline ValueCollection_tC3D3598F83FBDA08C6682927E36F8577663B6062 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC3D3598F83FBDA08C6682927E36F8577663B6062 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC3D3598F83FBDA08C6682927E36F8577663B6062 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.DetailPrototype>
struct  List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741, ____items_1)); }
	inline DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* get__items_1() const { return ____items_1; }
	inline DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741_StaticFields, ____emptyArray_5)); }
	inline DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Terrain>
struct  List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TerrainU5BU5D_t3F6CC238FDF6EE231EDBF5ECD9C6CDE42F003C57* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C, ____items_1)); }
	inline TerrainU5BU5D_t3F6CC238FDF6EE231EDBF5ECD9C6CDE42F003C57* get__items_1() const { return ____items_1; }
	inline TerrainU5BU5D_t3F6CC238FDF6EE231EDBF5ECD9C6CDE42F003C57** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TerrainU5BU5D_t3F6CC238FDF6EE231EDBF5ECD9C6CDE42F003C57* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TerrainU5BU5D_t3F6CC238FDF6EE231EDBF5ECD9C6CDE42F003C57* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C_StaticFields, ____emptyArray_5)); }
	inline TerrainU5BU5D_t3F6CC238FDF6EE231EDBF5ECD9C6CDE42F003C57* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TerrainU5BU5D_t3F6CC238FDF6EE231EDBF5ECD9C6CDE42F003C57** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TerrainU5BU5D_t3F6CC238FDF6EE231EDBF5ECD9C6CDE42F003C57* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.TreeInstance>
struct  List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B, ____items_1)); }
	inline TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* get__items_1() const { return ____items_1; }
	inline TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B_StaticFields, ____emptyArray_5)); }
	inline TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.TreePrototype>
struct  List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386, ____items_1)); }
	inline TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* get__items_1() const { return ____items_1; }
	inline TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386_StaticFields, ____emptyArray_5)); }
	inline TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____items_1)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>
struct  List_1_t868FA79F2DD4048265354F01579A6C5503166310  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GrassPrefabU5BU5D_t66D459680124A9F0310185B0E071140C96C44E62* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t868FA79F2DD4048265354F01579A6C5503166310, ____items_1)); }
	inline GrassPrefabU5BU5D_t66D459680124A9F0310185B0E071140C96C44E62* get__items_1() const { return ____items_1; }
	inline GrassPrefabU5BU5D_t66D459680124A9F0310185B0E071140C96C44E62** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GrassPrefabU5BU5D_t66D459680124A9F0310185B0E071140C96C44E62* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t868FA79F2DD4048265354F01579A6C5503166310, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t868FA79F2DD4048265354F01579A6C5503166310, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t868FA79F2DD4048265354F01579A6C5503166310, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t868FA79F2DD4048265354F01579A6C5503166310_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GrassPrefabU5BU5D_t66D459680124A9F0310185B0E071140C96C44E62* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t868FA79F2DD4048265354F01579A6C5503166310_StaticFields, ____emptyArray_5)); }
	inline GrassPrefabU5BU5D_t66D459680124A9F0310185B0E071140C96C44E62* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GrassPrefabU5BU5D_t66D459680124A9F0310185B0E071140C96C44E62** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GrassPrefabU5BU5D_t66D459680124A9F0310185B0E071140C96C44E62* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>
struct  List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TerrainLayerMaskU5BU5D_tA86C52FD9AB8CB3BA5876CA7E5F6DAA12379DAAA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B, ____items_1)); }
	inline TerrainLayerMaskU5BU5D_tA86C52FD9AB8CB3BA5876CA7E5F6DAA12379DAAA* get__items_1() const { return ____items_1; }
	inline TerrainLayerMaskU5BU5D_tA86C52FD9AB8CB3BA5876CA7E5F6DAA12379DAAA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TerrainLayerMaskU5BU5D_tA86C52FD9AB8CB3BA5876CA7E5F6DAA12379DAAA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TerrainLayerMaskU5BU5D_tA86C52FD9AB8CB3BA5876CA7E5F6DAA12379DAAA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B_StaticFields, ____emptyArray_5)); }
	inline TerrainLayerMaskU5BU5D_tA86C52FD9AB8CB3BA5876CA7E5F6DAA12379DAAA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TerrainLayerMaskU5BU5D_tA86C52FD9AB8CB3BA5876CA7E5F6DAA12379DAAA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TerrainLayerMaskU5BU5D_tA86C52FD9AB8CB3BA5876CA7E5F6DAA12379DAAA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>
struct  List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TreePrefabU5BU5D_t36A4D64DDF99A1A9B462DD9865902029C6475D6E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0, ____items_1)); }
	inline TreePrefabU5BU5D_t36A4D64DDF99A1A9B462DD9865902029C6475D6E* get__items_1() const { return ____items_1; }
	inline TreePrefabU5BU5D_t36A4D64DDF99A1A9B462DD9865902029C6475D6E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TreePrefabU5BU5D_t36A4D64DDF99A1A9B462DD9865902029C6475D6E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TreePrefabU5BU5D_t36A4D64DDF99A1A9B462DD9865902029C6475D6E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0_StaticFields, ____emptyArray_5)); }
	inline TreePrefabU5BU5D_t36A4D64DDF99A1A9B462DD9865902029C6475D6E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TreePrefabU5BU5D_t36A4D64DDF99A1A9B462DD9865902029C6475D6E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TreePrefabU5BU5D_t36A4D64DDF99A1A9B462DD9865902029C6475D6E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreeType>
struct  List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TreeTypeU5BU5D_tED48D3BA63FCD2FBE63F03C9F75C2AAE6AED01F4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C, ____items_1)); }
	inline TreeTypeU5BU5D_tED48D3BA63FCD2FBE63F03C9F75C2AAE6AED01F4* get__items_1() const { return ____items_1; }
	inline TreeTypeU5BU5D_tED48D3BA63FCD2FBE63F03C9F75C2AAE6AED01F4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TreeTypeU5BU5D_tED48D3BA63FCD2FBE63F03C9F75C2AAE6AED01F4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TreeTypeU5BU5D_tED48D3BA63FCD2FBE63F03C9F75C2AAE6AED01F4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C_StaticFields, ____emptyArray_5)); }
	inline TreeTypeU5BU5D_tED48D3BA63FCD2FBE63F03C9F75C2AAE6AED01F4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TreeTypeU5BU5D_tED48D3BA63FCD2FBE63F03C9F75C2AAE6AED01F4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TreeTypeU5BU5D_tED48D3BA63FCD2FBE63F03C9F75C2AAE6AED01F4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// sc.terrain.vegetationspawner.TerrainSampler
struct  TerrainSampler_t83D0D668C1207A72F2319A417728547F64B80FC1  : public RuntimeObject
{
public:

public:
};


// UnityEngine.TreePrototype
struct  TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.TreePrototype::m_Prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Prefab_0;
	// System.Single UnityEngine.TreePrototype::m_BendFactor
	float ___m_BendFactor_1;
	// System.Int32 UnityEngine.TreePrototype::m_NavMeshLod
	int32_t ___m_NavMeshLod_2;

public:
	inline static int32_t get_offset_of_m_Prefab_0() { return static_cast<int32_t>(offsetof(TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5, ___m_Prefab_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Prefab_0() const { return ___m_Prefab_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Prefab_0() { return &___m_Prefab_0; }
	inline void set_m_Prefab_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Prefab_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Prefab_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_BendFactor_1() { return static_cast<int32_t>(offsetof(TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5, ___m_BendFactor_1)); }
	inline float get_m_BendFactor_1() const { return ___m_BendFactor_1; }
	inline float* get_address_of_m_BendFactor_1() { return &___m_BendFactor_1; }
	inline void set_m_BendFactor_1(float value)
	{
		___m_BendFactor_1 = value;
	}

	inline static int32_t get_offset_of_m_NavMeshLod_2() { return static_cast<int32_t>(offsetof(TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5, ___m_NavMeshLod_2)); }
	inline int32_t get_m_NavMeshLod_2() const { return ___m_NavMeshLod_2; }
	inline int32_t* get_address_of_m_NavMeshLod_2() { return &___m_NavMeshLod_2; }
	inline void set_m_NavMeshLod_2(int32_t value)
	{
		___m_NavMeshLod_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TreePrototype
struct TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Prefab_0;
	float ___m_BendFactor_1;
	int32_t ___m_NavMeshLod_2;
};
// Native definition for COM marshalling of UnityEngine.TreePrototype
struct TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Prefab_0;
	float ___m_BendFactor_1;
	int32_t ___m_NavMeshLod_2;
};

// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask
struct  TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3  : public RuntimeObject
{
public:
	// System.String sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask::name
	String_t* ___name_0;
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask::layerID
	int32_t ___layerID_1;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask::threshold
	float ___threshold_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_layerID_1() { return static_cast<int32_t>(offsetof(TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3, ___layerID_1)); }
	inline int32_t get_layerID_1() const { return ___layerID_1; }
	inline int32_t* get_address_of_layerID_1() { return &___layerID_1; }
	inline void set_layerID_1(int32_t value)
	{
		___layerID_1 = value;
	}

	inline static int32_t get_offset_of_threshold_2() { return static_cast<int32_t>(offsetof(TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3, ___threshold_2)); }
	inline float get_threshold_2() const { return ___threshold_2; }
	inline float* get_address_of_threshold_2() { return &___threshold_2; }
	inline void set_threshold_2(float value)
	{
		___threshold_2 = value;
	}
};


// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab
struct  TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95  : public RuntimeObject
{
public:
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/TreePrefab::index
	int32_t ___index_0;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TreePrefab::probability
	float ___probability_1;
	// UnityEngine.GameObject sc.terrain.vegetationspawner.SpawnerBase/TreePrefab::prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_2;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_probability_1() { return static_cast<int32_t>(offsetof(TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95, ___probability_1)); }
	inline float get_probability_1() const { return ___probability_1; }
	inline float* get_address_of_probability_1() { return &___probability_1; }
	inline void set_probability_1(float value)
	{
		___probability_1 = value;
	}

	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95, ___prefab_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_2() const { return ___prefab_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_2), (void*)value);
	}
};


// sc.terrain.vegetationspawner.TerrainSampler/<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1  : public RuntimeObject
{
public:
	// System.Int32 sc.terrain.vegetationspawner.TerrainSampler/<>c__DisplayClass9_0::prototypeIndex
	int32_t ___prototypeIndex_0;

public:
	inline static int32_t get_offset_of_prototypeIndex_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1, ___prototypeIndex_0)); }
	inline int32_t get_prototypeIndex_0() const { return ___prototypeIndex_0; }
	inline int32_t* get_address_of_prototypeIndex_0() { return &___prototypeIndex_0; }
	inline void set_prototypeIndex_0(int32_t value)
	{
		___prototypeIndex_0 = value;
	}
};


// sc.terrain.vegetationspawner.VegetationSpawner/<>c__DisplayClass21_0
struct  U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C  : public RuntimeObject
{
public:
	// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab sc.terrain.vegetationspawner.VegetationSpawner/<>c__DisplayClass21_0::prefab
	TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * ___prefab_0;

public:
	inline static int32_t get_offset_of_prefab_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C, ___prefab_0)); }
	inline TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * get_prefab_0() const { return ___prefab_0; }
	inline TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 ** get_address_of_prefab_0() { return &___prefab_0; }
	inline void set_prefab_0(TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * value)
	{
		___prefab_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Terrain>
struct  Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0, ___list_0)); }
	inline List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * get_list_0() const { return ___list_0; }
	inline List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0, ___current_3)); }
	inline Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * get_current_3() const { return ___current_3; }
	inline Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>
struct  Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t868FA79F2DD4048265354F01579A6C5503166310 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034, ___list_0)); }
	inline List_1_t868FA79F2DD4048265354F01579A6C5503166310 * get_list_0() const { return ___list_0; }
	inline List_1_t868FA79F2DD4048265354F01579A6C5503166310 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t868FA79F2DD4048265354F01579A6C5503166310 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034, ___current_3)); }
	inline GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * get_current_3() const { return ___current_3; }
	inline GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>
struct  Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E, ___list_0)); }
	inline List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * get_list_0() const { return ___list_0; }
	inline List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E, ___current_3)); }
	inline TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * get_current_3() const { return ___current_3; }
	inline TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>
struct  Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2, ___list_0)); }
	inline List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * get_list_0() const { return ___list_0; }
	inline List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2, ___current_3)); }
	inline TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * get_current_3() const { return ___current_3; }
	inline TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreeType>
struct  Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28, ___list_0)); }
	inline List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * get_list_0() const { return ___list_0; }
	inline List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28, ___current_3)); }
	inline TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * get_current_3() const { return ___current_3; }
	inline TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
struct  Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___list_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_list_0() const { return ___list_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995, ___current_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_current_3() const { return ___current_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___current_3 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.DetailPrototype
struct  DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.DetailPrototype::m_Prototype
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Prototype_0;
	// UnityEngine.Texture2D UnityEngine.DetailPrototype::m_PrototypeTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_PrototypeTexture_1;
	// UnityEngine.Color UnityEngine.DetailPrototype::m_HealthyColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HealthyColor_2;
	// UnityEngine.Color UnityEngine.DetailPrototype::m_DryColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DryColor_3;
	// System.Single UnityEngine.DetailPrototype::m_MinWidth
	float ___m_MinWidth_4;
	// System.Single UnityEngine.DetailPrototype::m_MaxWidth
	float ___m_MaxWidth_5;
	// System.Single UnityEngine.DetailPrototype::m_MinHeight
	float ___m_MinHeight_6;
	// System.Single UnityEngine.DetailPrototype::m_MaxHeight
	float ___m_MaxHeight_7;
	// System.Single UnityEngine.DetailPrototype::m_NoiseSpread
	float ___m_NoiseSpread_8;
	// System.Single UnityEngine.DetailPrototype::m_HoleEdgePadding
	float ___m_HoleEdgePadding_9;
	// System.Int32 UnityEngine.DetailPrototype::m_RenderMode
	int32_t ___m_RenderMode_10;
	// System.Int32 UnityEngine.DetailPrototype::m_UsePrototypeMesh
	int32_t ___m_UsePrototypeMesh_11;

public:
	inline static int32_t get_offset_of_m_Prototype_0() { return static_cast<int32_t>(offsetof(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785, ___m_Prototype_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Prototype_0() const { return ___m_Prototype_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Prototype_0() { return &___m_Prototype_0; }
	inline void set_m_Prototype_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Prototype_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Prototype_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PrototypeTexture_1() { return static_cast<int32_t>(offsetof(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785, ___m_PrototypeTexture_1)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_PrototypeTexture_1() const { return ___m_PrototypeTexture_1; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_PrototypeTexture_1() { return &___m_PrototypeTexture_1; }
	inline void set_m_PrototypeTexture_1(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_PrototypeTexture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PrototypeTexture_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_HealthyColor_2() { return static_cast<int32_t>(offsetof(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785, ___m_HealthyColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HealthyColor_2() const { return ___m_HealthyColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HealthyColor_2() { return &___m_HealthyColor_2; }
	inline void set_m_HealthyColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HealthyColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DryColor_3() { return static_cast<int32_t>(offsetof(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785, ___m_DryColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DryColor_3() const { return ___m_DryColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DryColor_3() { return &___m_DryColor_3; }
	inline void set_m_DryColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DryColor_3 = value;
	}

	inline static int32_t get_offset_of_m_MinWidth_4() { return static_cast<int32_t>(offsetof(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785, ___m_MinWidth_4)); }
	inline float get_m_MinWidth_4() const { return ___m_MinWidth_4; }
	inline float* get_address_of_m_MinWidth_4() { return &___m_MinWidth_4; }
	inline void set_m_MinWidth_4(float value)
	{
		___m_MinWidth_4 = value;
	}

	inline static int32_t get_offset_of_m_MaxWidth_5() { return static_cast<int32_t>(offsetof(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785, ___m_MaxWidth_5)); }
	inline float get_m_MaxWidth_5() const { return ___m_MaxWidth_5; }
	inline float* get_address_of_m_MaxWidth_5() { return &___m_MaxWidth_5; }
	inline void set_m_MaxWidth_5(float value)
	{
		___m_MaxWidth_5 = value;
	}

	inline static int32_t get_offset_of_m_MinHeight_6() { return static_cast<int32_t>(offsetof(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785, ___m_MinHeight_6)); }
	inline float get_m_MinHeight_6() const { return ___m_MinHeight_6; }
	inline float* get_address_of_m_MinHeight_6() { return &___m_MinHeight_6; }
	inline void set_m_MinHeight_6(float value)
	{
		___m_MinHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_MaxHeight_7() { return static_cast<int32_t>(offsetof(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785, ___m_MaxHeight_7)); }
	inline float get_m_MaxHeight_7() const { return ___m_MaxHeight_7; }
	inline float* get_address_of_m_MaxHeight_7() { return &___m_MaxHeight_7; }
	inline void set_m_MaxHeight_7(float value)
	{
		___m_MaxHeight_7 = value;
	}

	inline static int32_t get_offset_of_m_NoiseSpread_8() { return static_cast<int32_t>(offsetof(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785, ___m_NoiseSpread_8)); }
	inline float get_m_NoiseSpread_8() const { return ___m_NoiseSpread_8; }
	inline float* get_address_of_m_NoiseSpread_8() { return &___m_NoiseSpread_8; }
	inline void set_m_NoiseSpread_8(float value)
	{
		___m_NoiseSpread_8 = value;
	}

	inline static int32_t get_offset_of_m_HoleEdgePadding_9() { return static_cast<int32_t>(offsetof(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785, ___m_HoleEdgePadding_9)); }
	inline float get_m_HoleEdgePadding_9() const { return ___m_HoleEdgePadding_9; }
	inline float* get_address_of_m_HoleEdgePadding_9() { return &___m_HoleEdgePadding_9; }
	inline void set_m_HoleEdgePadding_9(float value)
	{
		___m_HoleEdgePadding_9 = value;
	}

	inline static int32_t get_offset_of_m_RenderMode_10() { return static_cast<int32_t>(offsetof(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785, ___m_RenderMode_10)); }
	inline int32_t get_m_RenderMode_10() const { return ___m_RenderMode_10; }
	inline int32_t* get_address_of_m_RenderMode_10() { return &___m_RenderMode_10; }
	inline void set_m_RenderMode_10(int32_t value)
	{
		___m_RenderMode_10 = value;
	}

	inline static int32_t get_offset_of_m_UsePrototypeMesh_11() { return static_cast<int32_t>(offsetof(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785, ___m_UsePrototypeMesh_11)); }
	inline int32_t get_m_UsePrototypeMesh_11() const { return ___m_UsePrototypeMesh_11; }
	inline int32_t* get_address_of_m_UsePrototypeMesh_11() { return &___m_UsePrototypeMesh_11; }
	inline void set_m_UsePrototypeMesh_11(int32_t value)
	{
		___m_UsePrototypeMesh_11 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.DetailPrototype
struct DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Prototype_0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_PrototypeTexture_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HealthyColor_2;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DryColor_3;
	float ___m_MinWidth_4;
	float ___m_MaxWidth_5;
	float ___m_MinHeight_6;
	float ___m_MaxHeight_7;
	float ___m_NoiseSpread_8;
	float ___m_HoleEdgePadding_9;
	int32_t ___m_RenderMode_10;
	int32_t ___m_UsePrototypeMesh_11;
};
// Native definition for COM marshalling of UnityEngine.DetailPrototype
struct DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Prototype_0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_PrototypeTexture_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HealthyColor_2;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DryColor_3;
	float ___m_MinWidth_4;
	float ___m_MaxWidth_5;
	float ___m_MinHeight_6;
	float ___m_MaxHeight_7;
	float ___m_NoiseSpread_8;
	float ___m_HoleEdgePadding_9;
	int32_t ___m_RenderMode_10;
	int32_t ___m_UsePrototypeMesh_11;
};

// UnityEngine.DetailRenderMode
struct  DetailRenderMode_t9A9FE06A3BFA74B33BC4B4A4CF9858C8021F35A8 
{
public:
	// System.Int32 UnityEngine.DetailRenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DetailRenderMode_t9A9FE06A3BFA74B33BC4B4A4CF9858C8021F35A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.TreeInstance
struct  TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15 
{
public:
	// UnityEngine.Vector3 UnityEngine.TreeInstance::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// System.Single UnityEngine.TreeInstance::widthScale
	float ___widthScale_1;
	// System.Single UnityEngine.TreeInstance::heightScale
	float ___heightScale_2;
	// System.Single UnityEngine.TreeInstance::rotation
	float ___rotation_3;
	// UnityEngine.Color32 UnityEngine.TreeInstance::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_4;
	// UnityEngine.Color32 UnityEngine.TreeInstance::lightmapColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___lightmapColor_5;
	// System.Int32 UnityEngine.TreeInstance::prototypeIndex
	int32_t ___prototypeIndex_6;
	// System.Single UnityEngine.TreeInstance::temporaryDistance
	float ___temporaryDistance_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_widthScale_1() { return static_cast<int32_t>(offsetof(TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15, ___widthScale_1)); }
	inline float get_widthScale_1() const { return ___widthScale_1; }
	inline float* get_address_of_widthScale_1() { return &___widthScale_1; }
	inline void set_widthScale_1(float value)
	{
		___widthScale_1 = value;
	}

	inline static int32_t get_offset_of_heightScale_2() { return static_cast<int32_t>(offsetof(TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15, ___heightScale_2)); }
	inline float get_heightScale_2() const { return ___heightScale_2; }
	inline float* get_address_of_heightScale_2() { return &___heightScale_2; }
	inline void set_heightScale_2(float value)
	{
		___heightScale_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15, ___rotation_3)); }
	inline float get_rotation_3() const { return ___rotation_3; }
	inline float* get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(float value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15, ___color_4)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_4() const { return ___color_4; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_4 = value;
	}

	inline static int32_t get_offset_of_lightmapColor_5() { return static_cast<int32_t>(offsetof(TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15, ___lightmapColor_5)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_lightmapColor_5() const { return ___lightmapColor_5; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_lightmapColor_5() { return &___lightmapColor_5; }
	inline void set_lightmapColor_5(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___lightmapColor_5 = value;
	}

	inline static int32_t get_offset_of_prototypeIndex_6() { return static_cast<int32_t>(offsetof(TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15, ___prototypeIndex_6)); }
	inline int32_t get_prototypeIndex_6() const { return ___prototypeIndex_6; }
	inline int32_t* get_address_of_prototypeIndex_6() { return &___prototypeIndex_6; }
	inline void set_prototypeIndex_6(int32_t value)
	{
		___prototypeIndex_6 = value;
	}

	inline static int32_t get_offset_of_temporaryDistance_7() { return static_cast<int32_t>(offsetof(TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15, ___temporaryDistance_7)); }
	inline float get_temporaryDistance_7() const { return ___temporaryDistance_7; }
	inline float* get_address_of_temporaryDistance_7() { return &___temporaryDistance_7; }
	inline void set_temporaryDistance_7(float value)
	{
		___temporaryDistance_7 = value;
	}
};


// sc.terrain.vegetationspawner.SpawnerBase/GrassType
struct  GrassType_t0962B088AEF1B1B94D67F4F6FA9C15C42357D305 
{
public:
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/GrassType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GrassType_t0962B088AEF1B1B94D67F4F6FA9C15C42357D305, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings
struct  TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F  : public RuntimeObject
{
public:
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::drawTreesAndFoliage
	bool ___drawTreesAndFoliage_0;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::perservePrefabLayer
	bool ___perservePrefabLayer_1;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::treeLightProbes
	bool ___treeLightProbes_2;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::treeDistance
	float ___treeDistance_3;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::billboardStart
	float ___billboardStart_4;
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::maxMeshTrees
	int32_t ___maxMeshTrees_5;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::grassDistance
	float ___grassDistance_6;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::grassDensity
	float ___grassDensity_7;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::windStrength
	float ___windStrength_8;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::windSpeed
	float ___windSpeed_9;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::windFrequency
	float ___windFrequency_10;
	// UnityEngine.Color sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::wintTint
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___wintTint_11;

public:
	inline static int32_t get_offset_of_drawTreesAndFoliage_0() { return static_cast<int32_t>(offsetof(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F, ___drawTreesAndFoliage_0)); }
	inline bool get_drawTreesAndFoliage_0() const { return ___drawTreesAndFoliage_0; }
	inline bool* get_address_of_drawTreesAndFoliage_0() { return &___drawTreesAndFoliage_0; }
	inline void set_drawTreesAndFoliage_0(bool value)
	{
		___drawTreesAndFoliage_0 = value;
	}

	inline static int32_t get_offset_of_perservePrefabLayer_1() { return static_cast<int32_t>(offsetof(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F, ___perservePrefabLayer_1)); }
	inline bool get_perservePrefabLayer_1() const { return ___perservePrefabLayer_1; }
	inline bool* get_address_of_perservePrefabLayer_1() { return &___perservePrefabLayer_1; }
	inline void set_perservePrefabLayer_1(bool value)
	{
		___perservePrefabLayer_1 = value;
	}

	inline static int32_t get_offset_of_treeLightProbes_2() { return static_cast<int32_t>(offsetof(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F, ___treeLightProbes_2)); }
	inline bool get_treeLightProbes_2() const { return ___treeLightProbes_2; }
	inline bool* get_address_of_treeLightProbes_2() { return &___treeLightProbes_2; }
	inline void set_treeLightProbes_2(bool value)
	{
		___treeLightProbes_2 = value;
	}

	inline static int32_t get_offset_of_treeDistance_3() { return static_cast<int32_t>(offsetof(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F, ___treeDistance_3)); }
	inline float get_treeDistance_3() const { return ___treeDistance_3; }
	inline float* get_address_of_treeDistance_3() { return &___treeDistance_3; }
	inline void set_treeDistance_3(float value)
	{
		___treeDistance_3 = value;
	}

	inline static int32_t get_offset_of_billboardStart_4() { return static_cast<int32_t>(offsetof(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F, ___billboardStart_4)); }
	inline float get_billboardStart_4() const { return ___billboardStart_4; }
	inline float* get_address_of_billboardStart_4() { return &___billboardStart_4; }
	inline void set_billboardStart_4(float value)
	{
		___billboardStart_4 = value;
	}

	inline static int32_t get_offset_of_maxMeshTrees_5() { return static_cast<int32_t>(offsetof(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F, ___maxMeshTrees_5)); }
	inline int32_t get_maxMeshTrees_5() const { return ___maxMeshTrees_5; }
	inline int32_t* get_address_of_maxMeshTrees_5() { return &___maxMeshTrees_5; }
	inline void set_maxMeshTrees_5(int32_t value)
	{
		___maxMeshTrees_5 = value;
	}

	inline static int32_t get_offset_of_grassDistance_6() { return static_cast<int32_t>(offsetof(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F, ___grassDistance_6)); }
	inline float get_grassDistance_6() const { return ___grassDistance_6; }
	inline float* get_address_of_grassDistance_6() { return &___grassDistance_6; }
	inline void set_grassDistance_6(float value)
	{
		___grassDistance_6 = value;
	}

	inline static int32_t get_offset_of_grassDensity_7() { return static_cast<int32_t>(offsetof(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F, ___grassDensity_7)); }
	inline float get_grassDensity_7() const { return ___grassDensity_7; }
	inline float* get_address_of_grassDensity_7() { return &___grassDensity_7; }
	inline void set_grassDensity_7(float value)
	{
		___grassDensity_7 = value;
	}

	inline static int32_t get_offset_of_windStrength_8() { return static_cast<int32_t>(offsetof(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F, ___windStrength_8)); }
	inline float get_windStrength_8() const { return ___windStrength_8; }
	inline float* get_address_of_windStrength_8() { return &___windStrength_8; }
	inline void set_windStrength_8(float value)
	{
		___windStrength_8 = value;
	}

	inline static int32_t get_offset_of_windSpeed_9() { return static_cast<int32_t>(offsetof(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F, ___windSpeed_9)); }
	inline float get_windSpeed_9() const { return ___windSpeed_9; }
	inline float* get_address_of_windSpeed_9() { return &___windSpeed_9; }
	inline void set_windSpeed_9(float value)
	{
		___windSpeed_9 = value;
	}

	inline static int32_t get_offset_of_windFrequency_10() { return static_cast<int32_t>(offsetof(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F, ___windFrequency_10)); }
	inline float get_windFrequency_10() const { return ___windFrequency_10; }
	inline float* get_address_of_windFrequency_10() { return &___windFrequency_10; }
	inline void set_windFrequency_10(float value)
	{
		___windFrequency_10 = value;
	}

	inline static int32_t get_offset_of_wintTint_11() { return static_cast<int32_t>(offsetof(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F, ___wintTint_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_wintTint_11() const { return ___wintTint_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_wintTint_11() { return &___wintTint_11; }
	inline void set_wintTint_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___wintTint_11 = value;
	}
};


// sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab
struct  VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA  : public RuntimeObject
{
public:
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::enabled
	bool ___enabled_0;
	// System.String sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::name
	String_t* ___name_1;
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::seed
	int32_t ___seed_2;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::probability
	float ___probability_3;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::collisionCheck
	bool ___collisionCheck_4;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::rejectUnderwater
	bool ___rejectUnderwater_5;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::heightRange
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___heightRange_6;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::slopeRange
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___slopeRange_7;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::curvatureRange
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___curvatureRange_8;
	// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask> sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::layerMasks
	List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * ___layerMasks_9;
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::instanceCount
	int32_t ___instanceCount_10;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_seed_2() { return static_cast<int32_t>(offsetof(VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA, ___seed_2)); }
	inline int32_t get_seed_2() const { return ___seed_2; }
	inline int32_t* get_address_of_seed_2() { return &___seed_2; }
	inline void set_seed_2(int32_t value)
	{
		___seed_2 = value;
	}

	inline static int32_t get_offset_of_probability_3() { return static_cast<int32_t>(offsetof(VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA, ___probability_3)); }
	inline float get_probability_3() const { return ___probability_3; }
	inline float* get_address_of_probability_3() { return &___probability_3; }
	inline void set_probability_3(float value)
	{
		___probability_3 = value;
	}

	inline static int32_t get_offset_of_collisionCheck_4() { return static_cast<int32_t>(offsetof(VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA, ___collisionCheck_4)); }
	inline bool get_collisionCheck_4() const { return ___collisionCheck_4; }
	inline bool* get_address_of_collisionCheck_4() { return &___collisionCheck_4; }
	inline void set_collisionCheck_4(bool value)
	{
		___collisionCheck_4 = value;
	}

	inline static int32_t get_offset_of_rejectUnderwater_5() { return static_cast<int32_t>(offsetof(VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA, ___rejectUnderwater_5)); }
	inline bool get_rejectUnderwater_5() const { return ___rejectUnderwater_5; }
	inline bool* get_address_of_rejectUnderwater_5() { return &___rejectUnderwater_5; }
	inline void set_rejectUnderwater_5(bool value)
	{
		___rejectUnderwater_5 = value;
	}

	inline static int32_t get_offset_of_heightRange_6() { return static_cast<int32_t>(offsetof(VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA, ___heightRange_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_heightRange_6() const { return ___heightRange_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_heightRange_6() { return &___heightRange_6; }
	inline void set_heightRange_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___heightRange_6 = value;
	}

	inline static int32_t get_offset_of_slopeRange_7() { return static_cast<int32_t>(offsetof(VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA, ___slopeRange_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_slopeRange_7() const { return ___slopeRange_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_slopeRange_7() { return &___slopeRange_7; }
	inline void set_slopeRange_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___slopeRange_7 = value;
	}

	inline static int32_t get_offset_of_curvatureRange_8() { return static_cast<int32_t>(offsetof(VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA, ___curvatureRange_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_curvatureRange_8() const { return ___curvatureRange_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_curvatureRange_8() { return &___curvatureRange_8; }
	inline void set_curvatureRange_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___curvatureRange_8 = value;
	}

	inline static int32_t get_offset_of_layerMasks_9() { return static_cast<int32_t>(offsetof(VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA, ___layerMasks_9)); }
	inline List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * get_layerMasks_9() const { return ___layerMasks_9; }
	inline List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B ** get_address_of_layerMasks_9() { return &___layerMasks_9; }
	inline void set_layerMasks_9(List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * value)
	{
		___layerMasks_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerMasks_9), (void*)value);
	}

	inline static int32_t get_offset_of_instanceCount_10() { return static_cast<int32_t>(offsetof(VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA, ___instanceCount_10)); }
	inline int32_t get_instanceCount_10() const { return ___instanceCount_10; }
	inline int32_t* get_address_of_instanceCount_10() { return &___instanceCount_10; }
	inline void set_instanceCount_10(int32_t value)
	{
		___instanceCount_10 = value;
	}
};


// sc.terrain.vegetationspawner.Cell
struct  Cell_tC218009E45576409E5AA876C2A7086E8CC17829E  : public RuntimeObject
{
public:
	// UnityEngine.Bounds sc.terrain.vegetationspawner.Cell::bounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds_0;
	// sc.terrain.vegetationspawner.Cell[0...,0...] sc.terrain.vegetationspawner.Cell::subCells
	CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* ___subCells_1;

public:
	inline static int32_t get_offset_of_bounds_0() { return static_cast<int32_t>(offsetof(Cell_tC218009E45576409E5AA876C2A7086E8CC17829E, ___bounds_0)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_bounds_0() const { return ___bounds_0; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_bounds_0() { return &___bounds_0; }
	inline void set_bounds_0(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___bounds_0 = value;
	}

	inline static int32_t get_offset_of_subCells_1() { return static_cast<int32_t>(offsetof(Cell_tC218009E45576409E5AA876C2A7086E8CC17829E, ___subCells_1)); }
	inline CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* get_subCells_1() const { return ___subCells_1; }
	inline CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC** get_address_of_subCells_1() { return &___subCells_1; }
	inline void set_subCells_1(CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* value)
	{
		___subCells_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subCells_1), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// sc.terrain.vegetationspawner.PoissonDisc
struct  PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688  : public RuntimeObject
{
public:

public:
};

struct PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector2> sc.terrain.vegetationspawner.PoissonDisc::samples
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___samples_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> sc.terrain.vegetationspawner.PoissonDisc::points
	List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___points_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> sc.terrain.vegetationspawner.PoissonDisc::spawnPoints
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___spawnPoints_4;
	// System.Int32[0...,0...] sc.terrain.vegetationspawner.PoissonDisc::grid
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___grid_5;
	// System.Single sc.terrain.vegetationspawner.PoissonDisc::cellSize
	float ___cellSize_6;
	// System.Single sc.terrain.vegetationspawner.PoissonDisc::radius
	float ___radius_7;
	// UnityEngine.Bounds sc.terrain.vegetationspawner.PoissonDisc::bounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds_8;

public:
	inline static int32_t get_offset_of_samples_2() { return static_cast<int32_t>(offsetof(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields, ___samples_2)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_samples_2() const { return ___samples_2; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_samples_2() { return &___samples_2; }
	inline void set_samples_2(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___samples_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___samples_2), (void*)value);
	}

	inline static int32_t get_offset_of_points_3() { return static_cast<int32_t>(offsetof(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields, ___points_3)); }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * get_points_3() const { return ___points_3; }
	inline List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 ** get_address_of_points_3() { return &___points_3; }
	inline void set_points_3(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * value)
	{
		___points_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_3), (void*)value);
	}

	inline static int32_t get_offset_of_spawnPoints_4() { return static_cast<int32_t>(offsetof(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields, ___spawnPoints_4)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_spawnPoints_4() const { return ___spawnPoints_4; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_spawnPoints_4() { return &___spawnPoints_4; }
	inline void set_spawnPoints_4(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___spawnPoints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPoints_4), (void*)value);
	}

	inline static int32_t get_offset_of_grid_5() { return static_cast<int32_t>(offsetof(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields, ___grid_5)); }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* get_grid_5() const { return ___grid_5; }
	inline Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17** get_address_of_grid_5() { return &___grid_5; }
	inline void set_grid_5(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* value)
	{
		___grid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_5), (void*)value);
	}

	inline static int32_t get_offset_of_cellSize_6() { return static_cast<int32_t>(offsetof(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields, ___cellSize_6)); }
	inline float get_cellSize_6() const { return ___cellSize_6; }
	inline float* get_address_of_cellSize_6() { return &___cellSize_6; }
	inline void set_cellSize_6(float value)
	{
		___cellSize_6 = value;
	}

	inline static int32_t get_offset_of_radius_7() { return static_cast<int32_t>(offsetof(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields, ___radius_7)); }
	inline float get_radius_7() const { return ___radius_7; }
	inline float* get_address_of_radius_7() { return &___radius_7; }
	inline void set_radius_7(float value)
	{
		___radius_7 = value;
	}

	inline static int32_t get_offset_of_bounds_8() { return static_cast<int32_t>(offsetof(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields, ___bounds_8)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_bounds_8() const { return ___bounds_8; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_bounds_8() { return &___bounds_8; }
	inline void set_bounds_8(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___bounds_8 = value;
	}
};


// UnityEngine.TerrainData
struct  TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields
{
public:
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_4;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_5;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_6;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_7;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailsPerRes
	int32_t ___k_MaximumDetailsPerRes_8;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_9;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_10;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_11;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_12;

public:
	inline static int32_t get_offset_of_k_MaximumResolution_4() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MaximumResolution_4)); }
	inline int32_t get_k_MaximumResolution_4() const { return ___k_MaximumResolution_4; }
	inline int32_t* get_address_of_k_MaximumResolution_4() { return &___k_MaximumResolution_4; }
	inline void set_k_MaximumResolution_4(int32_t value)
	{
		___k_MaximumResolution_4 = value;
	}

	inline static int32_t get_offset_of_k_MinimumDetailResolutionPerPatch_5() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MinimumDetailResolutionPerPatch_5)); }
	inline int32_t get_k_MinimumDetailResolutionPerPatch_5() const { return ___k_MinimumDetailResolutionPerPatch_5; }
	inline int32_t* get_address_of_k_MinimumDetailResolutionPerPatch_5() { return &___k_MinimumDetailResolutionPerPatch_5; }
	inline void set_k_MinimumDetailResolutionPerPatch_5(int32_t value)
	{
		___k_MinimumDetailResolutionPerPatch_5 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailResolutionPerPatch_6() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MaximumDetailResolutionPerPatch_6)); }
	inline int32_t get_k_MaximumDetailResolutionPerPatch_6() const { return ___k_MaximumDetailResolutionPerPatch_6; }
	inline int32_t* get_address_of_k_MaximumDetailResolutionPerPatch_6() { return &___k_MaximumDetailResolutionPerPatch_6; }
	inline void set_k_MaximumDetailResolutionPerPatch_6(int32_t value)
	{
		___k_MaximumDetailResolutionPerPatch_6 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailPatchCount_7() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MaximumDetailPatchCount_7)); }
	inline int32_t get_k_MaximumDetailPatchCount_7() const { return ___k_MaximumDetailPatchCount_7; }
	inline int32_t* get_address_of_k_MaximumDetailPatchCount_7() { return &___k_MaximumDetailPatchCount_7; }
	inline void set_k_MaximumDetailPatchCount_7(int32_t value)
	{
		___k_MaximumDetailPatchCount_7 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailsPerRes_8() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MaximumDetailsPerRes_8)); }
	inline int32_t get_k_MaximumDetailsPerRes_8() const { return ___k_MaximumDetailsPerRes_8; }
	inline int32_t* get_address_of_k_MaximumDetailsPerRes_8() { return &___k_MaximumDetailsPerRes_8; }
	inline void set_k_MaximumDetailsPerRes_8(int32_t value)
	{
		___k_MaximumDetailsPerRes_8 = value;
	}

	inline static int32_t get_offset_of_k_MinimumAlphamapResolution_9() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MinimumAlphamapResolution_9)); }
	inline int32_t get_k_MinimumAlphamapResolution_9() const { return ___k_MinimumAlphamapResolution_9; }
	inline int32_t* get_address_of_k_MinimumAlphamapResolution_9() { return &___k_MinimumAlphamapResolution_9; }
	inline void set_k_MinimumAlphamapResolution_9(int32_t value)
	{
		___k_MinimumAlphamapResolution_9 = value;
	}

	inline static int32_t get_offset_of_k_MaximumAlphamapResolution_10() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MaximumAlphamapResolution_10)); }
	inline int32_t get_k_MaximumAlphamapResolution_10() const { return ___k_MaximumAlphamapResolution_10; }
	inline int32_t* get_address_of_k_MaximumAlphamapResolution_10() { return &___k_MaximumAlphamapResolution_10; }
	inline void set_k_MaximumAlphamapResolution_10(int32_t value)
	{
		___k_MaximumAlphamapResolution_10 = value;
	}

	inline static int32_t get_offset_of_k_MinimumBaseMapResolution_11() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MinimumBaseMapResolution_11)); }
	inline int32_t get_k_MinimumBaseMapResolution_11() const { return ___k_MinimumBaseMapResolution_11; }
	inline int32_t* get_address_of_k_MinimumBaseMapResolution_11() { return &___k_MinimumBaseMapResolution_11; }
	inline void set_k_MinimumBaseMapResolution_11(int32_t value)
	{
		___k_MinimumBaseMapResolution_11 = value;
	}

	inline static int32_t get_offset_of_k_MaximumBaseMapResolution_12() { return static_cast<int32_t>(offsetof(TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4_StaticFields, ___k_MaximumBaseMapResolution_12)); }
	inline int32_t get_k_MaximumBaseMapResolution_12() const { return ___k_MaximumBaseMapResolution_12; }
	inline int32_t* get_address_of_k_MaximumBaseMapResolution_12() { return &___k_MaximumBaseMapResolution_12; }
	inline void set_k_MaximumBaseMapResolution_12(int32_t value)
	{
		___k_MaximumBaseMapResolution_12 = value;
	}
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab
struct  GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A  : public VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA
{
public:
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::index
	int32_t ___index_11;
	// sc.terrain.vegetationspawner.SpawnerBase/GrassType sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::type
	int32_t ___type_12;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::renderAsBillboard
	bool ___renderAsBillboard_13;
	// UnityEngine.GameObject sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_14;
	// UnityEngine.Texture2D sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::billboard
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___billboard_15;
	// UnityEngine.Color sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::mainColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___mainColor_16;
	// UnityEngine.Color sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::secondaryColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___secondaryColor_17;
	// System.Boolean sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::linkColors
	bool ___linkColors_18;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::minMaxHeight
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___minMaxHeight_19;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::minMaxWidth
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___minMaxWidth_20;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::noiseSize
	float ___noiseSize_21;

public:
	inline static int32_t get_offset_of_index_11() { return static_cast<int32_t>(offsetof(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A, ___index_11)); }
	inline int32_t get_index_11() const { return ___index_11; }
	inline int32_t* get_address_of_index_11() { return &___index_11; }
	inline void set_index_11(int32_t value)
	{
		___index_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A, ___type_12)); }
	inline int32_t get_type_12() const { return ___type_12; }
	inline int32_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(int32_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_renderAsBillboard_13() { return static_cast<int32_t>(offsetof(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A, ___renderAsBillboard_13)); }
	inline bool get_renderAsBillboard_13() const { return ___renderAsBillboard_13; }
	inline bool* get_address_of_renderAsBillboard_13() { return &___renderAsBillboard_13; }
	inline void set_renderAsBillboard_13(bool value)
	{
		___renderAsBillboard_13 = value;
	}

	inline static int32_t get_offset_of_prefab_14() { return static_cast<int32_t>(offsetof(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A, ___prefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_14() const { return ___prefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_14() { return &___prefab_14; }
	inline void set_prefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_billboard_15() { return static_cast<int32_t>(offsetof(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A, ___billboard_15)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_billboard_15() const { return ___billboard_15; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_billboard_15() { return &___billboard_15; }
	inline void set_billboard_15(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___billboard_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___billboard_15), (void*)value);
	}

	inline static int32_t get_offset_of_mainColor_16() { return static_cast<int32_t>(offsetof(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A, ___mainColor_16)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_mainColor_16() const { return ___mainColor_16; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_mainColor_16() { return &___mainColor_16; }
	inline void set_mainColor_16(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___mainColor_16 = value;
	}

	inline static int32_t get_offset_of_secondaryColor_17() { return static_cast<int32_t>(offsetof(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A, ___secondaryColor_17)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_secondaryColor_17() const { return ___secondaryColor_17; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_secondaryColor_17() { return &___secondaryColor_17; }
	inline void set_secondaryColor_17(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___secondaryColor_17 = value;
	}

	inline static int32_t get_offset_of_linkColors_18() { return static_cast<int32_t>(offsetof(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A, ___linkColors_18)); }
	inline bool get_linkColors_18() const { return ___linkColors_18; }
	inline bool* get_address_of_linkColors_18() { return &___linkColors_18; }
	inline void set_linkColors_18(bool value)
	{
		___linkColors_18 = value;
	}

	inline static int32_t get_offset_of_minMaxHeight_19() { return static_cast<int32_t>(offsetof(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A, ___minMaxHeight_19)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_minMaxHeight_19() const { return ___minMaxHeight_19; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_minMaxHeight_19() { return &___minMaxHeight_19; }
	inline void set_minMaxHeight_19(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___minMaxHeight_19 = value;
	}

	inline static int32_t get_offset_of_minMaxWidth_20() { return static_cast<int32_t>(offsetof(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A, ___minMaxWidth_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_minMaxWidth_20() const { return ___minMaxWidth_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_minMaxWidth_20() { return &___minMaxWidth_20; }
	inline void set_minMaxWidth_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___minMaxWidth_20 = value;
	}

	inline static int32_t get_offset_of_noiseSize_21() { return static_cast<int32_t>(offsetof(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A, ___noiseSize_21)); }
	inline float get_noiseSize_21() const { return ___noiseSize_21; }
	inline float* get_address_of_noiseSize_21() { return &___noiseSize_21; }
	inline void set_noiseSize_21(float value)
	{
		___noiseSize_21 = value;
	}
};


// sc.terrain.vegetationspawner.SpawnerBase/TreeType
struct  TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554  : public VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> sc.terrain.vegetationspawner.SpawnerBase/TreeType::spawnPoints
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___spawnPoints_11;
	// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab> sc.terrain.vegetationspawner.SpawnerBase/TreeType::prefabs
	List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * ___prefabs_12;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TreeType::distance
	float ___distance_13;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.SpawnerBase/TreeType::scaleRange
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___scaleRange_14;
	// System.Single sc.terrain.vegetationspawner.SpawnerBase/TreeType::sinkAmount
	float ___sinkAmount_15;

public:
	inline static int32_t get_offset_of_spawnPoints_11() { return static_cast<int32_t>(offsetof(TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554, ___spawnPoints_11)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_spawnPoints_11() const { return ___spawnPoints_11; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_spawnPoints_11() { return &___spawnPoints_11; }
	inline void set_spawnPoints_11(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___spawnPoints_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPoints_11), (void*)value);
	}

	inline static int32_t get_offset_of_prefabs_12() { return static_cast<int32_t>(offsetof(TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554, ___prefabs_12)); }
	inline List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * get_prefabs_12() const { return ___prefabs_12; }
	inline List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 ** get_address_of_prefabs_12() { return &___prefabs_12; }
	inline void set_prefabs_12(List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * value)
	{
		___prefabs_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefabs_12), (void*)value);
	}

	inline static int32_t get_offset_of_distance_13() { return static_cast<int32_t>(offsetof(TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554, ___distance_13)); }
	inline float get_distance_13() const { return ___distance_13; }
	inline float* get_address_of_distance_13() { return &___distance_13; }
	inline void set_distance_13(float value)
	{
		___distance_13 = value;
	}

	inline static int32_t get_offset_of_scaleRange_14() { return static_cast<int32_t>(offsetof(TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554, ___scaleRange_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_scaleRange_14() const { return ___scaleRange_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_scaleRange_14() { return &___scaleRange_14; }
	inline void set_scaleRange_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___scaleRange_14 = value;
	}

	inline static int32_t get_offset_of_sinkAmount_15() { return static_cast<int32_t>(offsetof(TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554, ___sinkAmount_15)); }
	inline float get_sinkAmount_15() const { return ___sinkAmount_15; }
	inline float* get_address_of_sinkAmount_15() { return &___sinkAmount_15; }
	inline void set_sinkAmount_15(float value)
	{
		___sinkAmount_15 = value;
	}
};


// System.Func`2<UnityEngine.TreeInstance,System.Boolean>
struct  Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.TreeInstance>
struct  Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn
struct  OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3  : public MulticastDelegate_t
{
public:

public:
};


// sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn
struct  OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Terrain
struct  Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// sc.terrain.vegetationspawner.SpawnerBase
struct  SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase::seed
	int32_t ___seed_4;
	// System.Collections.Generic.List`1<UnityEngine.Terrain> sc.terrain.vegetationspawner.SpawnerBase::terrains
	List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * ___terrains_5;
	// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreeType> sc.terrain.vegetationspawner.SpawnerBase::treeTypes
	List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * ___treeTypes_6;
	// System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab> sc.terrain.vegetationspawner.SpawnerBase::grassPrefabs
	List_1_t868FA79F2DD4048265354F01579A6C5503166310 * ___grassPrefabs_7;
	// sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings sc.terrain.vegetationspawner.SpawnerBase::terrainSettings
	TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * ___terrainSettings_8;

public:
	inline static int32_t get_offset_of_seed_4() { return static_cast<int32_t>(offsetof(SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E, ___seed_4)); }
	inline int32_t get_seed_4() const { return ___seed_4; }
	inline int32_t* get_address_of_seed_4() { return &___seed_4; }
	inline void set_seed_4(int32_t value)
	{
		___seed_4 = value;
	}

	inline static int32_t get_offset_of_terrains_5() { return static_cast<int32_t>(offsetof(SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E, ___terrains_5)); }
	inline List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * get_terrains_5() const { return ___terrains_5; }
	inline List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C ** get_address_of_terrains_5() { return &___terrains_5; }
	inline void set_terrains_5(List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * value)
	{
		___terrains_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrains_5), (void*)value);
	}

	inline static int32_t get_offset_of_treeTypes_6() { return static_cast<int32_t>(offsetof(SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E, ___treeTypes_6)); }
	inline List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * get_treeTypes_6() const { return ___treeTypes_6; }
	inline List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C ** get_address_of_treeTypes_6() { return &___treeTypes_6; }
	inline void set_treeTypes_6(List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * value)
	{
		___treeTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___treeTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_grassPrefabs_7() { return static_cast<int32_t>(offsetof(SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E, ___grassPrefabs_7)); }
	inline List_1_t868FA79F2DD4048265354F01579A6C5503166310 * get_grassPrefabs_7() const { return ___grassPrefabs_7; }
	inline List_1_t868FA79F2DD4048265354F01579A6C5503166310 ** get_address_of_grassPrefabs_7() { return &___grassPrefabs_7; }
	inline void set_grassPrefabs_7(List_1_t868FA79F2DD4048265354F01579A6C5503166310 * value)
	{
		___grassPrefabs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grassPrefabs_7), (void*)value);
	}

	inline static int32_t get_offset_of_terrainSettings_8() { return static_cast<int32_t>(offsetof(SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E, ___terrainSettings_8)); }
	inline TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * get_terrainSettings_8() const { return ___terrainSettings_8; }
	inline TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F ** get_address_of_terrainSettings_8() { return &___terrainSettings_8; }
	inline void set_terrainSettings_8(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * value)
	{
		___terrainSettings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrainSettings_8), (void*)value);
	}
};

struct SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_StaticFields
{
public:
	// System.Int32 sc.terrain.vegetationspawner.SpawnerBase::recursionCounter
	int32_t ___recursionCounter_9;

public:
	inline static int32_t get_offset_of_recursionCounter_9() { return static_cast<int32_t>(offsetof(SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_StaticFields, ___recursionCounter_9)); }
	inline int32_t get_recursionCounter_9() const { return ___recursionCounter_9; }
	inline int32_t* get_address_of_recursionCounter_9() { return &___recursionCounter_9; }
	inline void set_recursionCounter_9(int32_t value)
	{
		___recursionCounter_9 = value;
	}
};


// sc.terrain.vegetationspawner.VegetationSpawner
struct  VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454  : public SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E
{
public:
	// System.Int32 sc.terrain.vegetationspawner.VegetationSpawner::cellSize
	int32_t ___cellSize_10;
	// System.Int32 sc.terrain.vegetationspawner.VegetationSpawner::cellDivisions
	int32_t ___cellDivisions_11;
	// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner::highPrecisionCollision
	bool ___highPrecisionCollision_14;
	// UnityEngine.LayerMask sc.terrain.vegetationspawner.VegetationSpawner::collisionLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___collisionLayerMask_15;
	// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner::autoRespawnTrees
	bool ___autoRespawnTrees_16;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[0...,0...]> sc.terrain.vegetationspawner.VegetationSpawner::terrainCells
	Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * ___terrainCells_19;
	// UnityEngine.Vector2 sc.terrain.vegetationspawner.VegetationSpawner::terrainMinMaxHeight
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___terrainMinMaxHeight_20;
	// System.Int32 sc.terrain.vegetationspawner.VegetationSpawner::detailResolution
	int32_t ___detailResolution_21;
	// System.Int32 sc.terrain.vegetationspawner.VegetationSpawner::detailResolutionIndex
	int32_t ___detailResolutionIndex_22;
	// System.Int32 sc.terrain.vegetationspawner.VegetationSpawner::grassPatchSize
	int32_t ___grassPatchSize_23;
	// System.Int32 sc.terrain.vegetationspawner.VegetationSpawner::grassPatchSizeIndex
	int32_t ___grassPatchSizeIndex_24;
	// UnityEngine.Collider[] sc.terrain.vegetationspawner.VegetationSpawner::tempColliders
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___tempColliders_25;
	// System.Single sc.terrain.vegetationspawner.VegetationSpawner::waterHeight
	float ___waterHeight_26;

public:
	inline static int32_t get_offset_of_cellSize_10() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___cellSize_10)); }
	inline int32_t get_cellSize_10() const { return ___cellSize_10; }
	inline int32_t* get_address_of_cellSize_10() { return &___cellSize_10; }
	inline void set_cellSize_10(int32_t value)
	{
		___cellSize_10 = value;
	}

	inline static int32_t get_offset_of_cellDivisions_11() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___cellDivisions_11)); }
	inline int32_t get_cellDivisions_11() const { return ___cellDivisions_11; }
	inline int32_t* get_address_of_cellDivisions_11() { return &___cellDivisions_11; }
	inline void set_cellDivisions_11(int32_t value)
	{
		___cellDivisions_11 = value;
	}

	inline static int32_t get_offset_of_highPrecisionCollision_14() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___highPrecisionCollision_14)); }
	inline bool get_highPrecisionCollision_14() const { return ___highPrecisionCollision_14; }
	inline bool* get_address_of_highPrecisionCollision_14() { return &___highPrecisionCollision_14; }
	inline void set_highPrecisionCollision_14(bool value)
	{
		___highPrecisionCollision_14 = value;
	}

	inline static int32_t get_offset_of_collisionLayerMask_15() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___collisionLayerMask_15)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_collisionLayerMask_15() const { return ___collisionLayerMask_15; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_collisionLayerMask_15() { return &___collisionLayerMask_15; }
	inline void set_collisionLayerMask_15(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___collisionLayerMask_15 = value;
	}

	inline static int32_t get_offset_of_autoRespawnTrees_16() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___autoRespawnTrees_16)); }
	inline bool get_autoRespawnTrees_16() const { return ___autoRespawnTrees_16; }
	inline bool* get_address_of_autoRespawnTrees_16() { return &___autoRespawnTrees_16; }
	inline void set_autoRespawnTrees_16(bool value)
	{
		___autoRespawnTrees_16 = value;
	}

	inline static int32_t get_offset_of_terrainCells_19() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___terrainCells_19)); }
	inline Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * get_terrainCells_19() const { return ___terrainCells_19; }
	inline Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 ** get_address_of_terrainCells_19() { return &___terrainCells_19; }
	inline void set_terrainCells_19(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * value)
	{
		___terrainCells_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___terrainCells_19), (void*)value);
	}

	inline static int32_t get_offset_of_terrainMinMaxHeight_20() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___terrainMinMaxHeight_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_terrainMinMaxHeight_20() const { return ___terrainMinMaxHeight_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_terrainMinMaxHeight_20() { return &___terrainMinMaxHeight_20; }
	inline void set_terrainMinMaxHeight_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___terrainMinMaxHeight_20 = value;
	}

	inline static int32_t get_offset_of_detailResolution_21() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___detailResolution_21)); }
	inline int32_t get_detailResolution_21() const { return ___detailResolution_21; }
	inline int32_t* get_address_of_detailResolution_21() { return &___detailResolution_21; }
	inline void set_detailResolution_21(int32_t value)
	{
		___detailResolution_21 = value;
	}

	inline static int32_t get_offset_of_detailResolutionIndex_22() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___detailResolutionIndex_22)); }
	inline int32_t get_detailResolutionIndex_22() const { return ___detailResolutionIndex_22; }
	inline int32_t* get_address_of_detailResolutionIndex_22() { return &___detailResolutionIndex_22; }
	inline void set_detailResolutionIndex_22(int32_t value)
	{
		___detailResolutionIndex_22 = value;
	}

	inline static int32_t get_offset_of_grassPatchSize_23() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___grassPatchSize_23)); }
	inline int32_t get_grassPatchSize_23() const { return ___grassPatchSize_23; }
	inline int32_t* get_address_of_grassPatchSize_23() { return &___grassPatchSize_23; }
	inline void set_grassPatchSize_23(int32_t value)
	{
		___grassPatchSize_23 = value;
	}

	inline static int32_t get_offset_of_grassPatchSizeIndex_24() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___grassPatchSizeIndex_24)); }
	inline int32_t get_grassPatchSizeIndex_24() const { return ___grassPatchSizeIndex_24; }
	inline int32_t* get_address_of_grassPatchSizeIndex_24() { return &___grassPatchSizeIndex_24; }
	inline void set_grassPatchSizeIndex_24(int32_t value)
	{
		___grassPatchSizeIndex_24 = value;
	}

	inline static int32_t get_offset_of_tempColliders_25() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___tempColliders_25)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get_tempColliders_25() const { return ___tempColliders_25; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of_tempColliders_25() { return &___tempColliders_25; }
	inline void set_tempColliders_25(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		___tempColliders_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tempColliders_25), (void*)value);
	}

	inline static int32_t get_offset_of_waterHeight_26() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454, ___waterHeight_26)); }
	inline float get_waterHeight_26() const { return ___waterHeight_26; }
	inline float* get_address_of_waterHeight_26() { return &___waterHeight_26; }
	inline void set_waterHeight_26(float value)
	{
		___waterHeight_26 = value;
	}
};

struct VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields
{
public:
	// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner::VisualizeCells
	bool ___VisualizeCells_12;
	// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner::VisualizeWaterlevel
	bool ___VisualizeWaterlevel_13;
	// sc.terrain.vegetationspawner.VegetationSpawner sc.terrain.vegetationspawner.VegetationSpawner::Current
	VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * ___Current_18;
	// sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn sc.terrain.vegetationspawner.VegetationSpawner::onTreeRespawn
	OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * ___onTreeRespawn_27;
	// sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn sc.terrain.vegetationspawner.VegetationSpawner::onGrassRespawn
	OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * ___onGrassRespawn_28;
	// UnityEngine.Vector2Int sc.terrain.vegetationspawner.VegetationSpawner::splatmapTexelIndex
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___splatmapTexelIndex_29;
	// UnityEngine.Color sc.terrain.vegetationspawner.VegetationSpawner::m_splatmapColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_splatmapColor_30;

public:
	inline static int32_t get_offset_of_VisualizeCells_12() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields, ___VisualizeCells_12)); }
	inline bool get_VisualizeCells_12() const { return ___VisualizeCells_12; }
	inline bool* get_address_of_VisualizeCells_12() { return &___VisualizeCells_12; }
	inline void set_VisualizeCells_12(bool value)
	{
		___VisualizeCells_12 = value;
	}

	inline static int32_t get_offset_of_VisualizeWaterlevel_13() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields, ___VisualizeWaterlevel_13)); }
	inline bool get_VisualizeWaterlevel_13() const { return ___VisualizeWaterlevel_13; }
	inline bool* get_address_of_VisualizeWaterlevel_13() { return &___VisualizeWaterlevel_13; }
	inline void set_VisualizeWaterlevel_13(bool value)
	{
		___VisualizeWaterlevel_13 = value;
	}

	inline static int32_t get_offset_of_Current_18() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields, ___Current_18)); }
	inline VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * get_Current_18() const { return ___Current_18; }
	inline VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 ** get_address_of_Current_18() { return &___Current_18; }
	inline void set_Current_18(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * value)
	{
		___Current_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Current_18), (void*)value);
	}

	inline static int32_t get_offset_of_onTreeRespawn_27() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields, ___onTreeRespawn_27)); }
	inline OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * get_onTreeRespawn_27() const { return ___onTreeRespawn_27; }
	inline OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 ** get_address_of_onTreeRespawn_27() { return &___onTreeRespawn_27; }
	inline void set_onTreeRespawn_27(OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * value)
	{
		___onTreeRespawn_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onTreeRespawn_27), (void*)value);
	}

	inline static int32_t get_offset_of_onGrassRespawn_28() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields, ___onGrassRespawn_28)); }
	inline OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * get_onGrassRespawn_28() const { return ___onGrassRespawn_28; }
	inline OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 ** get_address_of_onGrassRespawn_28() { return &___onGrassRespawn_28; }
	inline void set_onGrassRespawn_28(OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * value)
	{
		___onGrassRespawn_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onGrassRespawn_28), (void*)value);
	}

	inline static int32_t get_offset_of_splatmapTexelIndex_29() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields, ___splatmapTexelIndex_29)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_splatmapTexelIndex_29() const { return ___splatmapTexelIndex_29; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_splatmapTexelIndex_29() { return &___splatmapTexelIndex_29; }
	inline void set_splatmapTexelIndex_29(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___splatmapTexelIndex_29 = value;
	}

	inline static int32_t get_offset_of_m_splatmapColor_30() { return static_cast<int32_t>(offsetof(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields, ___m_splatmapColor_30)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_splatmapColor_30() const { return ___m_splatmapColor_30; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_splatmapColor_30() { return &___m_splatmapColor_30; }
	inline void set_m_splatmapColor_30(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_splatmapColor_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// sc.terrain.vegetationspawner.Cell[0...,0...]
struct CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * m_Items[1];

public:
	inline Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Cell_tC218009E45576409E5AA876C2A7086E8CC17829E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Cell_tC218009E45576409E5AA876C2A7086E8CC17829E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Cell_tC218009E45576409E5AA876C2A7086E8CC17829E ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Cell_tC218009E45576409E5AA876C2A7086E8CC17829E ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[0...,0...]
struct Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
	inline int32_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, int32_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// UnityEngine.TreeInstance[]
struct TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  m_Items[1];

public:
	inline TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.TreePrototype[]
struct TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * m_Items[1];

public:
	inline TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * m_Items[1];

public:
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.DetailPrototype[]
struct DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * m_Items[1];

public:
	inline DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_gshared_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_gshared_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m3FE0140B2EA3ACE813701577E2A73D337F640CA8_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.TreeInstance,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m9B44BB9D07E6A9A0CBADB3393C2A9BEA17CC8E0D_gshared (Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.TreeInstance>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_m30B6D63B7C50B3BCE25F0EF72D8C87391D1644DA_gshared (RuntimeObject* ___source0, Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA * ___predicate1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.TreeInstance>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* Enumerable_ToArray_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_mAE13A7F62E684A96957FF38FEC097CE5963FB601_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.TreeInstance>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7097AC1F2ED336D752E577B054841ECA6B5BBD93_gshared (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Predicate`1<UnityEngine.TreeInstance>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_mC9C38EB409403C7B88175B017DA376752FF95029_gshared (Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TreeInstance>::RemoveAll(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m15A35FE88025F5BE41030782B5520A1001A291E7_gshared (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * __this, Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4 * ___match0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TreeInstance>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m805BCA48AB339EA259A0596DAE5D44D41ECF29E4_gshared_inline (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_gshared_inline (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.TreeInstance>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAB711B779EE61A74EC5415D51D6538FF7506D308_gshared (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * __this, TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_gshared (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13_gshared (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.TreeInstance>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* List_1_ToArray_m21F17D5E7482A64132A302B9DA52A1E5E200B1F6_gshared (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// sc.terrain.vegetationspawner.Cell sc.terrain.vegetationspawner.Cell::New(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * Cell_New_mB05BF98AD6CDCB99AFAB882A320A3A46D223A2CB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___wPos0, float ___size1, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.Cell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell__ctor_mE1E0F53FDBEDA2E9AB8058FE765EFFADC9C8ACDC (Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_size_mEDB113237CED433C65294B534EAD30449277FD18 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_center_mAC54A53224BBEFE37A4387DCBD0EF3774751221E (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TerrainData_get_size_mF68B76A49498AE26C506D77483EA81E4F816EB15 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.TerrainData::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  TerrainData_get_bounds_m7605D60F3DFC69491226E46AA6B4CB150F02161C (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F (float ___f0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
inline void List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// System.Void UnityEngine.Random::InitState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C (int32_t ___seed0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(!0)
inline void List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , const RuntimeMethod*))List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, int32_t, const RuntimeMethod*))List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector2 sc.terrain.vegetationspawner.PoissonDisc::RandomPointOnAnnulus(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PoissonDisc_RandomPointOnAnnulus_mF5B5759181053E1BD01BF157D2C14AED30910D80 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center0, const RuntimeMethod* method);
// System.Boolean sc.terrain.vegetationspawner.PoissonDisc::ValidSample(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoissonDisc_ValidSample_m4D683A9C38E39AE518D0E7BD038D6E14466DF7EE (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___sample0, const RuntimeMethod* method);
// UnityEngine.Vector3 sc.terrain.vegetationspawner.PoissonDisc::CreateSpawnPoint(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PoissonDisc_CreateSpawnPoint_m3CDD10D3AEB4807297833BE0115A8215A5D68A39 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___t0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.PoissonDisc::PositionToGridCoord(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  PoissonDisc_PositionToGridCoord_mF1FDD95BEEEDEDF08AD0CF0D127776EB6F43C508 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3FE0140B2EA3ACE813701577E2A73D337F640CA8 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m3FE0140B2EA3ACE813701577E2A73D337F640CA8_gshared)(__this, ___index0, method);
}
// System.Boolean sc.terrain.vegetationspawner.PoissonDisc::InsideBounds(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoissonDisc_InsideBounds_mEE325B3FDAD22AB96E1C13D9EC06FABD983E7D07 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB (RuntimeArray * __this, int32_t ___dimension0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Boolean sc.terrain.vegetationspawner.PoissonDisc::OutsideRadius(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoissonDisc_OutsideRadius_m19C45BB7F9957463DC99CC4C1C5597CD32AA75D4 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Terrain::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Terrain_GetPosition_m4226105D0DBD8947B8800559E8E53C8479AC4825 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_gshared)(__this, method);
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainSettings__ctor_m5B3E2A13FB4ACE85C5EBCE3F6F5170DB1FE43D79 (TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * __this, const RuntimeMethod* method);
// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab sc.terrain.vegetationspawner.SpawnerBase::PickTreeRecursive(sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * SpawnerBase_PickTreeRecursive_m1FAC30EF8C7C506F1B5C9F58EFCE1D8D7F3FB52F (TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * ___treeType0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::get_Count()
inline int32_t List_1_get_Count_m1E15530AA28DA76DD9909083CA672047C42944E0_inline (List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::get_Item(System.Int32)
inline TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * List_1_get_Item_m12630212D3819AD8AD72E2EB189EE84254B7DD2A_inline (List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * (*) (List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Terrain>::GetEnumerator()
inline Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556 (List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  (*) (List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Terrain>::get_Current()
inline Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_inline (Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 * __this, const RuntimeMethod* method)
{
	return ((  Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * (*) (Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Terrain::set_drawTreesAndFoliage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_drawTreesAndFoliage_m21CC0250153F931F96725F395F3450EF4553B929 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Terrain::set_treeMaximumFullLODCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_treeMaximumFullLODCount_m2B151A511B6136505C7068350AC559B009B52995 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Terrain::set_preserveTreePrototypeLayers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_preserveTreePrototypeLayers_m110DBE87E7078B49BBB97AC3E56E25FED10E6F7E (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Terrain::set_treeBillboardDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_treeBillboardDistance_m60BBE7FBD4B66661E02C4848EA912390DCA5F0D8 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Terrain::set_treeDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_treeDistance_m1B8BFC8FC1B85FB4CBD0C9D45E52EB4702DED208 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Terrain::set_detailObjectDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_detailObjectDistance_mAECD68D012A05C8E16027801F6B21CEA355BC93E (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Terrain::set_detailObjectDensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_set_detailObjectDensity_m691B49AD24E50A707AD67D4D5A0563F24E754803 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::set_wavingGrassAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassAmount_mAFF6E400285EBF7DF43598BBA21C5287AAD3F75C (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::set_wavingGrassStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassStrength_m72E08DA3366F9DD3654A2E184D67EB85BA333E95 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::set_wavingGrassSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassSpeed_m634973510A3F4984F8EEF721D82B4A3D50CD0771 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::set_wavingGrassTint(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_wavingGrassTint_mE9D4933506404148435C5D04F90D35B42A55F6FE (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Terrain>::MoveNext()
inline bool Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F (Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Terrain>::Dispose()
inline void Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1 (Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Terrain>::get_Item(System.Int32)
inline Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * List_1_get_Item_m4486B34786432CD9C1F27AB4F109B1A1DD655211_inline (List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * (*) (List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Terrain>::get_Count()
inline int32_t List_1_get_Count_m1324B1A88A743144CEA79C190309E6F31208258C_inline (List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Terrain>::.ctor()
inline void List_1__ctor_mA3C067389B7E10ABABFDCEA76BD81B7CBA414BB6 (List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreeType>::.ctor()
inline void List_1__ctor_m827AB1CFAFE8AF5AD4E8A9804055C7074C96642B (List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::.ctor()
inline void List_1__ctor_m363BF8E74346EE20B9B4AE4F1F909214DD3B9268 (List_1_t868FA79F2DD4048265354F01579A6C5503166310 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t868FA79F2DD4048265354F01579A6C5503166310 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.TerrainData::get_heightmapTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * TerrainData_get_heightmapTexture_mC373042EB6C6377F2D7B85FAD16E2AE506E14BC9 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.TerrainData::GetHeight(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainData_GetHeight_m4992CEC7726222DBAA186191FC1C90C3998E6CF1 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.TerrainData::GetSteepness(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainData_GetSteepness_m593B1A252175BE0EED366A3C954B3F2C900F6734 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single sc.terrain.vegetationspawner.TerrainSampler::GetAverageSlope(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_GetAverageSlope_mD9C9E868C100AF01EA2B6DD1A30024C6CF885C5B (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, const RuntimeMethod* method);
// System.Int32 UnityEngine.TerrainData::get_detailResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_detailResolution_m703347DFEDD40D64A30CC99CE4CCDF305B1ACD72 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TerrainData::get_alphamapWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapWidth_mF5F5841BF2FA744E5CDEFE0E639E5A6E83943A0C (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TerrainData::get_alphamapHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_alphamapHeight_m7C1CBEC752801B973599E9509BB8DBDA1CDA756D (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TerrainData::get_detailWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_detailWidth_m1F0EEDA4E902C5B77142D5F63DBE20B0EB20562C (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TerrainData::get_detailHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_detailHeight_m52322CB3B104B073977E18A26480BE483EDB46E8 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.TerrainData::get_heightmapResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TerrainData_get_heightmapResolution_mF665E4416056AEA15E008E37A814D02BED01FCF4 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.TerrainData::GetInterpolatedNormal(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TerrainData_GetInterpolatedNormal_m18A29D6F5560F4BBBAA0AF3801FD5355E4697965 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.TerrainSampler/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mCFA0759AD76058397EF241DA45FC70A1D0C380B0 (U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1 * __this, const RuntimeMethod* method);
// UnityEngine.TreePrototype[] UnityEngine.TerrainData::get_treePrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* TerrainData_get_treePrototypes_mE083138D9260AD480EBB794632142BC68D4533C7 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.TreePrototype::get_prefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * TreePrototype_get_prefab_mC0D926D4AFCF488765F39348C08C93BEA94A7C99 (TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * __this, const RuntimeMethod* method);
// UnityEngine.TreeInstance[] UnityEngine.TerrainData::get_treeInstances()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* TerrainData_get_treeInstances_m77CBBB2E2D422ABCE4461184A73F80AA03F38F21 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<UnityEngine.TreeInstance,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m9B44BB9D07E6A9A0CBADB3393C2A9BEA17CC8E0D (Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m9B44BB9D07E6A9A0CBADB3393C2A9BEA17CC8E0D_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<UnityEngine.TreeInstance>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_m30B6D63B7C50B3BCE25F0EF72D8C87391D1644DA (RuntimeObject* ___source0, Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA *, const RuntimeMethod*))Enumerable_Where_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_m30B6D63B7C50B3BCE25F0EF72D8C87391D1644DA_gshared)(___source0, ___predicate1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<UnityEngine.TreeInstance>(System.Collections.Generic.IEnumerable`1<!!0>)
inline TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* Enumerable_ToArray_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_mAE13A7F62E684A96957FF38FEC097CE5963FB601 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_mAE13A7F62E684A96957FF38FEC097CE5963FB601_gshared)(___source0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[0...,0...]>::get_Count()
inline int32_t Dictionary_2_get_Count_mF38058353BA0E4FFE0A25A3A9C7D7168449945C7 (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 *, const RuntimeMethod*))Dictionary_2_get_Count_m1B599EE742A00E8D399B43E225AD4C6571FBC8DA_gshared)(__this, method);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RebuildCollisionCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RebuildCollisionCache_mE1B44C810AA4A339BE6EFC1BDD6BBFE91FB32621 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[0...,0...]>::Clear()
inline void Dictionary_2_Clear_m95A609BC172A70468CBCE2C4FEFB5A4A621C01C6 (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 sc.terrain.vegetationspawner.TerrainSampler::GetNormalizedPosition(UnityEngine.Terrain,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TerrainSampler_GetNormalizedPosition_mF6BB9367E5679F31FA05FC81793094C166DC027F (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition1, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.TerrainSampler::SampleHeight(UnityEngine.Terrain,UnityEngine.Vector2,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainSampler_SampleHeight_m066CA886AB9C1DC2813773FD91BB08380711D8B8 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, float* ___height2, float* ___worldHeight3, float* ___normalizedHeight4, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.Cell::Subdivide(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_Subdivide_m61247BFE1E80546D2981E383BABBACA6892DC439 (Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * __this, int32_t ___divisions0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCBD5F7D498C246713EDDBB446E97205DA206C49C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[0...,0...]>::Add(!0,!1)
inline void Dictionary_2_Add_m61D20897BACDEB8B33E823A8C943D9C0D039D9D1 (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___key0, CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 *, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 *, CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[0...,0...]>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mF2FCFB39A1F3969A4F2A22FB82FD9F0B0FC921B9 (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 *, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[0...,0...]>::get_Item(!0)
inline CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* Dictionary_2_get_Item_mAC1368B0A50168E41BF5E79CFCFF0916E2608092 (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___key0, const RuntimeMethod* method)
{
	return ((  CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* (*) (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 *, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 *, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.Cell::PositionToCellIndex(UnityEngine.Terrain,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Cell_PositionToCellIndex_m95478F152766BEA683620B056B7BF41D4191D7D9 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalizedPos1, int32_t ___cellSize2, const RuntimeMethod* method);
// sc.terrain.vegetationspawner.Cell sc.terrain.vegetationspawner.Cell::GetSubcell(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * Cell_GetSubcell_m11A2CAC299982C982325D27B901BBBF4681A0499 (Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPos0, float ___cellSize1, int32_t ___subDivisions2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.DetailPrototype>::.ctor()
inline void List_1__ctor_mD05861CB441B51B66CC7BE1D4EE47451402DE21C (List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::GetEnumerator()
inline Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034  List_1_GetEnumerator_m424703C0B126BA08F0AFD5C79573A6189B04C23A (List_1_t868FA79F2DD4048265354F01579A6C5503166310 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034  (*) (List_1_t868FA79F2DD4048265354F01579A6C5503166310 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::get_Current()
inline GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * Enumerator_get_Current_mEBBC026AC7250C41C498697AB2A25E6488D98070_inline (Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 * __this, const RuntimeMethod* method)
{
	return ((  GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * (*) (Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.DetailPrototype::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype__ctor_mDCC981CE17058DEFC1C178B456B8D641BD3853BF (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * __this, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::UpdateGrassItem(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,UnityEngine.DetailPrototype)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_UpdateGrassItem_mCD05E85DD9E13A854C1D63EEDE696F528C325F8A (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___item0, DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * ___d1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.DetailPrototype>::Add(!0)
inline void List_1_Add_m88CF0236FEFF3E7778D28555AE60D8747E658307 (List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 * __this, DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 *, DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::MoveNext()
inline bool Enumerator_MoveNext_mC68653D21A679CDBC43710B0F2F4EA9D13626079 (Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab>::Dispose()
inline void Enumerator_Dispose_mD7D430F523AFBCF33E1A00E9116FB57399D693ED (Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.DetailPrototype>::get_Count()
inline int32_t List_1_get_Count_m2ED5C0182B69FFD97B850EB77276F5F7BBE9D28B_inline (List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.DetailPrototype>::ToArray()
inline DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* List_1_ToArray_m31E93B06A427F3AA7ED8222B54D2B17F1BEDBDCF (List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 * __this, const RuntimeMethod* method)
{
	return ((  DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* (*) (List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void UnityEngine.TerrainData::set_detailPrototypes(UnityEngine.DetailPrototype[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_detailPrototypes_mCA1DF994D64F81843C19E60A75C5B96F516AAD12 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* ___value0, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RefreshGrassPrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RefreshGrassPrototypes_mFC10B0B98A875DB41261EF1572E4749896F47527 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.SpawnerBase::InitializeSeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase_InitializeSeed_m4618B0BB1EDC888BAA11FEB519945F109FA41DEC (SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E * __this, int32_t ___start0, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnGrass(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnGrass_m4B3E3542A4A4CC527FE097709BFEB2B3E6627494 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___item0, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___targetTerrain1, const RuntimeMethod* method);
// UnityEngine.DetailPrototype[] UnityEngine.TerrainData::get_detailPrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* TerrainData_get_detailPrototypes_m09095C267D0867DC97BE4D53305245F48C98B7E1 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// UnityEngine.DetailPrototype sc.terrain.vegetationspawner.VegetationSpawner::GetGrassPrototype(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * VegetationSpawner_GetGrassPrototype_m3F57CA804B88021F8E594F2698EA54939C44098B (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___item0, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain1, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::SetDetailResolution(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetDetailResolution_m5A6223B4EB73B2F63147DC0201EF7672CE2C3F45 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, int32_t ___detailResolution0, int32_t ___resolutionPerPatch1, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RebuildCollisionCacheIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RebuildCollisionCacheIfNeeded_m4342DF3209BC1716D7A8E8A5814AEEEE8310F291 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnGrassOnTerrain(UnityEngine.Terrain,sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnGrassOnTerrain_m420B8B2838911B4D56B1EB0CE8408242F6E1D1E7 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___item1, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn::Invoke(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGrassRespawn_Invoke_mF19FE8165DC5223C7725A035B80CA10EFE9C140F (OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * __this, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___prefab0, const RuntimeMethod* method);
// UnityEngine.Vector3 sc.terrain.vegetationspawner.TerrainSampler::DetailToWorld(UnityEngine.Terrain,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TerrainSampler_DetailToWorld_mF39EFFAD52224D212CD1BDF5737E8F3C09A717FA (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method);
// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner::InsideOccupiedCell(UnityEngine.Terrain,UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VegetationSpawner_InsideOccupiedCell_mB53F86B1E434E5E11FA18F3AD10955A0F14405CA (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPos1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalizedPos2, const RuntimeMethod* method);
// System.Single sc.terrain.vegetationspawner.TerrainSampler::GetSlope(UnityEngine.Terrain,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_GetSlope_m6A88C313F6810D0CDD502520BD3D59D1C8900A4B (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, bool ___average2, const RuntimeMethod* method);
// System.Single sc.terrain.vegetationspawner.TerrainSampler::SampleConvexity(UnityEngine.Terrain,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_SampleConvexity_mD7766A71D8925E23B328FA883B5C066B581C68ED (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, float ___radius2, const RuntimeMethod* method);
// System.Single sc.terrain.vegetationspawner.TerrainSampler::ConvexityToCurvature(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_ConvexityToCurvature_mAD61CA7B8C6A3023C45BE925F4D168E46B94C18E (float ___convexity0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::get_Count()
inline int32_t List_1_get_Count_m7D35090FBDF168F5493258D0FAD0332D7552884C_inline (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.TerrainSampler::SplatmapTexelIndex(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  TerrainSampler_SplatmapTexelIndex_m55BBAC981EC391551897E955ECFD68FDA54D1116 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::GetEnumerator()
inline Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E  List_1_GetEnumerator_m88853AE7E5F279215C4BFE990330FD81E54ED3DA (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E  (*) (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::get_Current()
inline TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * Enumerator_get_Current_m3F7EE5B9D1AD8E34B161CE15D03DBC79FE6CCD9E_inline (Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E * __this, const RuntimeMethod* method)
{
	return ((  TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * (*) (Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Int32 sc.terrain.vegetationspawner.SpawnerBase::GetSplatmapID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpawnerBase_GetSplatmapID_m5AC376E8C70761A5A62D31C58AF658351475BF07 (int32_t ___layerID0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.TerrainData::GetAlphamapTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * TerrainData_GetAlphamapTexture_mF09FC19604EE624F7655C15C0AAE7499BCCBAA8E (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Single sc.terrain.vegetationspawner.SpawnerBase::SampleChannel(UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpawnerBase_SampleChannel_m2CA25CB83AFE7821920F8DBF2A66681C549CBDBA (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, int32_t ___channel1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::MoveNext()
inline bool Enumerator_MoveNext_m38B8371B5090211A5DA66391E66F26F9C91C5FBC (Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::Dispose()
inline void Enumerator_Dispose_m0534F988FF1A4C3773534E07E042F7948D38E197 (Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.TerrainData::SetDetailLayer(System.Int32,System.Int32,System.Int32,System.Int32[0...,0...])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetDetailLayer_m25F42AB3D8792BC884F0A9934F3C3021DF8FDF62 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, int32_t ___xBase0, int32_t ___yBase1, int32_t ___layer2, Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* ___details3, const RuntimeMethod* method);
// System.Void UnityEngine.DetailPrototype::set_healthyColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_healthyColor_mF7A9C456CF98F5DB43125A1A97A2AE13749AE76F (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.DetailPrototype::set_dryColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_dryColor_m7B8397E2458D414DCB09FD1B3B583FF3DD37E8E3 (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.DetailPrototype::set_minHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_minHeight_m4CE5558075661DA84B71B243D97D648DF07755AB (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.DetailPrototype::set_maxHeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_maxHeight_mF0877C8541A5DFBE97BBBA12D962814A1B3659B3 (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.DetailPrototype::set_minWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_minWidth_mAAFF68A7D2637E8C08F81841CDAB4111116ED577 (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.DetailPrototype::set_maxWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_maxWidth_mCFE2DF543FB1EB56E76B1DA18DD194BFE26F62F0 (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.DetailPrototype::set_noiseSpread(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_noiseSpread_mD17C5883918DBA3F4B4AE2BD199FBF6456F10FE2 (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.DetailPrototype::set_renderMode(UnityEngine.DetailRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_renderMode_m5FCFA6ACAF920D54E579BEE7E5A29D5E11AE84BA (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.DetailPrototype::set_usePrototypeMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_usePrototypeMesh_mD941F0A4525C528F91897FCD13FB8CD767EE8A17 (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.DetailPrototype::set_prototype(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_prototype_mA03AA21C93AE543BDC1295B128F48389400A15EC (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.DetailPrototype::set_prototypeTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailPrototype_set_prototypeTexture_mD86801CCEAB2993DE0DB829A3F188D233D90C5BD (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * __this, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreeType>::get_Count()
inline int32_t List_1_get_Count_m4CF68A0019B3DE6317E399542BF3A49A9DC2DB00_inline (List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RefreshTreePrefabs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RefreshTreePrefabs_m39536DC9E17C48F5CBDC146D36CC8D9DFE262F23 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreeType>::GetEnumerator()
inline Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28  List_1_GetEnumerator_m1A6EC38ACB5AE88107AE9AA708188DC43491D562 (List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28  (*) (List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreeType>::get_Current()
inline TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * Enumerator_get_Current_m835C8795A6071884C8AE8A426F0C9203CBCDEEF7_inline (Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 * __this, const RuntimeMethod* method)
{
	return ((  TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * (*) (Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnTree(sc.terrain.vegetationspawner.SpawnerBase/TreeType,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnTree_m6DCD44D7B3B8EE168ACF97EE2E45306872B928B5 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * ___item0, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___targetTerrain1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreeType>::MoveNext()
inline bool Enumerator_MoveNext_m5669064B78AC360A980CDAAE14D111A670D504D8 (Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreeType>::Dispose()
inline void Enumerator_Dispose_m2110E34613EFD27F45A4E5922123639E70AA6F91 (Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TreePrototype>::.ctor()
inline void List_1__ctor_m931982C5FB85776191FAC03ED5A45FA97880613D (List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::GetEnumerator()
inline Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2  List_1_GetEnumerator_m54105E3113A4BDCFC79817993666F50B02AC76EB (List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2  (*) (List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::get_Current()
inline TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * Enumerator_get_Current_m95C2BA3A5C54659972CBE703853E5E6C16F38D3E_inline (Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 * __this, const RuntimeMethod* method)
{
	return ((  TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * (*) (Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.TreePrototype::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePrototype__ctor_mAF604B1B4D176E6072DFB258CAF2EC53E7714E4E (TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TreePrototype::set_prefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePrototype_set_prefab_m281534A67041F69C643794C1B13B108610B8BA04 (TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.TreePrototype>::Add(!0)
inline void List_1_Add_mA3B4C31452FB3D9DB7663B1E6512AEA87B3E09D6 (List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 * __this, TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 *, TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TreePrototype>::get_Count()
inline int32_t List_1_get_Count_m5C6674FA950981B337FEABD2C9C25815AF075ED1_inline (List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::MoveNext()
inline bool Enumerator_MoveNext_m7BC5E16951688506518B218BFABB0B74E07C7EF1 (Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::Dispose()
inline void Enumerator_Dispose_m91BCBD82CE20375C9C8E6715DBB1DEDD597F82DE (Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.TreePrototype>::ToArray()
inline TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* List_1_ToArray_mA637A9038ED810D97784A0FE25F47F736EA8CF54 (List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 * __this, const RuntimeMethod* method)
{
	return ((  TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* (*) (List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void UnityEngine.TerrainData::set_treePrototypes(UnityEngine.TreePrototype[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_set_treePrototypes_m57B2C160BD389266B666A5C38B0D268650AB753A (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::RefreshPrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_RefreshPrototypes_m30A5130FB2B87236FA4A94E56A3CDED84F323BDD (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnTreeOnTerrain(UnityEngine.Terrain,sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnTreeOnTerrain_mAA55E83842533854E3F2A6833CBB063E8A50FA00 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * ___item1, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn::Invoke(sc.terrain.vegetationspawner.SpawnerBase/TreePrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTreeRespawn_Invoke_m64A65D6624EF74CB886CB899E63B9F1C88CBAACC (OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * __this, TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * ___prefab0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.TreeInstance>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m7097AC1F2ED336D752E577B054841ECA6B5BBD93 (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m7097AC1F2ED336D752E577B054841ECA6B5BBD93_gshared)(__this, ___collection0, method);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m13C54B75859D89AB78BDBE1208507021EFE9F607 (U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<UnityEngine.TreeInstance>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mC9C38EB409403C7B88175B017DA376752FF95029 (Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_mC9C38EB409403C7B88175B017DA376752FF95029_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TreeInstance>::RemoveAll(System.Predicate`1<!0>)
inline int32_t List_1_RemoveAll_m15A35FE88025F5BE41030782B5520A1001A291E7 (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * __this, Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4 * ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B *, Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4 *, const RuntimeMethod*))List_1_RemoveAll_m15A35FE88025F5BE41030782B5520A1001A291E7_gshared)(__this, ___match0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TreeInstance>::get_Count()
inline int32_t List_1_get_Count_m805BCA48AB339EA259A0596DAE5D44D41ECF29E4_inline (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B *, const RuntimeMethod*))List_1_get_Count_m805BCA48AB339EA259A0596DAE5D44D41ECF29E4_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> sc.terrain.vegetationspawner.PoissonDisc::GetSpawnpoints(UnityEngine.Terrain,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * PoissonDisc_GetSpawnpoints_mEAC5951294845EAA63582B8454929C77A55F664D (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, float ___radius1, int32_t ___seed2, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
inline Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_inline (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *, const RuntimeMethod*))Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_gshared_inline)(__this, method);
}
// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab sc.terrain.vegetationspawner.SpawnerBase::GetProbableTree(sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * SpawnerBase_GetProbableTree_mF52ACCEA625BACA639EAE982EB99A99508D79E31 (TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * ___treeType0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.TreeInstance>::Add(!0)
inline void List_1_Add_mAB711B779EE61A74EC5415D51D6538FF7506D308 (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * __this, TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B *, TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15 , const RuntimeMethod*))List_1_Add_mAB711B779EE61A74EC5415D51D6538FF7506D308_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
inline bool Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735 (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *, const RuntimeMethod*))Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
inline void Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13 (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *, const RuntimeMethod*))Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.TreeInstance>::ToArray()
inline TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* List_1_ToArray_m21F17D5E7482A64132A302B9DA52A1E5E200B1F6 (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * __this, const RuntimeMethod* method)
{
	return ((  TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* (*) (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B *, const RuntimeMethod*))List_1_ToArray_m21F17D5E7482A64132A302B9DA52A1E5E200B1F6_gshared)(__this, method);
}
// System.Void UnityEngine.TerrainData::SetTreeInstances(UnityEngine.TreeInstance[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainData_SetTreeInstances_mD4EA1F1C6E9C324233C0148EE6816207700F0790 (TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * __this, TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* ___instances0, bool ___snapToHeightmap1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnAllGrass(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnAllGrass_mD9228FBE56FBDAD3B8B105B49E97FB1219D43423 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___targetTerrain0, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnAllTrees(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnAllTrees_m50D42CEA005EDFD8F78BD9284CE397A7404B7F71 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, const RuntimeMethod* method);
// System.Void UnityEngine.Terrain::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrain_Flush_m72233FA4768E704FA506A7F6B3819166C3F06C01 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * __this, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C (int32_t ___intVal0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Terrain,sc.terrain.vegetationspawner.Cell[0...,0...]>::.ctor()
inline void Dictionary_2__ctor_mFED326EAF9CD8C70A443F5AE9B6C0E80D9513A97 (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase__ctor_m9FA9D6B77CF70E743A88376FA5BB21B82717108E (SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationPrefab__ctor_mFB6E9C261EA293EAD2AAE103B4F41E27395CCF33 (VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA * __this, const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPrefab__ctor_m8565B83A34EA29FB5757CC84ADB0244BBAF5987B (GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m4C5C1CE352D1DA7D20B6F69AFB9FA02D082C72C0 (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// !0 System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::get_Item(System.Int32)
inline TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * List_1_get_Item_mDE80778F2E42E3DF2DF43FB3977A79F1C190CAF0_inline (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * (*) (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask::.ctor(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayerMask__ctor_mE8A8E1179F21626879A49C1F2F215E05A2D6B4D9 (TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * __this, String_t* ___name0, int32_t ___layerID1, float ___threshold2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mD2D20330BD534516423193E1D930928CD0423A3A (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * __this, int32_t ___index0, TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B *, int32_t, TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 *, const RuntimeMethod*))List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared)(__this, ___index0, ___value1, method);
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TreeType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeType__ctor_m3467D2409842DCF726FF78B5FF2A688A3BAEEE33 (TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * __this, const RuntimeMethod* method);
// sc.terrain.vegetationspawner.SpawnerBase/TreeType sc.terrain.vegetationspawner.SpawnerBase/TreeType::New()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * TreeType_New_m12B469A253F34F2D741675D6263D42689341E2C9 (const RuntimeMethod* method);
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TreePrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePrefab__ctor_mF8E94572293FC36D95A1E2A318756EBD1392756B (TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::Add(!0)
inline void List_1_Add_m546A734A6544DC035D49116D0CD687A6C8221B17 (List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * __this, TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 *, TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TreePrefab>::.ctor()
inline void List_1__ctor_m9B2F8EF530DD4B08653DC663E408A2DCB6914E24 (List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask>::.ctor()
inline void List_1__ctor_m09ABC1748B59924D289BE5BF5BF4F0293164AB2A (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void sc.terrain.vegetationspawner.Cell::Subdivide(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell_Subdivide_m61247BFE1E80546D2981E383BABBACA6892DC439 (Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * __this, int32_t ___divisions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	{
		// subCells = new Cell[divisions, divisions];
		int32_t L_0 = ___divisions0;
		int32_t L_1 = ___divisions0;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)L_0, (il2cpp_array_size_t)L_1 };
		CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_2 = (CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC*)GenArrayNew(CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC_il2cpp_TypeInfo_var, L_3);
		__this->set_subCells_1(L_2);
		// int subCount = divisions;
		int32_t L_4 = ___divisions0;
		V_0 = L_4;
		// int cellSize = ((int)bounds.size.x / divisions) * 2;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_5 = __this->get_address_of_bounds_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		int32_t L_8 = ___divisions0;
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7))/(int32_t)L_8)), (int32_t)2));
		// for (int x = 0; x < subCount; x++)
		V_2 = 0;
		goto IL_00b6;
	}

IL_002d:
	{
		// for (int z = 0; z < subCount; z++)
		V_3 = 0;
		goto IL_00a7;
	}

IL_0032:
	{
		// Vector3 subCellPos = new Vector3(
		//     bounds.min.x + (x * (cellSize * 0.5f)),
		//     bounds.center.y,
		//     bounds.min.z + (z * (cellSize * 0.5f))
		//     );
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_9 = __this->get_address_of_bounds_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		int32_t L_12 = V_2;
		int32_t L_13 = V_1;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_14 = __this->get_address_of_bounds_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_17 = __this->get_address_of_bounds_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		int32_t L_20 = V_3;
		int32_t L_21 = V_1;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), ((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_12)), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_13)), (float)(0.5f))))))), L_16, ((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_20)), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_21)), (float)(0.5f))))))), /*hidden argument*/NULL);
		// Cell subCell = Cell.New(subCellPos, cellSize * 0.5f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_4;
		int32_t L_23 = V_1;
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_24;
		L_24 = Cell_New_mB05BF98AD6CDCB99AFAB882A320A3A46D223A2CB(L_22, ((float)il2cpp_codegen_multiply((float)((float)((float)L_23)), (float)(0.5f))), /*hidden argument*/NULL);
		V_5 = L_24;
		// subCells[x, z] = subCell;
		CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_25 = __this->get_subCells_1();
		int32_t L_26 = V_2;
		int32_t L_27 = V_3;
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_28 = V_5;
		NullCheck(L_25);
		(L_25)->SetAt(L_26, L_27, L_28);
		// for (int z = 0; z < subCount; z++)
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00a7:
	{
		// for (int z = 0; z < subCount; z++)
		int32_t L_30 = V_3;
		int32_t L_31 = V_0;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_6;
		if (L_32)
		{
			goto IL_0032;
		}
	}
	{
		// for (int x = 0; x < subCount; x++)
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00b6:
	{
		// for (int x = 0; x < subCount; x++)
		int32_t L_34 = V_2;
		int32_t L_35 = V_0;
		V_7 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_7;
		if (L_36)
		{
			goto IL_002d;
		}
	}
	{
		// }
		return;
	}
}
// sc.terrain.vegetationspawner.Cell sc.terrain.vegetationspawner.Cell::New(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * Cell_New_mB05BF98AD6CDCB99AFAB882A320A3A46D223A2CB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___wPos0, float ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cell_tC218009E45576409E5AA876C2A7086E8CC17829E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * V_0 = NULL;
	Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * V_1 = NULL;
	{
		// Cell cell = new Cell();
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_0 = (Cell_tC218009E45576409E5AA876C2A7086E8CC17829E *)il2cpp_codegen_object_new(Cell_tC218009E45576409E5AA876C2A7086E8CC17829E_il2cpp_TypeInfo_var);
		Cell__ctor_mE1E0F53FDBEDA2E9AB8058FE765EFFADC9C8ACDC(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// cell.bounds.size = new Vector3(1f, 1f, 1f) * size;
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_1 = V_0;
		NullCheck(L_1);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_2 = L_1->get_address_of_bounds_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		float L_4 = ___size1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		Bounds_set_size_mEDB113237CED433C65294B534EAD30449277FD18((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_2, L_5, /*hidden argument*/NULL);
		// cell.bounds.center = wPos;
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_6 = V_0;
		NullCheck(L_6);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_7 = L_6->get_address_of_bounds_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___wPos0;
		Bounds_set_center_mAC54A53224BBEFE37A4387DCBD0EF3774751221E((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_7, L_8, /*hidden argument*/NULL);
		// return cell;
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_9 = V_0;
		V_1 = L_9;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_10 = V_1;
		return L_10;
	}
}
// System.Boolean sc.terrain.vegetationspawner.Cell::InsideXZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cell_InsideXZ_m85AEEF4B19A5243010A5FACB2D8E229FF6CD80B2 (Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___wPos0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return (wPos.x >= bounds.min.x && wPos.x <= bounds.max.x && wPos.z >= bounds.min.z && wPos.z <= bounds.max.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___wPos0;
		float L_1 = L_0.get_x_2();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_2 = __this->get_address_of_bounds_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		if ((!(((float)L_1) >= ((float)L_4))))
		{
			goto IL_0066;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___wPos0;
		float L_6 = L_5.get_x_2();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_7 = __this->get_address_of_bounds_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		if ((!(((float)L_6) <= ((float)L_9))))
		{
			goto IL_0066;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___wPos0;
		float L_11 = L_10.get_z_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_12 = __this->get_address_of_bounds_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_z_4();
		if ((!(((float)L_11) >= ((float)L_14))))
		{
			goto IL_0066;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___wPos0;
		float L_16 = L_15.get_z_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_17 = __this->get_address_of_bounds_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		G_B5_0 = ((((int32_t)((!(((float)L_16) <= ((float)L_19)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0067;
	}

IL_0066:
	{
		G_B5_0 = 0;
	}

IL_0067:
	{
		V_0 = (bool)G_B5_0;
		goto IL_006a;
	}

IL_006a:
	{
		// }
		bool L_20 = V_0;
		return L_20;
	}
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.Cell::PositionToCellIndex(UnityEngine.Terrain,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  Cell_PositionToCellIndex_m95478F152766BEA683620B056B7BF41D4191D7D9 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalizedPos1, int32_t ___cellSize2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int x = Mathf.FloorToInt((terrain.terrainData.size.x / cellSize) * normalizedPos.x);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_1;
		L_1 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = TerrainData_get_size_mF68B76A49498AE26C506D77483EA81E4F816EB15(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		int32_t L_4 = ___cellSize2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___normalizedPos1;
		float L_6 = L_5.get_x_0();
		int32_t L_7;
		L_7 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)((float)((float)L_3/(float)((float)((float)L_4)))), (float)L_6)), /*hidden argument*/NULL);
		V_0 = L_7;
		// int y = Mathf.FloorToInt((terrain.terrainData.size.z / cellSize) * normalizedPos.y);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_8 = ___terrain0;
		NullCheck(L_8);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_9;
		L_9 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = TerrainData_get_size_mF68B76A49498AE26C506D77483EA81E4F816EB15(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_z_4();
		int32_t L_12 = ___cellSize2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___normalizedPos1;
		float L_14 = L_13.get_y_1();
		int32_t L_15;
		L_15 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)((float)((float)L_11/(float)((float)((float)L_12)))), (float)L_14)), /*hidden argument*/NULL);
		V_1 = L_15;
		// return new Vector2Int(x, y);
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_18), L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_19 = V_2;
		return L_19;
	}
}
// sc.terrain.vegetationspawner.Cell sc.terrain.vegetationspawner.Cell::GetSubcell(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * Cell_GetSubcell_m11A2CAC299982C982325D27B901BBBF4681A0499 (Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPos0, float ___cellSize1, int32_t ___subDivisions2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * V_3 = NULL;
	{
		// if (subCells == null) return null;
		CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_0 = __this->get_subCells_1();
		V_2 = (bool)((((RuntimeObject*)(CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (subCells == null) return null;
		V_3 = (Cell_tC218009E45576409E5AA876C2A7086E8CC17829E *)NULL;
		goto IL_008a;
	}

IL_0012:
	{
		// Vector2 localCellPos = new Vector2(
		//     (worldPos.x - bounds.min.x) / cellSize,
		//     (worldPos.z - bounds.min.z) / cellSize);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___worldPos0;
		float L_3 = L_2.get_x_2();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_4 = __this->get_address_of_bounds_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		float L_7 = ___cellSize1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___worldPos0;
		float L_9 = L_8.get_z_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_10 = __this->get_address_of_bounds_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_z_4();
		float L_13 = ___cellSize1;
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), ((float)((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_6))/(float)L_7)), ((float)((float)((float)il2cpp_codegen_subtract((float)L_9, (float)L_12))/(float)L_13)), /*hidden argument*/NULL);
		// Vector2Int subCellIndex = new Vector2Int(
		//     Mathf.FloorToInt(subDivisions * localCellPos.x),
		//     Mathf.FloorToInt(subDivisions * localCellPos.y));
		int32_t L_14 = ___subDivisions2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_0;
		float L_16 = L_15.get_x_0();
		int32_t L_17;
		L_17 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)((float)((float)L_14)), (float)L_16)), /*hidden argument*/NULL);
		int32_t L_18 = ___subDivisions2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_0;
		float L_20 = L_19.get_y_1();
		int32_t L_21;
		L_21 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)((float)((float)L_18)), (float)L_20)), /*hidden argument*/NULL);
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), L_17, L_21, /*hidden argument*/NULL);
		// return subCells[subCellIndex.x, subCellIndex.y];
		CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_22 = __this->get_subCells_1();
		int32_t L_23;
		L_23 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_24;
		L_24 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_22);
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_25;
		L_25 = (L_22)->GetAt(L_23, L_24);
		V_3 = L_25;
		goto IL_008a;
	}

IL_008a:
	{
		// }
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_26 = V_3;
		return L_26;
	}
}
// System.Void sc.terrain.vegetationspawner.Cell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cell__ctor_mE1E0F53FDBEDA2E9AB8058FE765EFFADC9C8ACDC (Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * __this, const RuntimeMethod* method)
{
	{
		// public Bounds bounds = new Bounds();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_0 = __this->get_address_of_bounds_0();
		il2cpp_codegen_initobj(L_0, sizeof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 ));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Collections.Generic.List`1<UnityEngine.Vector3> sc.terrain.vegetationspawner.PoissonDisc::GetSpawnpoints(UnityEngine.Terrain,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * PoissonDisc_GetSpawnpoints_mEAC5951294845EAA63582B8454929C77A55F664D (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, float ___radius1, int32_t ___seed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3FE0140B2EA3ACE813701577E2A73D337F640CA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * V_14 = NULL;
	{
		// PoissonDisc.radius = radius;
		float L_0 = ___radius1;
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->set_radius_7(L_0);
		// PoissonDisc.bounds = terrain.terrainData.bounds;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_1 = ___terrain0;
		NullCheck(L_1);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_2;
		L_2 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_3;
		L_3 = TerrainData_get_bounds_m7605D60F3DFC69491226E46AA6B4CB150F02161C(L_2, /*hidden argument*/NULL);
		((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->set_bounds_8(L_3);
		// cellSize = PoissonDisc.radius / Mathf.Sqrt(dimensions);
		float L_4 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_radius_7();
		float L_5;
		L_5 = sqrtf((2.0f));
		((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->set_cellSize_6(((float)((float)L_4/(float)L_5)));
		// int xCells = Mathf.CeilToInt(bounds.size.x / cellSize);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_address_of_bounds_8()), /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		float L_8 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_cellSize_6();
		int32_t L_9;
		L_9 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		// int zCells = Mathf.CeilToInt(bounds.size.z / cellSize);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_address_of_bounds_8()), /*hidden argument*/NULL);
		float L_11 = L_10.get_z_4();
		float L_12 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_cellSize_6();
		int32_t L_13;
		L_13 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
		V_1 = L_13;
		// grid = new int[xCells, zCells];
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		il2cpp_array_size_t L_17[] = { (il2cpp_array_size_t)L_14, (il2cpp_array_size_t)L_15 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_16 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_17);
		((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->set_grid_5(L_16);
		// samples.Clear();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_18 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_samples_2();
		NullCheck(L_18);
		List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50(L_18, /*hidden argument*/List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var);
		// points.Clear();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_19 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_points_3();
		NullCheck(L_19);
		List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50(L_19, /*hidden argument*/List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var);
		// spawnPoints = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_20 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_20, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->set_spawnPoints_4(L_20);
		// Random.InitState(seed);
		int32_t L_21 = ___seed2;
		Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C(L_21, /*hidden argument*/NULL);
		// Vector2 randomPos = new Vector2(Random.value * bounds.size.x, Random.value * bounds.size.z);
		float L_22;
		L_22 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_address_of_bounds_8()), /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		float L_25;
		L_25 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_address_of_bounds_8()), /*hidden argument*/NULL);
		float L_27 = L_26.get_z_4();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), ((float)il2cpp_codegen_multiply((float)L_22, (float)L_24)), ((float)il2cpp_codegen_multiply((float)L_25, (float)L_27)), /*hidden argument*/NULL);
		// samples.Add(randomPos);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_28 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_samples_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = V_2;
		NullCheck(L_28);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_28, L_29, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		goto IL_01b6;
	}

IL_00d7:
	{
		// int i = Random.Range(0, samples.Count);
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_30 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_samples_2();
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline(L_30, /*hidden argument*/List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		int32_t L_32;
		L_32 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		// Vector2 sampleCenter = samples[i];
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_33 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_samples_2();
		int32_t L_34 = V_3;
		NullCheck(L_33);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_33, L_34, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		V_4 = L_35;
		// bool valid = false;
		V_5 = (bool)0;
		// for (int s = 0; s < MAX_ATTEMPTS; s++)
		V_6 = 0;
		goto IL_018d;
	}

IL_0101:
	{
		// Random.InitState(seed + s + i);
		int32_t L_36 = ___seed2;
		int32_t L_37 = V_6;
		int32_t L_38 = V_3;
		Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37)), (int32_t)L_38)), /*hidden argument*/NULL);
		// Vector2 sample = RandomPointOnAnnulus(sampleCenter);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		L_40 = PoissonDisc_RandomPointOnAnnulus_mF5B5759181053E1BD01BF157D2C14AED30910D80(L_39, /*hidden argument*/NULL);
		V_7 = L_40;
		// if (ValidSample(sample))
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41 = V_7;
		bool L_42;
		L_42 = PoissonDisc_ValidSample_m4D683A9C38E39AE518D0E7BD038D6E14466DF7EE(L_41, /*hidden argument*/NULL);
		V_8 = L_42;
		bool L_43 = V_8;
		if (!L_43)
		{
			goto IL_0186;
		}
	}
	{
		// Vector3 spawnPoint = CreateSpawnPoint(terrain, sample);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_44 = ___terrain0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = PoissonDisc_CreateSpawnPoint_m3CDD10D3AEB4807297833BE0115A8215A5D68A39(L_44, L_45, /*hidden argument*/NULL);
		V_9 = L_46;
		// spawnPoints.Add(spawnPoint);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_47 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_spawnPoints_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_9;
		NullCheck(L_47);
		List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_47, L_48, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		// points.Add(sample);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_49 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_points_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50 = V_7;
		NullCheck(L_49);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_49, L_50, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// samples.Add(sample);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_51 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_samples_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_7;
		NullCheck(L_51);
		List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE(L_51, L_52, /*hidden argument*/List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
		// Vector2Int gridPos = PositionToGridCoord(sample);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_53 = V_7;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_54;
		L_54 = PoissonDisc_PositionToGridCoord_mF1FDD95BEEEDEDF08AD0CF0D127776EB6F43C508(L_53, /*hidden argument*/NULL);
		V_10 = L_54;
		// grid[gridPos.x, gridPos.y] = points.Count;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_55 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_grid_5();
		int32_t L_56;
		L_56 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_10), /*hidden argument*/NULL);
		int32_t L_57;
		L_57 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_10), /*hidden argument*/NULL);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_58 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_points_3();
		NullCheck(L_58);
		int32_t L_59;
		L_59 = List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline(L_58, /*hidden argument*/List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		NullCheck(L_55);
		(L_55)->SetAt(L_56, L_57, L_59);
		// valid = true;
		V_5 = (bool)1;
		// break;
		goto IL_019c;
	}

IL_0186:
	{
		// for (int s = 0; s < MAX_ATTEMPTS; s++)
		int32_t L_60 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_018d:
	{
		// for (int s = 0; s < MAX_ATTEMPTS; s++)
		int32_t L_61 = V_6;
		V_11 = (bool)((((int32_t)L_61) < ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_62 = V_11;
		if (L_62)
		{
			goto IL_0101;
		}
	}

IL_019c:
	{
		// if (!valid)
		bool L_63 = V_5;
		V_12 = (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
		bool L_64 = V_12;
		if (!L_64)
		{
			goto IL_01b5;
		}
	}
	{
		// samples.RemoveAt(i);
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_65 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_samples_2();
		int32_t L_66 = V_3;
		NullCheck(L_65);
		List_1_RemoveAt_m3FE0140B2EA3ACE813701577E2A73D337F640CA8(L_65, L_66, /*hidden argument*/List_1_RemoveAt_m3FE0140B2EA3ACE813701577E2A73D337F640CA8_RuntimeMethod_var);
	}

IL_01b5:
	{
	}

IL_01b6:
	{
		// while (samples.Count > 0)
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_67 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_samples_2();
		NullCheck(L_67);
		int32_t L_68;
		L_68 = List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_inline(L_67, /*hidden argument*/List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var);
		V_13 = (bool)((((int32_t)L_68) > ((int32_t)0))? 1 : 0);
		bool L_69 = V_13;
		if (L_69)
		{
			goto IL_00d7;
		}
	}
	{
		// return spawnPoints;
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_70 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_spawnPoints_4();
		V_14 = L_70;
		goto IL_01d5;
	}

IL_01d5:
	{
		// }
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_71 = V_14;
		return L_71;
	}
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.PoissonDisc::PositionToGridCoord(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  PoissonDisc_PositionToGridCoord_mF1FDD95BEEEDEDF08AD0CF0D127776EB6F43C508 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector2Int((int)(pos.x / cellSize), (int)(pos.y / cellSize));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___pos0;
		float L_1 = L_0.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		float L_2 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_cellSize_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___pos0;
		float L_4 = L_3.get_y_1();
		float L_5 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_cellSize_6();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_6), ((int32_t)((int32_t)((float)((float)L_1/(float)L_2)))), ((int32_t)((int32_t)((float)((float)L_4/(float)L_5)))), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_7 = V_0;
		return L_7;
	}
}
// System.Boolean sc.terrain.vegetationspawner.PoissonDisc::ValidSample(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoissonDisc_ValidSample_m4D683A9C38E39AE518D0E7BD038D6E14466DF7EE (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___sample0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	{
		// bool valid = InsideBounds(sample);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___sample0;
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PoissonDisc_InsideBounds_mEE325B3FDAD22AB96E1C13D9EC06FABD983E7D07(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (valid)
		bool L_2 = V_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00ec;
		}
	}
	{
		// Vector2Int gridPos = PositionToGridCoord(sample);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___sample0;
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_5;
		L_5 = PoissonDisc_PositionToGridCoord_mF1FDD95BEEEDEDF08AD0CF0D127776EB6F43C508(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// int xmin = Mathf.Max(gridPos.x - 2, 0);
		int32_t L_6;
		L_6 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_2), /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2)), 0, /*hidden argument*/NULL);
		V_3 = L_7;
		// int xmax = Mathf.Min(gridPos.x + 2, grid.GetLength(0) - 1);
		int32_t L_8;
		L_8 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_2), /*hidden argument*/NULL);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_9 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_grid_5();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_9);
		int32_t L_10;
		L_10 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_9, 0, /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)2)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_11;
		// int ymin = Mathf.Max(gridPos.y - 2, 0);
		int32_t L_12;
		L_12 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_2), /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)2)), 0, /*hidden argument*/NULL);
		V_5 = L_13;
		// int ymax = Mathf.Min(gridPos.y + 2, grid.GetLength(1) - 1);
		int32_t L_14;
		L_14 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_2), /*hidden argument*/NULL);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_15 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_grid_5();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_15);
		int32_t L_16;
		L_16 = Array_GetLength_m8EF840DA7BEB0DFF04D36C3DC651B673C49A02BB((RuntimeArray *)(RuntimeArray *)L_15, 1, /*hidden argument*/NULL);
		int32_t L_17;
		L_17 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		V_6 = L_17;
		// for (int y = ymin; y <= ymax; y++)
		int32_t L_18 = V_5;
		V_7 = L_18;
		goto IL_00dc;
	}

IL_0079:
	{
		// for (int x = xmin; x <= xmax; x++)
		int32_t L_19 = V_3;
		V_8 = L_19;
		goto IL_00c6;
	}

IL_007f:
	{
		// int i = grid[x, y] - 1;
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_20 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_grid_5();
		int32_t L_21 = V_8;
		int32_t L_22 = V_7;
		NullCheck(L_20);
		int32_t L_23;
		L_23 = (L_20)->GetAt(L_21, L_22);
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1));
		// if (i != -1)
		int32_t L_24 = V_9;
		V_10 = (bool)((((int32_t)((((int32_t)L_24) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_10;
		if (!L_25)
		{
			goto IL_00bf;
		}
	}
	{
		// if (OutsideRadius(sample, points[i])) return false;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = ___sample0;
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_27 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_points_3();
		int32_t L_28 = V_9;
		NullCheck(L_27);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline(L_27, L_28, /*hidden argument*/List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var);
		bool L_30;
		L_30 = PoissonDisc_OutsideRadius_m19C45BB7F9957463DC99CC4C1C5597CD32AA75D4(L_26, L_29, /*hidden argument*/NULL);
		V_11 = L_30;
		bool L_31 = V_11;
		if (!L_31)
		{
			goto IL_00be;
		}
	}
	{
		// if (OutsideRadius(sample, points[i])) return false;
		V_12 = (bool)0;
		goto IL_00f1;
	}

IL_00be:
	{
	}

IL_00bf:
	{
		// for (int x = xmin; x <= xmax; x++)
		int32_t L_32 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00c6:
	{
		// for (int x = xmin; x <= xmax; x++)
		int32_t L_33 = V_8;
		int32_t L_34 = V_4;
		V_13 = (bool)((((int32_t)((((int32_t)L_33) > ((int32_t)L_34))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_13;
		if (L_35)
		{
			goto IL_007f;
		}
	}
	{
		// for (int y = ymin; y <= ymax; y++)
		int32_t L_36 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00dc:
	{
		// for (int y = ymin; y <= ymax; y++)
		int32_t L_37 = V_7;
		int32_t L_38 = V_6;
		V_14 = (bool)((((int32_t)((((int32_t)L_37) > ((int32_t)L_38))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_14;
		if (L_39)
		{
			goto IL_0079;
		}
	}
	{
	}

IL_00ec:
	{
		// return valid;
		bool L_40 = V_0;
		V_12 = L_40;
		goto IL_00f1;
	}

IL_00f1:
	{
		// }
		bool L_41 = V_12;
		return L_41;
	}
}
// System.Boolean sc.terrain.vegetationspawner.PoissonDisc::InsideBounds(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoissonDisc_InsideBounds_mEE325B3FDAD22AB96E1C13D9EC06FABD983E7D07 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return (pos.x >= 0 && pos.x < bounds.size.x && pos.y >= 0 && pos.y < bounds.size.z);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___pos0;
		float L_1 = L_0.get_x_0();
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___pos0;
		float L_3 = L_2.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_address_of_bounds_8()), /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		if ((!(((float)L_3) < ((float)L_5))))
		{
			goto IL_004b;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___pos0;
		float L_7 = L_6.get_y_1();
		if ((!(((float)L_7) >= ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___pos0;
		float L_9 = L_8.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_address_of_bounds_8()), /*hidden argument*/NULL);
		float L_11 = L_10.get_z_4();
		G_B5_0 = ((((float)L_9) < ((float)L_11))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_004f;
	}

IL_004f:
	{
		// }
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Boolean sc.terrain.vegetationspawner.PoissonDisc::OutsideRadius(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PoissonDisc_OutsideRadius_m19C45BB7F9957463DC99CC4C1C5597CD32AA75D4 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// return ((center - position).sqrMagnitude < (radius * radius));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___center0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___position1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		float L_4 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_radius_7();
		float L_5 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_radius_7();
		V_1 = (bool)((((float)L_3) < ((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))))? 1 : 0);
		goto IL_0020;
	}

IL_0020:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Vector2 sc.terrain.vegetationspawner.PoissonDisc::RandomPointOnAnnulus(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PoissonDisc_RandomPointOnAnnulus_mF5B5759181053E1BD01BF157D2C14AED30910D80 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___center0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float angle = 2f * Mathf.PI * Random.value;
		float L_0;
		L_0 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)(6.28318548f), (float)L_0));
		// Vector2 dir = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle));
		float L_1 = V_0;
		float L_2;
		L_2 = cosf(L_1);
		float L_3 = V_0;
		float L_4;
		L_4 = sinf(L_3);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), L_2, L_4, /*hidden argument*/NULL);
		// float dist = Random.Range(radius, radius * 2);
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		float L_5 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_radius_7();
		float L_6 = ((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_radius_7();
		float L_7;
		L_7 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_5, ((float)il2cpp_codegen_multiply((float)L_6, (float)(2.0f))), /*hidden argument*/NULL);
		V_2 = L_7;
		// return center + (dir * dist);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = ___center0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_1;
		float L_10 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_9, L_10, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_8, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_3;
		return L_13;
	}
}
// UnityEngine.Vector3 sc.terrain.vegetationspawner.PoissonDisc::CreateSpawnPoint(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  PoissonDisc_CreateSpawnPoint_m3CDD10D3AEB4807297833BE0115A8215A5D68A39 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___t0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector3((position.x + (t.GetPosition().x + bounds.center.x)) - bounds.extents.x, 0f, (position.y + (t.GetPosition().z + bounds.center.z)) - bounds.extents.z);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___position1;
		float L_1 = L_0.get_x_0();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2 = ___t0;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Terrain_GetPosition_m4226105D0DBD8947B8800559E8E53C8479AC4825(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_address_of_bounds_8()), /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_address_of_bounds_8()), /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___position1;
		float L_10 = L_9.get_y_1();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_11 = ___t0;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Terrain_GetPosition_m4226105D0DBD8947B8800559E8E53C8479AC4825(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_address_of_bounds_8()), /*hidden argument*/NULL);
		float L_15 = L_14.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Bounds_get_extents_mA54D7497D65DCF21CA952FA754B9D1086305FF02((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->get_address_of_bounds_8()), /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_add((float)L_4, (float)L_6)))), (float)L_8)), (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_add((float)L_13, (float)L_15)))), (float)L_17)), /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_0072;
	}

IL_0072:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		return L_19;
	}
}
// System.Void sc.terrain.vegetationspawner.PoissonDisc::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoissonDisc__cctor_mE838580C6D86ABC16A3723A59C7420C2A5492ADF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<Vector2> samples = new List<Vector2>();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_0 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_0, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->set_samples_2(L_0);
		// private static readonly List<Vector2> points = new List<Vector2>();
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_1 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)il2cpp_codegen_object_new(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_il2cpp_TypeInfo_var);
		List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53(L_1, /*hidden argument*/List_1__ctor_m0ED1CF21DC6B8863BF9FB9E9CE08331E11258F53_RuntimeMethod_var);
		((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->set_points_3(L_1);
		// private static List<Vector3> spawnPoints = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_2 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_2, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		((PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_StaticFields*)il2cpp_codegen_static_fields_for(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var))->set_spawnPoints_4(L_2);
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
// System.Void sc.terrain.vegetationspawner.SpawnerBase::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase_OnValidate_m8878E64041C1D44B4B35561C6B225D08C66DB5F3 (SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (terrainSettings == null) terrainSettings = new TerrainSettings();
		TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_0 = __this->get_terrainSettings_8();
		V_0 = (bool)((((RuntimeObject*)(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (terrainSettings == null) terrainSettings = new TerrainSettings();
		TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_2 = (TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F *)il2cpp_codegen_object_new(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F_il2cpp_TypeInfo_var);
		TerrainSettings__ctor_m5B3E2A13FB4ACE85C5EBCE3F6F5170DB1FE43D79(L_2, /*hidden argument*/NULL);
		__this->set_terrainSettings_8(L_2);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase::RandomizeSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase_RandomizeSeed_mC1BE9A44002E3E7BE30A5BB2BD47326D673A42B4 (SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E * __this, const RuntimeMethod* method)
{
	{
		// seed = Random.Range(0, 9999);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)9999), /*hidden argument*/NULL);
		__this->set_seed_4(L_0);
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase::InitializeSeed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase_InitializeSeed_m4618B0BB1EDC888BAA11FEB519945F109FA41DEC (SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E * __this, int32_t ___start0, const RuntimeMethod* method)
{
	{
		// Random.InitState(start + seed);
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get_seed_4();
		Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab sc.terrain.vegetationspawner.SpawnerBase::GetProbableTree(sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * SpawnerBase_GetProbableTree_mF52ACCEA625BACA639EAE982EB99A99508D79E31 (TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * ___treeType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * V_0 = NULL;
	{
		// recursionCounter = 0;
		((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_StaticFields*)il2cpp_codegen_static_fields_for(SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_il2cpp_TypeInfo_var))->set_recursionCounter_9(0);
		// return PickTreeRecursive(treeType);
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_0 = ___treeType0;
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_1;
		L_1 = SpawnerBase_PickTreeRecursive_m1FAC30EF8C7C506F1B5C9F58EFCE1D8D7F3FB52F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_2 = V_0;
		return L_2;
	}
}
// sc.terrain.vegetationspawner.SpawnerBase/TreePrefab sc.terrain.vegetationspawner.SpawnerBase::PickTreeRecursive(sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * SpawnerBase_PickTreeRecursive_m1FAC30EF8C7C506F1B5C9F58EFCE1D8D7F3FB52F (TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * ___treeType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1E15530AA28DA76DD9909083CA672047C42944E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m12630212D3819AD8AD72E2EB189EE84254B7DD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * V_0 = NULL;
	bool V_1 = false;
	TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (treeType.prefabs.Count == 0) return null;
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_0 = ___treeType0;
		NullCheck(L_0);
		List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * L_1 = L_0->get_prefabs_12();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m1E15530AA28DA76DD9909083CA672047C42944E0_inline(L_1, /*hidden argument*/List_1_get_Count_m1E15530AA28DA76DD9909083CA672047C42944E0_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// if (treeType.prefabs.Count == 0) return null;
		V_2 = (TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 *)NULL;
		goto IL_007d;
	}

IL_0017:
	{
		// TreePrefab p = treeType.prefabs[Random.Range(0, treeType.prefabs.Count)];
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_4 = ___treeType0;
		NullCheck(L_4);
		List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * L_5 = L_4->get_prefabs_12();
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_6 = ___treeType0;
		NullCheck(L_6);
		List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * L_7 = L_6->get_prefabs_12();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m1E15530AA28DA76DD9909083CA672047C42944E0_inline(L_7, /*hidden argument*/List_1_get_Count_m1E15530AA28DA76DD9909083CA672047C42944E0_RuntimeMethod_var);
		int32_t L_9;
		L_9 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_10;
		L_10 = List_1_get_Item_m12630212D3819AD8AD72E2EB189EE84254B7DD2A_inline(L_5, L_9, /*hidden argument*/List_1_get_Item_m12630212D3819AD8AD72E2EB189EE84254B7DD2A_RuntimeMethod_var);
		V_0 = L_10;
		// if (recursionCounter >= 4) return null;
		int32_t L_11 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_StaticFields*)il2cpp_codegen_static_fields_for(SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_il2cpp_TypeInfo_var))->get_recursionCounter_9();
		V_3 = (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0047;
		}
	}
	{
		// if (recursionCounter >= 4) return null;
		V_2 = (TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 *)NULL;
		goto IL_007d;
	}

IL_0047:
	{
		// if ((Random.value * 100f) <= p.probability)
		float L_13;
		L_13 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_14 = V_0;
		NullCheck(L_14);
		float L_15 = L_14->get_probability_1();
		V_4 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_multiply((float)L_13, (float)(100.0f)))) <= ((float)L_15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0068;
		}
	}
	{
		// return p;
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_17 = V_0;
		V_2 = L_17;
		goto IL_007d;
	}

IL_0068:
	{
		// recursionCounter++;
		int32_t L_18 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_StaticFields*)il2cpp_codegen_static_fields_for(SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_il2cpp_TypeInfo_var))->get_recursionCounter_9();
		((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_StaticFields*)il2cpp_codegen_static_fields_for(SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E_il2cpp_TypeInfo_var))->set_recursionCounter_9(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
		// return PickTreeRecursive(treeType);
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_19 = ___treeType0;
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_20;
		L_20 = SpawnerBase_PickTreeRecursive_m1FAC30EF8C7C506F1B5C9F58EFCE1D8D7F3FB52F(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_21 = V_2;
		return L_21;
	}
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase::CopySettingsToTerrains()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase_CopySettingsToTerrains_m6D8A5D56007BBC630DF880972A6DC87BAE101FD0 (SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Terrain t in terrains)
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_0 = __this->get_terrains_5();
		NullCheck(L_0);
		Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  L_1;
		L_1 = List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556(L_0, /*hidden argument*/List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f7;
		}

IL_0013:
		{
			// foreach (Terrain t in terrains)
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2;
			L_2 = Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_inline((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
			V_1 = L_2;
			// t.drawTreesAndFoliage = terrainSettings.drawTreesAndFoliage;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_3 = V_1;
			TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_4 = __this->get_terrainSettings_8();
			NullCheck(L_4);
			bool L_5 = L_4->get_drawTreesAndFoliage_0();
			NullCheck(L_3);
			Terrain_set_drawTreesAndFoliage_m21CC0250153F931F96725F395F3450EF4553B929(L_3, L_5, /*hidden argument*/NULL);
			// t.treeMaximumFullLODCount = terrainSettings.maxMeshTrees;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_6 = V_1;
			TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_7 = __this->get_terrainSettings_8();
			NullCheck(L_7);
			int32_t L_8 = L_7->get_maxMeshTrees_5();
			NullCheck(L_6);
			Terrain_set_treeMaximumFullLODCount_m2B151A511B6136505C7068350AC559B009B52995(L_6, L_8, /*hidden argument*/NULL);
			// t.preserveTreePrototypeLayers = terrainSettings.perservePrefabLayer;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_9 = V_1;
			TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_10 = __this->get_terrainSettings_8();
			NullCheck(L_10);
			bool L_11 = L_10->get_perservePrefabLayer_1();
			NullCheck(L_9);
			Terrain_set_preserveTreePrototypeLayers_m110DBE87E7078B49BBB97AC3E56E25FED10E6F7E(L_9, L_11, /*hidden argument*/NULL);
			// t.treeBillboardDistance = terrainSettings.billboardStart;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_12 = V_1;
			TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_13 = __this->get_terrainSettings_8();
			NullCheck(L_13);
			float L_14 = L_13->get_billboardStart_4();
			NullCheck(L_12);
			Terrain_set_treeBillboardDistance_m60BBE7FBD4B66661E02C4848EA912390DCA5F0D8(L_12, L_14, /*hidden argument*/NULL);
			// t.treeDistance = terrainSettings.treeDistance;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_15 = V_1;
			TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_16 = __this->get_terrainSettings_8();
			NullCheck(L_16);
			float L_17 = L_16->get_treeDistance_3();
			NullCheck(L_15);
			Terrain_set_treeDistance_m1B8BFC8FC1B85FB4CBD0C9D45E52EB4702DED208(L_15, L_17, /*hidden argument*/NULL);
			// t.detailObjectDistance = terrainSettings.grassDistance;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_18 = V_1;
			TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_19 = __this->get_terrainSettings_8();
			NullCheck(L_19);
			float L_20 = L_19->get_grassDistance_6();
			NullCheck(L_18);
			Terrain_set_detailObjectDistance_mAECD68D012A05C8E16027801F6B21CEA355BC93E(L_18, L_20, /*hidden argument*/NULL);
			// t.detailObjectDensity = terrainSettings.grassDensity;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_21 = V_1;
			TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_22 = __this->get_terrainSettings_8();
			NullCheck(L_22);
			float L_23 = L_22->get_grassDensity_7();
			NullCheck(L_21);
			Terrain_set_detailObjectDensity_m691B49AD24E50A707AD67D4D5A0563F24E754803(L_21, L_23, /*hidden argument*/NULL);
			// t.terrainData.wavingGrassAmount = terrainSettings.windStrength;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_24 = V_1;
			NullCheck(L_24);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_25;
			L_25 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_24, /*hidden argument*/NULL);
			TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_26 = __this->get_terrainSettings_8();
			NullCheck(L_26);
			float L_27 = L_26->get_windStrength_8();
			NullCheck(L_25);
			TerrainData_set_wavingGrassAmount_mAFF6E400285EBF7DF43598BBA21C5287AAD3F75C(L_25, L_27, /*hidden argument*/NULL);
			// t.terrainData.wavingGrassStrength = terrainSettings.windSpeed;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_28 = V_1;
			NullCheck(L_28);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_29;
			L_29 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_28, /*hidden argument*/NULL);
			TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_30 = __this->get_terrainSettings_8();
			NullCheck(L_30);
			float L_31 = L_30->get_windSpeed_9();
			NullCheck(L_29);
			TerrainData_set_wavingGrassStrength_m72E08DA3366F9DD3654A2E184D67EB85BA333E95(L_29, L_31, /*hidden argument*/NULL);
			// t.terrainData.wavingGrassSpeed = terrainSettings.windFrequency;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_32 = V_1;
			NullCheck(L_32);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_33;
			L_33 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_32, /*hidden argument*/NULL);
			TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_34 = __this->get_terrainSettings_8();
			NullCheck(L_34);
			float L_35 = L_34->get_windFrequency_10();
			NullCheck(L_33);
			TerrainData_set_wavingGrassSpeed_m634973510A3F4984F8EEF721D82B4A3D50CD0771(L_33, L_35, /*hidden argument*/NULL);
			// t.terrainData.wavingGrassTint = terrainSettings.wintTint;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_36 = V_1;
			NullCheck(L_36);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_37;
			L_37 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_36, /*hidden argument*/NULL);
			TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_38 = __this->get_terrainSettings_8();
			NullCheck(L_38);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39 = L_38->get_wintTint_11();
			NullCheck(L_37);
			TerrainData_set_wavingGrassTint_mE9D4933506404148435C5D04F90D35B42A55F6FE(L_37, L_39, /*hidden argument*/NULL);
		}

IL_00f7:
		{
			// foreach (Terrain t in terrains)
			bool L_40;
			L_40 = Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
			if (L_40)
			{
				goto IL_0013;
			}
		}

IL_0103:
		{
			IL2CPP_LEAVE(0x114, FINALLY_0105);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0105;
	}

FINALLY_0105:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(261)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(261)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x114, IL_0114)
	}

IL_0114:
	{
		// }
		return;
	}
}
// System.Boolean sc.terrain.vegetationspawner.SpawnerBase::HasMissingTerrain(System.Collections.Generic.List`1<UnityEngine.Terrain>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpawnerBase_HasMissingTerrain_m8ADAA1B9BA3CF9520B63B0586228527BDD396E60 (List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * ___terrains0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1324B1A88A743144CEA79C190309E6F31208258C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4486B34786432CD9C1F27AB4F109B1A1DD655211_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// bool isMissing = false;
		V_0 = (bool)0;
		// for (int i = 0; i < terrains.Count; i++)
		V_1 = 0;
		goto IL_0020;
	}

IL_0007:
	{
		// if (terrains[i] == null) isMissing = true;
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_0 = ___terrains0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2;
		L_2 = List_1_get_Item_m4486B34786432CD9C1F27AB4F109B1A1DD655211_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m4486B34786432CD9C1F27AB4F109B1A1DD655211_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// if (terrains[i] == null) isMissing = true;
		V_0 = (bool)1;
	}

IL_001b:
	{
		// for (int i = 0; i < terrains.Count; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0020:
	{
		// for (int i = 0; i < terrains.Count; i++)
		int32_t L_6 = V_1;
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_7 = ___terrains0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m1324B1A88A743144CEA79C190309E6F31208258C_inline(L_7, /*hidden argument*/List_1_get_Count_m1324B1A88A743144CEA79C190309E6F31208258C_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0007;
		}
	}
	{
		// return isMissing;
		bool L_10 = V_0;
		V_4 = L_10;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		bool L_11 = V_4;
		return L_11;
	}
}
// System.Int32 sc.terrain.vegetationspawner.SpawnerBase::GetSplatmapID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpawnerBase_GetSplatmapID_m5AC376E8C70761A5A62D31C58AF658351475BF07 (int32_t ___layerID0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (layerID > 11) return 3;
		int32_t L_0 = ___layerID0;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (layerID > 11) return 3;
		V_1 = 3;
		goto IL_002a;
	}

IL_000e:
	{
		// if (layerID > 7) return 2;
		int32_t L_2 = ___layerID0;
		V_2 = (bool)((((int32_t)L_2) > ((int32_t)7))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// if (layerID > 7) return 2;
		V_1 = 2;
		goto IL_002a;
	}

IL_001a:
	{
		// if (layerID > 3) return 1;
		int32_t L_4 = ___layerID0;
		V_3 = (bool)((((int32_t)L_4) > ((int32_t)3))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// if (layerID > 3) return 1;
		V_1 = 1;
		goto IL_002a;
	}

IL_0026:
	{
		// return 0;
		V_1 = 0;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Single sc.terrain.vegetationspawner.SpawnerBase::SampleChannel(UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SpawnerBase_SampleChannel_m2CA25CB83AFE7821920F8DBF2A66681C549CBDBA (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color0, int32_t ___channel1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		// float value = 0;
		V_0 = (0.0f);
		// switch (channel)
		int32_t L_0 = ___channel1;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0035;
			}
			case 3:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_0047;
	}

IL_0023:
	{
		// value = color.r;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = ___color0;
		float L_4 = L_3.get_r_0();
		V_0 = L_4;
		// break;
		goto IL_0047;
	}

IL_002c:
	{
		// value = color.g;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5 = ___color0;
		float L_6 = L_5.get_g_1();
		V_0 = L_6;
		// break;
		goto IL_0047;
	}

IL_0035:
	{
		// value = color.b;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ___color0;
		float L_8 = L_7.get_b_2();
		V_0 = L_8;
		// break;
		goto IL_0047;
	}

IL_003e:
	{
		// value = color.a;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = ___color0;
		float L_10 = L_9.get_a_3();
		V_0 = L_10;
		// break;
		goto IL_0047;
	}

IL_0047:
	{
		// return value;
		float L_11 = V_0;
		V_3 = L_11;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		float L_12 = V_3;
		return L_12;
	}
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnerBase__ctor_m9FA9D6B77CF70E743A88376FA5BB21B82717108E (SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m363BF8E74346EE20B9B4AE4F1F909214DD3B9268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m827AB1CFAFE8AF5AD4E8A9804055C7074C96642B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA3C067389B7E10ABABFDCEA76BD81B7CBA414BB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t868FA79F2DD4048265354F01579A6C5503166310_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int seed = 0;
		__this->set_seed_4(0);
		// public List<Terrain> terrains = new List<Terrain>();
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_0 = (List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C *)il2cpp_codegen_object_new(List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C_il2cpp_TypeInfo_var);
		List_1__ctor_mA3C067389B7E10ABABFDCEA76BD81B7CBA414BB6(L_0, /*hidden argument*/List_1__ctor_mA3C067389B7E10ABABFDCEA76BD81B7CBA414BB6_RuntimeMethod_var);
		__this->set_terrains_5(L_0);
		// public List<TreeType> treeTypes = new List<TreeType>();
		List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * L_1 = (List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C *)il2cpp_codegen_object_new(List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C_il2cpp_TypeInfo_var);
		List_1__ctor_m827AB1CFAFE8AF5AD4E8A9804055C7074C96642B(L_1, /*hidden argument*/List_1__ctor_m827AB1CFAFE8AF5AD4E8A9804055C7074C96642B_RuntimeMethod_var);
		__this->set_treeTypes_6(L_1);
		// public List<GrassPrefab> grassPrefabs = new List<GrassPrefab>();
		List_1_t868FA79F2DD4048265354F01579A6C5503166310 * L_2 = (List_1_t868FA79F2DD4048265354F01579A6C5503166310 *)il2cpp_codegen_object_new(List_1_t868FA79F2DD4048265354F01579A6C5503166310_il2cpp_TypeInfo_var);
		List_1__ctor_m363BF8E74346EE20B9B4AE4F1F909214DD3B9268(L_2, /*hidden argument*/List_1__ctor_m363BF8E74346EE20B9B4AE4F1F909214DD3B9268_RuntimeMethod_var);
		__this->set_grassPrefabs_7(L_2);
		// public TerrainSettings terrainSettings = new TerrainSettings();
		TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * L_3 = (TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F *)il2cpp_codegen_object_new(TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F_il2cpp_TypeInfo_var);
		TerrainSettings__ctor_m5B3E2A13FB4ACE85C5EBCE3F6F5170DB1FE43D79(L_3, /*hidden argument*/NULL);
		__this->set_terrainSettings_8(L_3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector2 sc.terrain.vegetationspawner.TerrainSampler::GetNormalizedPosition(UnityEngine.Terrain,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  TerrainSampler_GetNormalizedPosition_mF6BB9367E5679F31FA05FC81793094C166DC027F (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 localPos = terrain.transform.InverseTransformPoint(worldPosition);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_0 = ___terrain0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___worldPosition1;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// return new Vector2(
		//     localPos.x / terrain.terrainData.size.x,
		//     localPos.z / terrain.terrainData.size.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		float L_5 = L_4.get_x_2();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_6 = ___terrain0;
		NullCheck(L_6);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_7;
		L_7 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = TerrainData_get_size_mF68B76A49498AE26C506D77483EA81E4F816EB15(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_z_4();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_12 = ___terrain0;
		NullCheck(L_12);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_13;
		L_13 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = TerrainData_get_size_mF68B76A49498AE26C506D77483EA81E4F816EB15(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), ((float)((float)L_5/(float)L_9)), ((float)((float)L_11/(float)L_15)), /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_1;
		return L_17;
	}
}
// System.Void sc.terrain.vegetationspawner.TerrainSampler::SampleHeight(UnityEngine.Terrain,UnityEngine.Vector2,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainSampler_SampleHeight_m066CA886AB9C1DC2813773FD91BB08380711D8B8 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, float* ___height2, float* ___worldHeight3, float* ___normalizedHeight4, const RuntimeMethod* method)
{
	{
		// height = terrain.terrainData.GetHeight(
		//     Mathf.CeilToInt(position.x * terrain.terrainData.heightmapTexture.width),
		//     Mathf.CeilToInt(position.y * terrain.terrainData.heightmapTexture.height)
		//     );
		float* L_0 = ___height2;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_1 = ___terrain0;
		NullCheck(L_1);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_2;
		L_2 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___position1;
		float L_4 = L_3.get_x_0();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_5 = ___terrain0;
		NullCheck(L_5);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_6;
		L_6 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7;
		L_7 = TerrainData_get_heightmapTexture_mC373042EB6C6377F2D7B85FAD16E2AE506E14BC9(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		int32_t L_9;
		L_9 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_multiply((float)L_4, (float)((float)((float)L_8)))), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = ___position1;
		float L_11 = L_10.get_y_1();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_12 = ___terrain0;
		NullCheck(L_12);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_13;
		L_13 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_14;
		L_14 = TerrainData_get_heightmapTexture_mC373042EB6C6377F2D7B85FAD16E2AE506E14BC9(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_14);
		int32_t L_16;
		L_16 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_multiply((float)L_11, (float)((float)((float)L_15)))), /*hidden argument*/NULL);
		NullCheck(L_2);
		float L_17;
		L_17 = TerrainData_GetHeight_m4992CEC7726222DBAA186191FC1C90C3998E6CF1(L_2, L_9, L_16, /*hidden argument*/NULL);
		*((float*)L_0) = (float)L_17;
		// worldHeight = height + terrain.transform.position.y;
		float* L_18 = ___worldHeight3;
		float* L_19 = ___height2;
		float L_20 = *((float*)L_19);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_21 = ___terrain0;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		*((float*)L_18) = (float)((float)il2cpp_codegen_add((float)L_20, (float)L_24));
		// normalizedHeight = height / terrain.terrainData.size.y;
		float* L_25 = ___normalizedHeight4;
		float* L_26 = ___height2;
		float L_27 = *((float*)L_26);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_28 = ___terrain0;
		NullCheck(L_28);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_29;
		L_29 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = TerrainData_get_size_mF68B76A49498AE26C506D77483EA81E4F816EB15(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_y_3();
		*((float*)L_25) = (float)((float)((float)L_27/(float)L_31));
		// }
		return;
	}
}
// System.Single sc.terrain.vegetationspawner.TerrainSampler::GetSlope(UnityEngine.Terrain,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_GetSlope_m6A88C313F6810D0CDD502520BD3D59D1C8900A4B (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, bool ___average2, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// if (!average)
		bool L_0 = ___average2;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// return terrain.terrainData.GetSteepness(position.x, position.y);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2 = ___terrain0;
		NullCheck(L_2);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_3;
		L_3 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___position1;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___position1;
		float L_7 = L_6.get_y_1();
		NullCheck(L_3);
		float L_8;
		L_8 = TerrainData_GetSteepness_m593B1A252175BE0EED366A3C954B3F2C900F6734(L_3, L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_002e;
	}

IL_0024:
	{
		// return GetAverageSlope(terrain, position);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_9 = ___terrain0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = ___position1;
		float L_11;
		L_11 = TerrainSampler_GetAverageSlope_mD9C9E868C100AF01EA2B6DD1A30024C6CF885C5B(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		float L_12 = V_1;
		return L_12;
	}
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.TerrainSampler::DetailIndex(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  TerrainSampler_DetailIndex_m294DEE499C0587B3A870F33F1F5351DB00AEF1B5 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, const RuntimeMethod* method)
{
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector2Int(
		//     Mathf.CeilToInt(position.x * terrain.terrainData.detailResolution),
		//     Mathf.CeilToInt(position.y * terrain.terrainData.detailResolution)
		//     );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___position1;
		float L_1 = L_0.get_x_0();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2 = ___terrain0;
		NullCheck(L_2);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_3;
		L_3 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = TerrainData_get_detailResolution_m703347DFEDD40D64A30CC99CE4CCDF305B1ACD72(L_3, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_multiply((float)L_1, (float)((float)((float)L_4)))), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___position1;
		float L_7 = L_6.get_y_1();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_8 = ___terrain0;
		NullCheck(L_8);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_9;
		L_9 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TerrainData_get_detailResolution_m703347DFEDD40D64A30CC99CE4CCDF305B1ACD72(L_9, /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_multiply((float)L_7, (float)((float)((float)L_10)))), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_12), L_5, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Vector2Int sc.terrain.vegetationspawner.TerrainSampler::SplatmapTexelIndex(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  TerrainSampler_SplatmapTexelIndex_m55BBAC981EC391551897E955ECFD68FDA54D1116 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, const RuntimeMethod* method)
{
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector2Int(
		//    Mathf.CeilToInt(position.x * terrain.terrainData.alphamapWidth),
		//    Mathf.CeilToInt(position.y * terrain.terrainData.alphamapHeight)
		//    );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___position1;
		float L_1 = L_0.get_x_0();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2 = ___terrain0;
		NullCheck(L_2);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_3;
		L_3 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = TerrainData_get_alphamapWidth_mF5F5841BF2FA744E5CDEFE0E639E5A6E83943A0C(L_3, /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_multiply((float)L_1, (float)((float)((float)L_4)))), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___position1;
		float L_7 = L_6.get_y_1();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_8 = ___terrain0;
		NullCheck(L_8);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_9;
		L_9 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TerrainData_get_alphamapHeight_m7C1CBEC752801B973599E9509BB8DBDA1CDA756D(L_9, /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_multiply((float)L_7, (float)((float)((float)L_10)))), /*hidden argument*/NULL);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_12), L_5, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Vector3 sc.terrain.vegetationspawner.TerrainSampler::DetailToWorld(UnityEngine.Terrain,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  TerrainSampler_DetailToWorld_mF39EFFAD52224D212CD1BDF5737E8F3C09A717FA (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector3(
		//     terrain.GetPosition().x + (((float)x / (float)terrain.terrainData.detailWidth) * (terrain.terrainData.size.x)),
		//     0f,
		//     terrain.GetPosition().z + (((float)y / (float)terrain.terrainData.detailHeight) * (terrain.terrainData.size.z))
		//     );
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_0 = ___terrain0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Terrain_GetPosition_m4226105D0DBD8947B8800559E8E53C8479AC4825(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		int32_t L_3 = ___x1;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_4 = ___terrain0;
		NullCheck(L_4);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_5;
		L_5 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TerrainData_get_detailWidth_m1F0EEDA4E902C5B77142D5F63DBE20B0EB20562C(L_5, /*hidden argument*/NULL);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_7 = ___terrain0;
		NullCheck(L_7);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_8;
		L_8 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = TerrainData_get_size_mF68B76A49498AE26C506D77483EA81E4F816EB15(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_11 = ___terrain0;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Terrain_GetPosition_m4226105D0DBD8947B8800559E8E53C8479AC4825(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		int32_t L_14 = ___y2;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_15 = ___terrain0;
		NullCheck(L_15);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_16;
		L_16 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = TerrainData_get_detailHeight_m52322CB3B104B073977E18A26480BE483EDB46E8(L_16, /*hidden argument*/NULL);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_18 = ___terrain0;
		NullCheck(L_18);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_19;
		L_19 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = TerrainData_get_size_mF68B76A49498AE26C506D77483EA81E4F816EB15(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), ((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)((float)L_3))/(float)((float)((float)L_6)))), (float)L_10)))), (0.0f), ((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)((float)L_14))/(float)((float)((float)L_17)))), (float)L_21)))), /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0066;
	}

IL_0066:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_0;
		return L_23;
	}
}
// System.Single sc.terrain.vegetationspawner.TerrainSampler::GetAverageSlope(UnityEngine.Terrain,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_GetAverageSlope_mD9C9E868C100AF01EA2B6DD1A30024C6CF885C5B (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float texelSize = (1f / terrain.terrainData.heightmapTexture.width) * 2f;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_1;
		L_1 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2;
		L_2 = TerrainData_get_heightmapTexture_mC373042EB6C6377F2D7B85FAD16E2AE506E14BC9(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(1.0f)/(float)((float)((float)L_3)))), (float)(2.0f)));
		// float slope = 0f;
		V_1 = (0.0f);
		// slope += terrain.terrainData.GetSteepness(position.x, position.y);
		float L_4 = V_1;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_5 = ___terrain0;
		NullCheck(L_5);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_6;
		L_6 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___position1;
		float L_8 = L_7.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___position1;
		float L_10 = L_9.get_y_1();
		NullCheck(L_6);
		float L_11;
		L_11 = TerrainData_GetSteepness_m593B1A252175BE0EED366A3C954B3F2C900F6734(L_6, L_8, L_10, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_add((float)L_4, (float)L_11));
		// slope += terrain.terrainData.GetSteepness(position.x + texelSize, position.y);
		float L_12 = V_1;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_13 = ___terrain0;
		NullCheck(L_13);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_14;
		L_14 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = ___position1;
		float L_16 = L_15.get_x_0();
		float L_17 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = ___position1;
		float L_19 = L_18.get_y_1();
		NullCheck(L_14);
		float L_20;
		L_20 = TerrainData_GetSteepness_m593B1A252175BE0EED366A3C954B3F2C900F6734(L_14, ((float)il2cpp_codegen_add((float)L_16, (float)L_17)), L_19, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_add((float)L_12, (float)L_20));
		// slope += terrain.terrainData.GetSteepness(position.x - texelSize, position.y);
		float L_21 = V_1;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_22 = ___terrain0;
		NullCheck(L_22);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_23;
		L_23 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_22, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = ___position1;
		float L_25 = L_24.get_x_0();
		float L_26 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = ___position1;
		float L_28 = L_27.get_y_1();
		NullCheck(L_23);
		float L_29;
		L_29 = TerrainData_GetSteepness_m593B1A252175BE0EED366A3C954B3F2C900F6734(L_23, ((float)il2cpp_codegen_subtract((float)L_25, (float)L_26)), L_28, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_add((float)L_21, (float)L_29));
		// slope += terrain.terrainData.GetSteepness(position.x, position.y + texelSize);
		float L_30 = V_1;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_31 = ___terrain0;
		NullCheck(L_31);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_32;
		L_32 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_31, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = ___position1;
		float L_34 = L_33.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = ___position1;
		float L_36 = L_35.get_y_1();
		float L_37 = V_0;
		NullCheck(L_32);
		float L_38;
		L_38 = TerrainData_GetSteepness_m593B1A252175BE0EED366A3C954B3F2C900F6734(L_32, L_34, ((float)il2cpp_codegen_add((float)L_36, (float)L_37)), /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_add((float)L_30, (float)L_38));
		// slope += terrain.terrainData.GetSteepness(position.x, position.y - texelSize);
		float L_39 = V_1;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_40 = ___terrain0;
		NullCheck(L_40);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_41;
		L_41 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_40, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = ___position1;
		float L_43 = L_42.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44 = ___position1;
		float L_45 = L_44.get_y_1();
		float L_46 = V_0;
		NullCheck(L_41);
		float L_47;
		L_47 = TerrainData_GetSteepness_m593B1A252175BE0EED366A3C954B3F2C900F6734(L_41, L_43, ((float)il2cpp_codegen_subtract((float)L_45, (float)L_46)), /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_add((float)L_39, (float)L_47));
		// return slope / 5f;
		float L_48 = V_1;
		V_2 = ((float)((float)L_48/(float)(5.0f)));
		goto IL_00b9;
	}

IL_00b9:
	{
		// }
		float L_49 = V_2;
		return L_49;
	}
}
// System.Single sc.terrain.vegetationspawner.TerrainSampler::SampleConvexity(UnityEngine.Terrain,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_SampleConvexity_mD7766A71D8925E23B328FA883B5C066B581C68ED (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position1, float ___radius2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// float texelSize = (1f / terrain.terrainData.heightmapResolution) * radius;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_1;
		L_1 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TerrainData_get_heightmapResolution_mF665E4416056AEA15E008E37A814D02BED01FCF4(L_1, /*hidden argument*/NULL);
		float L_3 = ___radius2;
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)(1.0f)/(float)((float)((float)L_2)))), (float)L_3));
		// float posX = terrain.terrainData.GetInterpolatedNormal(position.x + texelSize, position.y).x;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_4 = ___terrain0;
		NullCheck(L_4);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_5;
		L_5 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___position1;
		float L_7 = L_6.get_x_0();
		float L_8 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___position1;
		float L_10 = L_9.get_y_1();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = TerrainData_GetInterpolatedNormal_m18A29D6F5560F4BBBAA0AF3801FD5355E4697965(L_5, ((float)il2cpp_codegen_add((float)L_7, (float)L_8)), L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		V_1 = L_12;
		// float negX = terrain.terrainData.GetInterpolatedNormal(position.x - texelSize, position.y).x;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_13 = ___terrain0;
		NullCheck(L_13);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_14;
		L_14 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = ___position1;
		float L_16 = L_15.get_x_0();
		float L_17 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = ___position1;
		float L_19 = L_18.get_y_1();
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = TerrainData_GetInterpolatedNormal_m18A29D6F5560F4BBBAA0AF3801FD5355E4697965(L_14, ((float)il2cpp_codegen_subtract((float)L_16, (float)L_17)), L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		V_2 = L_21;
		// float x = (posX - negX) + 0.5f;
		float L_22 = V_1;
		float L_23 = V_2;
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_22, (float)L_23)), (float)(0.5f)));
		// float posY = terrain.terrainData.GetInterpolatedNormal(position.x, position.y + texelSize).z;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_24 = ___terrain0;
		NullCheck(L_24);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_25;
		L_25 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_24, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = ___position1;
		float L_27 = L_26.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = ___position1;
		float L_29 = L_28.get_y_1();
		float L_30 = V_0;
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = TerrainData_GetInterpolatedNormal_m18A29D6F5560F4BBBAA0AF3801FD5355E4697965(L_25, L_27, ((float)il2cpp_codegen_add((float)L_29, (float)L_30)), /*hidden argument*/NULL);
		float L_32 = L_31.get_z_4();
		V_4 = L_32;
		// float NegY = terrain.terrainData.GetInterpolatedNormal(position.x, position.y - texelSize).z;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_33 = ___terrain0;
		NullCheck(L_33);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_34;
		L_34 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_33, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35 = ___position1;
		float L_36 = L_35.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37 = ___position1;
		float L_38 = L_37.get_y_1();
		float L_39 = V_0;
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = TerrainData_GetInterpolatedNormal_m18A29D6F5560F4BBBAA0AF3801FD5355E4697965(L_34, L_36, ((float)il2cpp_codegen_subtract((float)L_38, (float)L_39)), /*hidden argument*/NULL);
		float L_41 = L_40.get_z_4();
		V_5 = L_41;
		// float y = (posY - NegY) + 0.5f;
		float L_42 = V_4;
		float L_43 = V_5;
		V_6 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_42, (float)L_43)), (float)(0.5f)));
		// return (y < 0.5f) ? 2.0f * x * y : 1.0f - 2.0f * (1.0f - x) * (1.0f - y);
		float L_44 = V_6;
		if ((((float)L_44) < ((float)(0.5f))))
		{
			goto IL_00d2;
		}
	}
	{
		float L_45 = V_3;
		float L_46 = V_6;
		G_B3_0 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_45)))), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_46))))));
		goto IL_00dc;
	}

IL_00d2:
	{
		float L_47 = V_3;
		float L_48 = V_6;
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_47)), (float)L_48));
	}

IL_00dc:
	{
		V_7 = G_B3_0;
		goto IL_00e0;
	}

IL_00e0:
	{
		// }
		float L_49 = V_7;
		return L_49;
	}
}
// System.Single sc.terrain.vegetationspawner.TerrainSampler::ConvexityToCurvature(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TerrainSampler_ConvexityToCurvature_mAD61CA7B8C6A3023C45BE925F4D168E46B94C18E (float ___convexity0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return (convexity - (1 - convexity)) * 0.5f + 0.5f;
		float L_0 = ___convexity0;
		float L_1 = ___convexity0;
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_0, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_1)))), (float)(0.5f))), (float)(0.5f)));
		goto IL_0019;
	}

IL_0019:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.TreeInstance[] sc.terrain.vegetationspawner.TerrainSampler::GetTreeInstances(UnityEngine.Terrain,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* TerrainSampler_GetTreeInstances_mB08AF2A2BC9D216AC80D51A4A25C48AD0C0AD235 (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___prefab1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_mAE13A7F62E684A96957FF38FEC097CE5963FB601_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_m30B6D63B7C50B3BCE25F0EF72D8C87391D1644DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m9B44BB9D07E6A9A0CBADB3393C2A9BEA17CC8E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CGetTreeInstancesU3Eb__0_m2F107CFB224B53C426320D69A0DA52BF6CF37636_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4F317521E78A48BBEE99F717E5DC5694027DA48);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* V_8 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1 * L_0 = (U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_mCFA0759AD76058397EF241DA45FC70A1D0C380B0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// var prototypeIndex = -1;
		U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_prototypeIndex_0((-1));
		// for (int i = 0; i < terrain.terrainData.treePrototypes.Length; i++)
		V_1 = 0;
		goto IL_003b;
	}

IL_0012:
	{
		// if (terrain.terrainData.treePrototypes[i].prefab == prefab) prototypeIndex = i;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2 = ___terrain0;
		NullCheck(L_2);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_3;
		L_3 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* L_4;
		L_4 = TerrainData_get_treePrototypes_mE083138D9260AD480EBB794632142BC68D4533C7(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = TreePrototype_get_prefab_mC0D926D4AFCF488765F39348C08C93BEA94A7C99(L_7, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_9 = ___prefab1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0036;
		}
	}
	{
		// if (terrain.terrainData.treePrototypes[i].prefab == prefab) prototypeIndex = i;
		U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		L_12->set_prototypeIndex_0(L_13);
	}

IL_0036:
	{
		// for (int i = 0; i < terrain.terrainData.treePrototypes.Length; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003b:
	{
		// for (int i = 0; i < terrain.terrainData.treePrototypes.Length; i++)
		int32_t L_15 = V_1;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_16 = ___terrain0;
		NullCheck(L_16);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_17;
		L_17 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* L_18;
		L_18 = TerrainData_get_treePrototypes_mE083138D9260AD480EBB794632142BC68D4533C7(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		V_3 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))? 1 : 0);
		bool L_19 = V_3;
		if (L_19)
		{
			goto IL_0012;
		}
	}
	{
		// if (prototypeIndex >= 0)
		U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_prototypeIndex_0();
		V_4 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_00f9;
		}
	}
	{
		// TreeInstance[] instances = terrain.terrainData.treeInstances.Where(x => x.prototypeIndex == prototypeIndex).ToArray();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_23 = ___terrain0;
		NullCheck(L_23);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_24;
		L_24 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* L_25;
		L_25 = TerrainData_get_treeInstances_m77CBBB2E2D422ABCE4461184A73F80AA03F38F21(L_24, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1 * L_26 = V_0;
		Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA * L_27 = (Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA *)il2cpp_codegen_object_new(Func_2_t300E8F1193B2CB25D7D639D0AB012C5D64296FFA_il2cpp_TypeInfo_var);
		Func_2__ctor_m9B44BB9D07E6A9A0CBADB3393C2A9BEA17CC8E0D(L_27, L_26, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CGetTreeInstancesU3Eb__0_m2F107CFB224B53C426320D69A0DA52BF6CF37636_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m9B44BB9D07E6A9A0CBADB3393C2A9BEA17CC8E0D_RuntimeMethod_var);
		RuntimeObject* L_28;
		L_28 = Enumerable_Where_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_m30B6D63B7C50B3BCE25F0EF72D8C87391D1644DA((RuntimeObject*)(RuntimeObject*)L_25, L_27, /*hidden argument*/Enumerable_Where_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_m30B6D63B7C50B3BCE25F0EF72D8C87391D1644DA_RuntimeMethod_var);
		TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* L_29;
		L_29 = Enumerable_ToArray_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_mAE13A7F62E684A96957FF38FEC097CE5963FB601(L_28, /*hidden argument*/Enumerable_ToArray_TisTreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15_mAE13A7F62E684A96957FF38FEC097CE5963FB601_RuntimeMethod_var);
		V_5 = L_29;
		// for (int i = 0; i < instances.Length; i++)
		V_6 = 0;
		goto IL_00e5;
	}

IL_008d:
	{
		// instances[i].position = Vector3.Scale(instances[i].position, terrain.terrainData.size);
		TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* L_30 = V_5;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* L_32 = V_5;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->get_position_0();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_35 = ___terrain0;
		NullCheck(L_35);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_36;
		L_36 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = TerrainData_get_size_mF68B76A49498AE26C506D77483EA81E4F816EB15(L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline(L_34, L_37, /*hidden argument*/NULL);
		((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->set_position_0(L_38);
		// instances[i].position += terrain.GetPosition();
		TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* L_39 = V_5;
		int32_t L_40 = V_6;
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_address_of_position_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_42 = L_41;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_42);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_44 = ___terrain0;
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Terrain_GetPosition_m4226105D0DBD8947B8800559E8E53C8479AC4825(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_43, L_45, /*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_42 = L_46;
		// for (int i = 0; i < instances.Length; i++)
		int32_t L_47 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00e5:
	{
		// for (int i = 0; i < instances.Length; i++)
		int32_t L_48 = V_6;
		TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* L_49 = V_5;
		NullCheck(L_49);
		V_7 = (bool)((((int32_t)L_48) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))? 1 : 0);
		bool L_50 = V_7;
		if (L_50)
		{
			goto IL_008d;
		}
	}
	{
		// return instances;
		TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* L_51 = V_5;
		V_8 = L_51;
		goto IL_0115;
	}

IL_00f9:
	{
		// Debug.LogError("Failed to return instances. Tree prefab not found in " + terrain.name);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_52 = ___terrain0;
		NullCheck(L_52);
		String_t* L_53;
		L_53 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_52, /*hidden argument*/NULL);
		String_t* L_54;
		L_54 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB4F317521E78A48BBEE99F717E5DC5694027DA48, L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_54, /*hidden argument*/NULL);
		// return null;
		V_8 = (TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8*)NULL;
		goto IL_0115;
	}

IL_0115:
	{
		// }
		TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* L_55 = V_8;
		return L_55;
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
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RebuildCollisionCacheIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RebuildCollisionCacheIfNeeded_m4342DF3209BC1716D7A8E8A5814AEEEE8310F291 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mF38058353BA0E4FFE0A25A3A9C7D7168449945C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (terrainCells.Count == 0) RebuildCollisionCache();
		Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * L_0 = __this->get_terrainCells_19();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mF38058353BA0E4FFE0A25A3A9C7D7168449945C7(L_0, /*hidden argument*/Dictionary_2_get_Count_mF38058353BA0E4FFE0A25A3A9C7D7168449945C7_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if (terrainCells.Count == 0) RebuildCollisionCache();
		VegetationSpawner_RebuildCollisionCache_mE1B44C810AA4A339BE6EFC1BDD6BBFE91FB32621(__this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RebuildCollisionCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RebuildCollisionCache_mE1B44C810AA4A339BE6EFC1BDD6BBFE91FB32621 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m61D20897BACDEB8B33E823A8C943D9C0D039D9D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m95A609BC172A70468CBCE2C4FEFB5A4A621C01C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainCollider_t7B0DDF9DE78C22137804E29293567456BDDB9D9F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * V_16 = NULL;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	bool V_21 = false;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_22;
	memset((&V_22), 0, sizeof(V_22));
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_23 = NULL;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	int32_t V_37 = 0;
	bool V_38 = false;
	bool V_39 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (tempColliders != null)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_0 = __this->get_tempColliders_25();
		V_1 = (bool)((!(((RuntimeObject*)(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		// for (int i = 0; i < tempColliders.Length; i++)
		V_2 = 0;
		goto IL_0041;
	}

IL_0013:
	{
		// if (tempColliders[i] == null) continue;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_2 = __this->get_tempColliders_25();
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		// if (tempColliders[i] == null) continue;
		goto IL_003d;
	}

IL_0028:
	{
		// tempColliders[i].gameObject.SetActive(true);
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_8 = __this->get_tempColliders_25();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// for (int i = 0; i < tempColliders.Length; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < tempColliders.Length; i++)
		int32_t L_14 = V_2;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_15 = __this->get_tempColliders_25();
		NullCheck(L_15);
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_0013;
		}
	}
	{
	}

IL_0053:
	{
		// terrainCells.Clear();
		Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * L_17 = __this->get_terrainCells_19();
		NullCheck(L_17);
		Dictionary_2_Clear_m95A609BC172A70468CBCE2C4FEFB5A4A621C01C6(L_17, /*hidden argument*/Dictionary_2_Clear_m95A609BC172A70468CBCE2C4FEFB5A4A621C01C6_RuntimeMethod_var);
		// foreach (Terrain terrain in terrains)
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_18 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_terrains_5();
		NullCheck(L_18);
		Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  L_19;
		L_19 = List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556(L_18, /*hidden argument*/List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		V_5 = L_19;
	}

IL_006d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0473;
		}

IL_0072:
		{
			// foreach (Terrain terrain in terrains)
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_20;
			L_20 = Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_inline((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_5), /*hidden argument*/Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
			V_6 = L_20;
			// if(terrain == null) continue;;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_21 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_22;
			L_22 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_21, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			V_10 = L_22;
			bool L_23 = V_10;
			if (!L_23)
			{
				goto IL_008f;
			}
		}

IL_008a:
		{
			// if(terrain == null) continue;;
			goto IL_0473;
		}

IL_008f:
		{
			// if(terrain.gameObject.activeInHierarchy == false) continue;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_24 = V_6;
			NullCheck(L_24);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
			L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
			NullCheck(L_25);
			bool L_26;
			L_26 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_25, /*hidden argument*/NULL);
			V_11 = (bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
			bool L_27 = V_11;
			if (!L_27)
			{
				goto IL_00aa;
			}
		}

IL_00a5:
		{
			// if(terrain.gameObject.activeInHierarchy == false) continue;
			goto IL_0473;
		}

IL_00aa:
		{
			// int xCount = Mathf.CeilToInt(terrain.terrainData.size.x / cellSize);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_28 = V_6;
			NullCheck(L_28);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_29;
			L_29 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
			L_30 = TerrainData_get_size_mF68B76A49498AE26C506D77483EA81E4F816EB15(L_29, /*hidden argument*/NULL);
			float L_31 = L_30.get_x_2();
			int32_t L_32 = __this->get_cellSize_10();
			int32_t L_33;
			L_33 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)L_31/(float)((float)((float)L_32)))), /*hidden argument*/NULL);
			V_7 = L_33;
			// int zCount = Mathf.CeilToInt(terrain.terrainData.size.z / cellSize);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_34 = V_6;
			NullCheck(L_34);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_35;
			L_35 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_34, /*hidden argument*/NULL);
			NullCheck(L_35);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
			L_36 = TerrainData_get_size_mF68B76A49498AE26C506D77483EA81E4F816EB15(L_35, /*hidden argument*/NULL);
			float L_37 = L_36.get_z_4();
			int32_t L_38 = __this->get_cellSize_10();
			int32_t L_39;
			L_39 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)((float)L_37/(float)((float)((float)L_38)))), /*hidden argument*/NULL);
			V_8 = L_39;
			// Cell[,] cellGrid = new Cell[xCount, zCount];
			int32_t L_40 = V_7;
			int32_t L_41 = V_8;
			il2cpp_array_size_t L_43[] = { (il2cpp_array_size_t)L_40, (il2cpp_array_size_t)L_41 };
			CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_42 = (CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC*)GenArrayNew(CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC_il2cpp_TypeInfo_var, L_43);
			V_9 = L_42;
			// for (int x = 0; x < xCount; x++)
			V_12 = 0;
			goto IL_0453;
		}

IL_00fd:
		{
			// for (int z = 0; z < zCount; z++)
			V_13 = 0;
			goto IL_043d;
		}

IL_0106:
		{
			// Vector3 wPos = new Vector3(terrain.GetPosition().x + (x * cellSize) + (cellSize * 0.5f), 0f, terrain.GetPosition().z + (z * cellSize) + (cellSize * 0.5f));
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_44 = V_6;
			NullCheck(L_44);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
			L_45 = Terrain_GetPosition_m4226105D0DBD8947B8800559E8E53C8479AC4825(L_44, /*hidden argument*/NULL);
			float L_46 = L_45.get_x_2();
			int32_t L_47 = V_12;
			int32_t L_48 = __this->get_cellSize_10();
			int32_t L_49 = __this->get_cellSize_10();
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_50 = V_6;
			NullCheck(L_50);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
			L_51 = Terrain_GetPosition_m4226105D0DBD8947B8800559E8E53C8479AC4825(L_50, /*hidden argument*/NULL);
			float L_52 = L_51.get_z_4();
			int32_t L_53 = V_13;
			int32_t L_54 = __this->get_cellSize_10();
			int32_t L_55 = __this->get_cellSize_10();
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_14), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_46, (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_47, (int32_t)L_48)))))), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_49)), (float)(0.5f))))), (0.0f), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_52, (float)((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_53, (int32_t)L_54)))))), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_55)), (float)(0.5f))))), /*hidden argument*/NULL);
			// Vector2 normalizeTerrainPos = terrain.GetNormalizedPosition(wPos);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_56 = V_6;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = V_14;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58;
			L_58 = TerrainSampler_GetNormalizedPosition_mF6BB9367E5679F31FA05FC81793094C166DC027F(L_56, L_57, /*hidden argument*/NULL);
			V_15 = L_58;
			// terrain.SampleHeight(normalizeTerrainPos, out _, out wPos.y, out _);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_59 = V_6;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_60 = V_15;
			float* L_61 = (&V_14)->get_address_of_y_3();
			TerrainSampler_SampleHeight_m066CA886AB9C1DC2813773FD91BB08380711D8B8(L_59, L_60, (float*)(&V_17), (float*)L_61, (float*)(&V_18), /*hidden argument*/NULL);
			// Cell cell = Cell.New(wPos, cellSize);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62 = V_14;
			int32_t L_63 = __this->get_cellSize_10();
			Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_64;
			L_64 = Cell_New_mB05BF98AD6CDCB99AFAB882A320A3A46D223A2CB(L_62, ((float)((float)L_63)), /*hidden argument*/NULL);
			V_16 = L_64;
			// cell.Subdivide(cellDivisions);
			Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_65 = V_16;
			int32_t L_66 = __this->get_cellDivisions_11();
			NullCheck(L_65);
			Cell_Subdivide_m61247BFE1E80546D2981E383BABBACA6892DC439(L_65, L_66, /*hidden argument*/NULL);
			// cellGrid[x, z] = cell;
			CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_67 = V_9;
			int32_t L_68 = V_12;
			int32_t L_69 = V_13;
			Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_70 = V_16;
			NullCheck(L_67);
			(L_67)->SetAt(L_68, L_69, L_70);
			// for (int sX = 0; sX < cellDivisions; sX++)
			V_19 = 0;
			goto IL_0423;
		}

IL_01b0:
		{
			// for (int sZ = 0; sZ < cellDivisions; sZ++)
			V_20 = 0;
			goto IL_0409;
		}

IL_01b9:
		{
			// if (highPrecisionCollision)
			bool L_71 = __this->get_highPrecisionCollision_14();
			V_21 = L_71;
			bool L_72 = V_21;
			if (!L_72)
			{
				goto IL_0378;
			}
		}

IL_01c9:
		{
			// Bounds b = cell.subCells[sX, sZ].bounds;
			Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_73 = V_16;
			NullCheck(L_73);
			CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_74 = L_73->get_subCells_1();
			int32_t L_75 = V_19;
			int32_t L_76 = V_20;
			NullCheck(L_74);
			Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_77;
			L_77 = (L_74)->GetAt(L_75, L_76);
			NullCheck(L_77);
			Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_78 = L_77->get_bounds_0();
			V_22 = L_78;
			// Vector3[] corners = new Vector3[]
			// {
			//     //BL corner
			//     new Vector3(b.min.x, b.center.y, b.min.z),
			//     //TL corner
			//     new Vector3(b.min.x, b.center.y, b.min.z + b.size.z),
			//     //BR corner
			//     new Vector3(b.max.x, b.center.y, b.min.z),
			//     //TR corner
			//     new Vector3(b.max.x, b.center.y, b.max.z),
			// };
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_79 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)4);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_80 = L_79;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
			L_81 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_82 = L_81.get_x_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
			L_83 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_84 = L_83.get_y_3();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
			L_85 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_86 = L_85.get_z_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_87;
			memset((&L_87), 0, sizeof(L_87));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_87), L_82, L_84, L_86, /*hidden argument*/NULL);
			NullCheck(L_80);
			(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_87);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_88 = L_80;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
			L_89 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_90 = L_89.get_x_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
			L_91 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_92 = L_91.get_y_3();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
			L_93 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_94 = L_93.get_z_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
			L_95 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_96 = L_95.get_z_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97;
			memset((&L_97), 0, sizeof(L_97));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_97), L_90, L_92, ((float)il2cpp_codegen_add((float)L_94, (float)L_96)), /*hidden argument*/NULL);
			NullCheck(L_88);
			(L_88)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_97);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_98 = L_88;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
			L_99 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_100 = L_99.get_x_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101;
			L_101 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_102 = L_101.get_y_3();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_103;
			L_103 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_104 = L_103.get_z_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105;
			memset((&L_105), 0, sizeof(L_105));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_105), L_100, L_102, L_104, /*hidden argument*/NULL);
			NullCheck(L_98);
			(L_98)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_105);
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_106 = L_98;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107;
			L_107 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_108 = L_107.get_x_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
			L_109 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_110 = L_109.get_y_3();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111;
			L_111 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_22), /*hidden argument*/NULL);
			float L_112 = L_111.get_z_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113;
			memset((&L_113), 0, sizeof(L_113));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_113), L_108, L_110, L_112, /*hidden argument*/NULL);
			NullCheck(L_106);
			(L_106)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_113);
			V_23 = L_106;
			// int hitCount = corners.Length;
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_114 = V_23;
			NullCheck(L_114);
			V_24 = ((int32_t)((int32_t)(((RuntimeArray*)L_114)->max_length)));
			// for (int i = 0; i < corners.Length; i++)
			V_25 = 0;
			goto IL_0345;
		}

IL_02c4:
		{
			// if (Physics.Raycast(corners[i] + (Vector3.up * 100f), -Vector3.up, out hit, 150f, collisionLayerMask))
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_115 = V_23;
			int32_t L_116 = V_25;
			NullCheck(L_115);
			int32_t L_117 = L_116;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119;
			L_119 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_120;
			L_120 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_119, (100.0f), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_121;
			L_121 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_118, L_120, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_122;
			L_122 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123;
			L_123 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_122, /*hidden argument*/NULL);
			LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_124 = __this->get_collisionLayerMask_15();
			int32_t L_125;
			L_125 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_124, /*hidden argument*/NULL);
			bool L_126;
			L_126 = Physics_Raycast_mCBD5F7D498C246713EDDBB446E97205DA206C49C(L_121, L_123, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (150.0f), L_125, /*hidden argument*/NULL);
			V_26 = L_126;
			bool L_127 = V_26;
			if (!L_127)
			{
				goto IL_0336;
			}
		}

IL_0309:
		{
			// if (hit.collider.GetType() == typeof(TerrainCollider))
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_128;
			L_128 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
			NullCheck(L_128);
			Type_t * L_129;
			L_129 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_128, /*hidden argument*/NULL);
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_130 = { reinterpret_cast<intptr_t> (TerrainCollider_t7B0DDF9DE78C22137804E29293567456BDDB9D9F_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_131;
			L_131 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_130, /*hidden argument*/NULL);
			bool L_132;
			L_132 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_129, L_131, /*hidden argument*/NULL);
			V_27 = L_132;
			bool L_133 = V_27;
			if (!L_133)
			{
				goto IL_0333;
			}
		}

IL_032b:
		{
			// hitCount--;
			int32_t L_134 = V_24;
			V_24 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_134, (int32_t)1));
		}

IL_0333:
		{
			goto IL_033e;
		}

IL_0336:
		{
			// hitCount--;
			int32_t L_135 = V_24;
			V_24 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_135, (int32_t)1));
		}

IL_033e:
		{
			// for (int i = 0; i < corners.Length; i++)
			int32_t L_136 = V_25;
			V_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1));
		}

IL_0345:
		{
			// for (int i = 0; i < corners.Length; i++)
			int32_t L_137 = V_25;
			Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_138 = V_23;
			NullCheck(L_138);
			V_28 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_138)->max_length)))))? 1 : 0);
			bool L_139 = V_28;
			if (L_139)
			{
				goto IL_02c4;
			}
		}

IL_0356:
		{
			// if (hitCount == 0) cell.subCells[sX, sZ] = null;
			int32_t L_140 = V_24;
			V_29 = (bool)((((int32_t)L_140) == ((int32_t)0))? 1 : 0);
			bool L_141 = V_29;
			if (!L_141)
			{
				goto IL_0372;
			}
		}

IL_0361:
		{
			// if (hitCount == 0) cell.subCells[sX, sZ] = null;
			Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_142 = V_16;
			NullCheck(L_142);
			CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_143 = L_142->get_subCells_1();
			int32_t L_144 = V_19;
			int32_t L_145 = V_20;
			NullCheck(L_143);
			(L_143)->SetAt(L_144, L_145, (Cell_tC218009E45576409E5AA876C2A7086E8CC17829E *)NULL);
		}

IL_0372:
		{
			goto IL_0402;
		}

IL_0378:
		{
			// if (Physics.Raycast(cell.subCells[sX, sZ].bounds.center + (Vector3.up * 50f), -Vector3.up, out hit, 100f, collisionLayerMask))
			Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_146 = V_16;
			NullCheck(L_146);
			CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_147 = L_146->get_subCells_1();
			int32_t L_148 = V_19;
			int32_t L_149 = V_20;
			NullCheck(L_147);
			Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_150;
			L_150 = (L_147)->GetAt(L_148, L_149);
			NullCheck(L_150);
			Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_151 = L_150->get_address_of_bounds_0();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152;
			L_152 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_151, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_153;
			L_153 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_154;
			L_154 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_153, (50.0f), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_155;
			L_155 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_152, L_154, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_156;
			L_156 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_157;
			L_157 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_156, /*hidden argument*/NULL);
			LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_158 = __this->get_collisionLayerMask_15();
			int32_t L_159;
			L_159 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_158, /*hidden argument*/NULL);
			bool L_160;
			L_160 = Physics_Raycast_mCBD5F7D498C246713EDDBB446E97205DA206C49C(L_155, L_157, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (100.0f), L_159, /*hidden argument*/NULL);
			V_30 = L_160;
			bool L_161 = V_30;
			if (!L_161)
			{
				goto IL_0401;
			}
		}

IL_03ce:
		{
			// if (hit.collider.gameObject == terrain.gameObject)
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_162;
			L_162 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
			NullCheck(L_162);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_163;
			L_163 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_162, /*hidden argument*/NULL);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_164 = V_6;
			NullCheck(L_164);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_165;
			L_165 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_164, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_166;
			L_166 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_163, L_165, /*hidden argument*/NULL);
			V_31 = L_166;
			bool L_167 = V_31;
			if (!L_167)
			{
				goto IL_0400;
			}
		}

IL_03ed:
		{
			// cell.subCells[sX, sZ] = null;
			Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_168 = V_16;
			NullCheck(L_168);
			CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_169 = L_168->get_subCells_1();
			int32_t L_170 = V_19;
			int32_t L_171 = V_20;
			NullCheck(L_169);
			(L_169)->SetAt(L_170, L_171, (Cell_tC218009E45576409E5AA876C2A7086E8CC17829E *)NULL);
		}

IL_0400:
		{
		}

IL_0401:
		{
		}

IL_0402:
		{
			// for (int sZ = 0; sZ < cellDivisions; sZ++)
			int32_t L_172 = V_20;
			V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_172, (int32_t)1));
		}

IL_0409:
		{
			// for (int sZ = 0; sZ < cellDivisions; sZ++)
			int32_t L_173 = V_20;
			int32_t L_174 = __this->get_cellDivisions_11();
			V_32 = (bool)((((int32_t)L_173) < ((int32_t)L_174))? 1 : 0);
			bool L_175 = V_32;
			if (L_175)
			{
				goto IL_01b9;
			}
		}

IL_041c:
		{
			// for (int sX = 0; sX < cellDivisions; sX++)
			int32_t L_176 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)1));
		}

IL_0423:
		{
			// for (int sX = 0; sX < cellDivisions; sX++)
			int32_t L_177 = V_19;
			int32_t L_178 = __this->get_cellDivisions_11();
			V_33 = (bool)((((int32_t)L_177) < ((int32_t)L_178))? 1 : 0);
			bool L_179 = V_33;
			if (L_179)
			{
				goto IL_01b0;
			}
		}

IL_0436:
		{
			// for (int z = 0; z < zCount; z++)
			int32_t L_180 = V_13;
			V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)1));
		}

IL_043d:
		{
			// for (int z = 0; z < zCount; z++)
			int32_t L_181 = V_13;
			int32_t L_182 = V_8;
			V_34 = (bool)((((int32_t)L_181) < ((int32_t)L_182))? 1 : 0);
			bool L_183 = V_34;
			if (L_183)
			{
				goto IL_0106;
			}
		}

IL_044c:
		{
			// for (int x = 0; x < xCount; x++)
			int32_t L_184 = V_12;
			V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_184, (int32_t)1));
		}

IL_0453:
		{
			// for (int x = 0; x < xCount; x++)
			int32_t L_185 = V_12;
			int32_t L_186 = V_7;
			V_35 = (bool)((((int32_t)L_185) < ((int32_t)L_186))? 1 : 0);
			bool L_187 = V_35;
			if (L_187)
			{
				goto IL_00fd;
			}
		}

IL_0462:
		{
			// terrainCells.Add(terrain, cellGrid);
			Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * L_188 = __this->get_terrainCells_19();
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_189 = V_6;
			CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_190 = V_9;
			NullCheck(L_188);
			Dictionary_2_Add_m61D20897BACDEB8B33E823A8C943D9C0D039D9D1(L_188, L_189, L_190, /*hidden argument*/Dictionary_2_Add_m61D20897BACDEB8B33E823A8C943D9C0D039D9D1_RuntimeMethod_var);
		}

IL_0473:
		{
			// foreach (Terrain terrain in terrains)
			bool L_191;
			L_191 = Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
			if (L_191)
			{
				goto IL_0072;
			}
		}

IL_047f:
		{
			IL2CPP_LEAVE(0x490, FINALLY_0481);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0481;
	}

FINALLY_0481:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_5), /*hidden argument*/Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1153)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1153)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x490, IL_0490)
	}

IL_0490:
	{
		// if (tempColliders != null)
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_192 = __this->get_tempColliders_25();
		V_36 = (bool)((!(((RuntimeObject*)(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486*)L_192) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_193 = V_36;
		if (!L_193)
		{
			goto IL_04ec;
		}
	}
	{
		// for (int i = 0; i < tempColliders.Length; i++)
		V_37 = 0;
		goto IL_04d9;
	}

IL_04a5:
	{
		// if (tempColliders[i] == null) continue;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_194 = __this->get_tempColliders_25();
		int32_t L_195 = V_37;
		NullCheck(L_194);
		int32_t L_196 = L_195;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_197 = (L_194)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_198;
		L_198 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_197, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_38 = L_198;
		bool L_199 = V_38;
		if (!L_199)
		{
			goto IL_04bd;
		}
	}
	{
		// if (tempColliders[i] == null) continue;
		goto IL_04d3;
	}

IL_04bd:
	{
		// tempColliders[i].gameObject.SetActive(false);
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_200 = __this->get_tempColliders_25();
		int32_t L_201 = V_37;
		NullCheck(L_200);
		int32_t L_202 = L_201;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_203 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		NullCheck(L_203);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_204;
		L_204 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_203, /*hidden argument*/NULL);
		NullCheck(L_204);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_204, (bool)0, /*hidden argument*/NULL);
	}

IL_04d3:
	{
		// for (int i = 0; i < tempColliders.Length; i++)
		int32_t L_205 = V_37;
		V_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_205, (int32_t)1));
	}

IL_04d9:
	{
		// for (int i = 0; i < tempColliders.Length; i++)
		int32_t L_206 = V_37;
		ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* L_207 = __this->get_tempColliders_25();
		NullCheck(L_207);
		V_39 = (bool)((((int32_t)L_206) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_207)->max_length)))))? 1 : 0);
		bool L_208 = V_39;
		if (L_208)
		{
			goto IL_04a5;
		}
	}
	{
	}

IL_04ec:
	{
		// }
		return;
	}
}
// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner::InsideOccupiedCell(UnityEngine.Terrain,UnityEngine.Vector3,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VegetationSpawner_InsideOccupiedCell_mB53F86B1E434E5E11FA18F3AD10955A0F14405CA (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPos1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalizedPos2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF2FCFB39A1F3969A4F2A22FB82FD9F0B0FC921B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAC1368B0A50168E41BF5E79CFCFF0916E2608092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44DE4CE1EDAB1A33F57CDCE0ED1296223AE76C1A);
		s_Il2CppMethodInitialized = true;
	}
	CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* V_0 = NULL;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * V_7 = NULL;
	bool V_8 = false;
	{
		// if (terrainCells == null) return false;
		Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * L_0 = __this->get_terrainCells_19();
		V_3 = (bool)((((RuntimeObject*)(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (terrainCells == null) return false;
		V_4 = (bool)0;
		goto IL_00bc;
	}

IL_0016:
	{
		// if (terrainCells.ContainsKey(terrain) == false) return false;
		Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * L_2 = __this->get_terrainCells_19();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_3 = ___terrain0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mF2FCFB39A1F3969A4F2A22FB82FD9F0B0FC921B9(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_mF2FCFB39A1F3969A4F2A22FB82FD9F0B0FC921B9_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		// if (terrainCells.ContainsKey(terrain) == false) return false;
		V_4 = (bool)0;
		goto IL_00bc;
	}

IL_0033:
	{
		// Cell[,] cells = terrainCells[terrain];
		Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * L_6 = __this->get_terrainCells_19();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_7 = ___terrain0;
		NullCheck(L_6);
		CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_8;
		L_8 = Dictionary_2_get_Item_mAC1368B0A50168E41BF5E79CFCFF0916E2608092(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_mAC1368B0A50168E41BF5E79CFCFF0916E2608092_RuntimeMethod_var);
		V_0 = L_8;
		// Vector2Int cellIndex = Cell.PositionToCellIndex(terrain, normalizedPos, cellSize);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_9 = ___terrain0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = ___normalizedPos2;
		int32_t L_11 = __this->get_cellSize_10();
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_12;
		L_12 = Cell_PositionToCellIndex_m95478F152766BEA683620B056B7BF41D4191D7D9(L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// Cell mainCell = cells[cellIndex.x, cellIndex.y];
		CellU5BU2CU5D_t907B4322D1D2F324C5E3E0CA9001B6F457F90CBC* L_13 = V_0;
		int32_t L_14;
		L_14 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_15;
		L_15 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_13);
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_16;
		L_16 = (L_13)->GetAt(L_14, L_15);
		V_2 = L_16;
		// if (mainCell != null)
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_17 = V_2;
		V_6 = (bool)((!(((RuntimeObject*)(Cell_tC218009E45576409E5AA876C2A7086E8CC17829E *)L_17) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_009b;
		}
	}
	{
		// Cell subCell = mainCell.GetSubcell(worldPos, cellSize, cellDivisions);
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_19 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___worldPos1;
		int32_t L_21 = __this->get_cellSize_10();
		int32_t L_22 = __this->get_cellDivisions_11();
		NullCheck(L_19);
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_23;
		L_23 = Cell_GetSubcell_m11A2CAC299982C982325D27B901BBBF4681A0499(L_19, L_20, ((float)((float)L_21)), L_22, /*hidden argument*/NULL);
		V_7 = L_23;
		// if (subCell != null)
		Cell_tC218009E45576409E5AA876C2A7086E8CC17829E * L_24 = V_7;
		V_8 = (bool)((!(((RuntimeObject*)(Cell_tC218009E45576409E5AA876C2A7086E8CC17829E *)L_24) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_0095;
		}
	}
	{
		// return true;
		V_4 = (bool)1;
		goto IL_00bc;
	}

IL_0095:
	{
		// return false;
		V_4 = (bool)0;
		goto IL_00bc;
	}

IL_009b:
	{
		// Debug.LogErrorFormat("Position {0} falls outside of the cell grid", worldPos);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = L_26;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = ___worldPos1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = L_28;
		RuntimeObject * L_30 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_30);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mDBF43684A22EAAB187285C9B4174C9555DB11E83(_stringLiteral44DE4CE1EDAB1A33F57CDCE0ED1296223AE76C1A, L_27, /*hidden argument*/NULL);
		// return false;
		V_4 = (bool)0;
		goto IL_00bc;
	}

IL_00bc:
	{
		// }
		bool L_31 = V_4;
		return L_31;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RefreshGrassPrototypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RefreshGrassPrototypes_mFC10B0B98A875DB41261EF1572E4749896F47527 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD7D430F523AFBCF33E1A00E9116FB57399D693ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC68653D21A679CDBC43710B0F2F4EA9D13626079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEBBC026AC7250C41C498697AB2A25E6488D98070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m88CF0236FEFF3E7778D28555AE60D8747E658307_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m424703C0B126BA08F0AFD5C79573A6189B04C23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m31E93B06A427F3AA7ED8222B54D2B17F1BEDBDCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD05861CB441B51B66CC7BE1D4EE47451402DE21C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2ED5C0182B69FFD97B850EB77276F5F7BBE9D28B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * V_1 = NULL;
	List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 * V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034  V_4;
	memset((&V_4), 0, sizeof(V_4));
	GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * V_5 = NULL;
	DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * V_6 = NULL;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (Terrain terrain in terrains)
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_0 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_terrains_5();
		NullCheck(L_0);
		Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  L_1;
		L_1 = List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556(L_0, /*hidden argument*/List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a2;
		}

IL_0013:
		{
			// foreach (Terrain terrain in terrains)
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2;
			L_2 = Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_inline((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
			V_1 = L_2;
			// List<DetailPrototype> grassPrototypeCollection = new List<DetailPrototype>();
			List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 * L_3 = (List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 *)il2cpp_codegen_object_new(List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741_il2cpp_TypeInfo_var);
			List_1__ctor_mD05861CB441B51B66CC7BE1D4EE47451402DE21C(L_3, /*hidden argument*/List_1__ctor_mD05861CB441B51B66CC7BE1D4EE47451402DE21C_RuntimeMethod_var);
			V_2 = L_3;
			// int index = 0;
			V_3 = 0;
			// foreach (GrassPrefab item in grassPrefabs)
			List_1_t868FA79F2DD4048265354F01579A6C5503166310 * L_4 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_grassPrefabs_7();
			NullCheck(L_4);
			Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034  L_5;
			L_5 = List_1_GetEnumerator_m424703C0B126BA08F0AFD5C79573A6189B04C23A(L_4, /*hidden argument*/List_1_GetEnumerator_m424703C0B126BA08F0AFD5C79573A6189B04C23A_RuntimeMethod_var);
			V_4 = L_5;
		}

IL_0032:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0066;
			}

IL_0034:
			{
				// foreach (GrassPrefab item in grassPrefabs)
				GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_6;
				L_6 = Enumerator_get_Current_mEBBC026AC7250C41C498697AB2A25E6488D98070_inline((Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 *)(&V_4), /*hidden argument*/Enumerator_get_Current_mEBBC026AC7250C41C498697AB2A25E6488D98070_RuntimeMethod_var);
				V_5 = L_6;
				// item.index = index;
				GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_7 = V_5;
				int32_t L_8 = V_3;
				NullCheck(L_7);
				L_7->set_index_11(L_8);
				// DetailPrototype detailPrototype = new DetailPrototype();
				DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_9 = (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 *)il2cpp_codegen_object_new(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785_il2cpp_TypeInfo_var);
				DetailPrototype__ctor_mDCC981CE17058DEFC1C178B456B8D641BD3853BF(L_9, /*hidden argument*/NULL);
				V_6 = L_9;
				// UpdateGrassItem(item, detailPrototype);
				GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_10 = V_5;
				DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_11 = V_6;
				VegetationSpawner_UpdateGrassItem_mCD05E85DD9E13A854C1D63EEDE696F528C325F8A(__this, L_10, L_11, /*hidden argument*/NULL);
				// grassPrototypeCollection.Add(detailPrototype);
				List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 * L_12 = V_2;
				DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_13 = V_6;
				NullCheck(L_12);
				List_1_Add_m88CF0236FEFF3E7778D28555AE60D8747E658307(L_12, L_13, /*hidden argument*/List_1_Add_m88CF0236FEFF3E7778D28555AE60D8747E658307_RuntimeMethod_var);
				// index++;
				int32_t L_14 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
			}

IL_0066:
			{
				// foreach (GrassPrefab item in grassPrefabs)
				bool L_15;
				L_15 = Enumerator_MoveNext_mC68653D21A679CDBC43710B0F2F4EA9D13626079((Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mC68653D21A679CDBC43710B0F2F4EA9D13626079_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0034;
				}
			}

IL_006f:
			{
				IL2CPP_LEAVE(0x80, FINALLY_0071);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0071;
		}

FINALLY_0071:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_mD7D430F523AFBCF33E1A00E9116FB57399D693ED((Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 *)(&V_4), /*hidden argument*/Enumerator_Dispose_mD7D430F523AFBCF33E1A00E9116FB57399D693ED_RuntimeMethod_var);
			IL2CPP_END_FINALLY(113)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(113)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x80, IL_0080)
		}

IL_0080:
		{
			// if (grassPrototypeCollection.Count > 0) terrain.terrainData.detailPrototypes = grassPrototypeCollection.ToArray();
			List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 * L_16 = V_2;
			NullCheck(L_16);
			int32_t L_17;
			L_17 = List_1_get_Count_m2ED5C0182B69FFD97B850EB77276F5F7BBE9D28B_inline(L_16, /*hidden argument*/List_1_get_Count_m2ED5C0182B69FFD97B850EB77276F5F7BBE9D28B_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)L_17) > ((int32_t)0))? 1 : 0);
			bool L_18 = V_7;
			if (!L_18)
			{
				goto IL_00a1;
			}
		}

IL_008f:
		{
			// if (grassPrototypeCollection.Count > 0) terrain.terrainData.detailPrototypes = grassPrototypeCollection.ToArray();
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_19 = V_1;
			NullCheck(L_19);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_20;
			L_20 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_19, /*hidden argument*/NULL);
			List_1_t01F8F71779C84CC6F0305ED1120A44CE5E582741 * L_21 = V_2;
			NullCheck(L_21);
			DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* L_22;
			L_22 = List_1_ToArray_m31E93B06A427F3AA7ED8222B54D2B17F1BEDBDCF(L_21, /*hidden argument*/List_1_ToArray_m31E93B06A427F3AA7ED8222B54D2B17F1BEDBDCF_RuntimeMethod_var);
			NullCheck(L_20);
			TerrainData_set_detailPrototypes_mCA1DF994D64F81843C19E60A75C5B96F516AAD12(L_20, L_22, /*hidden argument*/NULL);
		}

IL_00a1:
		{
		}

IL_00a2:
		{
			// foreach (Terrain terrain in terrains)
			bool L_23;
			L_23 = Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0013;
			}
		}

IL_00ae:
		{
			IL2CPP_LEAVE(0xBF, FINALLY_00b0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b0;
	}

FINALLY_00b0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(176)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(176)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnAllGrass(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnAllGrass_mD9228FBE56FBDAD3B8B105B49E97FB1219D43423 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___targetTerrain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD7D430F523AFBCF33E1A00E9116FB57399D693ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC68653D21A679CDBC43710B0F2F4EA9D13626079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEBBC026AC7250C41C498697AB2A25E6488D98070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m424703C0B126BA08F0AFD5C79573A6189B04C23A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// RefreshGrassPrototypes();
		VegetationSpawner_RefreshGrassPrototypes_mFC10B0B98A875DB41261EF1572E4749896F47527(__this, /*hidden argument*/NULL);
		// InitializeSeed();
		SpawnerBase_InitializeSeed_m4618B0BB1EDC888BAA11FEB519945F109FA41DEC(__this, 0, /*hidden argument*/NULL);
		// foreach (GrassPrefab item in grassPrefabs)
		List_1_t868FA79F2DD4048265354F01579A6C5503166310 * L_0 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_grassPrefabs_7();
		NullCheck(L_0);
		Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034  L_1;
		L_1 = List_1_GetEnumerator_m424703C0B126BA08F0AFD5C79573A6189B04C23A(L_0, /*hidden argument*/List_1_GetEnumerator_m424703C0B126BA08F0AFD5C79573A6189B04C23A_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001f:
		{
			// foreach (GrassPrefab item in grassPrefabs)
			GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_2;
			L_2 = Enumerator_get_Current_mEBBC026AC7250C41C498697AB2A25E6488D98070_inline((Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mEBBC026AC7250C41C498697AB2A25E6488D98070_RuntimeMethod_var);
			V_1 = L_2;
			// SpawnGrass(item, targetTerrain);
			GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_3 = V_1;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_4 = ___targetTerrain0;
			VegetationSpawner_SpawnGrass_m4B3E3542A4A4CC527FE097709BFEB2B3E6627494(__this, L_3, L_4, /*hidden argument*/NULL);
		}

IL_0032:
		{
			// foreach (GrassPrefab item in grassPrefabs)
			bool L_5;
			L_5 = Enumerator_MoveNext_mC68653D21A679CDBC43710B0F2F4EA9D13626079((Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC68653D21A679CDBC43710B0F2F4EA9D13626079_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_001f;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD7D430F523AFBCF33E1A00E9116FB57399D693ED((Enumerator_t3927A41E603F85A4D9E08E2E7AE2710661B23034 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD7D430F523AFBCF33E1A00E9116FB57399D693ED_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::UpdateProperties(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_UpdateProperties_m3BC3B53B334A30A195E3A5DC0CD4107381032821 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * V_1 = NULL;
	DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* V_2 = NULL;
	DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Terrain terrain in terrains)
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_0 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_terrains_5();
		NullCheck(L_0);
		Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  L_1;
		L_1 = List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556(L_0, /*hidden argument*/List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005a;
		}

IL_0010:
		{
			// foreach (Terrain terrain in terrains)
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2;
			L_2 = Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_inline((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
			V_1 = L_2;
			// DetailPrototype[] detailPrototypes = terrain.terrainData.detailPrototypes;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_3 = V_1;
			NullCheck(L_3);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_4;
			L_4 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* L_5;
			L_5 = TerrainData_get_detailPrototypes_m09095C267D0867DC97BE4D53305245F48C98B7E1(L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			// DetailPrototype detailPrototype = GetGrassPrototype(item, terrain);
			GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_6 = ___item0;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_7 = V_1;
			DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_8;
			L_8 = VegetationSpawner_GetGrassPrototype_m3F57CA804B88021F8E594F2698EA54939C44098B(__this, L_6, L_7, /*hidden argument*/NULL);
			V_3 = L_8;
			// if(detailPrototype == null) continue;
			DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_9 = V_3;
			V_4 = (bool)((((RuntimeObject*)(DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 *)L_9) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_10 = V_4;
			if (!L_10)
			{
				goto IL_003a;
			}
		}

IL_0038:
		{
			// if(detailPrototype == null) continue;
			goto IL_005a;
		}

IL_003a:
		{
			// UpdateGrassItem(item, detailPrototype);
			GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_11 = ___item0;
			DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_12 = V_3;
			VegetationSpawner_UpdateGrassItem_mCD05E85DD9E13A854C1D63EEDE696F528C325F8A(__this, L_11, L_12, /*hidden argument*/NULL);
			// detailPrototypes[item.index] = detailPrototype;
			DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* L_13 = V_2;
			GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_14 = ___item0;
			NullCheck(L_14);
			int32_t L_15 = L_14->get_index_11();
			DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_16 = V_3;
			NullCheck(L_13);
			ArrayElementTypeCheck (L_13, L_16);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 *)L_16);
			// terrain.terrainData.detailPrototypes = detailPrototypes;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_17 = V_1;
			NullCheck(L_17);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_18;
			L_18 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_17, /*hidden argument*/NULL);
			DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* L_19 = V_2;
			NullCheck(L_18);
			TerrainData_set_detailPrototypes_mCA1DF994D64F81843C19E60A75C5B96F516AAD12(L_18, L_19, /*hidden argument*/NULL);
		}

IL_005a:
		{
			// foreach (Terrain terrain in terrains)
			bool L_20;
			L_20 = Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0010;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(101)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x74, IL_0074)
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SetDetailResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SetDetailResolution_mE91A2DD1012B0837F7713B812ABE078534999A12 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Terrain terrain in terrains)
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_0 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_terrains_5();
		NullCheck(L_0);
		Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  L_1;
		L_1 = List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556(L_0, /*hidden argument*/List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_0010:
		{
			// foreach (Terrain terrain in terrains)
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2;
			L_2 = Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_inline((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
			V_1 = L_2;
			// terrain.terrainData.SetDetailResolution(detailResolution, grassPatchSize);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_3 = V_1;
			NullCheck(L_3);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_4;
			L_4 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_3, /*hidden argument*/NULL);
			int32_t L_5 = __this->get_detailResolution_21();
			int32_t L_6 = __this->get_grassPatchSize_23();
			NullCheck(L_4);
			TerrainData_SetDetailResolution_m5A6223B4EB73B2F63147DC0201EF7672CE2C3F45(L_4, L_5, L_6, /*hidden argument*/NULL);
		}

IL_0032:
		{
			// foreach (Terrain terrain in terrains)
			bool L_7;
			L_7 = Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0010;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnGrass(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnGrass_m4B3E3542A4A4CC527FE097709BFEB2B3E6627494 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___item0, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___targetTerrain1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * G_B13_0 = NULL;
	OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * G_B12_0 = NULL;
	{
		// if (item.collisionCheck) RebuildCollisionCacheIfNeeded();
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_0 = ___item0;
		NullCheck(L_0);
		bool L_1 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_0)->get_collisionCheck_4();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (item.collisionCheck) RebuildCollisionCacheIfNeeded();
		VegetationSpawner_RebuildCollisionCacheIfNeeded_m4342DF3209BC1716D7A8E8A5814AEEEE8310F291(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// item.instanceCount = 0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_3 = ___item0;
		NullCheck(L_3);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_3)->set_instanceCount_10(0);
		// if (targetTerrain == null)
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_4 = ___targetTerrain1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0064;
		}
	}
	{
		// foreach (Terrain terrain in terrains)
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_7 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_terrains_5();
		NullCheck(L_7);
		Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  L_8;
		L_8 = List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556(L_7, /*hidden argument*/List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0034:
		{
			// foreach (Terrain terrain in terrains)
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_9;
			L_9 = Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_inline((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
			V_3 = L_9;
			// SpawnGrassOnTerrain(terrain, item);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_10 = V_3;
			GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_11 = ___item0;
			VegetationSpawner_SpawnGrassOnTerrain_m420B8B2838911B4D56B1EB0CE8408242F6E1D1E7(__this, L_10, L_11, /*hidden argument*/NULL);
		}

IL_0047:
		{
			// foreach (Terrain terrain in terrains)
			bool L_12;
			L_12 = Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0034;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x61, IL_0061)
	}

IL_0061:
	{
		goto IL_006f;
	}

IL_0064:
	{
		// SpawnGrassOnTerrain(targetTerrain, item);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_13 = ___targetTerrain1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_14 = ___item0;
		VegetationSpawner_SpawnGrassOnTerrain_m420B8B2838911B4D56B1EB0CE8408242F6E1D1E7(__this, L_13, L_14, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// onGrassRespawn?.Invoke(item);
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_15 = ((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_onGrassRespawn_28();
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_16 = L_15;
		G_B12_0 = L_16;
		if (L_16)
		{
			G_B13_0 = L_16;
			goto IL_007a;
		}
	}
	{
		goto IL_0081;
	}

IL_007a:
	{
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_17 = ___item0;
		NullCheck(G_B13_0);
		OnGrassRespawn_Invoke_mF19FE8165DC5223C7725A035B80CA10EFE9C140F(G_B13_0, L_17, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnGrassOnTerrain(UnityEngine.Terrain,sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnGrassOnTerrain_m420B8B2838911B4D56B1EB0CE8408242F6E1D1E7 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0534F988FF1A4C3773534E07E042F7948D38E197_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m38B8371B5090211A5DA66391E66F26F9C91C5FBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3F7EE5B9D1AD8E34B161CE15D03DBC79FE6CCD9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m88853AE7E5F279215C4BFE990330FD81E54ED3DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7D35090FBDF168F5493258D0FAD0332D7552884C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	float V_18 = 0.0f;
	bool V_19 = false;
	bool V_20 = false;
	float V_21 = 0.0f;
	bool V_22 = false;
	bool V_23 = false;
	Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E  V_24;
	memset((&V_24), 0, sizeof(V_24));
	TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * V_25 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_26 = NULL;
	int32_t V_27 = 0;
	float V_28 = 0.0f;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B12_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B36_0 = 0;
	{
		// int[,] map = new int[terrain.terrainData.detailWidth, terrain.terrainData.detailHeight];
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_1;
		L_1 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TerrainData_get_detailWidth_m1F0EEDA4E902C5B77142D5F63DBE20B0EB20562C(L_1, /*hidden argument*/NULL);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_3 = ___terrain0;
		NullCheck(L_3);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_4;
		L_4 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = TerrainData_get_detailHeight_m52322CB3B104B073977E18A26480BE483EDB46E8(L_4, /*hidden argument*/NULL);
		il2cpp_array_size_t L_7[] = { (il2cpp_array_size_t)L_2, (il2cpp_array_size_t)L_5 };
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_6 = (Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17*)GenArrayNew(Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17_il2cpp_TypeInfo_var, L_7);
		V_0 = L_6;
		// int counter = 0;
		V_1 = 0;
		// int cellCount = terrain.terrainData.detailWidth * terrain.terrainData.detailHeight;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_8 = ___terrain0;
		NullCheck(L_8);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_9;
		L_9 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = TerrainData_get_detailWidth_m1F0EEDA4E902C5B77142D5F63DBE20B0EB20562C(L_9, /*hidden argument*/NULL);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_11 = ___terrain0;
		NullCheck(L_11);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_12;
		L_12 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = TerrainData_get_detailHeight_m52322CB3B104B073977E18A26480BE483EDB46E8(L_12, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_13));
		// if (item.enabled)
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_14 = ___item1;
		NullCheck(L_14);
		bool L_15 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_14)->get_enabled_0();
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_039f;
		}
	}
	{
		// for (int x = 0; x < terrain.terrainData.detailWidth; x++)
		V_4 = 0;
		goto IL_0386;
	}

IL_004d:
	{
		// for (int y = 0; y < terrain.terrainData.detailHeight; y++)
		V_5 = 0;
		goto IL_0367;
	}

IL_0056:
	{
		// counter++;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		// InitializeSeed(x * y + item.seed);
		int32_t L_18 = V_4;
		int32_t L_19 = V_5;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_20 = ___item1;
		NullCheck(L_20);
		int32_t L_21 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_20)->get_seed_2();
		SpawnerBase_InitializeSeed_m4618B0BB1EDC888BAA11FEB519945F109FA41DEC(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)L_19)), (int32_t)L_21)), /*hidden argument*/NULL);
		// int instanceCount = 1;
		V_6 = 1;
		// Vector3 wPos = terrain.DetailToWorld(y, x);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_22 = ___terrain0;
		int32_t L_23 = V_5;
		int32_t L_24 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = TerrainSampler_DetailToWorld_mF39EFFAD52224D212CD1BDF5737E8F3C09A717FA(L_22, L_23, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		// Vector2 normalizedPos = terrain.GetNormalizedPosition(wPos);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_26 = ___terrain0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = TerrainSampler_GetNormalizedPosition_mF6BB9367E5679F31FA05FC81793094C166DC027F(L_26, L_27, /*hidden argument*/NULL);
		V_8 = L_28;
		// if (((Random.value * 100f) <= item.probability) == false)
		float L_29;
		L_29 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_30 = ___item1;
		NullCheck(L_30);
		float L_31 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_30)->get_probability_3();
		V_10 = (bool)((!(((float)((float)il2cpp_codegen_multiply((float)L_29, (float)(100.0f)))) <= ((float)L_31)))? 1 : 0);
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_00a9;
		}
	}
	{
		// instanceCount = 0;
		V_6 = 0;
		// continue;
		goto IL_0361;
	}

IL_00a9:
	{
		// if (item.collisionCheck)
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_33 = ___item1;
		NullCheck(L_33);
		bool L_34 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_33)->get_collisionCheck_4();
		V_11 = L_34;
		bool L_35 = V_11;
		if (!L_35)
		{
			goto IL_00d1;
		}
	}
	{
		// if (InsideOccupiedCell(terrain, wPos, normalizedPos))
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_36 = ___terrain0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = V_8;
		bool L_39;
		L_39 = VegetationSpawner_InsideOccupiedCell_mB53F86B1E434E5E11FA18F3AD10955A0F14405CA(__this, L_36, L_37, L_38, /*hidden argument*/NULL);
		V_12 = L_39;
		bool L_40 = V_12;
		if (!L_40)
		{
			goto IL_00d0;
		}
	}
	{
		// instanceCount = 0;
		V_6 = 0;
		// continue;
		goto IL_0361;
	}

IL_00d0:
	{
	}

IL_00d1:
	{
		// terrain.SampleHeight(normalizedPos, out _, out wPos.y, out _);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_41 = ___terrain0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_42 = V_8;
		float* L_43 = (&V_7)->get_address_of_y_3();
		TerrainSampler_SampleHeight_m066CA886AB9C1DC2813773FD91BB08380711D8B8(L_41, L_42, (float*)(&V_13), (float*)L_43, (float*)(&V_14), /*hidden argument*/NULL);
		// if (item.rejectUnderwater && wPos.y < waterHeight)
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_44 = ___item1;
		NullCheck(L_44);
		bool L_45 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_44)->get_rejectUnderwater_5();
		if (!L_45)
		{
			goto IL_00fe;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_7;
		float L_47 = L_46.get_y_3();
		float L_48 = __this->get_waterHeight_26();
		G_B12_0 = ((((float)L_47) < ((float)L_48))? 1 : 0);
		goto IL_00ff;
	}

IL_00fe:
	{
		G_B12_0 = 0;
	}

IL_00ff:
	{
		V_15 = (bool)G_B12_0;
		bool L_49 = V_15;
		if (!L_49)
		{
			goto IL_010e;
		}
	}
	{
		// instanceCount = 0;
		V_6 = 0;
		// continue;
		goto IL_0361;
	}

IL_010e:
	{
		// if (wPos.y < item.heightRange.x || wPos.y > item.heightRange.y)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = V_7;
		float L_51 = L_50.get_y_3();
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_52 = ___item1;
		NullCheck(L_52);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_53 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_52)->get_address_of_heightRange_6();
		float L_54 = L_53->get_x_0();
		if ((((float)L_51) < ((float)L_54)))
		{
			goto IL_0138;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_7;
		float L_56 = L_55.get_y_3();
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_57 = ___item1;
		NullCheck(L_57);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_58 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_57)->get_address_of_heightRange_6();
		float L_59 = L_58->get_y_1();
		G_B17_0 = ((((float)L_56) > ((float)L_59))? 1 : 0);
		goto IL_0139;
	}

IL_0138:
	{
		G_B17_0 = 1;
	}

IL_0139:
	{
		V_16 = (bool)G_B17_0;
		bool L_60 = V_16;
		if (!L_60)
		{
			goto IL_0148;
		}
	}
	{
		// instanceCount = 0;
		V_6 = 0;
		// continue;
		goto IL_0361;
	}

IL_0148:
	{
		// if (item.slopeRange.x > 0 || item.slopeRange.y < 90)
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_61 = ___item1;
		NullCheck(L_61);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_62 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_61)->get_address_of_slopeRange_7();
		float L_63 = L_62->get_x_0();
		if ((((float)L_63) > ((float)(0.0f))))
		{
			goto IL_016e;
		}
	}
	{
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_64 = ___item1;
		NullCheck(L_64);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_65 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_64)->get_address_of_slopeRange_7();
		float L_66 = L_65->get_y_1();
		G_B22_0 = ((((float)L_66) < ((float)(90.0f)))? 1 : 0);
		goto IL_016f;
	}

IL_016e:
	{
		G_B22_0 = 1;
	}

IL_016f:
	{
		V_17 = (bool)G_B22_0;
		bool L_67 = V_17;
		if (!L_67)
		{
			goto IL_01b2;
		}
	}
	{
		// float slope = terrain.GetSlope(normalizedPos);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_68 = ___terrain0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_69 = V_8;
		float L_70;
		L_70 = TerrainSampler_GetSlope_m6A88C313F6810D0CDD502520BD3D59D1C8900A4B(L_68, L_69, (bool)0, /*hidden argument*/NULL);
		V_18 = L_70;
		// if (slope < item.slopeRange.x || slope > item.slopeRange.y)
		float L_71 = V_18;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_72 = ___item1;
		NullCheck(L_72);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_73 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_72)->get_address_of_slopeRange_7();
		float L_74 = L_73->get_x_0();
		if ((((float)L_71) < ((float)L_74)))
		{
			goto IL_01a1;
		}
	}
	{
		float L_75 = V_18;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_76 = ___item1;
		NullCheck(L_76);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_77 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_76)->get_address_of_slopeRange_7();
		float L_78 = L_77->get_y_1();
		G_B26_0 = ((((float)L_75) > ((float)L_78))? 1 : 0);
		goto IL_01a2;
	}

IL_01a1:
	{
		G_B26_0 = 1;
	}

IL_01a2:
	{
		V_19 = (bool)G_B26_0;
		bool L_79 = V_19;
		if (!L_79)
		{
			goto IL_01b1;
		}
	}
	{
		// instanceCount = 0;
		V_6 = 0;
		// continue;
		goto IL_0361;
	}

IL_01b1:
	{
	}

IL_01b2:
	{
		// if (item.curvatureRange.x > 0 || item.curvatureRange.y < 1f)
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_80 = ___item1;
		NullCheck(L_80);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_81 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_80)->get_address_of_curvatureRange_8();
		float L_82 = L_81->get_x_0();
		if ((((float)L_82) > ((float)(0.0f))))
		{
			goto IL_01d8;
		}
	}
	{
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_83 = ___item1;
		NullCheck(L_83);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_84 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_83)->get_address_of_curvatureRange_8();
		float L_85 = L_84->get_y_1();
		G_B32_0 = ((((float)L_85) < ((float)(1.0f)))? 1 : 0);
		goto IL_01d9;
	}

IL_01d8:
	{
		G_B32_0 = 1;
	}

IL_01d9:
	{
		V_20 = (bool)G_B32_0;
		bool L_86 = V_20;
		if (!L_86)
		{
			goto IL_0229;
		}
	}
	{
		// float curvature = terrain.SampleConvexity(normalizedPos);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_87 = ___terrain0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_88 = V_8;
		float L_89;
		L_89 = TerrainSampler_SampleConvexity_mD7766A71D8925E23B328FA883B5C066B581C68ED(L_87, L_88, (3.0f), /*hidden argument*/NULL);
		V_21 = L_89;
		// curvature = TerrainSampler.ConvexityToCurvature(curvature);
		float L_90 = V_21;
		float L_91;
		L_91 = TerrainSampler_ConvexityToCurvature_mAD61CA7B8C6A3023C45BE925F4D168E46B94C18E(L_90, /*hidden argument*/NULL);
		V_21 = L_91;
		// if (curvature < item.curvatureRange.x || curvature > item.curvatureRange.y)
		float L_92 = V_21;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_93 = ___item1;
		NullCheck(L_93);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_94 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_93)->get_address_of_curvatureRange_8();
		float L_95 = L_94->get_x_0();
		if ((((float)L_92) < ((float)L_95)))
		{
			goto IL_0218;
		}
	}
	{
		float L_96 = V_21;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_97 = ___item1;
		NullCheck(L_97);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_98 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_97)->get_address_of_curvatureRange_8();
		float L_99 = L_98->get_y_1();
		G_B36_0 = ((((float)L_96) > ((float)L_99))? 1 : 0);
		goto IL_0219;
	}

IL_0218:
	{
		G_B36_0 = 1;
	}

IL_0219:
	{
		V_22 = (bool)G_B36_0;
		bool L_100 = V_22;
		if (!L_100)
		{
			goto IL_0228;
		}
	}
	{
		// instanceCount = 0;
		V_6 = 0;
		// continue;
		goto IL_0361;
	}

IL_0228:
	{
	}

IL_0229:
	{
		// float spawnChance = 0f;
		V_9 = (0.0f);
		// if (item.layerMasks.Count == 0)
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_101 = ___item1;
		NullCheck(L_101);
		List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * L_102 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_101)->get_layerMasks_9();
		NullCheck(L_102);
		int32_t L_103;
		L_103 = List_1_get_Count_m7D35090FBDF168F5493258D0FAD0332D7552884C_inline(L_102, /*hidden argument*/List_1_get_Count_m7D35090FBDF168F5493258D0FAD0332D7552884C_RuntimeMethod_var);
		V_23 = (bool)((((int32_t)L_103) == ((int32_t)0))? 1 : 0);
		bool L_104 = V_23;
		if (!L_104)
		{
			goto IL_024f;
		}
	}
	{
		// spawnChance = 100f;
		V_9 = (100.0f);
		goto IL_025e;
	}

IL_024f:
	{
		// splatmapTexelIndex = terrain.SplatmapTexelIndex(normalizedPos);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_105 = ___terrain0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_106 = V_8;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_107;
		L_107 = TerrainSampler_SplatmapTexelIndex_m55BBAC981EC391551897E955ECFD68FDA54D1116(L_105, L_106, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->set_splatmapTexelIndex_29(L_107);
	}

IL_025e:
	{
		// foreach (TerrainLayerMask layer in item.layerMasks)
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_108 = ___item1;
		NullCheck(L_108);
		List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * L_109 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_108)->get_layerMasks_9();
		NullCheck(L_109);
		Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E  L_110;
		L_110 = List_1_GetEnumerator_m88853AE7E5F279215C4BFE990330FD81E54ED3DA(L_109, /*hidden argument*/List_1_GetEnumerator_m88853AE7E5F279215C4BFE990330FD81E54ED3DA_RuntimeMethod_var);
		V_24 = L_110;
	}

IL_026c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0301;
		}

IL_0271:
		{
			// foreach (TerrainLayerMask layer in item.layerMasks)
			TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * L_111;
			L_111 = Enumerator_get_Current_m3F7EE5B9D1AD8E34B161CE15D03DBC79FE6CCD9E_inline((Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E *)(&V_24), /*hidden argument*/Enumerator_get_Current_m3F7EE5B9D1AD8E34B161CE15D03DBC79FE6CCD9E_RuntimeMethod_var);
			V_25 = L_111;
			// Texture2D splat = terrain.terrainData.GetAlphamapTexture(GetSplatmapID(layer.layerID));
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_112 = ___terrain0;
			NullCheck(L_112);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_113;
			L_113 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_112, /*hidden argument*/NULL);
			TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * L_114 = V_25;
			NullCheck(L_114);
			int32_t L_115 = L_114->get_layerID_1();
			int32_t L_116;
			L_116 = SpawnerBase_GetSplatmapID_m5AC376E8C70761A5A62D31C58AF658351475BF07(L_115, /*hidden argument*/NULL);
			NullCheck(L_113);
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_117;
			L_117 = TerrainData_GetAlphamapTexture_mF09FC19604EE624F7655C15C0AAE7499BCCBAA8E(L_113, L_116, /*hidden argument*/NULL);
			V_26 = L_117;
			// m_splatmapColor = splat.GetPixel(splatmapTexelIndex.x, splatmapTexelIndex.y);
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_118 = V_26;
			IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
			int32_t L_119;
			L_119 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_address_of_splatmapTexelIndex_29()), /*hidden argument*/NULL);
			int32_t L_120;
			L_120 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_address_of_splatmapTexelIndex_29()), /*hidden argument*/NULL);
			NullCheck(L_118);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_121;
			L_121 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_118, L_119, L_120, /*hidden argument*/NULL);
			((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->set_m_splatmapColor_30(L_121);
			// int channel = layer.layerID % 4;
			TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * L_122 = V_25;
			NullCheck(L_122);
			int32_t L_123 = L_122->get_layerID_1();
			V_27 = ((int32_t)((int32_t)L_123%(int32_t)4));
			// float value = SampleChannel(m_splatmapColor, channel);
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_124 = ((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_m_splatmapColor_30();
			int32_t L_125 = V_27;
			float L_126;
			L_126 = SpawnerBase_SampleChannel_m2CA25CB83AFE7821920F8DBF2A66681C549CBDBA(L_124, L_125, /*hidden argument*/NULL);
			V_28 = L_126;
			// if (value > 0)
			float L_127 = V_28;
			V_29 = (bool)((((float)L_127) > ((float)(0.0f)))? 1 : 0);
			bool L_128 = V_29;
			if (!L_128)
			{
				goto IL_02ef;
			}
		}

IL_02dc:
		{
			// value = Mathf.Clamp01(value - layer.threshold);
			float L_129 = V_28;
			TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * L_130 = V_25;
			NullCheck(L_130);
			float L_131 = L_130->get_threshold_2();
			float L_132;
			L_132 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)il2cpp_codegen_subtract((float)L_129, (float)L_131)), /*hidden argument*/NULL);
			V_28 = L_132;
		}

IL_02ef:
		{
			// value *= 100f;
			float L_133 = V_28;
			V_28 = ((float)il2cpp_codegen_multiply((float)L_133, (float)(100.0f)));
			// spawnChance += value;
			float L_134 = V_9;
			float L_135 = V_28;
			V_9 = ((float)il2cpp_codegen_add((float)L_134, (float)L_135));
		}

IL_0301:
		{
			// foreach (TerrainLayerMask layer in item.layerMasks)
			bool L_136;
			L_136 = Enumerator_MoveNext_m38B8371B5090211A5DA66391E66F26F9C91C5FBC((Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E *)(&V_24), /*hidden argument*/Enumerator_MoveNext_m38B8371B5090211A5DA66391E66F26F9C91C5FBC_RuntimeMethod_var);
			if (L_136)
			{
				goto IL_0271;
			}
		}

IL_030d:
		{
			IL2CPP_LEAVE(0x31E, FINALLY_030f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_030f;
	}

FINALLY_030f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0534F988FF1A4C3773534E07E042F7948D38E197((Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E *)(&V_24), /*hidden argument*/Enumerator_Dispose_m0534F988FF1A4C3773534E07E042F7948D38E197_RuntimeMethod_var);
		IL2CPP_END_FINALLY(783)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(783)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31E, IL_031e)
	}

IL_031e:
	{
		// InitializeSeed(x * y + item.seed);
		int32_t L_137 = V_4;
		int32_t L_138 = V_5;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_139 = ___item1;
		NullCheck(L_139);
		int32_t L_140 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_139)->get_seed_2();
		SpawnerBase_InitializeSeed_m4618B0BB1EDC888BAA11FEB519945F109FA41DEC(__this, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_137, (int32_t)L_138)), (int32_t)L_140)), /*hidden argument*/NULL);
		// if ((Random.value <= spawnChance) == false)
		float L_141;
		L_141 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
		float L_142 = V_9;
		V_30 = (bool)((!(((float)L_141) <= ((float)L_142)))? 1 : 0);
		bool L_143 = V_30;
		if (!L_143)
		{
			goto IL_0345;
		}
	}
	{
		// instanceCount = 0;
		V_6 = 0;
	}

IL_0345:
	{
		// item.instanceCount += instanceCount;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_144 = ___item1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_145 = L_144;
		NullCheck(L_145);
		int32_t L_146 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_145)->get_instanceCount_10();
		int32_t L_147 = V_6;
		NullCheck(L_145);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_145)->set_instanceCount_10(((int32_t)il2cpp_codegen_add((int32_t)L_146, (int32_t)L_147)));
		// map[x, y] = instanceCount;
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_148 = V_0;
		int32_t L_149 = V_4;
		int32_t L_150 = V_5;
		int32_t L_151 = V_6;
		NullCheck(L_148);
		(L_148)->SetAt(L_149, L_150, L_151);
	}

IL_0361:
	{
		// for (int y = 0; y < terrain.terrainData.detailHeight; y++)
		int32_t L_152 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1));
	}

IL_0367:
	{
		// for (int y = 0; y < terrain.terrainData.detailHeight; y++)
		int32_t L_153 = V_5;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_154 = ___terrain0;
		NullCheck(L_154);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_155;
		L_155 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_154, /*hidden argument*/NULL);
		NullCheck(L_155);
		int32_t L_156;
		L_156 = TerrainData_get_detailHeight_m52322CB3B104B073977E18A26480BE483EDB46E8(L_155, /*hidden argument*/NULL);
		V_31 = (bool)((((int32_t)L_153) < ((int32_t)L_156))? 1 : 0);
		bool L_157 = V_31;
		if (L_157)
		{
			goto IL_0056;
		}
	}
	{
		// for (int x = 0; x < terrain.terrainData.detailWidth; x++)
		int32_t L_158 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)1));
	}

IL_0386:
	{
		// for (int x = 0; x < terrain.terrainData.detailWidth; x++)
		int32_t L_159 = V_4;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_160 = ___terrain0;
		NullCheck(L_160);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_161;
		L_161 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_160, /*hidden argument*/NULL);
		NullCheck(L_161);
		int32_t L_162;
		L_162 = TerrainData_get_detailWidth_m1F0EEDA4E902C5B77142D5F63DBE20B0EB20562C(L_161, /*hidden argument*/NULL);
		V_32 = (bool)((((int32_t)L_159) < ((int32_t)L_162))? 1 : 0);
		bool L_163 = V_32;
		if (L_163)
		{
			goto IL_004d;
		}
	}
	{
	}

IL_039f:
	{
		// terrain.terrainData.SetDetailLayer(0, 0, item.index, map);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_164 = ___terrain0;
		NullCheck(L_164);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_165;
		L_165 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_164, /*hidden argument*/NULL);
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_166 = ___item1;
		NullCheck(L_166);
		int32_t L_167 = L_166->get_index_11();
		Int32U5BU2CU5D_tE3A76A55C8E5F44FF4BA45CF035E89489936EE17* L_168 = V_0;
		NullCheck(L_165);
		TerrainData_SetDetailLayer_m25F42AB3D8792BC884F0A9934F3C3021DF8FDF62(L_165, 0, 0, L_167, L_168, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.DetailPrototype sc.terrain.vegetationspawner.VegetationSpawner::GetGrassPrototype(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * VegetationSpawner_GetGrassPrototype_m3F57CA804B88021F8E594F2698EA54939C44098B (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___item0, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain1, const RuntimeMethod* method)
{
	bool V_0 = false;
	DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * V_1 = NULL;
	{
		// if (item.index >= terrain.terrainData.detailPrototypes.Length) return null;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_0 = ___item0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_index_11();
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2 = ___terrain1;
		NullCheck(L_2);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_3;
		L_3 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* L_4;
		L_4 = TerrainData_get_detailPrototypes_m09095C267D0867DC97BE4D53305245F48C98B7E1(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// if (item.index >= terrain.terrainData.detailPrototypes.Length) return null;
		V_1 = (DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 *)NULL;
		goto IL_0036;
	}

IL_0021:
	{
		// return terrain.terrainData.detailPrototypes[item.index];
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_6 = ___terrain1;
		NullCheck(L_6);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_7;
		L_7 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		DetailPrototypeU5BU5D_t5440AB6934FD7017E87B457D20E50F4080B5B62D* L_8;
		L_8 = TerrainData_get_detailPrototypes_m09095C267D0867DC97BE4D53305245F48C98B7E1(L_7, /*hidden argument*/NULL);
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_9 = ___item0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_index_11();
		NullCheck(L_8);
		int32_t L_11 = L_10;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_13 = V_1;
		return L_13;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::UpdateGrassItem(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,UnityEngine.DetailPrototype)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_UpdateGrassItem_mCD05E85DD9E13A854C1D63EEDE696F528C325F8A (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___item0, DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * ___d1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * G_B2_0 = NULL;
	DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * G_B3_1 = NULL;
	int32_t G_B8_0 = 0;
	DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * G_B11_0 = NULL;
	DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * G_B12_1 = NULL;
	{
		// d.healthyColor = item.mainColor;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_0 = ___d1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_1 = ___item0;
		NullCheck(L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = L_1->get_mainColor_16();
		NullCheck(L_0);
		DetailPrototype_set_healthyColor_mF7A9C456CF98F5DB43125A1A97A2AE13749AE76F(L_0, L_2, /*hidden argument*/NULL);
		// d.dryColor = item.linkColors ? item.mainColor : item.secondaryColor;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_3 = ___d1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_4 = ___item0;
		NullCheck(L_4);
		bool L_5 = L_4->get_linkColors_18();
		G_B1_0 = L_3;
		if (L_5)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
	}
	{
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_6 = ___item0;
		NullCheck(L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = L_6->get_secondaryColor_17();
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_001f:
	{
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_8 = ___item0;
		NullCheck(L_8);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = L_8->get_mainColor_16();
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		DetailPrototype_set_dryColor_m7B8397E2458D414DCB09FD1B3B583FF3DD37E8E3(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// d.minHeight = item.minMaxHeight.x;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_10 = ___d1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_11 = ___item0;
		NullCheck(L_11);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = L_11->get_address_of_minMaxHeight_19();
		float L_13 = L_12->get_x_0();
		NullCheck(L_10);
		DetailPrototype_set_minHeight_m4CE5558075661DA84B71B243D97D648DF07755AB(L_10, L_13, /*hidden argument*/NULL);
		// d.maxHeight = item.minMaxHeight.y;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_14 = ___d1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_15 = ___item0;
		NullCheck(L_15);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = L_15->get_address_of_minMaxHeight_19();
		float L_17 = L_16->get_y_1();
		NullCheck(L_14);
		DetailPrototype_set_maxHeight_mF0877C8541A5DFBE97BBBA12D962814A1B3659B3(L_14, L_17, /*hidden argument*/NULL);
		// d.minWidth = item.minMaxWidth.x;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_18 = ___d1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_19 = ___item0;
		NullCheck(L_19);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_20 = L_19->get_address_of_minMaxWidth_20();
		float L_21 = L_20->get_x_0();
		NullCheck(L_18);
		DetailPrototype_set_minWidth_mAAFF68A7D2637E8C08F81841CDAB4111116ED577(L_18, L_21, /*hidden argument*/NULL);
		// d.maxWidth = item.minMaxWidth.y;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_22 = ___d1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_23 = ___item0;
		NullCheck(L_23);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_24 = L_23->get_address_of_minMaxWidth_20();
		float L_25 = L_24->get_y_1();
		NullCheck(L_22);
		DetailPrototype_set_maxWidth_mCFE2DF543FB1EB56E76B1DA18DD194BFE26F62F0(L_22, L_25, /*hidden argument*/NULL);
		// d.noiseSpread = item.noiseSize;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_26 = ___d1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_27 = ___item0;
		NullCheck(L_27);
		float L_28 = L_27->get_noiseSize_21();
		NullCheck(L_26);
		DetailPrototype_set_noiseSpread_mD17C5883918DBA3F4B4AE2BD199FBF6456F10FE2(L_26, L_28, /*hidden argument*/NULL);
		// if (item.type == GrassType.Mesh)
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_29 = ___item0;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_type_12();
		V_0 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_0;
		if (!L_31)
		{
			goto IL_00b4;
		}
	}
	{
		// d.renderMode = DetailRenderMode.Grass; //Actually a mesh
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_32 = ___d1;
		NullCheck(L_32);
		DetailPrototype_set_renderMode_m5FCFA6ACAF920D54E579BEE7E5A29D5E11AE84BA(L_32, 2, /*hidden argument*/NULL);
		// d.usePrototypeMesh = true;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_33 = ___d1;
		NullCheck(L_33);
		DetailPrototype_set_usePrototypeMesh_mD941F0A4525C528F91897FCD13FB8CD767EE8A17(L_33, (bool)1, /*hidden argument*/NULL);
		// d.prototype = item.prefab;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_34 = ___d1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_35 = ___item0;
		NullCheck(L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = L_35->get_prefab_14();
		NullCheck(L_34);
		DetailPrototype_set_prototype_mA03AA21C93AE543BDC1295B128F48389400A15EC(L_34, L_36, /*hidden argument*/NULL);
		// d.prototypeTexture = null;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_37 = ___d1;
		NullCheck(L_37);
		DetailPrototype_set_prototypeTexture_mD86801CCEAB2993DE0DB829A3F188D233D90C5BD(L_37, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		// if (item.type == GrassType.Texture && item.billboard)
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_38 = ___item0;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_type_12();
		if ((!(((uint32_t)L_39) == ((uint32_t)1))))
		{
			goto IL_00ca;
		}
	}
	{
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_40 = ___item0;
		NullCheck(L_40);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_41 = L_40->get_billboard_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_41, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_42));
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B8_0 = 0;
	}

IL_00cb:
	{
		V_1 = (bool)G_B8_0;
		bool L_43 = V_1;
		if (!L_43)
		{
			goto IL_0101;
		}
	}
	{
		// d.renderMode = item.renderAsBillboard ? DetailRenderMode.GrassBillboard : DetailRenderMode.Grass;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_44 = ___d1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_45 = ___item0;
		NullCheck(L_45);
		bool L_46 = L_45->get_renderAsBillboard_13();
		G_B10_0 = L_44;
		if (L_46)
		{
			G_B11_0 = L_44;
			goto IL_00dc;
		}
	}
	{
		G_B12_0 = 2;
		G_B12_1 = G_B10_0;
		goto IL_00dd;
	}

IL_00dc:
	{
		G_B12_0 = 0;
		G_B12_1 = G_B11_0;
	}

IL_00dd:
	{
		NullCheck(G_B12_1);
		DetailPrototype_set_renderMode_m5FCFA6ACAF920D54E579BEE7E5A29D5E11AE84BA(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		// d.usePrototypeMesh = false;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_47 = ___d1;
		NullCheck(L_47);
		DetailPrototype_set_usePrototypeMesh_mD941F0A4525C528F91897FCD13FB8CD767EE8A17(L_47, (bool)0, /*hidden argument*/NULL);
		// d.prototypeTexture = item.billboard;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_48 = ___d1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_49 = ___item0;
		NullCheck(L_49);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_50 = L_49->get_billboard_15();
		NullCheck(L_48);
		DetailPrototype_set_prototypeTexture_mD86801CCEAB2993DE0DB829A3F188D233D90C5BD(L_48, L_50, /*hidden argument*/NULL);
		// d.prototype = null;
		DetailPrototype_t034A7AA039C4E3E6BE5304BB1302F57E53810785 * L_51 = ___d1;
		NullCheck(L_51);
		DetailPrototype_set_prototype_mA03AA21C93AE543BDC1295B128F48389400A15EC(L_51, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
	}

IL_0101:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnAllTrees(UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnAllTrees_m50D42CEA005EDFD8F78BD9284CE397A7404B7F71 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2110E34613EFD27F45A4E5922123639E70AA6F91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5669064B78AC360A980CDAAE14D111A670D504D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m835C8795A6071884C8AE8A426F0C9203CBCDEEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1A6EC38ACB5AE88107AE9AA708188DC43491D562_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4CF68A0019B3DE6317E399542BF3A49A9DC2DB00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (treeTypes == null) return;
		List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * L_0 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_treeTypes_6();
		V_1 = (bool)((((RuntimeObject*)(List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (treeTypes == null) return;
		goto IL_0077;
	}

IL_0010:
	{
		// if (treeTypes.Count == 0) return;
		List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * L_2 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_treeTypes_6();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4CF68A0019B3DE6317E399542BF3A49A9DC2DB00_inline(L_2, /*hidden argument*/List_1_get_Count_m4CF68A0019B3DE6317E399542BF3A49A9DC2DB00_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// if (treeTypes.Count == 0) return;
		goto IL_0077;
	}

IL_0024:
	{
		// InitializeSeed();
		SpawnerBase_InitializeSeed_m4618B0BB1EDC888BAA11FEB519945F109FA41DEC(__this, 0, /*hidden argument*/NULL);
		// RefreshTreePrefabs();
		VegetationSpawner_RefreshTreePrefabs_m39536DC9E17C48F5CBDC146D36CC8D9DFE262F23(__this, /*hidden argument*/NULL);
		// int index = 0;
		V_0 = 0;
		// foreach (TreeType item in treeTypes)
		List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * L_5 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_treeTypes_6();
		NullCheck(L_5);
		Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28  L_6;
		L_6 = List_1_GetEnumerator_m1A6EC38ACB5AE88107AE9AA708188DC43491D562(L_5, /*hidden argument*/List_1_GetEnumerator_m1A6EC38ACB5AE88107AE9AA708188DC43491D562_RuntimeMethod_var);
		V_3 = L_6;
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005d;
		}

IL_0044:
		{
			// foreach (TreeType item in treeTypes)
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_7;
			L_7 = Enumerator_get_Current_m835C8795A6071884C8AE8A426F0C9203CBCDEEF7_inline((Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m835C8795A6071884C8AE8A426F0C9203CBCDEEF7_RuntimeMethod_var);
			V_4 = L_7;
			// SpawnTree(item, terrain);
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_8 = V_4;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_9 = ___terrain0;
			VegetationSpawner_SpawnTree_m6DCD44D7B3B8EE168ACF97EE2E45306872B928B5(__this, L_8, L_9, /*hidden argument*/NULL);
			// index++;
			int32_t L_10 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_005d:
		{
			// foreach (TreeType item in treeTypes)
			bool L_11;
			L_11 = Enumerator_MoveNext_m5669064B78AC360A980CDAAE14D111A670D504D8((Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m5669064B78AC360A980CDAAE14D111A670D504D8_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0044;
			}
		}

IL_0066:
		{
			IL2CPP_LEAVE(0x77, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2110E34613EFD27F45A4E5922123639E70AA6F91((Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m2110E34613EFD27F45A4E5922123639E70AA6F91_RuntimeMethod_var);
		IL2CPP_END_FINALLY(104)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x77, IL_0077)
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RefreshTreePrefabs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RefreshTreePrefabs_m39536DC9E17C48F5CBDC146D36CC8D9DFE262F23 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2110E34613EFD27F45A4E5922123639E70AA6F91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m91BCBD82CE20375C9C8E6715DBB1DEDD597F82DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5669064B78AC360A980CDAAE14D111A670D504D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7BC5E16951688506518B218BFABB0B74E07C7EF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m835C8795A6071884C8AE8A426F0C9203CBCDEEF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m95C2BA3A5C54659972CBE703853E5E6C16F38D3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA3B4C31452FB3D9DB7663B1E6512AEA87B3E09D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1A6EC38ACB5AE88107AE9AA708188DC43491D562_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m54105E3113A4BDCFC79817993666F50B02AC76EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA637A9038ED810D97784A0FE25F47F736EA8CF54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m931982C5FB85776191FAC03ED5A45FA97880613D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5C6674FA950981B337FEABD2C9C25815AF075ED1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 * V_0 = NULL;
	Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * V_2 = NULL;
	Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * V_4 = NULL;
	TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * V_5 = NULL;
	bool V_6 = false;
	Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// List<TreePrototype> treePrototypeCollection = new List<TreePrototype>();
		List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 * L_0 = (List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 *)il2cpp_codegen_object_new(List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386_il2cpp_TypeInfo_var);
		List_1__ctor_m931982C5FB85776191FAC03ED5A45FA97880613D(L_0, /*hidden argument*/List_1__ctor_m931982C5FB85776191FAC03ED5A45FA97880613D_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (TreeType item in treeTypes)
		List_1_t63DF853C66EF5F1C61EDFE91E2988FEE2AF5A01C * L_1 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_treeTypes_6();
		NullCheck(L_1);
		Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28  L_2;
		L_2 = List_1_GetEnumerator_m1A6EC38ACB5AE88107AE9AA708188DC43491D562(L_1, /*hidden argument*/List_1_GetEnumerator_m1A6EC38ACB5AE88107AE9AA708188DC43491D562_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009a;
		}

IL_0019:
		{
			// foreach (TreeType item in treeTypes)
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_3;
			L_3 = Enumerator_get_Current_m835C8795A6071884C8AE8A426F0C9203CBCDEEF7_inline((Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m835C8795A6071884C8AE8A426F0C9203CBCDEEF7_RuntimeMethod_var);
			V_2 = L_3;
			// foreach (TreePrefab p in item.prefabs)
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_4 = V_2;
			NullCheck(L_4);
			List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * L_5 = L_4->get_prefabs_12();
			NullCheck(L_5);
			Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2  L_6;
			L_6 = List_1_GetEnumerator_m54105E3113A4BDCFC79817993666F50B02AC76EB(L_5, /*hidden argument*/List_1_GetEnumerator_m54105E3113A4BDCFC79817993666F50B02AC76EB_RuntimeMethod_var);
			V_3 = L_6;
		}

IL_002f:
		try
		{ // begin try (depth: 2)
			{
				goto IL_007f;
			}

IL_0031:
			{
				// foreach (TreePrefab p in item.prefabs)
				TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_7;
				L_7 = Enumerator_get_Current_m95C2BA3A5C54659972CBE703853E5E6C16F38D3E_inline((Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m95C2BA3A5C54659972CBE703853E5E6C16F38D3E_RuntimeMethod_var);
				V_4 = L_7;
				// if (p.prefab == null) continue;
				TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_8 = V_4;
				NullCheck(L_8);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_prefab_2();
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_10;
				L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				V_6 = L_10;
				bool L_11 = V_6;
				if (!L_11)
				{
					goto IL_0050;
				}
			}

IL_004e:
			{
				// if (p.prefab == null) continue;
				goto IL_007f;
			}

IL_0050:
			{
				// TreePrototype treePrototype = new TreePrototype();
				TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * L_12 = (TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 *)il2cpp_codegen_object_new(TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5_il2cpp_TypeInfo_var);
				TreePrototype__ctor_mAF604B1B4D176E6072DFB258CAF2EC53E7714E4E(L_12, /*hidden argument*/NULL);
				V_5 = L_12;
				// treePrototype.prefab = p.prefab;
				TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * L_13 = V_5;
				TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_14 = V_4;
				NullCheck(L_14);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14->get_prefab_2();
				NullCheck(L_13);
				TreePrototype_set_prefab_m281534A67041F69C643794C1B13B108610B8BA04(L_13, L_15, /*hidden argument*/NULL);
				// treePrototypeCollection.Add(treePrototype);
				List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 * L_16 = V_0;
				TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * L_17 = V_5;
				NullCheck(L_16);
				List_1_Add_mA3B4C31452FB3D9DB7663B1E6512AEA87B3E09D6(L_16, L_17, /*hidden argument*/List_1_Add_mA3B4C31452FB3D9DB7663B1E6512AEA87B3E09D6_RuntimeMethod_var);
				// p.index = treePrototypeCollection.Count - 1;
				TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_18 = V_4;
				List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 * L_19 = V_0;
				NullCheck(L_19);
				int32_t L_20;
				L_20 = List_1_get_Count_m5C6674FA950981B337FEABD2C9C25815AF075ED1_inline(L_19, /*hidden argument*/List_1_get_Count_m5C6674FA950981B337FEABD2C9C25815AF075ED1_RuntimeMethod_var);
				NullCheck(L_18);
				L_18->set_index_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
			}

IL_007f:
			{
				// foreach (TreePrefab p in item.prefabs)
				bool L_21;
				L_21 = Enumerator_MoveNext_m7BC5E16951688506518B218BFABB0B74E07C7EF1((Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m7BC5E16951688506518B218BFABB0B74E07C7EF1_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0031;
				}
			}

IL_0088:
			{
				IL2CPP_LEAVE(0x99, FINALLY_008a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_008a;
		}

FINALLY_008a:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m91BCBD82CE20375C9C8E6715DBB1DEDD597F82DE((Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m91BCBD82CE20375C9C8E6715DBB1DEDD597F82DE_RuntimeMethod_var);
			IL2CPP_END_FINALLY(138)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(138)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x99, IL_0099)
		}

IL_0099:
		{
		}

IL_009a:
		{
			// foreach (TreeType item in treeTypes)
			bool L_22;
			L_22 = Enumerator_MoveNext_m5669064B78AC360A980CDAAE14D111A670D504D8((Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m5669064B78AC360A980CDAAE14D111A670D504D8_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0019;
			}
		}

IL_00a6:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_00a8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2110E34613EFD27F45A4E5922123639E70AA6F91((Enumerator_tA50E71BBF9FD15CFA9A75C18CD5DEF224BEE6F28 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2110E34613EFD27F45A4E5922123639E70AA6F91_RuntimeMethod_var);
		IL2CPP_END_FINALLY(168)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
	}

IL_00b7:
	{
		// foreach (Terrain terrain in terrains)
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_23 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_terrains_5();
		NullCheck(L_23);
		Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  L_24;
		L_24 = List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556(L_23, /*hidden argument*/List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		V_7 = L_24;
	}

IL_00c5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f2;
		}

IL_00c7:
		{
			// foreach (Terrain terrain in terrains)
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_25;
			L_25 = Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_inline((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_7), /*hidden argument*/Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
			V_8 = L_25;
			// terrain.terrainData.treePrototypes = treePrototypeCollection.ToArray();
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_26 = V_8;
			NullCheck(L_26);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_27;
			L_27 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_26, /*hidden argument*/NULL);
			List_1_t0300E98BBD1488ED5BF12FD3A6480C459413D386 * L_28 = V_0;
			NullCheck(L_28);
			TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* L_29;
			L_29 = List_1_ToArray_mA637A9038ED810D97784A0FE25F47F736EA8CF54(L_28, /*hidden argument*/List_1_ToArray_mA637A9038ED810D97784A0FE25F47F736EA8CF54_RuntimeMethod_var);
			NullCheck(L_27);
			TerrainData_set_treePrototypes_m57B2C160BD389266B666A5C38B0D268650AB753A(L_27, L_29, /*hidden argument*/NULL);
			// terrain.terrainData.RefreshPrototypes();
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_30 = V_8;
			NullCheck(L_30);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_31;
			L_31 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_30, /*hidden argument*/NULL);
			NullCheck(L_31);
			TerrainData_RefreshPrototypes_m30A5130FB2B87236FA4A94E56A3CDED84F323BDD(L_31, /*hidden argument*/NULL);
		}

IL_00f2:
		{
			// foreach (Terrain terrain in terrains)
			bool L_32;
			L_32 = Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_00c7;
			}
		}

IL_00fb:
		{
			IL2CPP_LEAVE(0x10C, FINALLY_00fd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fd;
	}

FINALLY_00fd:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_7), /*hidden argument*/Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(253)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(253)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10C, IL_010c)
	}

IL_010c:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnTree(sc.terrain.vegetationspawner.SpawnerBase/TreeType,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnTree_m6DCD44D7B3B8EE168ACF97EE2E45306872B928B5 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * ___item0, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___targetTerrain1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1E15530AA28DA76DD9909083CA672047C42944E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m12630212D3819AD8AD72E2EB189EE84254B7DD2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * G_B14_0 = NULL;
	OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * G_B13_0 = NULL;
	{
		// if (item.collisionCheck) RebuildCollisionCacheIfNeeded();
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_0 = ___item0;
		NullCheck(L_0);
		bool L_1 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_0)->get_collisionCheck_4();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// if (item.collisionCheck) RebuildCollisionCacheIfNeeded();
		VegetationSpawner_RebuildCollisionCacheIfNeeded_m4342DF3209BC1716D7A8E8A5814AEEEE8310F291(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// item.instanceCount = 0;
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_3 = ___item0;
		NullCheck(L_3);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_3)->set_instanceCount_10(0);
		// RefreshTreePrefabs();
		VegetationSpawner_RefreshTreePrefabs_m39536DC9E17C48F5CBDC146D36CC8D9DFE262F23(__this, /*hidden argument*/NULL);
		// if (targetTerrain == null)
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_4 = ___targetTerrain1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		// foreach (Terrain terrain in terrains)
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_7 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_terrains_5();
		NullCheck(L_7);
		Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  L_8;
		L_8 = List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556(L_7, /*hidden argument*/List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_0039:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_003b:
		{
			// foreach (Terrain terrain in terrains)
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_9;
			L_9 = Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_inline((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
			V_3 = L_9;
			// SpawnTreeOnTerrain(terrain, item);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_10 = V_3;
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_11 = ___item0;
			VegetationSpawner_SpawnTreeOnTerrain_mAA55E83842533854E3F2A6833CBB063E8A50FA00(__this, L_10, L_11, /*hidden argument*/NULL);
		}

IL_004e:
		{
			// foreach (Terrain terrain in terrains)
			bool L_12;
			L_12 = Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_003b;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_2), /*hidden argument*/Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(89)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
	}

IL_0068:
	{
		goto IL_0076;
	}

IL_006b:
	{
		// SpawnTreeOnTerrain(targetTerrain, item);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_13 = ___targetTerrain1;
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_14 = ___item0;
		VegetationSpawner_SpawnTreeOnTerrain_mAA55E83842533854E3F2A6833CBB063E8A50FA00(__this, L_13, L_14, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// for (int i = 0; i < item.prefabs.Count; i++)
		V_4 = 0;
		goto IL_00a1;
	}

IL_007b:
	{
		// onTreeRespawn?.Invoke(item.prefabs[i]);
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_15 = ((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_onTreeRespawn_27();
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_16 = L_15;
		G_B13_0 = L_16;
		if (L_16)
		{
			G_B14_0 = L_16;
			goto IL_0087;
		}
	}
	{
		goto IL_009a;
	}

IL_0087:
	{
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_17 = ___item0;
		NullCheck(L_17);
		List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * L_18 = L_17->get_prefabs_12();
		int32_t L_19 = V_4;
		NullCheck(L_18);
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_20;
		L_20 = List_1_get_Item_m12630212D3819AD8AD72E2EB189EE84254B7DD2A_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m12630212D3819AD8AD72E2EB189EE84254B7DD2A_RuntimeMethod_var);
		NullCheck(G_B14_0);
		OnTreeRespawn_Invoke_m64A65D6624EF74CB886CB899E63B9F1C88CBAACC(G_B14_0, L_20, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// for (int i = 0; i < item.prefabs.Count; i++)
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_00a1:
	{
		// for (int i = 0; i < item.prefabs.Count; i++)
		int32_t L_22 = V_4;
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_23 = ___item0;
		NullCheck(L_23);
		List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * L_24 = L_23->get_prefabs_12();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m1E15530AA28DA76DD9909083CA672047C42944E0_inline(L_24, /*hidden argument*/List_1_get_Count_m1E15530AA28DA76DD9909083CA672047C42944E0_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_22) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_5;
		if (L_26)
		{
			goto IL_007b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::SpawnTreeOnTerrain(UnityEngine.Terrain,sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_SpawnTreeOnTerrain_mAA55E83842533854E3F2A6833CBB063E8A50FA00 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * ___item1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0534F988FF1A4C3773534E07E042F7948D38E197_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m91BCBD82CE20375C9C8E6715DBB1DEDD597F82DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m38B8371B5090211A5DA66391E66F26F9C91C5FBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7BC5E16951688506518B218BFABB0B74E07C7EF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3F7EE5B9D1AD8E34B161CE15D03DBC79FE6CCD9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m95C2BA3A5C54659972CBE703853E5E6C16F38D3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAB711B779EE61A74EC5415D51D6538FF7506D308_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m54105E3113A4BDCFC79817993666F50B02AC76EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m88853AE7E5F279215C4BFE990330FD81E54ED3DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_m15A35FE88025F5BE41030782B5520A1001A291E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m21F17D5E7482A64132A302B9DA52A1E5E200B1F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7097AC1F2ED336D752E577B054841ECA6B5BBD93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7D35090FBDF168F5493258D0FAD0332D7552884C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m805BCA48AB339EA259A0596DAE5D44D41ECF29E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_mC9C38EB409403C7B88175B017DA376752FF95029_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CSpawnTreeOnTerrainU3Eb__0_m43DE2911E5721F8C5F6DE66EF2EC816162791C1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * V_3 = NULL;
	int32_t V_4 = 0;
	Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2  V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_11;
	memset((&V_11), 0, sizeof(V_11));
	TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * V_12 = NULL;
	float V_13 = 0.0f;
	TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  V_14;
	memset((&V_14), 0, sizeof(V_14));
	float V_15 = 0.0f;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	float V_23 = 0.0f;
	bool V_24 = false;
	bool V_25 = false;
	float V_26 = 0.0f;
	bool V_27 = false;
	bool V_28 = false;
	Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E  V_29;
	memset((&V_29), 0, sizeof(V_29));
	TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * V_30 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_31 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_32;
	memset((&V_32), 0, sizeof(V_32));
	int32_t V_33 = 0;
	float V_34 = 0.0f;
	bool V_35 = false;
	bool V_36 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B23_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B47_0 = 0;
	{
		// List<TreeInstance> treeInstanceCollection = new List<TreeInstance>(terrain.terrainData.treeInstances);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_0 = ___terrain0;
		NullCheck(L_0);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_1;
		L_1 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* L_2;
		L_2 = TerrainData_get_treeInstances_m77CBBB2E2D422ABCE4461184A73F80AA03F38F21(L_1, /*hidden argument*/NULL);
		List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * L_3 = (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B *)il2cpp_codegen_object_new(List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B_il2cpp_TypeInfo_var);
		List_1__ctor_m7097AC1F2ED336D752E577B054841ECA6B5BBD93(L_3, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1__ctor_m7097AC1F2ED336D752E577B054841ECA6B5BBD93_RuntimeMethod_var);
		V_3 = L_3;
		// for (int i = 0; i < treeInstanceCollection.Count; i++)
		V_4 = 0;
		goto IL_0074;
	}

IL_0017:
	{
		// foreach (TreePrefab prefab in item.prefabs)
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_4 = ___item1;
		NullCheck(L_4);
		List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * L_5 = L_4->get_prefabs_12();
		NullCheck(L_5);
		Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2  L_6;
		L_6 = List_1_GetEnumerator_m54105E3113A4BDCFC79817993666F50B02AC76EB(L_5, /*hidden argument*/List_1_GetEnumerator_m54105E3113A4BDCFC79817993666F50B02AC76EB_RuntimeMethod_var);
		V_5 = L_6;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0053;
		}

IL_0028:
		{
			U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C * L_7 = (U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass21_0__ctor_m13C54B75859D89AB78BDBE1208507021EFE9F607(L_7, /*hidden argument*/NULL);
			V_6 = L_7;
			// foreach (TreePrefab prefab in item.prefabs)
			U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C * L_8 = V_6;
			TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_9;
			L_9 = Enumerator_get_Current_m95C2BA3A5C54659972CBE703853E5E6C16F38D3E_inline((Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 *)(&V_5), /*hidden argument*/Enumerator_get_Current_m95C2BA3A5C54659972CBE703853E5E6C16F38D3E_RuntimeMethod_var);
			NullCheck(L_8);
			L_8->set_prefab_0(L_9);
			// treeInstanceCollection.RemoveAll(x => x.prototypeIndex == prefab.index);
			List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * L_10 = V_3;
			U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C * L_11 = V_6;
			Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4 * L_12 = (Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4 *)il2cpp_codegen_object_new(Predicate_1_t298241C40E3D91F628B4B1CE4C3AA2C3898B97E4_il2cpp_TypeInfo_var);
			Predicate_1__ctor_mC9C38EB409403C7B88175B017DA376752FF95029(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass21_0_U3CSpawnTreeOnTerrainU3Eb__0_m43DE2911E5721F8C5F6DE66EF2EC816162791C1D_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_mC9C38EB409403C7B88175B017DA376752FF95029_RuntimeMethod_var);
			NullCheck(L_10);
			int32_t L_13;
			L_13 = List_1_RemoveAll_m15A35FE88025F5BE41030782B5520A1001A291E7(L_10, L_12, /*hidden argument*/List_1_RemoveAll_m15A35FE88025F5BE41030782B5520A1001A291E7_RuntimeMethod_var);
		}

IL_0053:
		{
			// foreach (TreePrefab prefab in item.prefabs)
			bool L_14;
			L_14 = Enumerator_MoveNext_m7BC5E16951688506518B218BFABB0B74E07C7EF1((Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 *)(&V_5), /*hidden argument*/Enumerator_MoveNext_m7BC5E16951688506518B218BFABB0B74E07C7EF1_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0028;
			}
		}

IL_005c:
		{
			IL2CPP_LEAVE(0x6D, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m91BCBD82CE20375C9C8E6715DBB1DEDD597F82DE((Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 *)(&V_5), /*hidden argument*/Enumerator_Dispose_m91BCBD82CE20375C9C8E6715DBB1DEDD597F82DE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
	}

IL_006d:
	{
		// for (int i = 0; i < treeInstanceCollection.Count; i++)
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0074:
	{
		// for (int i = 0; i < treeInstanceCollection.Count; i++)
		int32_t L_16 = V_4;
		List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * L_17 = V_3;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m805BCA48AB339EA259A0596DAE5D44D41ECF29E4_inline(L_17, /*hidden argument*/List_1_get_Count_m805BCA48AB339EA259A0596DAE5D44D41ECF29E4_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_7;
		if (L_19)
		{
			goto IL_0017;
		}
	}
	{
		// if (item.enabled)
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_20 = ___item1;
		NullCheck(L_20);
		bool L_21 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_20)->get_enabled_0();
		V_8 = L_21;
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_04a4;
		}
	}
	{
		// InitializeSeed(item.seed);
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_23 = ___item1;
		NullCheck(L_23);
		int32_t L_24 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_23)->get_seed_2();
		SpawnerBase_InitializeSeed_m4618B0BB1EDC888BAA11FEB519945F109FA41DEC(__this, L_24, /*hidden argument*/NULL);
		// item.spawnPoints = PoissonDisc.GetSpawnpoints(terrain, item.distance, item.seed + seed);
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_25 = ___item1;
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_26 = ___terrain0;
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_27 = ___item1;
		NullCheck(L_27);
		float L_28 = L_27->get_distance_13();
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_29 = ___item1;
		NullCheck(L_29);
		int32_t L_30 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_29)->get_seed_2();
		int32_t L_31 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_seed_4();
		IL2CPP_RUNTIME_CLASS_INIT(PoissonDisc_t8510D3D64E598E309625DE980ED5F5725E78C688_il2cpp_TypeInfo_var);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_32;
		L_32 = PoissonDisc_GetSpawnpoints_mEAC5951294845EAA63582B8454929C77A55F664D(L_26, L_28, ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31)), /*hidden argument*/NULL);
		NullCheck(L_25);
		L_25->set_spawnPoints_11(L_32);
		// foreach (Vector3 pos in item.spawnPoints)
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_33 = ___item1;
		NullCheck(L_33);
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_34 = L_33->get_spawnPoints_11();
		NullCheck(L_34);
		Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995  L_35;
		L_35 = List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351(L_34, /*hidden argument*/List_1_GetEnumerator_m69DCFB9CC3B436547F1A6C733EEC486F58C00351_RuntimeMethod_var);
		V_9 = L_35;
	}

IL_00ce:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0486;
		}

IL_00d3:
		{
			// foreach (Vector3 pos in item.spawnPoints)
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
			L_36 = Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_inline((Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)(&V_9), /*hidden argument*/Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_RuntimeMethod_var);
			V_10 = L_36;
			// Vector2 normalizedPos = terrain.GetNormalizedPosition(pos);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_37 = ___terrain0;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_10;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
			L_39 = TerrainSampler_GetNormalizedPosition_mF6BB9367E5679F31FA05FC81793094C166DC027F(L_37, L_38, /*hidden argument*/NULL);
			V_11 = L_39;
			// InitializeSeed(item.seed + (int)pos.x * (int)pos.z);
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_40 = ___item1;
			NullCheck(L_40);
			int32_t L_41 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_40)->get_seed_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = V_10;
			float L_43 = L_42.get_x_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_10;
			float L_45 = L_44.get_z_4();
			SpawnerBase_InitializeSeed_m4618B0BB1EDC888BAA11FEB519945F109FA41DEC(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_43)), (int32_t)((int32_t)((int32_t)L_45)))))), /*hidden argument*/NULL);
			// if (((Random.value * 100f) <= item.probability) == false)
			float L_46;
			L_46 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_47 = ___item1;
			NullCheck(L_47);
			float L_48 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_47)->get_probability_3();
			V_16 = (bool)((!(((float)((float)il2cpp_codegen_multiply((float)L_46, (float)(100.0f)))) <= ((float)L_48)))? 1 : 0);
			bool L_49 = V_16;
			if (!L_49)
			{
				goto IL_0125;
			}
		}

IL_011f:
		{
			// continue;
			goto IL_0486;
		}

IL_0125:
		{
			// if (item.collisionCheck)
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_50 = ___item1;
			NullCheck(L_50);
			bool L_51 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_50)->get_collisionCheck_4();
			V_17 = L_51;
			bool L_52 = V_17;
			if (!L_52)
			{
				goto IL_014a;
			}
		}

IL_0131:
		{
			// if (InsideOccupiedCell(terrain, pos, normalizedPos))
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_53 = ___terrain0;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = V_10;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55 = V_11;
			bool L_56;
			L_56 = VegetationSpawner_InsideOccupiedCell_mB53F86B1E434E5E11FA18F3AD10955A0F14405CA(__this, L_53, L_54, L_55, /*hidden argument*/NULL);
			V_18 = L_56;
			bool L_57 = V_18;
			if (!L_57)
			{
				goto IL_0149;
			}
		}

IL_0143:
		{
			// continue;
			goto IL_0486;
		}

IL_0149:
		{
		}

IL_014a:
		{
			// TreePrefab prefab = SpawnerBase.GetProbableTree(item);
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_58 = ___item1;
			TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_59;
			L_59 = SpawnerBase_GetProbableTree_mF52ACCEA625BACA639EAE982EB99A99508D79E31(L_58, /*hidden argument*/NULL);
			V_12 = L_59;
			// if (prefab == null) continue;
			TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_60 = V_12;
			V_19 = (bool)((((RuntimeObject*)(TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 *)L_60) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_61 = V_19;
			if (!L_61)
			{
				goto IL_0162;
			}
		}

IL_015d:
		{
			// if (prefab == null) continue;
			goto IL_0486;
		}

IL_0162:
		{
			// terrain.SampleHeight(normalizedPos, out height, out worldHeight, out normalizedHeight);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_62 = ___terrain0;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_63 = V_11;
			TerrainSampler_SampleHeight_m066CA886AB9C1DC2813773FD91BB08380711D8B8(L_62, L_63, (float*)(&V_0), (float*)(&V_1), (float*)(&V_2), /*hidden argument*/NULL);
			// if (item.rejectUnderwater && worldHeight < waterHeight) continue;
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_64 = ___item1;
			NullCheck(L_64);
			bool L_65 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_64)->get_rejectUnderwater_5();
			if (!L_65)
			{
				goto IL_0184;
			}
		}

IL_0179:
		{
			float L_66 = V_1;
			float L_67 = __this->get_waterHeight_26();
			G_B23_0 = ((((float)L_66) < ((float)L_67))? 1 : 0);
			goto IL_0185;
		}

IL_0184:
		{
			G_B23_0 = 0;
		}

IL_0185:
		{
			V_20 = (bool)G_B23_0;
			bool L_68 = V_20;
			if (!L_68)
			{
				goto IL_0190;
			}
		}

IL_018b:
		{
			// if (item.rejectUnderwater && worldHeight < waterHeight) continue;
			goto IL_0486;
		}

IL_0190:
		{
			// if (worldHeight < item.heightRange.x || worldHeight > item.heightRange.y)
			float L_69 = V_1;
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_70 = ___item1;
			NullCheck(L_70);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_71 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_70)->get_address_of_heightRange_6();
			float L_72 = L_71->get_x_0();
			if ((((float)L_69) < ((float)L_72)))
			{
				goto IL_01ae;
			}
		}

IL_019e:
		{
			float L_73 = V_1;
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_74 = ___item1;
			NullCheck(L_74);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_75 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_74)->get_address_of_heightRange_6();
			float L_76 = L_75->get_y_1();
			G_B28_0 = ((((float)L_73) > ((float)L_76))? 1 : 0);
			goto IL_01af;
		}

IL_01ae:
		{
			G_B28_0 = 1;
		}

IL_01af:
		{
			V_21 = (bool)G_B28_0;
			bool L_77 = V_21;
			if (!L_77)
			{
				goto IL_01bb;
			}
		}

IL_01b5:
		{
			// continue;
			goto IL_0486;
		}

IL_01bb:
		{
			// if (item.slopeRange.x > 0 || item.slopeRange.y < 90f)
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_78 = ___item1;
			NullCheck(L_78);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_79 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_78)->get_address_of_slopeRange_7();
			float L_80 = L_79->get_x_0();
			if ((((float)L_80) > ((float)(0.0f))))
			{
				goto IL_01e1;
			}
		}

IL_01cd:
		{
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_81 = ___item1;
			NullCheck(L_81);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_82 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_81)->get_address_of_slopeRange_7();
			float L_83 = L_82->get_y_1();
			G_B33_0 = ((((float)L_83) < ((float)(90.0f)))? 1 : 0);
			goto IL_01e2;
		}

IL_01e1:
		{
			G_B33_0 = 1;
		}

IL_01e2:
		{
			V_22 = (bool)G_B33_0;
			bool L_84 = V_22;
			if (!L_84)
			{
				goto IL_0222;
			}
		}

IL_01e8:
		{
			// float slope = terrain.GetSlope(normalizedPos, false);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_85 = ___terrain0;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_86 = V_11;
			float L_87;
			L_87 = TerrainSampler_GetSlope_m6A88C313F6810D0CDD502520BD3D59D1C8900A4B(L_85, L_86, (bool)0, /*hidden argument*/NULL);
			V_23 = L_87;
			// if (!(slope >= (item.slopeRange.x) && slope <= (item.slopeRange.y)))
			float L_88 = V_23;
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_89 = ___item1;
			NullCheck(L_89);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_90 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_89)->get_address_of_slopeRange_7();
			float L_91 = L_90->get_x_0();
			if ((!(((float)L_88) >= ((float)L_91))))
			{
				goto IL_0214;
			}
		}

IL_0203:
		{
			float L_92 = V_23;
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_93 = ___item1;
			NullCheck(L_93);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_94 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_93)->get_address_of_slopeRange_7();
			float L_95 = L_94->get_y_1();
			G_B37_0 = ((!(((float)L_92) <= ((float)L_95)))? 1 : 0);
			goto IL_0215;
		}

IL_0214:
		{
			G_B37_0 = 1;
		}

IL_0215:
		{
			V_24 = (bool)G_B37_0;
			bool L_96 = V_24;
			if (!L_96)
			{
				goto IL_0221;
			}
		}

IL_021b:
		{
			// continue;
			goto IL_0486;
		}

IL_0221:
		{
		}

IL_0222:
		{
			// if (item.curvatureRange.x > 0 || item.curvatureRange.y < 1f)
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_97 = ___item1;
			NullCheck(L_97);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_98 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_97)->get_address_of_curvatureRange_8();
			float L_99 = L_98->get_x_0();
			if ((((float)L_99) > ((float)(0.0f))))
			{
				goto IL_0248;
			}
		}

IL_0234:
		{
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_100 = ___item1;
			NullCheck(L_100);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_101 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_100)->get_address_of_curvatureRange_8();
			float L_102 = L_101->get_y_1();
			G_B43_0 = ((((float)L_102) < ((float)(1.0f)))? 1 : 0);
			goto IL_0249;
		}

IL_0248:
		{
			G_B43_0 = 1;
		}

IL_0249:
		{
			V_25 = (bool)G_B43_0;
			bool L_103 = V_25;
			if (!L_103)
			{
				goto IL_0296;
			}
		}

IL_024f:
		{
			// float curvature = terrain.SampleConvexity(normalizedPos);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_104 = ___terrain0;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_105 = V_11;
			float L_106;
			L_106 = TerrainSampler_SampleConvexity_mD7766A71D8925E23B328FA883B5C066B581C68ED(L_104, L_105, (3.0f), /*hidden argument*/NULL);
			V_26 = L_106;
			// curvature = TerrainSampler.ConvexityToCurvature(curvature);
			float L_107 = V_26;
			float L_108;
			L_108 = TerrainSampler_ConvexityToCurvature_mAD61CA7B8C6A3023C45BE925F4D168E46B94C18E(L_107, /*hidden argument*/NULL);
			V_26 = L_108;
			// if (curvature < item.curvatureRange.x || curvature > item.curvatureRange.y)
			float L_109 = V_26;
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_110 = ___item1;
			NullCheck(L_110);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_111 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_110)->get_address_of_curvatureRange_8();
			float L_112 = L_111->get_x_0();
			if ((((float)L_109) < ((float)L_112)))
			{
				goto IL_0288;
			}
		}

IL_0277:
		{
			float L_113 = V_26;
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_114 = ___item1;
			NullCheck(L_114);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_115 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_114)->get_address_of_curvatureRange_8();
			float L_116 = L_115->get_y_1();
			G_B47_0 = ((((float)L_113) > ((float)L_116))? 1 : 0);
			goto IL_0289;
		}

IL_0288:
		{
			G_B47_0 = 1;
		}

IL_0289:
		{
			V_27 = (bool)G_B47_0;
			bool L_117 = V_27;
			if (!L_117)
			{
				goto IL_0295;
			}
		}

IL_028f:
		{
			// continue;
			goto IL_0486;
		}

IL_0295:
		{
		}

IL_0296:
		{
			// float spawnChance = 0f;
			V_13 = (0.0f);
			// if (item.layerMasks.Count == 0)
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_118 = ___item1;
			NullCheck(L_118);
			List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * L_119 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_118)->get_layerMasks_9();
			NullCheck(L_119);
			int32_t L_120;
			L_120 = List_1_get_Count_m7D35090FBDF168F5493258D0FAD0332D7552884C_inline(L_119, /*hidden argument*/List_1_get_Count_m7D35090FBDF168F5493258D0FAD0332D7552884C_RuntimeMethod_var);
			V_28 = (bool)((((int32_t)L_120) == ((int32_t)0))? 1 : 0);
			bool L_121 = V_28;
			if (!L_121)
			{
				goto IL_02bc;
			}
		}

IL_02b1:
		{
			// spawnChance = 100f;
			V_13 = (100.0f);
			goto IL_02cb;
		}

IL_02bc:
		{
			// splatmapTexelIndex = terrain.SplatmapTexelIndex(normalizedPos);
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_122 = ___terrain0;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_123 = V_11;
			Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_124;
			L_124 = TerrainSampler_SplatmapTexelIndex_m55BBAC981EC391551897E955ECFD68FDA54D1116(L_122, L_123, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
			((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->set_splatmapTexelIndex_29(L_124);
		}

IL_02cb:
		{
			// foreach (TerrainLayerMask layer in item.layerMasks)
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_125 = ___item1;
			NullCheck(L_125);
			List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * L_126 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_125)->get_layerMasks_9();
			NullCheck(L_126);
			Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E  L_127;
			L_127 = List_1_GetEnumerator_m88853AE7E5F279215C4BFE990330FD81E54ED3DA(L_126, /*hidden argument*/List_1_GetEnumerator_m88853AE7E5F279215C4BFE990330FD81E54ED3DA_RuntimeMethod_var);
			V_29 = L_127;
		}

IL_02d9:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0368;
			}

IL_02de:
			{
				// foreach (TerrainLayerMask layer in item.layerMasks)
				TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * L_128;
				L_128 = Enumerator_get_Current_m3F7EE5B9D1AD8E34B161CE15D03DBC79FE6CCD9E_inline((Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E *)(&V_29), /*hidden argument*/Enumerator_get_Current_m3F7EE5B9D1AD8E34B161CE15D03DBC79FE6CCD9E_RuntimeMethod_var);
				V_30 = L_128;
				// Texture2D splat = terrain.terrainData.GetAlphamapTexture(GetSplatmapID(layer.layerID));
				Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_129 = ___terrain0;
				NullCheck(L_129);
				TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_130;
				L_130 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_129, /*hidden argument*/NULL);
				TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * L_131 = V_30;
				NullCheck(L_131);
				int32_t L_132 = L_131->get_layerID_1();
				int32_t L_133;
				L_133 = SpawnerBase_GetSplatmapID_m5AC376E8C70761A5A62D31C58AF658351475BF07(L_132, /*hidden argument*/NULL);
				NullCheck(L_130);
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_134;
				L_134 = TerrainData_GetAlphamapTexture_mF09FC19604EE624F7655C15C0AAE7499BCCBAA8E(L_130, L_133, /*hidden argument*/NULL);
				V_31 = L_134;
				// Color color = splat.GetPixel(splatmapTexelIndex.x, splatmapTexelIndex.y);
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_135 = V_31;
				IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
				int32_t L_136;
				L_136 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_address_of_splatmapTexelIndex_29()), /*hidden argument*/NULL);
				int32_t L_137;
				L_137 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_address_of_splatmapTexelIndex_29()), /*hidden argument*/NULL);
				NullCheck(L_135);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_138;
				L_138 = Texture2D_GetPixel_m50474A401DE4CB3B567F1695546DF1D2C610A022(L_135, L_136, L_137, /*hidden argument*/NULL);
				V_32 = L_138;
				// int channel = layer.layerID % 4;
				TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * L_139 = V_30;
				NullCheck(L_139);
				int32_t L_140 = L_139->get_layerID_1();
				V_33 = ((int32_t)((int32_t)L_140%(int32_t)4));
				// float value = SampleChannel(color, channel);
				Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_141 = V_32;
				int32_t L_142 = V_33;
				float L_143;
				L_143 = SpawnerBase_SampleChannel_m2CA25CB83AFE7821920F8DBF2A66681C549CBDBA(L_141, L_142, /*hidden argument*/NULL);
				V_34 = L_143;
				// if (value > 0)
				float L_144 = V_34;
				V_35 = (bool)((((float)L_144) > ((float)(0.0f)))? 1 : 0);
				bool L_145 = V_35;
				if (!L_145)
				{
					goto IL_0356;
				}
			}

IL_0343:
			{
				// value = Mathf.Clamp01(value - layer.threshold);
				float L_146 = V_34;
				TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * L_147 = V_30;
				NullCheck(L_147);
				float L_148 = L_147->get_threshold_2();
				float L_149;
				L_149 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)il2cpp_codegen_subtract((float)L_146, (float)L_148)), /*hidden argument*/NULL);
				V_34 = L_149;
			}

IL_0356:
			{
				// value *= 100f;
				float L_150 = V_34;
				V_34 = ((float)il2cpp_codegen_multiply((float)L_150, (float)(100.0f)));
				// spawnChance += value;
				float L_151 = V_13;
				float L_152 = V_34;
				V_13 = ((float)il2cpp_codegen_add((float)L_151, (float)L_152));
			}

IL_0368:
			{
				// foreach (TerrainLayerMask layer in item.layerMasks)
				bool L_153;
				L_153 = Enumerator_MoveNext_m38B8371B5090211A5DA66391E66F26F9C91C5FBC((Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E *)(&V_29), /*hidden argument*/Enumerator_MoveNext_m38B8371B5090211A5DA66391E66F26F9C91C5FBC_RuntimeMethod_var);
				if (L_153)
				{
					goto IL_02de;
				}
			}

IL_0374:
			{
				IL2CPP_LEAVE(0x385, FINALLY_0376);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0376;
		}

FINALLY_0376:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m0534F988FF1A4C3773534E07E042F7948D38E197((Enumerator_t3073F6DF158E12B3FBD1C47B76FADB4496E02A6E *)(&V_29), /*hidden argument*/Enumerator_Dispose_m0534F988FF1A4C3773534E07E042F7948D38E197_RuntimeMethod_var);
			IL2CPP_END_FINALLY(886)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(886)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x385, IL_0385)
		}

IL_0385:
		{
			// InitializeSeed((int)pos.x * (int)pos.z);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_154 = V_10;
			float L_155 = L_154.get_x_2();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_156 = V_10;
			float L_157 = L_156.get_z_4();
			SpawnerBase_InitializeSeed_m4618B0BB1EDC888BAA11FEB519945F109FA41DEC(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_155)), (int32_t)((int32_t)((int32_t)L_157)))), /*hidden argument*/NULL);
			// if ((Random.value <= spawnChance) == false)
			float L_158;
			L_158 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
			float L_159 = V_13;
			V_36 = (bool)((!(((float)L_158) <= ((float)L_159)))? 1 : 0);
			bool L_160 = V_36;
			if (!L_160)
			{
				goto IL_03b2;
			}
		}

IL_03ac:
		{
			// continue;
			goto IL_0486;
		}

IL_03b2:
		{
			// TreeInstance treeInstance = new TreeInstance();
			il2cpp_codegen_initobj((&V_14), sizeof(TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15 ));
			// treeInstance.prototypeIndex = prefab.index;
			TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_161 = V_12;
			NullCheck(L_161);
			int32_t L_162 = L_161->get_index_0();
			(&V_14)->set_prototypeIndex_6(L_162);
			// treeInstance.position = new Vector3(normalizedPos.x, normalizedHeight - (item.sinkAmount / (terrain.terrainData.size.y + 0.01f)), normalizedPos.y);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_163 = V_11;
			float L_164 = L_163.get_x_0();
			float L_165 = V_2;
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_166 = ___item1;
			NullCheck(L_166);
			float L_167 = L_166->get_sinkAmount_15();
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_168 = ___terrain0;
			NullCheck(L_168);
			TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_169;
			L_169 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_168, /*hidden argument*/NULL);
			NullCheck(L_169);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_170;
			L_170 = TerrainData_get_size_mF68B76A49498AE26C506D77483EA81E4F816EB15(L_169, /*hidden argument*/NULL);
			float L_171 = L_170.get_y_3();
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_172 = V_11;
			float L_173 = L_172.get_y_1();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_174;
			memset((&L_174), 0, sizeof(L_174));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_174), L_164, ((float)il2cpp_codegen_subtract((float)L_165, (float)((float)((float)L_167/(float)((float)il2cpp_codegen_add((float)L_171, (float)(0.00999999978f))))))), L_173, /*hidden argument*/NULL);
			(&V_14)->set_position_0(L_174);
			// treeInstance.rotation = Random.Range(0f, 359f) * Mathf.Deg2Rad;
			float L_175;
			L_175 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (359.0f), /*hidden argument*/NULL);
			(&V_14)->set_rotation_3(((float)il2cpp_codegen_multiply((float)L_175, (float)(0.0174532924f))));
			// float scale = Random.Range(item.scaleRange.x, item.scaleRange.y);
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_176 = ___item1;
			NullCheck(L_176);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_177 = L_176->get_address_of_scaleRange_14();
			float L_178 = L_177->get_x_0();
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_179 = ___item1;
			NullCheck(L_179);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_180 = L_179->get_address_of_scaleRange_14();
			float L_181 = L_180->get_y_1();
			float L_182;
			L_182 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_178, L_181, /*hidden argument*/NULL);
			V_15 = L_182;
			// treeInstance.heightScale = scale;
			float L_183 = V_15;
			(&V_14)->set_heightScale_2(L_183);
			// treeInstance.widthScale = scale;
			float L_184 = V_15;
			(&V_14)->set_widthScale_1(L_184);
			// treeInstance.color = Color.white;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_185;
			L_185 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
			Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_186;
			L_186 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_185, /*hidden argument*/NULL);
			(&V_14)->set_color_4(L_186);
			// treeInstance.lightmapColor = Color.white;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_187;
			L_187 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
			Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_188;
			L_188 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_187, /*hidden argument*/NULL);
			(&V_14)->set_lightmapColor_5(L_188);
			// treeInstanceCollection.Add(treeInstance);
			List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * L_189 = V_3;
			TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  L_190 = V_14;
			NullCheck(L_189);
			List_1_Add_mAB711B779EE61A74EC5415D51D6538FF7506D308(L_189, L_190, /*hidden argument*/List_1_Add_mAB711B779EE61A74EC5415D51D6538FF7506D308_RuntimeMethod_var);
			// item.instanceCount++;
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_191 = ___item1;
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_192 = L_191;
			NullCheck(L_192);
			int32_t L_193 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_192)->get_instanceCount_10();
			NullCheck(L_192);
			((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_192)->set_instanceCount_10(((int32_t)il2cpp_codegen_add((int32_t)L_193, (int32_t)1)));
		}

IL_0486:
		{
			// foreach (Vector3 pos in item.spawnPoints)
			bool L_194;
			L_194 = Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735((Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m9FB106B6D83E0AEA63A4ADE22BC85158FCB05735_RuntimeMethod_var);
			if (L_194)
			{
				goto IL_00d3;
			}
		}

IL_0492:
		{
			IL2CPP_LEAVE(0x4A3, FINALLY_0494);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0494;
	}

FINALLY_0494:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13((Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 *)(&V_9), /*hidden argument*/Enumerator_Dispose_m6AB105C820F1EB5DCEB02BB908EA1DF4A8A0BF13_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1172)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1172)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A3, IL_04a3)
	}

IL_04a3:
	{
	}

IL_04a4:
	{
		// terrain.terrainData.SetTreeInstances(treeInstanceCollection.ToArray(), false);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_195 = ___terrain0;
		NullCheck(L_195);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_196;
		L_196 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_195, /*hidden argument*/NULL);
		List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * L_197 = V_3;
		NullCheck(L_197);
		TreeInstanceU5BU5D_t7A5F440C0ECE3C5D1C19C73B47188B206C813DF8* L_198;
		L_198 = List_1_ToArray_m21F17D5E7482A64132A302B9DA52A1E5E200B1F6(L_197, /*hidden argument*/List_1_ToArray_m21F17D5E7482A64132A302B9DA52A1E5E200B1F6_RuntimeMethod_var);
		NullCheck(L_196);
		TerrainData_SetTreeInstances_mD4EA1F1C6E9C324233C0148EE6816207700F0790(L_196, L_198, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.TreePrototype sc.terrain.vegetationspawner.VegetationSpawner::GetTreePrototype(sc.terrain.vegetationspawner.SpawnerBase/TreePrefab,UnityEngine.Terrain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * VegetationSpawner_GetTreePrototype_mFCE5EC951ABD6A3C0F7D343CACAD5AB315AFCCD3 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * ___item0, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain1, const RuntimeMethod* method)
{
	TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * V_0 = NULL;
	{
		// return terrain.terrainData.treePrototypes[item.index];
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_0 = ___terrain1;
		NullCheck(L_0);
		TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_1;
		L_1 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* L_2;
		L_2 = TerrainData_get_treePrototypes_mE083138D9260AD480EBB794632142BC68D4533C7(L_1, /*hidden argument*/NULL);
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_3 = ___item0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_index_0();
		NullCheck(L_2);
		int32_t L_5 = L_4;
		TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * L_7 = V_0;
		return L_7;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::UpdateTreeItem(sc.terrain.vegetationspawner.SpawnerBase/TreeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_UpdateTreeItem_m32141A5B5C3F1B2F54A7AC69515A936E7AD0B2EB (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m91BCBD82CE20375C9C8E6715DBB1DEDD597F82DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7BC5E16951688506518B218BFABB0B74E07C7EF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m95C2BA3A5C54659972CBE703853E5E6C16F38D3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m54105E3113A4BDCFC79817993666F50B02AC76EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * V_1 = NULL;
	Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * V_3 = NULL;
	TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* V_4 = NULL;
	TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (Terrain terrain in terrains)
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_0 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_terrains_5();
		NullCheck(L_0);
		Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  L_1;
		L_1 = List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556(L_0, /*hidden argument*/List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00e2;
		}

IL_0013:
		{
			// foreach (Terrain terrain in terrains)
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2;
			L_2 = Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_inline((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
			V_1 = L_2;
			// foreach (TreePrefab p in item.prefabs)
			TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_3 = ___item0;
			NullCheck(L_3);
			List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * L_4 = L_3->get_prefabs_12();
			NullCheck(L_4);
			Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2  L_5;
			L_5 = List_1_GetEnumerator_m54105E3113A4BDCFC79817993666F50B02AC76EB(L_4, /*hidden argument*/List_1_GetEnumerator_m54105E3113A4BDCFC79817993666F50B02AC76EB_RuntimeMethod_var);
			V_2 = L_5;
		}

IL_0029:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00c4;
			}

IL_002e:
			{
				// foreach (TreePrefab p in item.prefabs)
				TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_6;
				L_6 = Enumerator_get_Current_m95C2BA3A5C54659972CBE703853E5E6C16F38D3E_inline((Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m95C2BA3A5C54659972CBE703853E5E6C16F38D3E_RuntimeMethod_var);
				V_3 = L_6;
				// if (p.index >= terrain.terrainData.treePrototypes.Length) continue;
				TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_7 = V_3;
				NullCheck(L_7);
				int32_t L_8 = L_7->get_index_0();
				Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_9 = V_1;
				NullCheck(L_9);
				TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_10;
				L_10 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_9, /*hidden argument*/NULL);
				NullCheck(L_10);
				TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* L_11;
				L_11 = TerrainData_get_treePrototypes_mE083138D9260AD480EBB794632142BC68D4533C7(L_10, /*hidden argument*/NULL);
				NullCheck(L_11);
				V_6 = (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_12 = V_6;
				if (!L_12)
				{
					goto IL_0057;
				}
			}

IL_0055:
			{
				// if (p.index >= terrain.terrainData.treePrototypes.Length) continue;
				goto IL_00c4;
			}

IL_0057:
			{
				// if (p.prefab == null) continue;
				TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_13 = V_3;
				NullCheck(L_13);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13->get_prefab_2();
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_15;
				L_15 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				V_7 = L_15;
				bool L_16 = V_7;
				if (!L_16)
				{
					goto IL_006b;
				}
			}

IL_0069:
			{
				// if (p.prefab == null) continue;
				goto IL_00c4;
			}

IL_006b:
			{
				// if (terrain.terrainData.treePrototypes[p.index] == null) continue;
				Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_17 = V_1;
				NullCheck(L_17);
				TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_18;
				L_18 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_17, /*hidden argument*/NULL);
				NullCheck(L_18);
				TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* L_19;
				L_19 = TerrainData_get_treePrototypes_mE083138D9260AD480EBB794632142BC68D4533C7(L_18, /*hidden argument*/NULL);
				TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_20 = V_3;
				NullCheck(L_20);
				int32_t L_21 = L_20->get_index_0();
				NullCheck(L_19);
				int32_t L_22 = L_21;
				TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
				V_8 = (bool)((((RuntimeObject*)(TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 *)L_23) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
				bool L_24 = V_8;
				if (!L_24)
				{
					goto IL_0088;
				}
			}

IL_0086:
			{
				// if (terrain.terrainData.treePrototypes[p.index] == null) continue;
				goto IL_00c4;
			}

IL_0088:
			{
				// TreePrototype[] treePrototypes = terrain.terrainData.treePrototypes;
				Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_25 = V_1;
				NullCheck(L_25);
				TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_26;
				L_26 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_25, /*hidden argument*/NULL);
				NullCheck(L_26);
				TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* L_27;
				L_27 = TerrainData_get_treePrototypes_mE083138D9260AD480EBB794632142BC68D4533C7(L_26, /*hidden argument*/NULL);
				V_4 = L_27;
				// TreePrototype t = new TreePrototype();
				TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * L_28 = (TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 *)il2cpp_codegen_object_new(TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5_il2cpp_TypeInfo_var);
				TreePrototype__ctor_mAF604B1B4D176E6072DFB258CAF2EC53E7714E4E(L_28, /*hidden argument*/NULL);
				V_5 = L_28;
				// t.prefab = p.prefab;
				TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * L_29 = V_5;
				TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_30 = V_3;
				NullCheck(L_30);
				GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = L_30->get_prefab_2();
				NullCheck(L_29);
				TreePrototype_set_prefab_m281534A67041F69C643794C1B13B108610B8BA04(L_29, L_31, /*hidden argument*/NULL);
				// treePrototypes[p.index] = t;
				TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* L_32 = V_4;
				TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_33 = V_3;
				NullCheck(L_33);
				int32_t L_34 = L_33->get_index_0();
				TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 * L_35 = V_5;
				NullCheck(L_32);
				ArrayElementTypeCheck (L_32, L_35);
				(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (TreePrototype_t4FDE36DAD3AB18A775961261C66742DB314005C5 *)L_35);
				// terrain.terrainData.treePrototypes = treePrototypes;
				Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_36 = V_1;
				NullCheck(L_36);
				TerrainData_tAD3780D3C4DE5B9BE122BECE6D08C4AE169ED2A4 * L_37;
				L_37 = Terrain_get_terrainData_mDB60C324B3424339C3C9FA6CDF6DC1C9B47D6E41(L_36, /*hidden argument*/NULL);
				TreePrototypeU5BU5D_tD0B8008D8BE06F04AD02B417B3A629C28AE0A9EF* L_38 = V_4;
				NullCheck(L_37);
				TerrainData_set_treePrototypes_m57B2C160BD389266B666A5C38B0D268650AB753A(L_37, L_38, /*hidden argument*/NULL);
			}

IL_00c4:
			{
				// foreach (TreePrefab p in item.prefabs)
				bool L_39;
				L_39 = Enumerator_MoveNext_m7BC5E16951688506518B218BFABB0B74E07C7EF1((Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m7BC5E16951688506518B218BFABB0B74E07C7EF1_RuntimeMethod_var);
				if (L_39)
				{
					goto IL_002e;
				}
			}

IL_00d0:
			{
				IL2CPP_LEAVE(0xE1, FINALLY_00d2);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00d2;
		}

FINALLY_00d2:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m91BCBD82CE20375C9C8E6715DBB1DEDD597F82DE((Enumerator_tB50F7297894271EE59B5AB4587CCCC935699F4D2 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m91BCBD82CE20375C9C8E6715DBB1DEDD597F82DE_RuntimeMethod_var);
			IL2CPP_END_FINALLY(210)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(210)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xE1, IL_00e1)
		}

IL_00e1:
		{
		}

IL_00e2:
		{
			// foreach (Terrain terrain in terrains)
			bool L_40;
			L_40 = Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
			if (L_40)
			{
				goto IL_0013;
			}
		}

IL_00ee:
		{
			IL2CPP_LEAVE(0xFF, FINALLY_00f0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f0;
	}

FINALLY_00f0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(240)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(240)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xFF, IL_00ff)
	}

IL_00ff:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::add_onTreeRespawn(sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_add_onTreeRespawn_mA7B7EED76DB0BE2F67698007D5A8283EA07C2FB7 (OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * V_0 = NULL;
	OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * V_1 = NULL;
	OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_0 = ((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_onTreeRespawn_27();
		V_0 = L_0;
	}

IL_0006:
	{
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_1 = V_0;
		V_1 = L_1;
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_2 = V_1;
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 *)CastclassSealed((RuntimeObject*)L_4, OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_5 = V_2;
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_6 = V_1;
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_7;
		L_7 = InterlockedCompareExchangeImpl<OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 *>((OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 **)(((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_address_of_onTreeRespawn_27()), L_5, L_6);
		V_0 = L_7;
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_8 = V_0;
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_9 = V_1;
		if ((!(((RuntimeObject*)(OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 *)L_8) == ((RuntimeObject*)(OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::remove_onTreeRespawn(sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_remove_onTreeRespawn_mB91B230696ABD037CD4F573FEF16078A43233D71 (OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * V_0 = NULL;
	OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * V_1 = NULL;
	OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_0 = ((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_onTreeRespawn_27();
		V_0 = L_0;
	}

IL_0006:
	{
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_1 = V_0;
		V_1 = L_1;
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_2 = V_1;
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 *)CastclassSealed((RuntimeObject*)L_4, OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_5 = V_2;
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_6 = V_1;
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_7;
		L_7 = InterlockedCompareExchangeImpl<OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 *>((OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 **)(((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_address_of_onTreeRespawn_27()), L_5, L_6);
		V_0 = L_7;
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_8 = V_0;
		OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * L_9 = V_1;
		if ((!(((RuntimeObject*)(OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 *)L_8) == ((RuntimeObject*)(OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::add_onGrassRespawn(sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_add_onGrassRespawn_m66449657A1D78B42D4C59F00255FF613F11C3F2A (OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * V_0 = NULL;
	OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * V_1 = NULL;
	OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_0 = ((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_onGrassRespawn_28();
		V_0 = L_0;
	}

IL_0006:
	{
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_1 = V_0;
		V_1 = L_1;
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_2 = V_1;
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 *)CastclassSealed((RuntimeObject*)L_4, OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_5 = V_2;
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_6 = V_1;
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_7;
		L_7 = InterlockedCompareExchangeImpl<OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 *>((OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 **)(((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_address_of_onGrassRespawn_28()), L_5, L_6);
		V_0 = L_7;
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_8 = V_0;
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_9 = V_1;
		if ((!(((RuntimeObject*)(OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 *)L_8) == ((RuntimeObject*)(OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::remove_onGrassRespawn(sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_remove_onGrassRespawn_mF3E1881C5057850EBA7A54FE2FEF15E8E81F1B2A (OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * V_0 = NULL;
	OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * V_1 = NULL;
	OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_0 = ((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_onGrassRespawn_28();
		V_0 = L_0;
	}

IL_0006:
	{
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_1 = V_0;
		V_1 = L_1;
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_2 = V_1;
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 *)CastclassSealed((RuntimeObject*)L_4, OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_5 = V_2;
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_6 = V_1;
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_7;
		L_7 = InterlockedCompareExchangeImpl<OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 *>((OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 **)(((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->get_address_of_onGrassRespawn_28()), L_5, L_6);
		V_0 = L_7;
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_8 = V_0;
		OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * L_9 = V_1;
		if ((!(((RuntimeObject*)(OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 *)L_8) == ((RuntimeObject*)(OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_OnEnable_mF0A8DDA80E95DB6EF6314814FA29A400351E3F38 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Current = this;
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->set_Current_18(__this);
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_OnDisable_m8D4016A055752A0C57D789F1C2A97B582BF07EA4 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Current = null;
		IL2CPP_RUNTIME_CLASS_INIT(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->set_Current_18((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 *)NULL);
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::Respawn(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_Respawn_m8B95605A3E4AE89B3F8375A71E8FBEAFCE026D59 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, bool ___grass0, bool ___trees1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * V_4 = NULL;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (terrains == null) return;
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_0 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_terrains_5();
		V_0 = (bool)((((RuntimeObject*)(List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (terrains == null) return;
		goto IL_0078;
	}

IL_0010:
	{
		// if(grass) SpawnAllGrass();
		bool L_2 = ___grass0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// if(grass) SpawnAllGrass();
		VegetationSpawner_SpawnAllGrass_mD9228FBE56FBDAD3B8B105B49E97FB1219D43423(__this, (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 *)NULL, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// if(trees) SpawnAllTrees();
		bool L_4 = ___trees1;
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// if(trees) SpawnAllTrees();
		VegetationSpawner_SpawnAllTrees_m50D42CEA005EDFD8F78BD9284CE397A7404B7F71(__this, (Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 *)NULL, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// foreach (Terrain terrain in terrains)
		List_1_t8B3BE531D972F03556DC08003A073AFBDDF8EE7C * L_6 = ((SpawnerBase_tFF81DE619162B63BBB851C5050F0E65B36314D4E *)__this)->get_terrains_5();
		NullCheck(L_6);
		Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0  L_7;
		L_7 = List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556(L_6, /*hidden argument*/List_1_GetEnumerator_m0998E3B1F3EA4E17C8E197899D214259577D3556_RuntimeMethod_var);
		V_3 = L_7;
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005e;
		}

IL_0039:
		{
			// foreach (Terrain terrain in terrains)
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_8;
			L_8 = Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_inline((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_3), /*hidden argument*/Enumerator_get_Current_mD26AF7797305E3588F5941542141256B31079C33_RuntimeMethod_var);
			V_4 = L_8;
			// if (!terrain) continue;
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_9 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_10;
			L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
			V_5 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
			bool L_11 = V_5;
			if (!L_11)
			{
				goto IL_0055;
			}
		}

IL_0053:
		{
			// if (!terrain) continue;
			goto IL_005e;
		}

IL_0055:
		{
			// terrain.Flush();
			Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_12 = V_4;
			NullCheck(L_12);
			Terrain_Flush_m72233FA4768E704FA506A7F6B3819166C3F06C01(L_12, /*hidden argument*/NULL);
		}

IL_005e:
		{
			// foreach (Terrain terrain in terrains)
			bool L_13;
			L_13 = Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mCE8866D617D372DDCA2B492B410D2A608568E67F_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0039;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x78, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1((Enumerator_t54BBB3E24B559C9ABC774AEDD19F1EFC2ABFB3B0 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mB1381567FAF8CC961408F487160932A5105EFEF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(105)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x78, IL_0078)
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::RespawnTerrain(UnityEngine.Terrain,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner_RespawnTerrain_m7765ADC08247555AE818A5960BAEA8EE50F5C5E8 (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * ___terrain0, bool ___grass1, bool ___trees2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (grass) SpawnAllGrass(terrain);
		bool L_0 = ___grass1;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (grass) SpawnAllGrass(terrain);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_2 = ___terrain0;
		VegetationSpawner_SpawnAllGrass_mD9228FBE56FBDAD3B8B105B49E97FB1219D43423(__this, L_2, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// if (trees) SpawnAllTrees(terrain);
		bool L_3 = ___trees2;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// if (trees) SpawnAllTrees(terrain);
		Terrain_t2C0E3B3A2895E81446EFF4F5AFD601CF977D1836 * L_5 = ___terrain0;
		VegetationSpawner_SpawnAllTrees_m50D42CEA005EDFD8F78BD9284CE397A7404B7F71(__this, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner__ctor_mFA82096AE96F68C874B1C01E14D1822B7229B61B (VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFED326EAF9CD8C70A443F5AE9B6C0E80D9513A97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int cellSize = 64;
		__this->set_cellSize_10(((int32_t)64));
		// public int cellDivisions = 4;
		__this->set_cellDivisions_11(4);
		// public bool highPrecisionCollision = true;
		__this->set_highPrecisionCollision_14((bool)1);
		// public LayerMask collisionLayerMask = -1;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0;
		L_0 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C((-1), /*hidden argument*/NULL);
		__this->set_collisionLayerMask_15(L_0);
		// public bool autoRespawnTrees = true;
		__this->set_autoRespawnTrees_16((bool)1);
		// public Dictionary<Terrain, Cell[,]> terrainCells = new Dictionary<Terrain, Cell[,]>();
		Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 * L_1 = (Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05 *)il2cpp_codegen_object_new(Dictionary_2_t6F89273328FAC51272AF098F632ECA1341BDBF05_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFED326EAF9CD8C70A443F5AE9B6C0E80D9513A97(L_1, /*hidden argument*/Dictionary_2__ctor_mFED326EAF9CD8C70A443F5AE9B6C0E80D9513A97_RuntimeMethod_var);
		__this->set_terrainCells_19(L_1);
		// public Vector2 terrainMinMaxHeight = new Vector2(0, 2000f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (0.0f), (2000.0f), /*hidden argument*/NULL);
		__this->set_terrainMinMaxHeight_20(L_2);
		// public int detailResolution = 256;
		__this->set_detailResolution_21(((int32_t)256));
		// public int grassPatchSize = 128;
		__this->set_grassPatchSize_23(((int32_t)128));
		// public int grassPatchSizeIndex = 4;
		__this->set_grassPatchSizeIndex_24(4);
		SpawnerBase__ctor_m9FA9D6B77CF70E743A88376FA5BB21B82717108E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationSpawner__cctor_m13755210A0246FEA15470FFC5A32CE5AC388CF49 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool VisualizeCells = false;
		((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->set_VisualizeCells_12((bool)0);
		// public static bool VisualizeWaterlevel = false;
		((VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_StaticFields*)il2cpp_codegen_static_fields_for(VegetationSpawner_t1794E80A1BE8501AC41C9787DE195EA7BD97F454_il2cpp_TypeInfo_var))->set_VisualizeWaterlevel_13((bool)0);
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
// System.Void sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrassPrefab__ctor_m8565B83A34EA29FB5757CC84ADB0244BBAF5987B (GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * __this, const RuntimeMethod* method)
{
	{
		// public GrassType type = GrassType.Texture;
		__this->set_type_12(1);
		// public Color mainColor = new Color(0.2692482f, 0.6603774f, 0f, 1f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_0), (0.269248188f), (0.660377383f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_mainColor_16(L_0);
		// public Color secondaryColor = new Color(0.2457143f, 0.6037736f, 0f, 1f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_1), (0.245714307f), (0.603773594f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_secondaryColor_17(L_1);
		// public float noiseSize = 0.1f;
		__this->set_noiseSize_21((0.100000001f));
		// public GrassPrefab()
		VegetationPrefab__ctor_mFB6E9C261EA293EAD2AAE103B4F41E27395CCF33(__this, /*hidden argument*/NULL);
		// probability = 25f;
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)__this)->set_probability_3((25.0f));
		// heightRange = new Vector2(0f, 1000f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (0.0f), (1000.0f), /*hidden argument*/NULL);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)__this)->set_heightRange_6(L_2);
		// slopeRange = new Vector2(0f, 60f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), (0.0f), (60.0f), /*hidden argument*/NULL);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)__this)->set_slopeRange_7(L_3);
		// minMaxHeight = new Vector2(0.5f, 1f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->set_minMaxHeight_19(L_4);
		// minMaxWidth = new Vector2(0.8f, 1.2f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), (0.800000012f), (1.20000005f), /*hidden argument*/NULL);
		__this->set_minMaxWidth_20(L_5);
		// noiseSize = 0.1f;
		__this->set_noiseSize_21((0.100000001f));
		// }
		return;
	}
}
// sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab::Duplicate(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * GrassPrefab_Duplicate_m397A0122AAEBB18AF1D7668EBE43F96808A5D47C (GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4C5C1CE352D1DA7D20B6F69AFB9FA02D082C72C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7D35090FBDF168F5493258D0FAD0332D7552884C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDE80778F2E42E3DF2DF43FB3977A79F1C190CAF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mD2D20330BD534516423193E1D930928CD0423A3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * V_3 = NULL;
	{
		// GrassPrefab dest = new GrassPrefab();
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_0 = (GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A *)il2cpp_codegen_object_new(GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A_il2cpp_TypeInfo_var);
		GrassPrefab__ctor_m8565B83A34EA29FB5757CC84ADB0244BBAF5987B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// dest.enabled = source.enabled;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_1 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_2 = ___source0;
		NullCheck(L_2);
		bool L_3 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_2)->get_enabled_0();
		NullCheck(L_1);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_1)->set_enabled_0(L_3);
		// dest.name = source.name;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_4 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_5 = ___source0;
		NullCheck(L_5);
		String_t* L_6 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_5)->get_name_1();
		NullCheck(L_4);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_4)->set_name_1(L_6);
		// dest.type = source.type;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_7 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_8 = ___source0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_type_12();
		NullCheck(L_7);
		L_7->set_type_12(L_9);
		// dest.prefab = source.prefab;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_10 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_11 = ___source0;
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_11->get_prefab_14();
		NullCheck(L_10);
		L_10->set_prefab_14(L_12);
		// dest.billboard = source.billboard;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_13 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_14 = ___source0;
		NullCheck(L_14);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = L_14->get_billboard_15();
		NullCheck(L_13);
		L_13->set_billboard_15(L_15);
		// dest.renderAsBillboard = source.renderAsBillboard;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_16 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_17 = ___source0;
		NullCheck(L_17);
		bool L_18 = L_17->get_renderAsBillboard_13();
		NullCheck(L_16);
		L_16->set_renderAsBillboard_13(L_18);
		// dest.noiseSize = source.noiseSize;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_19 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_20 = ___source0;
		NullCheck(L_20);
		float L_21 = L_20->get_noiseSize_21();
		NullCheck(L_19);
		L_19->set_noiseSize_21(L_21);
		// dest.mainColor = source.mainColor;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_22 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_23 = ___source0;
		NullCheck(L_23);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24 = L_23->get_mainColor_16();
		NullCheck(L_22);
		L_22->set_mainColor_16(L_24);
		// dest.secondaryColor = source.secondaryColor;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_25 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_26 = ___source0;
		NullCheck(L_26);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27 = L_26->get_secondaryColor_17();
		NullCheck(L_25);
		L_25->set_secondaryColor_17(L_27);
		// dest.linkColors = source.linkColors;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_28 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_29 = ___source0;
		NullCheck(L_29);
		bool L_30 = L_29->get_linkColors_18();
		NullCheck(L_28);
		L_28->set_linkColors_18(L_30);
		// dest.minMaxHeight = source.minMaxHeight;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_31 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_32 = ___source0;
		NullCheck(L_32);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = L_32->get_minMaxHeight_19();
		NullCheck(L_31);
		L_31->set_minMaxHeight_19(L_33);
		// dest.minMaxWidth = source.minMaxWidth;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_34 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_35 = ___source0;
		NullCheck(L_35);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_36 = L_35->get_minMaxWidth_20();
		NullCheck(L_34);
		L_34->set_minMaxWidth_20(L_36);
		// dest.seed = source.seed;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_37 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_38 = ___source0;
		NullCheck(L_38);
		int32_t L_39 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_38)->get_seed_2();
		NullCheck(L_37);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_37)->set_seed_2(L_39);
		// dest.probability = source.probability;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_40 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_41 = ___source0;
		NullCheck(L_41);
		float L_42 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_41)->get_probability_3();
		NullCheck(L_40);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_40)->set_probability_3(L_42);
		// dest.heightRange = source.heightRange;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_43 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_44 = ___source0;
		NullCheck(L_44);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_44)->get_heightRange_6();
		NullCheck(L_43);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_43)->set_heightRange_6(L_45);
		// dest.slopeRange = source.slopeRange;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_46 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_47 = ___source0;
		NullCheck(L_47);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_47)->get_slopeRange_7();
		NullCheck(L_46);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_46)->set_slopeRange_7(L_48);
		// dest.curvatureRange = source.curvatureRange;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_49 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_50 = ___source0;
		NullCheck(L_50);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_50)->get_curvatureRange_8();
		NullCheck(L_49);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_49)->set_curvatureRange_8(L_51);
		// dest.layerMasks = new List<TerrainLayerMask>(source.layerMasks);
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_52 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_53 = ___source0;
		NullCheck(L_53);
		List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * L_54 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_53)->get_layerMasks_9();
		List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * L_55 = (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B *)il2cpp_codegen_object_new(List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B_il2cpp_TypeInfo_var);
		List_1__ctor_m4C5C1CE352D1DA7D20B6F69AFB9FA02D082C72C0(L_55, L_54, /*hidden argument*/List_1__ctor_m4C5C1CE352D1DA7D20B6F69AFB9FA02D082C72C0_RuntimeMethod_var);
		NullCheck(L_52);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_52)->set_layerMasks_9(L_55);
		// for (int i = 0; i < dest.layerMasks.Count; i++)
		V_1 = 0;
		goto IL_0133;
	}

IL_00e8:
	{
		// dest.layerMasks[i] = new TerrainLayerMask(source.layerMasks[i].name, source.layerMasks[i].layerID, source.layerMasks[i].threshold);
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_56 = V_0;
		NullCheck(L_56);
		List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * L_57 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_56)->get_layerMasks_9();
		int32_t L_58 = V_1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_59 = ___source0;
		NullCheck(L_59);
		List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * L_60 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_59)->get_layerMasks_9();
		int32_t L_61 = V_1;
		NullCheck(L_60);
		TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * L_62;
		L_62 = List_1_get_Item_mDE80778F2E42E3DF2DF43FB3977A79F1C190CAF0_inline(L_60, L_61, /*hidden argument*/List_1_get_Item_mDE80778F2E42E3DF2DF43FB3977A79F1C190CAF0_RuntimeMethod_var);
		NullCheck(L_62);
		String_t* L_63 = L_62->get_name_0();
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_64 = ___source0;
		NullCheck(L_64);
		List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * L_65 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_64)->get_layerMasks_9();
		int32_t L_66 = V_1;
		NullCheck(L_65);
		TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * L_67;
		L_67 = List_1_get_Item_mDE80778F2E42E3DF2DF43FB3977A79F1C190CAF0_inline(L_65, L_66, /*hidden argument*/List_1_get_Item_mDE80778F2E42E3DF2DF43FB3977A79F1C190CAF0_RuntimeMethod_var);
		NullCheck(L_67);
		int32_t L_68 = L_67->get_layerID_1();
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_69 = ___source0;
		NullCheck(L_69);
		List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * L_70 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_69)->get_layerMasks_9();
		int32_t L_71 = V_1;
		NullCheck(L_70);
		TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * L_72;
		L_72 = List_1_get_Item_mDE80778F2E42E3DF2DF43FB3977A79F1C190CAF0_inline(L_70, L_71, /*hidden argument*/List_1_get_Item_mDE80778F2E42E3DF2DF43FB3977A79F1C190CAF0_RuntimeMethod_var);
		NullCheck(L_72);
		float L_73 = L_72->get_threshold_2();
		TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * L_74 = (TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 *)il2cpp_codegen_object_new(TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3_il2cpp_TypeInfo_var);
		TerrainLayerMask__ctor_mE8A8E1179F21626879A49C1F2F215E05A2D6B4D9(L_74, L_63, L_68, L_73, /*hidden argument*/NULL);
		NullCheck(L_57);
		List_1_set_Item_mD2D20330BD534516423193E1D930928CD0423A3A(L_57, L_58, L_74, /*hidden argument*/List_1_set_Item_mD2D20330BD534516423193E1D930928CD0423A3A_RuntimeMethod_var);
		// for (int i = 0; i < dest.layerMasks.Count; i++)
		int32_t L_75 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_0133:
	{
		// for (int i = 0; i < dest.layerMasks.Count; i++)
		int32_t L_76 = V_1;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_77 = V_0;
		NullCheck(L_77);
		List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * L_78 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_77)->get_layerMasks_9();
		NullCheck(L_78);
		int32_t L_79;
		L_79 = List_1_get_Count_m7D35090FBDF168F5493258D0FAD0332D7552884C_inline(L_78, /*hidden argument*/List_1_get_Count_m7D35090FBDF168F5493258D0FAD0332D7552884C_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_76) < ((int32_t)L_79))? 1 : 0);
		bool L_80 = V_2;
		if (L_80)
		{
			goto IL_00e8;
		}
	}
	{
		// dest.collisionCheck = source.collisionCheck;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_81 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_82 = ___source0;
		NullCheck(L_82);
		bool L_83 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_82)->get_collisionCheck_4();
		NullCheck(L_81);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_81)->set_collisionCheck_4(L_83);
		// dest.rejectUnderwater = source.rejectUnderwater;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_84 = V_0;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_85 = ___source0;
		NullCheck(L_85);
		bool L_86 = ((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_85)->get_rejectUnderwater_5();
		NullCheck(L_84);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_84)->set_rejectUnderwater_5(L_86);
		// return dest;
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_87 = V_0;
		V_3 = L_87;
		goto IL_0161;
	}

IL_0161:
	{
		// }
		GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * L_88 = V_3;
		return L_88;
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
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayerMask__ctor_m5C3729BCE032C5D3E0F99B76BADFDAC84B70528B (TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * __this, const RuntimeMethod* method)
{
	{
		// public float threshold = 0f;
		__this->set_threshold_2((0.0f));
		// public TerrainLayerMask() {}
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// public TerrainLayerMask() {}
		return;
	}
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TerrainLayerMask::.ctor(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainLayerMask__ctor_mE8A8E1179F21626879A49C1F2F215E05A2D6B4D9 (TerrainLayerMask_tEECA2130AF05163560682767E78B10778F43C6F3 * __this, String_t* ___name0, int32_t ___layerID1, float ___threshold2, const RuntimeMethod* method)
{
	{
		// public float threshold = 0f;
		__this->set_threshold_2((0.0f));
		// public TerrainLayerMask(string name, int layerID, float threshold)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->set_name_0(L_0);
		// this.layerID = layerID;
		int32_t L_1 = ___layerID1;
		__this->set_layerID_1(L_1);
		// this.threshold = threshold;
		float L_2 = ___threshold2;
		__this->set_threshold_2(L_2);
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
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TerrainSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TerrainSettings__ctor_m5B3E2A13FB4ACE85C5EBCE3F6F5170DB1FE43D79 (TerrainSettings_t33C089A0AB8EDA20FDAC02FDA152BEA9D48FAA5F * __this, const RuntimeMethod* method)
{
	{
		// public bool drawTreesAndFoliage = true;
		__this->set_drawTreesAndFoliage_0((bool)1);
		// public bool perservePrefabLayer = true;
		__this->set_perservePrefabLayer_1((bool)1);
		// public bool treeLightProbes = false;
		__this->set_treeLightProbes_2((bool)0);
		// public float treeDistance = 1000f;
		__this->set_treeDistance_3((1000.0f));
		// public float billboardStart = 300f;
		__this->set_billboardStart_4((300.0f));
		// public int maxMeshTrees = 50;
		__this->set_maxMeshTrees_5(((int32_t)50));
		// public float grassDistance = 200f;
		__this->set_grassDistance_6((200.0f));
		// public float grassDensity = 1f;
		__this->set_grassDensity_7((1.0f));
		// public float windStrength = 0.15f;
		__this->set_windStrength_8((0.150000006f));
		// public float windSpeed = 1f;
		__this->set_windSpeed_9((1.0f));
		// public float windFrequency = 2f;
		__this->set_windFrequency_10((2.0f));
		// public Color wintTint = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_wintTint_11(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TreePrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePrefab__ctor_mF8E94572293FC36D95A1E2A318756EBD1392756B (TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * __this, const RuntimeMethod* method)
{
	{
		// public float probability = 100f;
		__this->set_probability_1((100.0f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// sc.terrain.vegetationspawner.SpawnerBase/TreeType sc.terrain.vegetationspawner.SpawnerBase/TreeType::New()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * TreeType_New_m12B469A253F34F2D741675D6263D42689341E2C9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * V_0 = NULL;
	TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * V_1 = NULL;
	{
		// TreeType t = new TreeType();
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_0 = (TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 *)il2cpp_codegen_object_new(TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554_il2cpp_TypeInfo_var);
		TreeType__ctor_m3467D2409842DCF726FF78B5FF2A688A3BAEEE33(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// t.probability = 10f;
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_1 = V_0;
		NullCheck(L_1);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_1)->set_probability_3((10.0f));
		// return t;
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_3 = V_1;
		return L_3;
	}
}
// sc.terrain.vegetationspawner.SpawnerBase/TreeType sc.terrain.vegetationspawner.SpawnerBase/TreeType::New(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * TreeType_New_mCDAA923C463C8B3FB37C2D491D26A27E24A79EDE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___initialPrefab0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m546A734A6544DC035D49116D0CD687A6C8221B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * V_0 = NULL;
	TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * V_1 = NULL;
	bool V_2 = false;
	TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * V_3 = NULL;
	{
		// TreeType t = New();
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_0;
		L_0 = TreeType_New_m12B469A253F34F2D741675D6263D42689341E2C9(/*hidden argument*/NULL);
		V_0 = L_0;
		// TreePrefab p = new TreePrefab();
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_1 = (TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 *)il2cpp_codegen_object_new(TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95_il2cpp_TypeInfo_var);
		TreePrefab__ctor_mF8E94572293FC36D95A1E2A318756EBD1392756B(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		// p.prefab = initialPrefab;
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_2 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___initialPrefab0;
		NullCheck(L_2);
		L_2->set_prefab_2(L_3);
		// t.prefabs.Add(p);
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_4 = V_0;
		NullCheck(L_4);
		List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * L_5 = L_4->get_prefabs_12();
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_6 = V_1;
		NullCheck(L_5);
		List_1_Add_m546A734A6544DC035D49116D0CD687A6C8221B17(L_5, L_6, /*hidden argument*/List_1_Add_m546A734A6544DC035D49116D0CD687A6C8221B17_RuntimeMethod_var);
		// if(initialPrefab) t.name = initialPrefab.name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = ___initialPrefab0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		// if(initialPrefab) t.name = initialPrefab.name;
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_10 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = ___initialPrefab0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		((VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA *)L_10)->set_name_1(L_12);
	}

IL_0037:
	{
		// return t;
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_13 = V_0;
		V_3 = L_13;
		goto IL_003b;
	}

IL_003b:
	{
		// }
		TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * L_14 = V_3;
		return L_14;
	}
}
// System.Void sc.terrain.vegetationspawner.SpawnerBase/TreeType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeType__ctor_m3467D2409842DCF726FF78B5FF2A688A3BAEEE33 (TreeType_tDC60BEFD3970F789A23C2841E1B1DC7D1A46B554 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9B2F8EF530DD4B08653DC663E408A2DCB6914E24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Vector3> spawnPoints = new List<Vector3>();
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_0, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		__this->set_spawnPoints_11(L_0);
		// public List<TreePrefab> prefabs = new List<TreePrefab>();
		List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 * L_1 = (List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0 *)il2cpp_codegen_object_new(List_1_t4639FB427A98EC77FFA8D7A9B27BDE47263C6AD0_il2cpp_TypeInfo_var);
		List_1__ctor_m9B2F8EF530DD4B08653DC663E408A2DCB6914E24(L_1, /*hidden argument*/List_1__ctor_m9B2F8EF530DD4B08653DC663E408A2DCB6914E24_RuntimeMethod_var);
		__this->set_prefabs_12(L_1);
		// public float distance = 5f;
		__this->set_distance_13((5.0f));
		// public Vector2 scaleRange = new Vector2(0.8f, 1.2f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (0.800000012f), (1.20000005f), /*hidden argument*/NULL);
		__this->set_scaleRange_14(L_2);
		// public float sinkAmount = 0f;
		__this->set_sinkAmount_15((0.0f));
		VegetationPrefab__ctor_mFB6E9C261EA293EAD2AAE103B4F41E27395CCF33(__this, /*hidden argument*/NULL);
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
// System.Void sc.terrain.vegetationspawner.SpawnerBase/VegetationPrefab::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VegetationPrefab__ctor_mFB6E9C261EA293EAD2AAE103B4F41E27395CCF33 (VegetationPrefab_t9ADD893E631A4224911AD487881F027DB3420CFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m09ABC1748B59924D289BE5BF5BF4F0293164AB2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15980ECBB85D4417BC69FA2F4646889A2441022A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool enabled = true;
		__this->set_enabled_0((bool)1);
		// public string name = "VegetationItem";
		__this->set_name_1(_stringLiteral15980ECBB85D4417BC69FA2F4646889A2441022A);
		// public Vector2 heightRange = new Vector2(0f, 1000f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (0.0f), (1000.0f), /*hidden argument*/NULL);
		__this->set_heightRange_6(L_0);
		// public Vector2 slopeRange = new Vector2(0f, 60f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (0.0f), (60.0f), /*hidden argument*/NULL);
		__this->set_slopeRange_7(L_1);
		// public Vector2 curvatureRange = new Vector2(0f, 1f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_curvatureRange_8(L_2);
		// public List<TerrainLayerMask> layerMasks = new List<TerrainLayerMask>();
		List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B * L_3 = (List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B *)il2cpp_codegen_object_new(List_1_t073AC5426D792C3CA36AA0F45AA9E1E8A946E70B_il2cpp_TypeInfo_var);
		List_1__ctor_m09ABC1748B59924D289BE5BF5BF4F0293164AB2A(L_3, /*hidden argument*/List_1__ctor_m09ABC1748B59924D289BE5BF5BF4F0293164AB2A_RuntimeMethod_var);
		__this->set_layerMasks_9(L_3);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void sc.terrain.vegetationspawner.TerrainSampler/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mCFA0759AD76058397EF241DA45FC70A1D0C380B0 (U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean sc.terrain.vegetationspawner.TerrainSampler/<>c__DisplayClass9_0::<GetTreeInstances>b__0(UnityEngine.TreeInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass9_0_U3CGetTreeInstancesU3Eb__0_m2F107CFB224B53C426320D69A0DA52BF6CF37636 (U3CU3Ec__DisplayClass9_0_tA4188B4027523D0B0A4A47416B8EFE61EB5B78E1 * __this, TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  ___x0, const RuntimeMethod* method)
{
	{
		// TreeInstance[] instances = terrain.terrainData.treeInstances.Where(x => x.prototypeIndex == prototypeIndex).ToArray();
		TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  L_0 = ___x0;
		int32_t L_1 = L_0.get_prototypeIndex_6();
		int32_t L_2 = __this->get_prototypeIndex_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m13C54B75859D89AB78BDBE1208507021EFE9F607 (U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean sc.terrain.vegetationspawner.VegetationSpawner/<>c__DisplayClass21_0::<SpawnTreeOnTerrain>b__0(UnityEngine.TreeInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3CSpawnTreeOnTerrainU3Eb__0_m43DE2911E5721F8C5F6DE66EF2EC816162791C1D (U3CU3Ec__DisplayClass21_0_t5C8976688DDF4D5820B6F95FC291AB17D29E0A5C * __this, TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  ___x0, const RuntimeMethod* method)
{
	{
		// treeInstanceCollection.RemoveAll(x => x.prototypeIndex == prefab.index);
		TreeInstance_tDA6C540A0943447F381ED2D438C810D194EABB15  L_0 = ___x0;
		int32_t L_1 = L_0.get_prototypeIndex_6();
		TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * L_2 = __this->get_prefab_0();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_index_0();
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
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
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGrassRespawn__ctor_mF640D42B2C03B82CCF1757E1D5B71B69309FF8DF (OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn::Invoke(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGrassRespawn_Invoke_mF19FE8165DC5223C7725A035B80CA10EFE9C140F (OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * __this, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___prefab0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___prefab0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___prefab0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___prefab0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___prefab0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___prefab0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___prefab0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___prefab0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * >::Invoke(targetMethod, targetThis, ___prefab0);
					else
						GenericVirtActionInvoker1< GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * >::Invoke(targetMethod, targetThis, ___prefab0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___prefab0);
					else
						VirtActionInvoker1< GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___prefab0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___prefab0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___prefab0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn::BeginInvoke(sc.terrain.vegetationspawner.SpawnerBase/GrassPrefab,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnGrassRespawn_BeginInvoke_mEEB77553A4F4BA67B10C8E5A6B73657457693D6C (OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * __this, GrassPrefab_tE0D77A678A1EC34B712369EDAA025677AF21EE5A * ___prefab0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___prefab0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnGrassRespawn::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGrassRespawn_EndInvoke_m0C29BD387347767C3861521F8BF1D1AFB08B1D44 (OnGrassRespawn_tAA0EADD1138220C49B427CEAE0D2C7B7D549B7B3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTreeRespawn__ctor_m747142E803DE2F9EA8FB5B0D961B725EB3303560 (OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn::Invoke(sc.terrain.vegetationspawner.SpawnerBase/TreePrefab)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTreeRespawn_Invoke_m64A65D6624EF74CB886CB899E63B9F1C88CBAACC (OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * __this, TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * ___prefab0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___prefab0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___prefab0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___prefab0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___prefab0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___prefab0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___prefab0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___prefab0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * >::Invoke(targetMethod, targetThis, ___prefab0);
					else
						GenericVirtActionInvoker1< TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * >::Invoke(targetMethod, targetThis, ___prefab0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___prefab0);
					else
						VirtActionInvoker1< TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___prefab0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___prefab0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___prefab0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn::BeginInvoke(sc.terrain.vegetationspawner.SpawnerBase/TreePrefab,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTreeRespawn_BeginInvoke_m74522AAB365A08BA560F75CC585A4677D4B8FC11 (OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * __this, TreePrefab_t9C191338A6D5985DF85362EAF7562A5102CD9C95 * ___prefab0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___prefab0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void sc.terrain.vegetationspawner.VegetationSpawner/OnTreeRespawn::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTreeRespawn_EndInvoke_m39082FC4CAD0D867E01BFD0BB37D26D26C4D2B26 (OnTreeRespawn_t8095D800D2D4F9545CB484365DC7C48DFB836109 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_gshared_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_gshared_inline (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_2 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_2, (int32_t)L_3);
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m805BCA48AB339EA259A0596DAE5D44D41ECF29E4_gshared_inline (List_1_t2A5559ED85FADCB3FBA389FE06A51A76471E0A8B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enumerator_get_Current_m949ED2B27A9404F721D58F6FF6ACCECDCD794CF4_gshared_inline (Enumerator_t835377DB3FA3C7E4FCB56A9DAAEFDC007DA30995 * __this, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )__this->get_current_3();
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
