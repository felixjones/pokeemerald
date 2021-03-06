Route118_EventObjects: @ 852AAB4
	object_event 1, EVENT_OBJ_GFX_BERRY_TREE, 0, 35, 5, 3, 12, 0, 0, 0, 31, BerryTreeScript, 0
	object_event 2, EVENT_OBJ_GFX_BERRY_TREE, 0, 36, 5, 3, 12, 0, 0, 0, 32, BerryTreeScript, 0
	object_event 3, EVENT_OBJ_GFX_BERRY_TREE, 0, 37, 5, 3, 12, 0, 0, 0, 33, BerryTreeScript, 0
	object_event 4, EVENT_OBJ_GFX_MAN_6, 0, 64, 10, 3, 8, 0, 0, 1, 3, Route118_EventScript_1F4079, 0
	object_event 5, EVENT_OBJ_GFX_REPORTER_F, 0, 33, 8, 3, 8, 0, 0, 0, 0, Route118_EventScript_28CE16, 797
	object_event 6, EVENT_OBJ_GFX_CAMERAMAN, 0, 34, 8, 3, 8, 0, 0, 0, 0, Route118_EventScript_28CE36, 797
	object_event 7, EVENT_OBJ_GFX_GIRL_2, 0, 12, 10, 3, 2, 1, 1, 0, 0, Route118_EventScript_1F3E73, 0
	object_event 8, EVENT_OBJ_GFX_REPORTER_F, 0, 33, 8, 3, 8, 0, 0, 0, 0, Route118_EventScript_28CED6, 901
	object_event 9, EVENT_OBJ_GFX_CAMERAMAN, 0, 34, 8, 3, 8, 0, 0, 0, 0, Route118_EventScript_28CEF6, 901
	object_event 10, EVENT_OBJ_GFX_REPORTER_F, 0, 33, 8, 3, 8, 0, 0, 0, 0, Route118_EventScript_28CF16, 904
	object_event 11, EVENT_OBJ_GFX_CAMERAMAN, 0, 34, 8, 3, 8, 0, 0, 0, 0, Route118_EventScript_28CF36, 904
	object_event 12, EVENT_OBJ_GFX_CUTTABLE_TREE, 0, 38, 8, 3, 1, 0, 0, 0, 0, Route118_EventScript_2906BB, 17
	object_event 13, EVENT_OBJ_GFX_FISHERMAN, 0, 28, 8, 3, 9, 0, 0, 0, 0, Route118_EventScript_1F3E14, 0
	object_event 14, EVENT_OBJ_GFX_WOMAN_3, 0, 7, 12, 3, 7, 0, 0, 1, 4, Route118_EventScript_1F3F87, 0
	object_event 15, EVENT_OBJ_GFX_FISHERMAN, 0, 14, 14, 3, 8, 0, 0, 1, 0, Route118_EventScript_1F4000, 0
	object_event 16, EVENT_OBJ_GFX_MAN_6, 0, 56, 7, 3, 16, 0, 0, 1, 3, Route118_EventScript_1F4090, 0
	object_event 17, EVENT_OBJ_GFX_FISHERMAN, 0, 39, 15, 3, 1, 0, 0, 1, 2, Route118_EventScript_1F3FE9, 0
	object_event 18, EVENT_OBJ_GFX_MAN_6, 0, 17, 11, 3, 15, 1, 1, 1, 3, Route118_EventScript_1F4017, 0
	object_event 19, EVENT_OBJ_GFX_STEVEN, 0, 44, 7, 3, 8, 1, 1, 0, 0, 0x0, 966
	object_event 20, EVENT_OBJ_GFX_ITEM_BALL, 0, 69, 7, 3, 1, 1, 1, 0, 0, Route118_EventScript_290ED3, 1121
	object_event 21, EVENT_OBJ_GFX_YOUNGSTER, 0, 7, 7, 3, 8, 1, 1, 1, 4, Route118_EventScript_1F40A7, 0

Route118_MapWarps: @ 852ACAC
	warp_def 42, 6, 0, 0, MAP_TERRA_CAVE_ENTRANCE
	warp_def 9, 6, 0, 0, MAP_TERRA_CAVE_ENTRANCE

Route118_MapCoordEvents: @ 852ACBC
	coord_event 43, 11, 3, 0, VAR_0x4071, 0, 0, Route118_EventScript_1F3E8E
	coord_event 44, 11, 3, 0, VAR_0x4071, 0, 0, Route118_EventScript_1F3EAE
	coord_event 45, 11, 3, 0, VAR_0x4071, 0, 0, Route118_EventScript_1F3EC4

Route118_MapBGEvents: @ 852ACEC
	bg_event 47, 14, 0, 8, 0, ITEM_MASTER_BALL, 0, 0
	bg_event 13, 6, 0, 0, 0, Route118_EventScript_1F3E7C
	bg_event 56, 8, 0, 0, 0, Route118_EventScript_1F3E85
	bg_event 67, 6, 0, 8, 0, ITEM_LUXURY_BALL, 0, 0
	bg_event 29, 5, 0, 8, 0, ITEM_HARBOR_MAIL, 0, 0
	bg_event 47, 5, 0, 8, 0, ITEM_SPELON_BERRY, 0, 0
	bg_event 46, 5, 0, 8, 0, ITEM_PETAYA_BERRY, 0, 0
	bg_event 31, 13, 3, 7, 0, ITEM_IRON, 67, 0
	bg_event 12, 14, 3, 7, 0, ITEM_HEART_SCALE, 66, 0

Route118_MapEvents:: @ 852AD58
	map_events Route118_EventObjects, Route118_MapWarps, Route118_MapCoordEvents, Route118_MapBGEvents

