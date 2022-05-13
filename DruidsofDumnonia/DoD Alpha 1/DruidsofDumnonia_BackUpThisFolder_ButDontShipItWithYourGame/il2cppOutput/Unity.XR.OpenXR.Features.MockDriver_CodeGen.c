#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean UnityEngine.XR.OpenXR.Features.Mock.MockDriver::OnInstanceCreate(System.UInt64)
extern void MockDriver_OnInstanceCreate_m0176A3A6B56066726DD78447C006DF01646ED338 (void);
// 0x00000002 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::OnInstanceDestroy(System.UInt64)
extern void MockDriver_OnInstanceDestroy_m2453DDBB6CC69EDB97EB5F9B6999A8A1619E1F2F (void);
// 0x00000003 System.IntPtr UnityEngine.XR.OpenXR.Features.Mock.MockDriver::InitializeNative(System.IntPtr,System.UInt64,System.UInt64,System.UInt64)
extern void MockDriver_InitializeNative_mC501DAEF723078EAF3DD5D03822DBEEE9779A537 (void);
// 0x00000004 System.IntPtr UnityEngine.XR.OpenXR.Features.Mock.MockDriver::ShutdownNative(System.UInt64)
extern void MockDriver_ShutdownNative_mE7AD1C7F10316F0A45B844600B9F0BEEBDDEC8A8 (void);
// 0x00000005 UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult UnityEngine.XR.OpenXR.Features.Mock.MockDriver::TransitionToState(System.UInt64,UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrSessionState,System.Boolean)
extern void MockDriver_TransitionToState_mC9A2FEB00024B78C5025EB8A9E1AF4AD31F839E0 (void);
// 0x00000006 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::SetReturnCodeForFunction(System.String,UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult)
extern void MockDriver_SetReturnCodeForFunction_m06F0F6CD4C925E9F33823D878A20C3ABEA10A83E (void);
// 0x00000007 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::RequestExitSession(System.UInt64)
extern void MockDriver_RequestExitSession_m98CC0691DECE965334608C8E8B66C23DBB299C00 (void);
// 0x00000008 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::SetBlendModeOpaque(System.Boolean)
extern void MockDriver_SetBlendModeOpaque_m1AFCB088A8726D81E64A1FBC0F6CDD77D0AB0410 (void);
// 0x00000009 System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::SetReferenceSpaceBoundsRect(System.UInt64,UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrReferenceSpaceType,UnityEngine.Vector2)
extern void MockDriver_SetReferenceSpaceBoundsRect_m62B44D59FD81B91E9F01FCEA2D94D286AC8E89A5 (void);
// 0x0000000A System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::CauseInstanceLoss(System.UInt64)
extern void MockDriver_CauseInstanceLoss_mDBB9AFE0EB0A80E4F8AC3DF9B47C18DB0D09CC29 (void);
// 0x0000000B UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult UnityEngine.XR.OpenXR.Features.Mock.MockDriver::SetSpacePose(UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrSpaceLocationFlags)
extern void MockDriver_SetSpacePose_m06EB68CFD549423EDDC5A13D107033D8BA985C71 (void);
// 0x0000000C UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult UnityEngine.XR.OpenXR.Features.Mock.MockDriver::SetViewPose(System.Int32,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector4,UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrViewStateFlags)
extern void MockDriver_SetViewPose_m862B4E7FBFF575930A0D8E27BC43C33B97AB65B2 (void);
// 0x0000000D UnityEngine.XR.OpenXR.Features.Mock.MockDriver/XrResult UnityEngine.XR.OpenXR.Features.Mock.MockDriver::GetEndFrameStats(System.Int32&,System.Int32&)
extern void MockDriver_GetEndFrameStats_mBCB9698EAEC683EE03CA8C0CE50016F2851B8C3F (void);
// 0x0000000E System.Void UnityEngine.XR.OpenXR.Features.Mock.MockDriver::.ctor()
extern void MockDriver__ctor_m40E6EFD71A973E8CDAFE73AB42875BA6DB9D1B1E (void);
static Il2CppMethodPointer s_methodPointers[14] = 
{
	MockDriver_OnInstanceCreate_m0176A3A6B56066726DD78447C006DF01646ED338,
	MockDriver_OnInstanceDestroy_m2453DDBB6CC69EDB97EB5F9B6999A8A1619E1F2F,
	MockDriver_InitializeNative_mC501DAEF723078EAF3DD5D03822DBEEE9779A537,
	MockDriver_ShutdownNative_mE7AD1C7F10316F0A45B844600B9F0BEEBDDEC8A8,
	MockDriver_TransitionToState_mC9A2FEB00024B78C5025EB8A9E1AF4AD31F839E0,
	MockDriver_SetReturnCodeForFunction_m06F0F6CD4C925E9F33823D878A20C3ABEA10A83E,
	MockDriver_RequestExitSession_m98CC0691DECE965334608C8E8B66C23DBB299C00,
	MockDriver_SetBlendModeOpaque_m1AFCB088A8726D81E64A1FBC0F6CDD77D0AB0410,
	MockDriver_SetReferenceSpaceBoundsRect_m62B44D59FD81B91E9F01FCEA2D94D286AC8E89A5,
	MockDriver_CauseInstanceLoss_mDBB9AFE0EB0A80E4F8AC3DF9B47C18DB0D09CC29,
	MockDriver_SetSpacePose_m06EB68CFD549423EDDC5A13D107033D8BA985C71,
	MockDriver_SetViewPose_m862B4E7FBFF575930A0D8E27BC43C33B97AB65B2,
	MockDriver_GetEndFrameStats_mBCB9698EAEC683EE03CA8C0CE50016F2851B8C3F,
	MockDriver__ctor_m40E6EFD71A973E8CDAFE73AB42875BA6DB9D1B1E,
};
static const int32_t s_InvokerIndices[14] = 
{
	2938,
	3449,
	5116,
	6525,
	5362,
	6220,
	6754,
	6759,
	5622,
	6754,
	5383,
	4692,
	5786,
	4353,
};
extern const CustomAttributesCacheGenerator g_Unity_XR_OpenXR_Features_MockDriver_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_XR_OpenXR_Features_MockDriver_CodeGenModule;
const Il2CppCodeGenModule g_Unity_XR_OpenXR_Features_MockDriver_CodeGenModule = 
{
	"Unity.XR.OpenXR.Features.MockDriver.dll",
	14,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_Unity_XR_OpenXR_Features_MockDriver_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
