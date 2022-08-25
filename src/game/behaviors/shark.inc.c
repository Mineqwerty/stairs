void bhv_shark_init(void) {
    o->oHomeY = o->oPosY;
    o->oVelY = 150.0f;
    o->oForwardVel = 30.0f;
    o->oGravity = 1.0f;
    o->oDragStrength = 0.0f;
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

void bhv_breakable_ice_loop(void) {

    if (o->oAction == 0 && gMarioObject->platform == o && gMarioState->action == ACT_GROUND_POUND_LAND) {
        o->oAction = 1;
        //spawn_triangle_break_particles(30, MODEL_DIRT_ANIMATION, 3.0f, TINY_DIRT_PARTICLE_ANIM_STATE_YELLOW);
        o->oPosY = -3000;
    }

    if (o->oAction == 1 && o->oTimer >= 15) {
        initiate_warp(LEVEL_SL, 2, 0x0A, 0);
    }

}