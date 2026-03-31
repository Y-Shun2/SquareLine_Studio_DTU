SET(SOURCES screens/ui_menu_main.c
    screens/ui_real_data.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    fonts/ui_font_myfont.c)

add_library(ui ${SOURCES})
