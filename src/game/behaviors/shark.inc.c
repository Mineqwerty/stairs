
static struct ObjectHitbox sSharkHitbox = {
    /* interactType:      */ INTERACT_DAMAGE,
    /* downOffset:        */ 600,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 1,
    /* radius:            */ 172,
    /* height:            */ 300,
    /* hurtboxRadius:     */ 142,
    /* hurtboxHeight:     */ 340,
};

void bhv_shark_init(void) {
    o->oHomeY = o->oPosY;
    o->oVelY = 150.0f;
    o->oForwardVel = 30.0f;
    o->oGravity = 1.0f;
    o->oDragStrength = 0.0f;
    obj_set_hitbox(o, &sSharkHitbox);
}

void bhv_shark_loop(void) {

    o->oFaceAnglePitch = -o->oVelY * 0x100;

    object_step();

    if (o->oPosY < o->oHomeY - 200.f ) {
        obj_mark_for_deletion(o);
    }
}

void bhv_shark_spawner_loop(void) {
    if (o->oTimer % 120 == 0) {
        spawn_object_relative(0, 0, 0, 0, o, MODEL_SHARK, bhvShark);
    }
}
void bhv_breakable_ice_init(void) {
    
            switch(gMarioState->iceSpawnType) {
                case 1:
                    gMarioState->pos[0] = -4653;
                    gMarioState->pos[1] = 3568;
                    gMarioState->pos[2] = -4299;
                    gMarioState->vel[1] = 20.0f;
                    play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
                    gMarioState->iceSpawnType = 0;
                break;
                case 2:
                    gMarioState->pos[0] = -442;
                    gMarioState->pos[1] = 10105;
                    gMarioState->pos[2] = 2155;
                    gMarioState->vel[1] = 20.0f;
                    play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 10, 0, 0, 0);
                    gMarioState->iceSpawnType = 0;
                break;
            }
}

void bhv_breakable_ice_loop(void) {

    if (o->oAction == 0 && gMarioObject->platform == o && gMarioState->action == ACT_GROUND_POUND_LAND) {
        o->oAction = 1;
        //spawn_triangle_break_particles(30, MODEL_DIRT_ANIMATION, 3.0f, TINY_DIRT_PARTICLE_ANIM_STATE_YELLOW);
        o->oPosY = -3000;
        gMarioState->iceSpawnType = o->oBehParams2ndByte;
    }

    if (o->oAction == 1 && o->oTimer == 5) {
        play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 10, 0, 0, 0);
    }

    if (o->oAction == 1 && o->oTimer >= 15) {
        if (gCurrAreaIndex == 1) {
        initiate_warp(LEVEL_SL, 2, 0x0A, 0);
        }
        else {
        initiate_warp(LEVEL_SL, 1, 0x0A, 0); 
        }
    }

}

void bhv_bossman_loop(void) {

    gCamera->cutscene = 1;

    if (gMarioState->customCutscene < 13) {
    gLakituState.goalFocus[0] = -848;
    gLakituState.goalFocus[1] = 848;
    gLakituState.goalFocus[2] = -84;

    gLakituState.goalPos[0] = gMarioState->pos[0] + 300;
    gLakituState.goalPos[1] = gMarioState->pos[1] + 50;
    gLakituState.goalPos[2] = gMarioState->pos[2] - 150;

    gMarioState->pos[0] = 2851;
    gMarioState->pos[1] = -670;
    gMarioState->pos[2] = -8;

    gMarioState->faceAngle[1] = -0x4000;
    gMarioState->action = ACT_WAITING_FOR_DIALOG;
    }
    else if (gMarioState->customCutscene == 13){
        gLakituState.goalFocus[0] = gMarioState->pos[0];
        gLakituState.goalFocus[1] = gMarioState->pos[1];
        gLakituState.goalFocus[2] = gMarioState->pos[2];

        gLakituState.goalPos[0] = gMarioState->pos[0] + 100;
        gLakituState.goalPos[1] = gMarioState->pos[1] + 50;
        gLakituState.goalPos[2] = gMarioState->pos[2] - 450;

        gMarioState->pos[0] = 2851;
        gMarioState->pos[1] = -650;
        gMarioState->pos[2] = -8;

        gMarioState->faceAngle[1] = 0x4000;
        //if (o->oTimer == 301) {
        set_mario_anim_with_accel(gMarioState, MARIO_ANIM_SLOW_LONGJUMP, 1);
        //}
    }
    else if (gMarioState->customCutscene >= 14 && gMarioState->customCutscene <= 15) {
        

        gMarioState->pos[0] = 2851;
        gMarioState->pos[1] = -650;
        gMarioState->pos[2] = -8;
        gMarioState->vel[1] = 0;

        if (gPlayer1Controller->buttonPressed & A_BUTTON) {
            if (gMarioState->customCutscene == 14) {
                play_secondary_music(SEQ_STREAMED_FISTBUMP, 0, 255, 10);
                gMarioState->customCutscene = 15;
                o->oTimer = 600;
            }
            gMarioState->action = ACT_LONG_JUMP;
            set_mario_anim_with_accel(gMarioState, MARIO_ANIM_SLOW_LONGJUMP, 1);
            play_sound(SOUND_MARIO_YAHOO, gGlobalSoundSource);
        }

        if (gMarioState->customCutscene == 15 && o->oTimer == 692) {
           gMarioState->customCutscene = 16; 
        }


    }

    else {
        gMarioState->forwardVel = -40;
        gMarioState->vel[1] = 40;

        if (o->oTimer == 758) {
        gLakituState.goalFocus[0] = gMarioState->pos[0];
        gLakituState.goalFocus[1] = gMarioState->pos[1];
        gLakituState.goalFocus[2] = gMarioState->pos[2];

        gLakituState.goalPos[0] = gMarioState->pos[0];
        gLakituState.goalPos[1] = gMarioState->pos[1] + 50;
        gLakituState.goalPos[2] = gMarioState->pos[2] - 650;

        gMarioState->pos[0] = 2851;
        gMarioState->pos[1] = -650;
        gMarioState->pos[2] = -8;
        }
        if (o->oTimer >= 759) {
            gLakituState.goalFocus[0] = gMarioState->pos[0];
        gLakituState.goalFocus[1] = gMarioState->pos[1];
        gLakituState.goalFocus[2] = gMarioState->pos[2];
        gMarioState->forwardVel = -80;
        gMarioState->vel[1] = 40;
        }

        if (o->oTimer == 800) {
            spawn_object_relative(0, 0, 0, 0, gMarioObject, MODEL_EXPLOSION, bhvExplosion);
            o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];
        }

        if (o->oTimer >= 959) {
            initiate_warp(LEVEL_ENDING, 1, 0x0A, 0);
        }


    }


    switch (o->oTimer) {
        case 1: 
            gMarioState->customCutscene = 10;
            gTextOpacity = 2;
        break;
        case 120: 
            gMarioState->customCutscene = 11;
        break;
        case 200: 
            gMarioState->customCutscene = 12;
        break;
        case 300: 
            gMarioState->customCutscene = 13;
        break;

        case 400: 
            gMarioState->customCutscene = 14;
        break;
    }

    
}

void bhv_warp_stairs_loop(void) {
    extern u8 gShadeScreenAmount;
    if (gMarioObject->platform == o) {
        
                if (gMarioState->pos[1] > o->oPosY) {
                    gMarioState->flags |= MARIO_TELEPORTING;
                    gMarioState->fadeWarpOpacity = 255 - ((gMarioState->pos[1] - o->oPosY) / 2.0f);
                    gShadeScreenAmount = (gMarioState->pos[1] - o->oPosY) / 1.6f;
                    if (gMarioState->pos[1] - o->oPosY > 400) {
                        switch(gCurrLevelNum) {
                        case LEVEL_JRB:
                        initiate_warp(LEVEL_SL, 1, 0x0A, 0);
                        break;
                        case LEVEL_BOB:
                        initiate_warp(LEVEL_JRB, 1, 0x0A, 0);
                        break;
                        case LEVEL_WF:
                        initiate_warp(LEVEL_BITDW, 1, 0x0A, 0);
                        break;
                        case LEVEL_SL:
                        initiate_warp(LEVEL_WF, 1, 0x0A, 0);
                        break;
                    }
                }
                
            
        }
    }
    else if (o->oDistanceToMario < 3000) {
        gMarioState->flags &= ~MARIO_TELEPORTING;
        gShadeScreenAmount = 0;
    }
}

void bhv_rhino_init(void) {
    cur_obj_init_animation_with_accel_and_sound(0, 0.5f);
}

void bhv_mario_stairs_controller_init(void) {
    if (gMarioState->iceSpawnType == 0) {
    extern u8 gShadeScreenAmount;
    gMarioState->action = ACT_AUTO_WALKING;
    set_mario_anim_with_accel(gMarioState, MARIO_ANIM_RUNNING, 0x00080000);
    gShadeScreenAmount = 0;
    play_transition(WARP_TRANSITION_FADE_FROM_COLOR, 20, 0, 0, 0);
    }
}

void bhv_mario_stairs_controller_loop(void) {
    if (gMarioState->iceSpawnType == 0) {
    if (o->oTimer < 40) {
        gMarioState->forwardVel = 30.0f;

        switch (gCurrLevelNum) {
            case LEVEL_JRB:
        gMarioState->faceAngle[1] = 0x4000;
        break;
        case LEVEL_WF:
        gMarioState->faceAngle[1] = 0x6000;
        break;
        case LEVEL_SL:
        gMarioState->faceAngle[1] = 0x7000;
        break;
        }
    }
    if (o->oTimer == 40) {
        gMarioState->action = ACT_WALKING;
    }
    }
}

void bhv_elephant_loop(void) {
    o->oForwardVel = 40.0f;
    o->oMoveAngleYaw = (o->oTimer * 0x100);
    o->oFaceAngleYaw = (o->oTimer * 0x100);
    object_step();
}