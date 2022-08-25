const Collision breaking_ice_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(4),
	COL_VERTEX(-857, 0, 276),
	COL_VERTEX(276, 0, 857),
	COL_VERTEX(857, 0, -276),
	COL_VERTEX(-276, 0, -857),
	COL_TRI_INIT(SURFACE_SLIPPERY, 2),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI_STOP(),
	COL_END()
};
