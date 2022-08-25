void scroll_bob_dl_Shape_IndexedFaceSet_020_Shape_IndexedFaceSet_011_mesh_layer_4_vtx_1() {
	int i = 0;
	int count = 14;
	int width = 128 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_Shape_IndexedFaceSet_020_Shape_IndexedFaceSet_011_mesh_layer_4_vtx_1);

	deltaY = (int)(1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bob() {
	scroll_bob_dl_Shape_IndexedFaceSet_020_Shape_IndexedFaceSet_011_mesh_layer_4_vtx_1();
}
