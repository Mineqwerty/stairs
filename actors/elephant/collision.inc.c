const Collision elephant_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(48),
	COL_VERTEX(-210, -150, -500),
	COL_VERTEX(-210, 50, -500),
	COL_VERTEX(-248, -30, -983),
	COL_VERTEX(-248, -115, -983),
	COL_VERTEX(0, -204, -640),
	COL_VERTEX(0, -4, -640),
	COL_VERTEX(248, -30, -983),
	COL_VERTEX(248, -115, -983),
	COL_VERTEX(168, -51, 347),
	COL_VERTEX(168, 149, 347),
	COL_VERTEX(168, 147, 465),
	COL_VERTEX(168, -53, 465),
	COL_VERTEX(168, -79, 627),
	COL_VERTEX(168, -279, 627),
	COL_VERTEX(0, -51, 347),
	COL_VERTEX(0, -53, 465),
	COL_VERTEX(0, 149, 347),
	COL_VERTEX(-168, 149, 347),
	COL_VERTEX(-168, 147, 465),
	COL_VERTEX(0, 147, 465),
	COL_VERTEX(0, 179, -333),
	COL_VERTEX(-168, 179, -333),
	COL_VERTEX(-168, 179, 102),
	COL_VERTEX(0, 179, 102),
	COL_VERTEX(0, -172, -333),
	COL_VERTEX(168, -172, -333),
	COL_VERTEX(168, -172, 102),
	COL_VERTEX(0, -172, 102),
	COL_VERTEX(168, 179, -333),
	COL_VERTEX(168, 179, 102),
	COL_VERTEX(-168, -125, 300),
	COL_VERTEX(-168, 75, 300),
	COL_VERTEX(-168, -172, 102),
	COL_VERTEX(210, -150, -500),
	COL_VERTEX(210, 50, -500),
	COL_VERTEX(0, -150, -500),
	COL_VERTEX(0, 50, -500),
	COL_VERTEX(-168, -172, -333),
	COL_VERTEX(-168, -51, 347),
	COL_VERTEX(-168, -53, 465),
	COL_VERTEX(-168, -79, 627),
	COL_VERTEX(0, -79, 627),
	COL_VERTEX(0, -125, 300),
	COL_VERTEX(0, 75, 300),
	COL_VERTEX(168, 75, 300),
	COL_VERTEX(168, -125, 300),
	COL_VERTEX(0, -279, 627),
	COL_VERTEX(-168, -279, 627),
	COL_TRI_INIT(SURFACE_DEFAULT, 92),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 5, 6),
	COL_TRI(4, 6, 7),
	COL_TRI(8, 9, 10),
	COL_TRI(8, 10, 11),
	COL_TRI(11, 10, 12),
	COL_TRI(11, 12, 13),
	COL_TRI(14, 8, 11),
	COL_TRI(14, 11, 15),
	COL_TRI(16, 17, 18),
	COL_TRI(16, 18, 19),
	COL_TRI(20, 21, 22),
	COL_TRI(20, 22, 23),
	COL_TRI(24, 25, 26),
	COL_TRI(24, 26, 27),
	COL_TRI(25, 28, 29),
	COL_TRI(25, 29, 26),
	COL_TRI(30, 31, 22),
	COL_TRI(30, 22, 32),
	COL_TRI(33, 34, 28),
	COL_TRI(33, 28, 25),
	COL_TRI(35, 33, 25),
	COL_TRI(35, 25, 24),
	COL_TRI(36, 1, 21),
	COL_TRI(36, 21, 20),
	COL_TRI(32, 22, 21),
	COL_TRI(32, 21, 37),
	COL_TRI(5, 2, 1),
	COL_TRI(5, 1, 36),
	COL_TRI(4, 7, 33),
	COL_TRI(4, 33, 35),
	COL_TRI(7, 6, 34),
	COL_TRI(7, 34, 33),
	COL_TRI(37, 21, 1),
	COL_TRI(37, 1, 0),
	COL_TRI(3, 4, 35),
	COL_TRI(3, 35, 0),
	COL_TRI(6, 5, 36),
	COL_TRI(6, 36, 34),
	COL_TRI(34, 36, 20),
	COL_TRI(34, 20, 28),
	COL_TRI(0, 35, 24),
	COL_TRI(0, 24, 37),
	COL_TRI(37, 24, 27),
	COL_TRI(37, 27, 32),
	COL_TRI(28, 20, 23),
	COL_TRI(28, 23, 29),
	COL_TRI(9, 16, 19),
	COL_TRI(9, 19, 10),
	COL_TRI(38, 14, 15),
	COL_TRI(38, 15, 39),
	COL_TRI(19, 18, 40),
	COL_TRI(19, 40, 41),
	COL_TRI(3, 2, 5),
	COL_TRI(3, 5, 4),
	COL_TRI(32, 27, 42),
	COL_TRI(32, 42, 30),
	COL_TRI(29, 23, 43),
	COL_TRI(29, 43, 44),
	COL_TRI(38, 17, 31),
	COL_TRI(38, 31, 30),
	COL_TRI(23, 22, 31),
	COL_TRI(23, 31, 43),
	COL_TRI(27, 26, 45),
	COL_TRI(27, 45, 42),
	COL_TRI(26, 29, 44),
	COL_TRI(26, 44, 45),
	COL_TRI(39, 18, 17),
	COL_TRI(39, 17, 38),
	COL_TRI(30, 42, 14),
	COL_TRI(30, 14, 38),
	COL_TRI(44, 43, 16),
	COL_TRI(44, 16, 9),
	COL_TRI(43, 31, 17),
	COL_TRI(43, 17, 16),
	COL_TRI(42, 45, 8),
	COL_TRI(42, 8, 14),
	COL_TRI(45, 44, 9),
	COL_TRI(45, 9, 8),
	COL_TRI(46, 41, 40),
	COL_TRI(46, 40, 47),
	COL_TRI(13, 12, 41),
	COL_TRI(13, 41, 46),
	COL_TRI(39, 15, 46),
	COL_TRI(39, 46, 47),
	COL_TRI(18, 39, 47),
	COL_TRI(18, 47, 40),
	COL_TRI(15, 11, 13),
	COL_TRI(15, 13, 46),
	COL_TRI(10, 19, 41),
	COL_TRI(10, 41, 12),
	COL_TRI_STOP(),
	COL_END()
};