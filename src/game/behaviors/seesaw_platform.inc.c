
/**
 * Behavior for bhvSeesawPlatform.
 */

/**
 * Collision models for the different seesaw platforms.
 */
static Collision const *sSeesawPlatformCollisionModels[] = {
    bitdw_seg7_collision_0700F70C,
    bits_seg7_collision_0701ADD8,
    bits_seg7_collision_0701AE5C,
    bob_seg7_collision_bridge,
    bitfs_seg7_collision_07015928,
    rr_seg7_collision_07029750,
    rr_seg7_collision_07029858,
    vcutm_seg7_collision_0700AC44,
};

/**
 * Init function for bhvSeesawPlatform.
 */
void bhv_seesaw_platform_init(void) {
    o->collisionData = segmented_to_virtual(sSeesawPlatformCollisionModels[o->oBehParams2ndByte]);

    // The S-shaped seesaw platform in BitS is large, so increase its collision
    // distance
    if (o->oBehParams2ndByte == 2) {
        o->oCollisionDistance = 2000.0f;
    }
}

/**
 * Update function for bhvSeesawPlatform.
 */
void bhv_seesaw_platform_update(void) {
}
