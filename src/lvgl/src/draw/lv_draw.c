/**
 * @file lv_draw.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_draw.h"
#include "sw/lv_draw_sw.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lv_draw_init(void)
{
    /*Nothing to init now*/
}

<<<<<<< Updated upstream:src/lvgl/tests/lv_test_core/lv_test_core.c
=======
void lv_draw_wait_for_finish(lv_draw_ctx_t * draw_ctx)
{
    if(draw_ctx->wait_for_finish) draw_ctx->wait_for_finish(draw_ctx);
}

>>>>>>> Stashed changes:src/lvgl/src/draw/lv_draw.c
/**********************
 *   STATIC FUNCTIONS
 **********************/

