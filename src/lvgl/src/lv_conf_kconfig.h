/** * @file lv_conf_kconfig.h * Configs that need special handling when LVGL is used with Kconfig */

#ifndef LV_CONF_KCONFIG_H
#define LV_CONF_KCONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef LV_CONF_KCONFIG_EXTERNAL_INCLUDE
#  include LV_CONF_KCONFIG_EXTERNAL_INCLUDE
#else

<<<<<<< Updated upstream
#  if defined ESP_PLATFORM
=======
#  ifdef ESP_PLATFORM
>>>>>>> Stashed changes
#    include "sdkconfig.h"
#    include "esp_attr.h"
#  endif

#  ifdef __NuttX__
#    include <nuttx/config.h>
<<<<<<< Updated upstream
=======
#  elif defined(__RTTHREAD__)
#    define LV_CONF_INCLUDE_SIMPLE
#    include <lv_rt_thread_conf.h>
>>>>>>> Stashed changes
#  endif

#endif /*LV_CONF_KCONFIG_EXTERNAL_INCLUDE*/

<<<<<<< Updated upstream
/*******************
 * LV_MEM_SIZE
 *******************/

#ifndef LV_MEM_SIZE
#if defined (CONFIG_LV_MEM_SIZE_KILOBYTES)
#define CONFIG_LV_MEM_SIZE    (CONFIG_LV_MEM_SIZE_KILOBYTES * 1024U)
#endif
#endif

/*******************
 * LV COLOR TRANSP
 *******************/

#ifndef LV_COLOR_TRANSP
#if defined (CONFIG_LV_COLOR_TRANSP_HEX)
#define CONFIG_LV_COLOR_TRANSP    lv_color_hex(CONFIG_LV_COLOR_TRANSP_HEX)
#else
#define CONFIG_LV_COLOR_TRANSP    LV_COLOR_LIME
#endif
#endif

=======
>>>>>>> Stashed changes
/*******************
 * LV COLOR CHROMA KEY
 *******************/

<<<<<<< Updated upstream
#ifndef LV_THEME_DEFAULT_INIT
#if defined (CONFIG_LV_THEME_DEFAULT_INIT_EMPTY)
#define CONFIG_LV_THEME_DEFAULT_INIT               lv_theme_empty_init
#elif defined (CONFIG_LV_THEME_DEFAULT_INIT_TEMPLATE)
#define CONFIG_LV_THEME_DEFAULT_INIT               lv_theme_template_init
#elif defined (CONFIG_LV_THEME_DEFAULT_INIT_MATERIAL)
#define CONFIG_LV_THEME_DEFAULT_INIT               lv_theme_material_init
#elif defined (CONFIG_LV_THEME_DEFAULT_INIT_MONO)
#define LV_THEME_DEFAULT_INIT                      lv_theme_mono_init
#endif
=======
#ifdef CONFIG_LV_COLOR_CHROMA_KEY_HEX
#  define CONFIG_LV_COLOR_CHROMA_KEY lv_color_hex(CONFIG_LV_COLOR_CHROMA_KEY_HEX)
>>>>>>> Stashed changes
#endif

/*******************
 * LV_MEM_SIZE
 *******************/

<<<<<<< Updated upstream
#ifndef LV_THEME_DEFAULT_COLOR_PRIMARY
#ifdef CONFIG_LV_THEME_DEFAULT_COLOR_PRIMARY
#define LV_THEME_DEFAULT_COLOR_PRIMARY lv_color_hex(CONFIG_LV_THEME_DEFAULT_COLOR_PRIMARY)
#endif
#endif

#ifndef LV_THEME_DEFAULT_COLOR_SECONDARY
#ifdef CONFIG_LV_THEME_DEFAULT_COLOR_SECONDARY
#define LV_THEME_DEFAULT_COLOR_SECONDARY lv_color_hex(CONFIG_LV_THEME_DEFAULT_COLOR_SECONDARY)
=======
#ifdef CONFIG_LV_MEM_SIZE_KILOBYTES
#  define CONFIG_LV_MEM_SIZE (CONFIG_LV_MEM_SIZE_KILOBYTES * 1024U)
#endif

/*------------------
 * MONITOR POSITION
 *-----------------*/

#ifdef CONFIG_LV_PERF_MONITOR_ALIGN_TOP_LEFT
#  define CONFIG_LV_USE_PERF_MONITOR_POS LV_ALIGN_TOP_LEFT
#elif defined(CONFIG_LV_USE_PERF_MONITOR_ALIGN_TOP_MID)
#  define CONFIG_LV_USE_PERF_MONITOR_POS LV_ALIGN_TOP_MID
#elif defined(CONFIG_LV_PERF_MONITOR_ALIGN_TOP_RIGHT)
#  define CONFIG_LV_USE_PERF_MONITOR_POS LV_ALIGN_TOP_RIGHT
#elif defined(CONFIG_LV_PERF_MONITOR_ALIGN_BOTTOM_LEFT)
#  define CONFIG_LV_USE_PERF_MONITOR_POS LV_ALIGN_BOTTOM_LEFT
#elif defined(CONFIG_LV_PERF_MONITOR_ALIGN_BOTTOM_MID)
#  define CONFIG_LV_USE_PERF_MONITOR_POS LV_ALIGN_BOTTOM_MID
#elif defined(CONFIG_LV_PERF_MONITOR_ALIGN_BOTTOM_RIGHT)
#  define CONFIG_LV_USE_PERF_MONITOR_POS LV_ALIGN_BOTTOM_RIGHT
#elif defined(CONFIG_LV_PERF_MONITOR_ALIGN_LEFT_MID)
#  define CONFIG_LV_USE_PERF_MONITOR_POS LV_ALIGN_LEFT_MID
#elif defined(CONFIG_LV_PERF_MONITOR_ALIGN_RIGHT_MID)
#  define CONFIG_LV_USE_PERF_MONITOR_POS LV_ALIGN_RIGHT_MID
#elif defined(CONFIG_LV_PERF_MONITOR_ALIGN_CENTER)
#  define CONFIG_LV_USE_PERF_MONITOR_POS LV_ALIGN_CENTER
>>>>>>> Stashed changes
#endif

#ifdef CONFIG_LV_MEM_MONITOR_ALIGN_TOP_LEFT
#  define CONFIG_LV_USE_MEM_MONITOR_POS LV_ALIGN_TOP_LEFT
#elif defined(CONFIG_LV_USE_MEM_MONITOR_ALIGN_TOP_MID)
#  define CONFIG_LV_USE_MEM_MONITOR_POS LV_ALIGN_TOP_MID
#elif defined(CONFIG_LV_MEM_MONITOR_ALIGN_TOP_RIGHT)
#  define CONFIG_LV_USE_MEM_MONITOR_POS LV_ALIGN_TOP_RIGHT
#elif defined(CONFIG_LV_MEM_MONITOR_ALIGN_BOTTOM_LEFT)
#  define CONFIG_LV_USE_MEM_MONITOR_POS LV_ALIGN_BOTTOM_LEFT
#elif defined(CONFIG_LV_MEM_MONITOR_ALIGN_BOTTOM_MID)
#  define CONFIG_LV_USE_MEM_MONITOR_POS LV_ALIGN_BOTTOM_MID
#elif defined(CONFIG_LV_MEM_MONITOR_ALIGN_BOTTOM_RIGHT)
#  define CONFIG_LV_USE_MEM_MONITOR_POS LV_ALIGN_BOTTOM_RIGHT
#elif defined(CONFIG_LV_MEM_MONITOR_ALIGN_LEFT_MID)
#  define CONFIG_LV_USE_MEM_MONITOR_POS LV_ALIGN_LEFT_MID
#elif defined(CONFIG_LV_MEM_MONITOR_ALIGN_RIGHT_MID)
#  define CONFIG_LV_USE_MEM_MONITOR_POS LV_ALIGN_RIGHT_MID
#elif defined(CONFIG_LV_MEM_MONITOR_ALIGN_CENTER)
#  define CONFIG_LV_USE_MEM_MONITOR_POS LV_ALIGN_CENTER
#endif

/********************
 * FONT SELECTION
 *******************/

/**
 * NOTE: In Kconfig instead of `LV_DEFAULT_FONT`
 *       `CONFIG_LV_FONT_DEFAULT_<font_name>` is defined
 *       hence the large selection with if-s
 */

/*------------------
 * DEFAULT FONT
 *-----------------*/
<<<<<<< Updated upstream
#ifndef LV_THEME_DEFAULT_FONT_SMALL
#if defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_8
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_8
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_10
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_10
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_12
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_12
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_14
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_14
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_16
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_16
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_18
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_18
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_20
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_20
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_22
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_22
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_24
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_24
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_26
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_26
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_28
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_28
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_30
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_30
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_32
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_32
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_34
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_34
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_36
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_36
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_38
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_38
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_40
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_40
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_42
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_42
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_44
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_44
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_46
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_46
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT_48
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_48
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_UNSCII_8
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_unscii_8
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_UNSCII_16
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_unscii_16
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT12SUBPX
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_12_subpx
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_MONTSERRAT28COMPRESSED
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_montserrat_28_compressed
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_DEJAVU_16_PERSIAN_HEBREW
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_dejavu_16_persian_hebrew
#elif defined CONFIG_LV_FONT_DEFAULT_SMALL_SIMSUN_16_CJK
#define CONFIG_LV_THEME_DEFAULT_FONT_SMALL         &lv_font_simsun_16_cjk
#endif
=======
#ifdef CONFIG_LV_FONT_DEFAULT_MONTSERRAT_8
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_8
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_10)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_10
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_12)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_12
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_14)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_14
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_16)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_16
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_18)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_18
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_20)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_20
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_22)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_22
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_24)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_24
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_26)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_26
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_28)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_28
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_30)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_30
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_32)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_32
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_34)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_34
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_36)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_36
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_38)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_38
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_40)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_40
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_42)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_42
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_44)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_44
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_46)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_46
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_48)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_48
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_12_SUBPX)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_12_subpx
#elif defined(CONFIG_LV_FONT_DEFAULT_MONTSERRAT_28_COMPRESSED)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_montserrat_28_compressed
#elif defined(CONFIG_LV_FONT_DEFAULT_DEJAVU_16_PERSIAN_HEBREW)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_dejavu_16_persian_hebrew
#elif defined(CONFIG_LV_FONT_DEFAULT_SIMSUN_16_CJK)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_simsun_16_cjk
#elif defined(CONFIG_LV_FONT_DEFAULT_UNSCII_8)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_unscii_8
#elif defined(CONFIG_LV_FONT_DEFAULT_UNSCII_16)
#  define CONFIG_LV_FONT_DEFAULT &lv_font_unscii_16
>>>>>>> Stashed changes
#endif

/*------------------
 * TEXT ENCODING
 *-----------------*/
<<<<<<< Updated upstream
#ifndef LV_THEME_DEFAULT_FONT_NORMAL
#if defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_8
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_8
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_10
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_10
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_12
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_12
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_14
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_14
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_16
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_16
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_18
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_18
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_20
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_20
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_22
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_22
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_24
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_24
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_26
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_26
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_28
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_28
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_30
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_30
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_32
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_32
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_34
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_34
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_36
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_36
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_38
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_38
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_40
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_40
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_42
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_42
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_44
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_44
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_46
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_46
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT_48
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_48
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_UNSCII_8
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_unscii_8
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_UNSCII_16
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_unscii_16
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT12SUBPX
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_12_subpx
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_MONTSERRAT28COMPRESSED
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_montserrat_28_compressed
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_DEJAVU_16_PERSIAN_HEBREW
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_dejavu_16_persian_hebrew
#elif defined CONFIG_LV_FONT_DEFAULT_NORMAL_SIMSUN_16_CJK
#define CONFIG_LV_THEME_DEFAULT_FONT_NORMAL         &lv_font_simsun_16_cjk
#endif
=======
#ifdef CONFIG_LV_TXT_ENC_UTF8
#  define CONFIG_LV_TXT_ENC LV_TXT_ENC_UTF8
#elif defined(CONFIG_LV_TXT_ENC_ASCII)
#  define CONFIG_LV_TXT_ENC LV_TXT_ENC_ASCII
>>>>>>> Stashed changes
#endif

/*------------------
 * BIDI DIRECTION
 *-----------------*/
<<<<<<< Updated upstream
#ifndef LV_THEME_DEFAULT_FONT_SUBTITLE
#if defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_8
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_8
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_10
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_10
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_12
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_12
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_14
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_14
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_16
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_16
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_18
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_18
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_20
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_20
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_22
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_22
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_24
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_24
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_26
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_26
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_28
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_28
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_30
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_30
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_32
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_32
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_34
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_34
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_36
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_36
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_38
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_38
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_40
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_40
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_42
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_42
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_44
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_44
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_46
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_46
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT_48
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_48
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_UNSCII_8
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_unscii_8
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_UNSCII_16
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_unscii_16
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT12SUBPX
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_12_subpx
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_MONTSERRAT28COMPRESSED
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_montserrat_28_compressed
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_DEJAVU_16_PERSIAN_HEBREW
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_dejavu_16_persian_hebrew
#elif defined CONFIG_LV_FONT_DEFAULT_SUBTITLE_SIMSUN_16_CJK
#define CONFIG_LV_THEME_DEFAULT_FONT_SUBTITLE         &lv_font_simsun_16_cjk
#endif
#endif

/*------------------
 * TITLE FONT
 *-----------------*/
#ifndef LV_THEME_DEFAULT_FONT_TITLE
#if defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_8
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_8
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_10
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_10
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_12
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_12
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_14
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_14
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_16
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_16
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_18
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_18
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_20
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_20
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_22
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_22
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_24
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_24
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_26
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_26
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_28
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_28
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_30
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_30
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_32
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_32
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_34
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_34
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_36
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_36
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_38
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_38
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_40
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_40
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_42
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_42
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_44
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_44
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_46
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_46
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT_48
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_48
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_UNSCII_8
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_unscii_8
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_UNSCII_16
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_unscii_16
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT12SUBPX
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_12_subpx
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_MONTSERRAT28COMPRESSED
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_montserrat_28_compressed
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_DEJAVU_16_PERSIAN_HEBREW
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_dejavu_16_persian_hebrew
#elif defined CONFIG_LV_FONT_DEFAULT_TITLE_SIMSUN_16_CJK
#define CONFIG_LV_THEME_DEFAULT_FONT_TITLE         &lv_font_simsun_16_cjk
#endif
=======

#ifdef CONFIG_LV_BASE_DIR_LTR
#  define CONFIG_LV_BIDI_BASE_DIR_DEF LV_BASE_DIR_LTR
#elif defined(CONFIG_LV_BASE_DIR_RTL)
#  define CONFIG_LV_BIDI_BASE_DIR_DEF LV_BASE_DIR_RTL
#elif defined(CONFIG_LV_BASE_DIR_AUTO)
#  define CONFIG_LV_BIDI_BASE_DIR_DEF LV_BASE_DIR_AUTO
>>>>>>> Stashed changes
#endif

/*------------------
 * TEXT ENCODING
 *-----------------*/
#ifndef LV_TEXT_ENC
#ifdef CONFIG_LV_TXT_ENC_UTF8
#define CONFIG_LV_TXT_ENC LV_TXT_ENC_UTF8
#elif defined CONFIG_LV_TXT_ENC_ASCII
#define CONFIG_LV_TXT_ENC LV_TXT_ENC_ASCII
#endif
#endif

/*------------------
 * BIDI DIRECTION
 *-----------------*/

#ifndef LV_BIDI_BASE_DIR_DEF
#ifdef CONFIG_LV_BIDI_DIR_LTR
#define CONFIG_LV_BIDI_BASE_DIR_DEF LV_BIDI_DIR_LTR
#elif defined CONFIG_LV_BIDI_DIR_RTL
#define CONFIG_LV_BIDI_BASE_DIR_DEF LV_BIDI_DIR_RTL
#elif defined CONFIG_LV_BIDI_DIR_AUTO
#define CONFIG_LV_BIDI_BASE_DIR_DEF LV_BIDI_DIR_AUTO
#endif
#endif

/*------------------
 * EXT CLICK AREA
 *-----------------*/

#ifndef LV_USE_EXT_CLICK_AREA
#ifdef CONFIG_LV_USE_EXT_CLICK_AREA_OFF
#define CONFIG_LV_USE_EXT_CLICK_AREA LV_EXT_CLICK_AREA_OFF
#elif defined CONFIG_LV_USE_EXT_CLICK_AREA_TINY
#define CONFIG_LV_USE_EXT_CLICK_AREA LV_EXT_CLICK_AREA_TINY
#elif defined CONFIG_LV_USE_EXT_CLICK_AREA_FULL
#define CONFIG_LV_USE_EXT_CLICK_AREA LV_EXT_CLICK_AREA_FULL
#endif
#endif

/*------------------
 * LINEMETER PRECISE
 *-----------------*/

#ifndef LV_LINEMETER_PRECISE
#ifdef CONFIG_LV_LINEMETER_PRECISE_NO_EXTRA_PRECISION
#define CONFIG_LV_LINEMETER_PRECISE   0
#elif defined CONFIG_LV_LINEMETER_PRECISE_SOME_EXTRA_PRECISION
#define CONFIG_LV_LINEMETER_PRECISE   1
#elif defined CONFIG_LV_LINEMETER_PRECISE_BEST_PRECISION
#define CONFIG_LV_LINEMETER_PRECISE   2
#endif
#endif

/*------------------
 * SPINNER DEF ANIM
 *-----------------*/

#ifndef LV_SPINNER_DEF_ANIM
#ifdef CONFIG_LV_SPINNER_TYPE_SPINNING_ARC
#define CONFIG_LV_SPINNER_DEF_ANIM   LV_SPINNER_TYPE_SPINNING_ARC
#elif defined CONFIG_LV_SPINNER_TYPE_FILLSPIN_ARC
#define CONFIG_LV_SPINNER_DEF_ANIM   LV_SPINNER_TYPE_FILLSPIN_ARC
#elif defined CONFIG_LV_SPINNER_TYPE_CONSTANT_ARC
#define CONFIG_LV_SPINNER_DEF_ANIM   LV_SPINNER_TYPE_CONSTANT_ARC
#endif
#endif

/*------------------
 * SPRINTF DISABLE FLOAT
 *-----------------*/

#if defined(CONFIG_LV_CONF_SKIP) || defined(LV_CONF_SKIP)
#  ifndef LV_SPRINTF_DISABLE_FLOAT
#    ifndef CONFIG_LV_SPRINTF_DISABLE_FLOAT
#      define LV_SPRINTF_DISABLE_FLOAT    0
#    else
#      define LV_SPRINTF_DISABLE_FLOAT    1
#    endif
#  endif
#endif

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_CONF_KCONFIG_H*/
