#include "ui.h"

void ui_scrPass_screen_init(lv_obj_t *ui_pnlContent);

lv_obj_t *ui_rolComboOne;
lv_obj_t *ui_rolComboTwo;
lv_obj_t *ui_rolComboThree;
lv_obj_t *ui_rolComboFour;
lv_obj_t *ui_rolComboFive;
lv_obj_t *ui_rolComboSix;

void ui_init(lv_obj_t *ui_pnlContent) {
    ui_scrPass_screen_init(ui_pnlContent);
}
