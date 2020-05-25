#include "lvgl/lvgl.h"

// void label_test(void) {
//     lv_obj_t * label1 = lv_label_create(lv_scr_act(), NULL);
//     lv_label_set_long_mode(label1, LV_LABEL_LONG_BREAK);     /*Break the long lines*/
//     lv_label_set_recolor(label1, true);                      /*Enable re-coloring by commands in the text*/
//     lv_label_set_align(label1, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
//     lv_label_set_text(label1, "#000080 Re-color# #0000ff words# #6666ff of a# label "
//                               "and  wrap long text automatically.");
//     lv_obj_set_width(label1, 150);
//     lv_obj_align(label1, NULL, LV_ALIGN_CENTER, 0, -30);

//     lv_obj_t * label2 = lv_label_create(lv_scr_act(), NULL);
//     lv_label_set_long_mode(label2, LV_LABEL_LONG_SROLL_CIRC);     /*Circular scroll*/
//     lv_obj_set_width(label2, 150);
//     lv_label_set_text(label2, "It is a circularly scrolling text. ");
//     lv_obj_align(label2, NULL, LV_ALIGN_CENTER, 0, 30);
// }

void label_test(void) {
    lv_obj_t * label1 = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_long_mode(label1, LV_LABEL_LONG_BREAK);     /*Break the long lines*/
    lv_label_set_recolor(label1, true);                      /*Enable re-coloring by commands in the text*/
    lv_label_set_align(label1, LV_LABEL_ALIGN_CENTER);       /*Center aligned lines*/
    lv_label_set_text(label1, "#000080 Re-color# #0000ff words# #6666ff of a# #ff0000 label and123 wrap long text automatically!#");
    lv_obj_set_width(label1, 400);
    lv_obj_align(label1, NULL, LV_ALIGN_CENTER, 0, -30);

    lv_obj_t * label2 = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_long_mode(label2, LV_LABEL_LONG_SROLL_CIRC);     /*Circular scroll*/
    lv_obj_set_width(label2, 150);
    lv_label_set_text(label2, "It is a circularly scrolling text. ");
    lv_obj_align(label2, NULL, LV_ALIGN_CENTER, 0, 30);
}