#include "levels/castle_grounds/header.h"
#include "levels/castle_inside/header.h"
#include "src/game/area.h"

void bhv_cutscene_mario_beginning_init(void) {
    gMarioState->customCutscene = 1;
    
}

void bhv_cutscene_mario_beginning_loop(void) {
    
    

    extern s16 gTextOpacity;
    extern u8 gLetterHeight;

    const f32 (*coords)[2][3] = segmented_to_virtual(&scene1);
    switch (o->oAction) {
        case 0:
        if (o->oTimer == 120) {
            o->oAction = 1;
        }

        gCamera->cutscene = 1;
    gMarioState->action = ACT_WAITING_FOR_DIALOG;
    gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];
        break;
        case 1:
        coords = segmented_to_virtual(&scene2);
        if (o->oTimer >= 20 && o->oTimer <= 60) {
            gMarioState->customCutscene = 2;
            gLetterHeight = 240 - (80 * coss(0x4000 - (409.6f * (o->oTimer - 20))));
        }

        if (o->oTimer == 60) {
            
            gLetterHeight = 160;
            gTextOpacity = 2;
        }

        if (o->oTimer == 150) {
            gTextOpacity = 253;
        }

        if (o->oTimer == 195) {
            gMarioState->customCutscene = 3;
            gTextOpacity = 2;
        }

        if (o->oTimer == 260) {
            gTextOpacity = 253;
        }

        if (o->oTimer == 305) {
            gMarioState->customCutscene = 4;
            gTextOpacity = 2;
            cur_obj_init_animation(1);
        }

        if (o->oTimer == 325) {
            gMarioState->customCutscene = 5;
        }

        if (o->oTimer >= 345) {
            o->oPosZ -= (o->oTimer - 345) / 2;
        }

        if (o->oTimer == 400) {
            play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 20, 0, 0, 0);
        }

        if (o->oTimer == 420) {
            //gCamera->cutscene = 0;
            //gMarioState->action = ACT_IDLE;
            //gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_MARIO];
            //o->oAction = 2;

            initiate_warp(LEVEL_CASTLE, 1, 0x0A, 0);
        }

        break;
    }

    
    if (o->oAction != 2) {
    gLakituState.goalPos[0] = coords[o->oTimer][0][0];
    gLakituState.goalPos[1] = coords[o->oTimer][0][1];
    gLakituState.goalPos[2] = coords[o->oTimer][0][2];

    gLakituState.goalFocus[0] = coords[o->oTimer][1][0];
    gLakituState.goalFocus[1] = coords[o->oTimer][1][1];
    gLakituState.goalFocus[2] = coords[o->oTimer][1][2];
    }
}

void bhv_cutscene_castle_init(void) {
    gMarioState->customCutscene = 6;
    gTextOpacity = 0;
    
}

void bhv_cutscene_castle_loop(void) {
    gCamera->cutscene = 1;
    gMarioState->action = ACT_WAITING_FOR_DIALOG;
    gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];

    const f32 (*coords)[2][3] = segmented_to_virtual(&inside_castle_scene_1);

    switch (gCurrAreaIndex) {
        case 1: 
            if (o->oTimer == 50) {
                gTextOpacity = 2;
            }
            if (o->oTimer == 130) {
                gTextOpacity = 253;
            }
            if (o->oTimer == 160) {
                play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 20, 0, 0, 0);
            }
            if (o->oTimer == 180) {
                initiate_warp(LEVEL_CASTLE, 2, 0x0A, 0);
            }
        break;

        case 2:
            if (o->oTimer == 20) {
                gTextOpacity = 2;
            gMarioState->customCutscene = 7;
            }

            if (o->oTimer == 110) {
                gTextOpacity = 253;
            }

            if (o->oTimer == 250) {
                gTextOpacity = 2;
            gMarioState->customCutscene = 8;
            }

            if (o->oTimer == 370) {
                gTextOpacity = 253;
            }

            if (o->oTimer == 480) {
                gTextOpacity = 2;
            gMarioState->customCutscene = 9;
            }

            if (o->oTimer == 575) {
                play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 40, 0, 0, 0);
            }

            if (o->oTimer  == 615) {
                gMarioState->customCutscene = 0;
                initiate_warp(LEVEL_BOB, 1, 0x0A, 0);
            }


            coords = segmented_to_virtual(&inside_castle_scene_2);
        break; 
    }



    gLakituState.goalPos[0] = coords[o->oTimer][0][0];
    gLakituState.goalPos[1] = coords[o->oTimer][0][1];
    gLakituState.goalPos[2] = coords[o->oTimer][0][2];

    gMarioState->pos[0] = gLakituState.goalPos[0];
    gMarioState->pos[1] = gLakituState.goalPos[1];
    gMarioState->pos[2] = gLakituState.goalPos[2];

    gLakituState.goalFocus[0] = coords[o->oTimer][1][0];
    gLakituState.goalFocus[1] = coords[o->oTimer][1][1];
    gLakituState.goalFocus[2] = coords[o->oTimer][1][2];
}