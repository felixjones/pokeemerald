#include "global.h"
#include "event_data.h"
#include "event_scripts.h"
#include "field_effect.h"
#include "party_menu.h"
#include "rom6.h"
#include "script.h"
#include "task.h"

// static functions
static void FldEff_UseStrength(void);
static void sub_8145E74(void);

// text
bool8 SetUpFieldMove_Strength(void)
{
    if (npc_before_player_of_type(87) == TRUE)
    {
        gSpecialVar_Result = GetCursorSelectionMonId();
        gUnknown_03005DB0 = FieldCallback_Teleport;
        gUnknown_0203CEEC = FldEff_UseStrength;
        return TRUE;
    }
    return FALSE;
}

static void FldEff_UseStrength(void)
{
    gFieldEffectArguments[0] = GetCursorSelectionMonId();
    ScriptContext1_SetupScript(FieryPath_EventScript_2908FD);
}

bool8 sub_8145E2C(void)
{
    u8 taskId = oei_task_add();
    gTasks[taskId].data[8] = (u32)sub_8145E74 >> 16;
    gTasks[taskId].data[9] = (u32)sub_8145E74;
    GetMonNickname(&gPlayerParty[gFieldEffectArguments[0]], gStringVar1);
    return FALSE;
}

static void sub_8145E74(void)
{
    FieldEffectActiveListRemove(FLDEFF_USE_STRENGTH);
    EnableBothScriptContexts();
}
