#include "ui_muxstorage.h"

lv_obj_t *ui_pnlBIOS;
lv_obj_t *ui_pnlCatalogue;
lv_obj_t *ui_pnlName;
lv_obj_t *ui_pnlRetroArch;
lv_obj_t *ui_pnlConfig;
lv_obj_t *ui_pnlCore;
lv_obj_t *ui_pnlCollection;
lv_obj_t *ui_pnlHistory;
lv_obj_t *ui_pnlMusic;
lv_obj_t *ui_pnlSave;
lv_obj_t *ui_pnlScreenshot;
lv_obj_t *ui_pnlTheme;
lv_obj_t *ui_pnlCataloguePackage;
lv_obj_t *ui_pnlConfigPackage;
lv_obj_t *ui_pnlLanguage;
lv_obj_t *ui_pnlNetwork;
lv_obj_t *ui_pnlSyncthing;
lv_obj_t *ui_pnlUserInit;

lv_obj_t *ui_lblBIOS;
lv_obj_t *ui_lblCatalogue;
lv_obj_t *ui_lblName;
lv_obj_t *ui_lblRetroArch;
lv_obj_t *ui_lblConfig;
lv_obj_t *ui_lblCore;
lv_obj_t *ui_lblCollection;
lv_obj_t *ui_lblHistory;
lv_obj_t *ui_lblMusic;
lv_obj_t *ui_lblSave;
lv_obj_t *ui_lblScreenshot;
lv_obj_t *ui_lblTheme;
lv_obj_t *ui_lblCataloguePackage;
lv_obj_t *ui_lblConfigPackage;
lv_obj_t *ui_lblLanguage;
lv_obj_t *ui_lblNetwork;
lv_obj_t *ui_lblSyncthing;
lv_obj_t *ui_lblUserInit;

lv_obj_t *ui_icoBIOS;
lv_obj_t *ui_icoCatalogue;
lv_obj_t *ui_icoName;
lv_obj_t *ui_icoRetroArch;
lv_obj_t *ui_icoConfig;
lv_obj_t *ui_icoCore;
lv_obj_t *ui_icoCollection;
lv_obj_t *ui_icoHistory;
lv_obj_t *ui_icoMusic;
lv_obj_t *ui_icoSave;
lv_obj_t *ui_icoScreenshot;
lv_obj_t *ui_icoTheme;
lv_obj_t *ui_icoCataloguePackage;
lv_obj_t *ui_icoConfigPackage;
lv_obj_t *ui_icoLanguage;
lv_obj_t *ui_icoNetwork;
lv_obj_t *ui_icoSyncthing;
lv_obj_t *ui_icoUserInit;

lv_obj_t *ui_lblBIOSValue;
lv_obj_t *ui_lblCatalogueValue;
lv_obj_t *ui_lblNameValue;
lv_obj_t *ui_lblRetroArchValue;
lv_obj_t *ui_lblConfigValue;
lv_obj_t *ui_lblCoreValue;
lv_obj_t *ui_lblCollectionValue;
lv_obj_t *ui_lblHistoryValue;
lv_obj_t *ui_lblMusicValue;
lv_obj_t *ui_lblSaveValue;
lv_obj_t *ui_lblScreenshotValue;
lv_obj_t *ui_lblThemeValue;
lv_obj_t *ui_lblCataloguePackageValue;
lv_obj_t *ui_lblConfigPackageValue;
lv_obj_t *ui_lblLanguageValue;
lv_obj_t *ui_lblNetworkValue;
lv_obj_t *ui_lblSyncthingValue;
lv_obj_t *ui_lblUserInitValue;

void init_mux(lv_obj_t *ui_pnlContent) {
    ui_pnlBIOS = lv_obj_create(ui_pnlContent);
    ui_pnlCatalogue = lv_obj_create(ui_pnlContent);
    ui_pnlName = lv_obj_create(ui_pnlContent);
    ui_pnlRetroArch = lv_obj_create(ui_pnlContent);
    ui_pnlConfig = lv_obj_create(ui_pnlContent);
    ui_pnlCore = lv_obj_create(ui_pnlContent);
    ui_pnlCollection = lv_obj_create(ui_pnlContent);
    ui_pnlHistory = lv_obj_create(ui_pnlContent);
    ui_pnlMusic = lv_obj_create(ui_pnlContent);
    ui_pnlSave = lv_obj_create(ui_pnlContent);
    ui_pnlScreenshot = lv_obj_create(ui_pnlContent);
    ui_pnlTheme = lv_obj_create(ui_pnlContent);
    ui_pnlCataloguePackage = lv_obj_create(ui_pnlContent);
    ui_pnlConfigPackage = lv_obj_create(ui_pnlContent);
    ui_pnlLanguage = lv_obj_create(ui_pnlContent);
    ui_pnlNetwork = lv_obj_create(ui_pnlContent);
    ui_pnlSyncthing = lv_obj_create(ui_pnlContent);
    ui_pnlUserInit = lv_obj_create(ui_pnlContent);

    ui_lblBIOS = lv_label_create(ui_pnlBIOS);
    ui_lblCatalogue = lv_label_create(ui_pnlCatalogue);
    ui_lblName = lv_label_create(ui_pnlName);
    ui_lblRetroArch = lv_label_create(ui_pnlRetroArch);
    ui_lblConfig = lv_label_create(ui_pnlConfig);
    ui_lblCore = lv_label_create(ui_pnlCore);
    ui_lblCollection = lv_label_create(ui_pnlCollection);
    ui_lblHistory = lv_label_create(ui_pnlHistory);
    ui_lblMusic = lv_label_create(ui_pnlMusic);
    ui_lblSave = lv_label_create(ui_pnlSave);
    ui_lblScreenshot = lv_label_create(ui_pnlScreenshot);
    ui_lblTheme = lv_label_create(ui_pnlTheme);
    ui_lblCataloguePackage = lv_label_create(ui_pnlCataloguePackage);
    ui_lblConfigPackage = lv_label_create(ui_pnlConfigPackage);
    ui_lblLanguage = lv_label_create(ui_pnlLanguage);
    ui_lblNetwork = lv_label_create(ui_pnlNetwork);
    ui_lblSyncthing = lv_label_create(ui_pnlSyncthing);
    ui_lblUserInit = lv_label_create(ui_pnlUserInit);

    ui_icoBIOS = lv_img_create(ui_pnlBIOS);
    ui_icoCatalogue = lv_img_create(ui_pnlCatalogue);
    ui_icoName = lv_img_create(ui_pnlName);
    ui_icoRetroArch = lv_img_create(ui_pnlRetroArch);
    ui_icoConfig = lv_img_create(ui_pnlConfig);
    ui_icoCore = lv_img_create(ui_pnlCore);
    ui_icoCollection = lv_img_create(ui_pnlCollection);
    ui_icoHistory = lv_img_create(ui_pnlHistory);
    ui_icoMusic = lv_img_create(ui_pnlMusic);
    ui_icoSave = lv_img_create(ui_pnlSave);
    ui_icoScreenshot = lv_img_create(ui_pnlScreenshot);
    ui_icoTheme = lv_img_create(ui_pnlTheme);
    ui_icoCataloguePackage = lv_img_create(ui_pnlCataloguePackage);
    ui_icoConfigPackage = lv_img_create(ui_pnlConfigPackage);
    ui_icoLanguage = lv_img_create(ui_pnlLanguage);
    ui_icoNetwork = lv_img_create(ui_pnlNetwork);
    ui_icoSyncthing = lv_img_create(ui_pnlSyncthing);
    ui_icoUserInit = lv_img_create(ui_pnlUserInit);

    ui_lblBIOSValue = lv_label_create(ui_pnlBIOS);
    ui_lblCatalogueValue = lv_label_create(ui_pnlCatalogue);
    ui_lblNameValue = lv_label_create(ui_pnlName);
    ui_lblRetroArchValue = lv_label_create(ui_pnlRetroArch);
    ui_lblConfigValue = lv_label_create(ui_pnlConfig);
    ui_lblCoreValue = lv_label_create(ui_pnlCore);
    ui_lblCollectionValue = lv_label_create(ui_pnlCollection);
    ui_lblHistoryValue = lv_label_create(ui_pnlHistory);
    ui_lblMusicValue = lv_label_create(ui_pnlMusic);
    ui_lblSaveValue = lv_label_create(ui_pnlSave);
    ui_lblScreenshotValue = lv_label_create(ui_pnlScreenshot);
    ui_lblThemeValue = lv_label_create(ui_pnlTheme);
    ui_lblCataloguePackageValue = lv_label_create(ui_pnlCataloguePackage);
    ui_lblConfigPackageValue = lv_label_create(ui_pnlConfigPackage);
    ui_lblLanguageValue = lv_label_create(ui_pnlLanguage);
    ui_lblNetworkValue = lv_label_create(ui_pnlNetwork);
    ui_lblSyncthingValue = lv_label_create(ui_pnlSyncthing);
    ui_lblUserInitValue = lv_label_create(ui_pnlUserInit);
}
