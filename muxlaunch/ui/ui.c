#include "ui.h"

lv_obj_t *ui_pnlExplore;
lv_obj_t *ui_pnlFavourites;
lv_obj_t *ui_pnlHistory;
lv_obj_t *ui_pnlApps;
lv_obj_t *ui_pnlInfo;
lv_obj_t *ui_pnlConfig;
lv_obj_t *ui_pnlReboot;
lv_obj_t *ui_pnlShutdown;
lv_obj_t *ui_lblContent;
lv_obj_t *ui_lblFavourites;
lv_obj_t *ui_lblHistory;
lv_obj_t *ui_lblApps;
lv_obj_t *ui_lblInfo;
lv_obj_t *ui_lblConfig;
lv_obj_t *ui_lblReboot;
lv_obj_t *ui_lblShutdown;
lv_obj_t *ui_icoContent;
lv_obj_t *ui_icoFavourites;
lv_obj_t *ui_icoHistory;
lv_obj_t *ui_icoApps;
lv_obj_t *ui_icoInfo;
lv_obj_t *ui_icoConfig;
lv_obj_t *ui_icoReboot;
lv_obj_t *ui_icoShutdown;

void ui_init(lv_obj_t *ui_pnlContent) {
    ui_screen_init(ui_pnlContent);
}
