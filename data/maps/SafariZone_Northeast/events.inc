SafariZone_Northeast_EventObjects: @ 853B968
	object_event 1, EVENT_OBJ_GFX_BOY_3, 0, 8, 20, 3, 1, 1, 1, 0, 0, SafariZone_Northeast_EventScript_23D3C6, 0
	object_event 2, EVENT_OBJ_GFX_GIRL_3, 0, 30, 22, 3, 1, 1, 1, 0, 0, SafariZone_Northeast_EventScript_23D3D8, 0
	object_event 3, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 11, 11, 3, 1, 1, 1, 0, 0, SafariZone_Northeast_EventScript_2907A6, 21
	object_event 4, EVENT_OBJ_GFX_WOMAN_1, 0, 13, 35, 0, 1, 1, 1, 0, 0, SafariZone_Northeast_EventScript_23D3CF, 0
	object_event 5, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 8, 13, 3, 1, 1, 1, 0, 0, SafariZone_Northeast_EventScript_2907A6, 19
	object_event 6, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 9, 7, 3, 1, 1, 1, 0, 0, SafariZone_Northeast_EventScript_2907A6, 17
	object_event 7, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 8, 10, 3, 1, 1, 1, 0, 0, SafariZone_Northeast_EventScript_2907A6, 20
	object_event 8, EVENT_OBJ_GFX_BREAKABLE_ROCK, 0, 12, 8, 3, 1, 1, 1, 0, 0, SafariZone_Northeast_EventScript_2907A6, 18
	object_event 9, EVENT_OBJ_GFX_ITEM_BALL, 0, 8, 17, 3, 1, 1, 1, 0, 0, SafariZone_Northeast_EventScript_2912E3, 1169

SafariZone_Northeast_MapBGEvents: @ 853BA40
	bg_event 31, 35, 3, 7, 0, ITEM_RARE_CANDY, 106, 0
	bg_event 21, 5, 3, 7, 0, ITEM_ZINC, 107, 0

SafariZone_Northeast_MapEvents:: @ 853BA58
	map_events SafariZone_Northeast_EventObjects, 0x0, 0x0, SafariZone_Northeast_MapBGEvents

