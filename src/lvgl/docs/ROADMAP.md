# Roadmap

<<<<<<< Updated upstream
This is a summary for thenew fatures of the major releases and a collection of ideas.

This list indicates only the current intention and can be changed.

## v8
Planned to November/December 2020
- Create an `lv_components` repository for compley widgets
   - It makes the core LVGL leaner
   - In `lv_components` we can have a lot and specific widgets
   - Good place for contribution
- New scrolling:
  - See [feat/new-scroll](https://github.com/lvgl/lvgl/tree/feat/new-scroll) branch and  [#1614](https://github.com/lvgl/lvgl/issues/1614)) issue.
  - Remove `lv_page` and support scrolling on `lv_obj`
  - Support "elastic" scrolling when scrolled in
  - Support scroll chaining among any objects types (not only `lv_pages`s)
  - Remove `lv_drag`. Similar effect can be achieved by setting the position in `LV_EVENT_PRESSING`
  - Add snapping
  - Add snap stop to scroll max 1 snap point
  - Already working
- New layouts:
  - See [#1615](https://github.com/lvgl/lvgl/issues/1615) issue
  - [CSS Grid](https://css-tricks.com/snippets/css/a-guide-to-grid/)-like layout support
  - [CSS Flexbox](https://css-tricks.com/snippets/css/a-guide-to-flexbox/)-like layout support
  - Remove `lv_cont` and support layouts on `lv_obj`
- Simplified File system interface ([feat/new_fs_api](https://github.com/lvgl/lvgl/tree/feat/new-fs-api) branch) to make porting easier
  - Work in progress
- Remove the align parameter from `lv_canvas_draw_text`
- Make the copy parameter obsolate in create functions
- Optimize and simplifie styles [#1832](https://github.com/lvgl/lvgl/issues/1832)
- Use a more generic inheritenace [#1919](https://github.com/lvgl/lvgl/issues/1919)

## v8.x
- Add radio button widget
- Unit testing (gtest?). See [#1658](https://github.com/lvgl/lvgl/issues/1658)
- Benchmarking (gem5?). See [#1660](https://github.com/lvgl/lvgl/issues/1660)
- chart: pre-delete `X` pint after the lastly set
- chart: autoscroll to the right

## v9
- Simplify `group`s. Discussion is [here](https://forum.lvgl.io/t/lv-group-tabindex/2927/3).
- Consider direct binary font format support
- Optimize line and circle drawing and masking
- Reconsider color format management for run time color format setting, and custom color format usage. (Also [RGB888](https://github.com/lvgl/lvgl/issues/1722))
- 9-patch support for `lv_imgbtn`.
- Handle stride. See [#1858](https://github.com/lvgl/lvgl/issues/1858)
- Make gradients more versatile
- Make image transformations more versatile
- Allow snapshoting object to tranfrom them to images

## Ideas
- Use [generate-changelog](https://github.com/lob/generate-changelog) to automatically generate changelog
=======
This is a summary for planned new features and a collection of ideas.
This list indicates only the current intention and it can be changed.

## v8.2
See [#2790](https://github.com/lvgl/lvgl/issues/2790)

## Ideas
- Reconsider color format management for run time color format setting, and custom color format usage. (Also [RGB888](https://github.com/lvgl/lvgl/issues/1722))
- Make gradients more versatile
- Image transformations matrix
- Switch to RGBA colors in styles
- Consider direct binary font format support
- Simplify `group`s. Discussion is [here](https://forum.lvgl.io/t/lv-group-tabindex/2927/3).
>>>>>>> Stashed changes
- lv_mem_alloc_aligned(size, align)
- Text node. See [#1701](https://github.com/lvgl/lvgl/issues/1701#issuecomment-699479408)
- CPP binding. See [Forum](https://forum.lvgl.io/t/is-it-possible-to-officially-support-optional-cpp-api/2736)
- Optimize font decompression
<<<<<<< Updated upstream
- Switch to RGBA colors in styles
- Need coverage report for tests
- Need static analyze (via coverity.io or somehing else)
- Support dot_begin and dot_middle long modes for labels
- Add new label alignment modes. [#1656](https://github.com/lvgl/lvgl/issues/1656)
- Support larger images: [#1892](https://github.com/lvgl/lvgl/issues/1892)
=======
- Need static analyze (via coverity.io or something else)
- Support dot_begin and dot_middle long modes for labels
- Add new label alignment modes. [#1656](https://github.com/lvgl/lvgl/issues/1656)
- Support larger images: [#1892](https://github.com/lvgl/lvgl/issues/1892)
- Curved text on path
- Variable binding improvements like Redux?
- Functional programming support, pure view? See [here](https://www.freecodecamp.org/news/the-revolution-of-pure-views-aed339db7da4/)
- Circle layout. See [#2871](https://github.com/lvgl/lvgl/issues/2871)
>>>>>>> Stashed changes
