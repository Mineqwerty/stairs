#include "src/game/envfx_snow.h"

const GeoLayout hmc_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 28, -809, -37, hmc_dl_Base_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, -2848, -37, 0, 73, 0, hmc_dl_Cylinder_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, -2785, -37, 0, 83, 0, hmc_dl_Cylinder_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, -2731, -37, 0, 93, 0, hmc_dl_Cylinder_004_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, -2641, -37, 0, 103, 0, hmc_dl_Cylinder_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, -2578, -37, 0, 113, 0, hmc_dl_Cylinder_006_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, -2524, -37, 0, 123, 0, hmc_dl_Cylinder_007_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, -2448, -37, 0, 133, 0, hmc_dl_Cylinder_008_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, -2385, -37, 0, 143, 0, hmc_dl_Cylinder_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 217, -37, 0, 10, 0, hmc_dl_Cylinder_010_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 308, -37, 0, 20, 0, hmc_dl_Cylinder_011_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 371, -37, 0, 30, 0, hmc_dl_Cylinder_012_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 424, -37, 0, 40, 0, hmc_dl_Cylinder_013_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 493, -37, 0, 50, 0, hmc_dl_Cylinder_014_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 556, -37, 0, 60, 0, hmc_dl_Cylinder_015_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 609, -37, 0, 70, 0, hmc_dl_Cylinder_016_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 700, -37, 0, 80, 0, hmc_dl_Cylinder_017_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 763, -37, 0, 90, 0, hmc_dl_Cylinder_018_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 817, -37, 0, 100, 0, hmc_dl_Cylinder_019_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 910, -37, 0, 110, 0, hmc_dl_Cylinder_020_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 973, -37, 0, 120, 0, hmc_dl_Cylinder_021_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 4352, -37, 0, 130, 0, hmc_dl_Cylinder_022_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 4443, -37, 0, 140, 0, hmc_dl_Cylinder_023_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 4506, -37, 0, 150, 0, hmc_dl_Cylinder_024_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 4560, -37, 0, 160, 0, hmc_dl_Cylinder_025_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 4636, -37, 0, 170, 0, hmc_dl_Cylinder_026_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 4699, -37, 0, -180, 0, hmc_dl_Cylinder_027_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 4752, -37, 0, -170, 0, hmc_dl_Cylinder_028_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 4843, -37, 0, -160, 0, hmc_dl_Cylinder_029_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 4906, -37, 0, -150, 0, hmc_dl_Cylinder_030_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 4960, -37, 0, -140, 0, hmc_dl_Cylinder_031_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5028, -37, 0, -130, 0, hmc_dl_Cylinder_032_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5091, -37, 0, -120, 0, hmc_dl_Cylinder_033_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5145, -37, 0, -110, 0, hmc_dl_Cylinder_034_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5236, -37, 0, -100, 0, hmc_dl_Cylinder_035_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5299, -37, 0, -90, 0, hmc_dl_Cylinder_036_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5353, -37, 0, -80, 0, hmc_dl_Cylinder_037_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5429, -37, 0, -71, 0, hmc_dl_Cylinder_038_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5492, -37, 0, -61, 0, hmc_dl_Cylinder_039_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5545, -37, 0, -51, 0, hmc_dl_Cylinder_040_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5636, -37, 0, -41, 0, hmc_dl_Cylinder_041_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5699, -37, 0, -31, 0, hmc_dl_Cylinder_042_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5753, -37, 0, -21, 0, hmc_dl_Cylinder_043_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5829, -37, 0, -11, 0, hmc_dl_Cylinder_044_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5892, -37, 0, -1, 0, hmc_dl_Cylinder_045_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 5945, -37, 0, 9, 0, hmc_dl_Cylinder_046_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 6036, -37, 0, 19, 0, hmc_dl_Cylinder_047_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 6099, -37, 0, 29, 0, hmc_dl_Cylinder_048_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 6153, -37, 0, 39, 0, hmc_dl_Cylinder_049_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 6221, -37, 0, 49, 0, hmc_dl_Cylinder_050_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 6284, -37, 0, 59, 0, hmc_dl_Cylinder_051_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 6338, -37, 0, 69, 0, hmc_dl_Cylinder_052_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 6429, -37, 0, 79, 0, hmc_dl_Cylinder_053_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 28, 6492, -37, 0, 89, 0, hmc_dl_Cylinder_054_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 372, 1126, 2715, 0, 62, 0, hmc_dl_Stairs_by_20_001_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 1656, -5157, -2900, 0, -148, 0, hmc_dl_Stairs_by_20_002_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 660, -2246, 2466, 0, 114, 0, hmc_dl_Stairs_by_20_004_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, 1540, 3073, -2052, 0, -120, 0, hmc_dl_Stairs_by_20_006_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 28, -8295, -37, hmc_dl_Water_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, hmc_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, hmc_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
