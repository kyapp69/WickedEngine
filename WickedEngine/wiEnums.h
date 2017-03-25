#pragma once

// deferred context ids
enum GRAPHICSTHREAD
{
	GRAPHICSTHREAD_IMMEDIATE,
	GRAPHICSTHREAD_REFLECTIONS,
	GRAPHICSTHREAD_SCENE,
	GRAPHICSTHREAD_MISC1,
	GRAPHICSTHREAD_MISC2,
	GRAPHICSTHREAD_MISC3,
	GRAPHICSTHREAD_COUNT
};

// Do not alter order because it is bound to lua manually
enum RENDERTYPE
{
	RENDERTYPE_VOID			= 0x0000000,
	RENDERTYPE_OPAQUE		= 0x0000001,
	RENDERTYPE_TRANSPARENT	= 0x0000010,
	RENDERTYPE_WATER		= 0x0000100,
	RENDERTYPE_LIGHT		= 0x0001000,
	RENDERTYPE_DECAL		= 0x0010000,
	RENDERTYPE_ENVPROBE		= 0x0100000,
};
enum PICKTYPE
{
	PICK_VOID				= RENDERTYPE_VOID,
	PICK_OPAQUE				= RENDERTYPE_OPAQUE,
	PICK_TRANSPARENT		= RENDERTYPE_TRANSPARENT,
	PICK_WATER				= RENDERTYPE_WATER,
	PICK_LIGHT				= RENDERTYPE_LIGHT,
	PICK_DECAL				= RENDERTYPE_DECAL,
	PICK_ENVPROBE			= RENDERTYPE_ENVPROBE,
};

enum SHADERTYPE
{
	SHADERTYPE_TEXTURE,
	SHADERTYPE_DEFERRED,
	SHADERTYPE_FORWARD,
	SHADERTYPE_TILEDFORWARD,
	SHADERTYPE_ALPHATESTONLY,
	SHADERTYPE_ENVMAPCAPTURE,
	SHADERTYPE_SHADOW,
	SHADERTYPE_SHADOWCUBE, 
	SHADERTYPE_VOXELIZE,
	SHADERTYPE_COUNT
};

// stencils
enum STENCILREF {
	STENCILREF_EMPTY = 0x00,
	STENCILREF_SKY = 0x01,
	STENCILREF_DEFAULT = 0x02,
	STENCILREF_TRANSPARENT = 0x03,
	STENCILREF_CHARACTER = 0x04,
	STENCILREF_SHADELESS = 0x05,
	STENCILREF_SKIN = 0x06,
	STENCILREF_LAST = 0xFF
};

// constant buffers
enum CBTYPES
{
	CBTYPE_WORLD,
	CBTYPE_FRAME,
	CBTYPE_CAMERA,
	CBTYPE_MATERIAL,
	CBTYPE_MISC,
	CBTYPE_VOLUMELIGHT,
	CBTYPE_DECAL,
	CBTYPE_CUBEMAPRENDER,
	CBTYPE_API,
	CBTYPE_TESSELLATION,
	CBTYPE_DISPATCHPARAMS,
	CBTYPE_LAST
};

// resource buffers (StructuredBuffer, Buffer, etc.)
enum RBTYPES
{
	RBTYPE_BONE,
	RBTYPE_LIGHTARRAY,
	RBTYPE_LIGHTINDEXLIST_OPAQUE,
	RBTYPE_LIGHTINDEXLIST_TRANSPARENT,
	RBTYPE_VOXELSCENE,
	RBTYPE_LAST
};

// textures
enum TEXTYPES
{
	TEXTYPE_2D_LIGHTGRID_OPAQUE,
	TEXTYPE_2D_LIGHTGRID_TRANSPARENT,
	TEXTYPE_2D_DEBUGUAV,
	TEXTYPE_3D_VOXELRADIANCE,
	TEXTYPE_3D_VOXELRADIANCE_HELPER,
	TEXTYPE_LAST
};

// vertex shaders
enum VSTYPES
{
	VSTYPE_OBJECT,
	VSTYPE_OBJECT10,
	VSTYPE_OBJECT_SIMPLE,
	VSTYPE_SHADOW,
	VSTYPE_SHADOWCUBE,
	VSTYPE_LINE,
	VSTYPE_TRAIL,
	VSTYPE_WATER,
	VSTYPE_DIRLIGHT,
	VSTYPE_POINTLIGHT,
	VSTYPE_SPOTLIGHT,
	VSTYPE_VOLUMESPOTLIGHT,
	VSTYPE_VOLUMEPOINTLIGHT,
	VSTYPE_VOLUMESPHERELIGHT,
	VSTYPE_VOLUMEDISCLIGHT,
	VSTYPE_VOLUMERECTANGLELIGHT,
	VSTYPE_VOLUMETUBELIGHT,
	VSTYPE_STREAMOUT,
	VSTYPE_SKY,
	VSTYPE_DECAL,
	VSTYPE_ENVMAP,
	VSTYPE_ENVMAP_SKY,
	VSTYPE_SPHERE,
	VSTYPE_CUBE,
	VSTYPE_VOXELIZER,
	VSTYPE_VOXEL,
	VSTYPE_LAST
};
// pixel shaders
enum PSTYPES
{
	PSTYPE_OBJECT_DEFERRED,
	PSTYPE_OBJECT_DEFERRED_NORMALMAP,
	PSTYPE_OBJECT_DEFERRED_POM,
	PSTYPE_OBJECT_DEFERRED_NORMALMAP_POM,

	PSTYPE_OBJECT_FORWARD_DIRLIGHT,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_NORMALMAP,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_TRANSPARENT,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_TRANSPARENT_NORMALMAP,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_PLANARREFLECTION,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_NORMALMAP_PLANARREFLECTION,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_TRANSPARENT_PLANARREFLECTION,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_TRANSPARENT_NORMALMAP_PLANARREFLECTION,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_POM,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_NORMALMAP_POM,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_TRANSPARENT_POM,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_TRANSPARENT_NORMALMAP_POM,
	PSTYPE_OBJECT_FORWARD_DIRLIGHT_WATER,

	PSTYPE_OBJECT_TILEDFORWARD,
	PSTYPE_OBJECT_TILEDFORWARD_NORMALMAP,
	PSTYPE_OBJECT_TILEDFORWARD_TRANSPARENT,
	PSTYPE_OBJECT_TILEDFORWARD_TRANSPARENT_NORMALMAP,
	PSTYPE_OBJECT_TILEDFORWARD_PLANARREFLECTION,
	PSTYPE_OBJECT_TILEDFORWARD_NORMALMAP_PLANARREFLECTION,
	PSTYPE_OBJECT_TILEDFORWARD_TRANSPARENT_PLANARREFLECTION,
	PSTYPE_OBJECT_TILEDFORWARD_TRANSPARENT_NORMALMAP_PLANARREFLECTION,
	PSTYPE_OBJECT_TILEDFORWARD_POM,
	PSTYPE_OBJECT_TILEDFORWARD_NORMALMAP_POM,
	PSTYPE_OBJECT_TILEDFORWARD_TRANSPARENT_POM,
	PSTYPE_OBJECT_TILEDFORWARD_TRANSPARENT_NORMALMAP_POM,
	PSTYPE_OBJECT_TILEDFORWARD_WATER,

	PSTYPE_SHADOW,
	PSTYPE_LINE,
	PSTYPE_TRAIL,
	PSTYPE_SIMPLEST,
	PSTYPE_BLACKOUT,
	PSTYPE_TEXTUREONLY,
	PSTYPE_ALPHATESTONLY,
	PSTYPE_ENVIRONMENTALLIGHT,
	PSTYPE_DIRLIGHT,
	PSTYPE_DIRLIGHT_SOFT,
	PSTYPE_POINTLIGHT,
	PSTYPE_SPOTLIGHT,
	PSTYPE_SPHERELIGHT,
	PSTYPE_DISCLIGHT,
	PSTYPE_RECTANGLELIGHT,
	PSTYPE_TUBELIGHT,
	PSTYPE_VOLUMELIGHT,
	PSTYPE_SHADOWCUBEMAPRENDER,
	PSTYPE_DECAL,
	PSTYPE_SKY,
	PSTYPE_SUN,
	PSTYPE_ENVMAP,
	PSTYPE_ENVMAP_SKY,
	PSTYPE_CUBEMAP,
	PSTYPE_CAPTUREIMPOSTOR,
	PSTYPE_VOXELIZER,
	PSTYPE_VOXEL,
	PSTYPE_LAST
};
// geometry shaders
enum GSTYPES
{
	GSTYPE_SHADOWCUBEMAPRENDER,
	GSTYPE_STREAMOUT,
	GSTYPE_ENVMAP,
	GSTYPE_ENVMAP_SKY,
	GSTYPE_VOXELIZER,
	GSTYPE_VOXEL,
	GSTYPE_LAST
};
// hull shaders
enum HSTYPES
{
	HSTYPE_OBJECT,
	HSTYPE_LAST
};
// domain shaders
enum DSTYPES
{
	DSTYPE_OBJECT,
	DSTYPE_LAST
};
// compute shaders
enum CSTYPES
{
	CSTYPE_LUMINANCE_PASS1,
	CSTYPE_LUMINANCE_PASS2,
	CSTYPE_TILEFRUSTUMS,
	CSTYPE_TILEDLIGHTCULLING,
	CSTYPE_TILEDLIGHTCULLING_ADVANCED,
	CSTYPE_TILEDLIGHTCULLING_DEBUG,
	CSTYPE_TILEDLIGHTCULLING_ADVANCED_DEBUG,
	CSTYPE_RESOLVEMSAADEPTHSTENCIL,
	CSTYPE_VOXELSCENECOPYCLEAR,
	CSTYPE_VOXELSCENECOPYCLEAR_TEMPORALSMOOTHING,
	CSTYPE_VOXELRADIANCESECONDARYBOUNCE,
	CSTYPE_VOXELCLEARONLYNORMAL,
	CSTYPE_GENERATEMIPCHAIN2D_SIMPLEFILTER,
	CSTYPE_GENERATEMIPCHAIN2D_GAUSSIAN,
	CSTYPE_GENERATEMIPCHAIN3D_SIMPLEFILTER,
	CSTYPE_GENERATEMIPCHAIN3D_GAUSSIAN,
	CSTYPE_LAST
};

// vertex layouts
enum VLTYPES
{
	VLTYPE_EFFECT,
	VLTYPE_EFFECT_SIMPLE,
	VLTYPE_SHADOW,
	VLTYPE_LINE,
	VLTYPE_TRAIL,
	VLTYPE_STREAMOUT,
	VLTYPE_LAST
};
// rasterizer states
enum RSTYPES
{
	RSTYPE_FRONT,
	RSTYPE_BACK,
	RSTYPE_DOUBLESIDED,
	RSTYPE_WIRE,
	RSTYPE_WIRE_SMOOTH,
	RSTYPE_WIRE_DOUBLESIDED,
	RSTYPE_WIRE_DOUBLESIDED_SMOOTH,
	RSTYPE_SHADOW,
	RSTYPE_SHADOW_DOUBLESIDED,
	RSTYPE_OCCLUDEE, 
	RSTYPE_VOXELIZE,
	RSTYPE_SKY,
	RSTYPE_LAST
};
// depth-stencil states
enum DSSTYPES
{
	DSSTYPE_DEFAULT,
	DSSTYPE_XRAY,
	DSSTYPE_DEPTHREAD,
	DSSTYPE_DIRLIGHT,
	DSSTYPE_LIGHT,
	DSSTYPE_STENCILREAD_MATCH,
	DSSTYPE_DEPTHREADEQUAL,
	DSSTYPE_HAIRALPHACOMPOSITION,
	DSSTYPE_LAST
};
// blend states
enum BSTYPES
{
	BSTYPE_OPAQUE,
	BSTYPE_TRANSPARENT,
	BSTYPE_ADDITIVE,
	BSTYPE_COLORWRITEDISABLE,
	BSTYPE_DEFERREDLIGHT,
	BSTYPE_LAST
};
// custom sample states
enum CSSTYPES
{
	SSTYPE_MAXIMUM_CLAMP,
	SSTYPE_LAST
};
