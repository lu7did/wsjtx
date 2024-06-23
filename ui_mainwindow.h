/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/DoubleClickablePushButton.hpp"
#include "widgets/DoubleClickableRadioButton.hpp"
#include "widgets/HintedSpinBox.hpp"
#include "widgets/LettersSpinBox.hpp"
#include "widgets/RestrictedSpinBox.hpp"
#include "widgets/displaytext.h"
#include "widgets/signalmeter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionWide_Waterfall;
    QAction *actionOpen;
    QAction *actionOpen_next_in_directory;
    QAction *actionDecode_remaining_files_in_directory;
    QAction *actionDelete_all_wav_files_in_SaveDir;
    QAction *actionQuickDecode;
    QAction *actionNone;
    QAction *actionSave_all;
    QAction *actionOnline_User_Guide;
    QAction *actionKeyboard_shortcuts;
    QAction *actionSpecial_mouse_commands;
    QAction *actionJT9;
    QAction *actionSave_decoded;
    QAction *actionMediumDecode;
    QAction *actionDeepestDecode;
    QAction *actionErase_ALL_TXT;
    QAction *actionErase_wsjtx_log_adi;
    QAction *actionJT65;
    QAction *actionAstronomical_data;
    QAction *actionShort_list_of_add_on_prefixes_and_suffixes;
    QAction *actionSettings;
    QAction *actionLocal_User_Guide;
    QAction *actionOpen_log_directory;
    QAction *actionJT4;
    QAction *actionMessage_averaging;
    QAction *actionInclude_averaging;
    QAction *actionInclude_correlation;
    QAction *actionWSPR;
    QAction *actionEcho_Graph;
    QAction *actionEcho;
    QAction *actionFast_Graph;
    QAction *download_samples_action;
    QAction *actionMSK144;
    QAction *actionRelease_Notes;
    QAction *actionEnable_AP_DXcall;
    QAction *actionFreqCal;
    QAction *actionMeasure_reference_spectrum;
    QAction *actionMeasure_phase_response;
    QAction *actionErase_reference_spectrum;
    QAction *actionFrequency_calibration;
    QAction *view_phase_response_action;
    QAction *actionFT8;
    QAction *actionEnable_AP_FT8;
    QAction *actionEnable_AP_JT65;
    QAction *actionSolve_FreqCal;
    QAction *actionCopyright_Notice;
    QAction *fox_log_action;
    QAction *actionFT8_DXpedition_Mode_User_Guide;
    QAction *reset_cabrillo_log_action;
    QAction *actionColors;
    QAction *actionExport_Cabrillo_log;
    QAction *actionQuick_Start_Guide;
    QAction *contest_log_action;
    QAction *actionErase_WSPR_hashtable;
    QAction *actionFT4;
    QAction *actionIgnore_station;
    QAction *actionCall_next;
    QAction *actionClear;
    QAction *actionSet_Rx_Freq;
    QAction *actionQRZ_Lookup;
    QAction *actionCopy;
    QAction *cbDockWF;
    QAction *actionCall_info;
    QAction *actionWSJT_Z_Debug;
    QAction *actionFST4;
    QAction *actionFST4W;
    QAction *actionSWL_Mode;
    QAction *actionAbout_WSJT_Z;
    QAction *actionDark_mode;
    QAction *actionQ65;
    QAction *actionAuto_Clear_Avg;
    QAction *actionUnfiltered_View;
    QAction *actionPSKReporter;
    QWidget *centralWidget;
    QGridLayout *gridLayout_15;
    QHBoxLayout *L_Buttons;
    QCheckBox *cbCQonly;
    QPushButton *logQSOButton;
    QPushButton *stopButton;
    QPushButton *monitorButton;
    QPushButton *EraseButton;
    QPushButton *ClrAvgButton;
    QPushButton *pbBestSP;
    QPushButton *DecodeButton;
    QPushButton *autoButton;
    QPushButton *stopTxButton;
    QPushButton *tuneButton;
    QCheckBox *cb_autoCallNext;
    QCheckBox *cbMenus;
    QCheckBox *cbMini;
    QSplitter *decodes_splitter;
    QFrame *frame;
    QGridLayout *gridLayout_14;
    QVBoxLayout *L_Left;
    QLabel *lh_decodes_title_label;
    QLabel *lh_decodes_headings_label;
    DisplayText *decodedTextBrowser;
    QGroupBox *w_callInfo;
    QGridLayout *gridLayout_6;
    QLineEdit *q_state;
    QLabel *l_q_state;
    QLineEdit *q_name;
    QLineEdit *q_email;
    QLabel *l_q_name;
    QLineEdit *ci_cqzone;
    QLabel *l_q_zipcode;
    QLabel *label_19;
    QLineEdit *q_zipcode;
    QPushButton *q_button;
    QLabel *label_13;
    QLineEdit *ci_dxcc;
    QLabel *label_17;
    QLabel *label_3;
    QLineEdit *q_addr1;
    QLineEdit *q_addr2;
    QLabel *l_q_email;
    QLabel *l_q_addr1;
    QLabel *l_q_addr2;
    QLabel *label_14;
    QLineEdit *ci_ituzone;
    QLabel *label_20;
    QLineEdit *ci_distance;
    QLineEdit *ci_bearing;
    QLabel *label_15;
    QLineEdit *ci_continent;
    QLineEdit *ci_grid;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *ci_dxcall;
    QPushButton *ci_pb_lookup;
    QHBoxLayout *horizontalLayout_19;
    QComboBox *bandComboBox;
    QPushButton *readFreq;
    QLabel *labDialFreq;
    QLabel *labUTC;
    QGroupBox *L_Right_Controls_Bottom;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *cbAutoCQ;
    QCheckBox *cbAutoCall;
    QCheckBox *cbHoldTxFreq;
    QCheckBox *cbRxAll;
    QCheckBox *txFirstCheckBox;
    QFrame *frame_2;
    QGridLayout *gridLayout_13;
    QVBoxLayout *L_Right;
    QVBoxLayout *L_Right_RXFrequency;
    QLabel *rh_decodes_title_label;
    QLabel *rh_decodes_headings_label;
    DisplayText *decodedTextBrowser2;
    QGridLayout *L_Right_Controls;
    QStackedWidget *controls_stack_widget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_8;
    QWidget *QSO_controls_widget;
    QHBoxLayout *horizontalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QPushButton *addButton;
    DoubleClickableRadioButton *txrb4;
    QPushButton *txb6;
    DoubleClickablePushButton *txb1;
    DoubleClickableRadioButton *txrb5;
    DoubleClickableRadioButton *txrb6;
    QRadioButton *txrb3;
    QPushButton *genStdMsgsPushButton;
    QComboBox *tx5;
    QPushButton *txb2;
    DoubleClickableRadioButton *txrb1;
    DoubleClickablePushButton *txb5;
    QLineEdit *tx2;
    QSpinBox *rptSpinBox;
    DoubleClickablePushButton *txb4;
    QPushButton *txb3;
    QLineEdit *tx1;
    QLineEdit *tx6;
    QLineEdit *tx4;
    QRadioButton *txrb2;
    QLineEdit *tx3;
    QPushButton *lookupButton;
    QWidget *tab_7;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_10;
    QSpinBox *sbMax_dB;
    QPushButton *pbFoxReset;
    QSpinBox *sbNslots;
    QComboBox *comboBoxHoundSort;
    QSpinBox *sbNlist;
    QHBoxLayout *horizontalLayout_18;
    QComboBox *comboBoxCQ;
    QCheckBox *cbMoreCQs;
    QSpacerItem *verticalSpacer;
    DisplayText *textBrowser4;
    QWidget *tab_9;
    QGridLayout *gridLayout_7;
    QSpacerItem *verticalSpacer_6;
    QGridLayout *gridLayout_3;
    QCheckBox *cbAutoSeq;
    QCheckBox *cbTx6;
    QCheckBox *cbFirst;
    QSpinBox *sbCQTxFreq;
    RestrictedSpinBox *sbTR;
    QSpinBox *sbF_Low;
    QSpinBox *syncSpinBox;
    QPushButton *pbTxMode;
    QSpinBox *sbSerialNumber;
    HintedSpinBox *sbFtol;
    QSpinBox *sbNB;
    QCheckBox *cbFast9;
    QLabel *labNextCall;
    LettersSpinBox *sbSubmode;
    QCheckBox *cbShMsgs;
    QCheckBox *cbSWL;
    QSpinBox *sbF_High;
    QCheckBox *measure_check_box;
    QLabel *labDXped;
    QCheckBox *cbCQTx;
    QSpinBox *sbMaxDrift;
    QWidget *tab_10;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_10;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_14;
    QCheckBox *cb_callB4onBand;
    QCheckBox *cb_countryB4onBand;
    QCheckBox *cb_continentB4onBand;
    QCheckBox *cb_gridB4onBand;
    QCheckBox *cb_CQZoneB4onBand;
    QCheckBox *cb_ITUZoneB4onBand;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *cb_callB4;
    QCheckBox *cb_countryB4;
    QCheckBox *cb_continentB4;
    QCheckBox *cb_gridB4;
    QCheckBox *cb_CQZoneB4;
    QCheckBox *cb_ITUZoneB4;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_4;
    QCheckBox *cb_c_AS;
    QCheckBox *cb_c_EU;
    QCheckBox *cb_c_AF;
    QCheckBox *cb_c_NA;
    QCheckBox *cb_c_SA;
    QCheckBox *cb_c_AN;
    QCheckBox *cb_c_OC;
    QCheckBox *cb_f_LOTW;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_20;
    QComboBox *cb_prefixFilter;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QComboBox *cb_filter_CQDX_Continent;
    QPlainTextEdit *pte_prefixFilter;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_6;
    QComboBox *cb_ignoreCQTarget;
    QLineEdit *le_ignoreCQXX;
    QSpacerItem *verticalSpacer_7;
    QWidget *tab_3;
    QGridLayout *gridLayout_11;
    QComboBox *cb_stateFilter;
    QPlainTextEdit *pte_stateFilter;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cb_IgnoreAfterWD;
    QPushButton *btn_addToIgnore;
    QPushButton *btn_clearIgnore;
    QPlainTextEdit *pte_IgnoredStations;
    QSpacerItem *verticalSpacer_11;
    QWidget *tab_5;
    QHBoxLayout *horizontalLayout_21;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_16;
    QCheckBox *cb_callB4_alert;
    QCheckBox *cb_countryB4_alert;
    QCheckBox *cb_continentB4_alert;
    QCheckBox *cb_gridB4_alert;
    QCheckBox *cb_CQZoneB4_alert;
    QCheckBox *cb_ITUZoneB4_alert;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_17;
    QCheckBox *cb_callB4onBand_alert;
    QCheckBox *cb_countryB4onBand_alert;
    QCheckBox *cb_continentB4onBand_alert;
    QCheckBox *cb_gridB4onBand_alert;
    QCheckBox *cb_CQZoneB4onBand_alert;
    QCheckBox *cb_ITUZoneB4onBand_alert;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_12;
    QLineEdit *le_CustomAlerts;
    QLabel *label_5;
    QPlainTextEdit *pte_alerts;
    QSpacerItem *verticalSpacer_12;
    QWidget *widget;
    QGridLayout *gridLayout_8;
    QGroupBox *cb_autoModeSwitch;
    QGridLayout *gridLayout_5;
    QLineEdit *le_autoCallLeft;
    QLabel *label_22;
    QLabel *label_21;
    QLineEdit *le_autoCQLeft;
    QSpinBox *sb_autoCallCount;
    QSpinBox *sb_autoCQCount;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QSpinBox *sbMindB;
    QHBoxLayout *horizontalLayout_17;
    QCheckBox *cbCQonlyIncl73;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_23;
    QComboBox *cb_autoCallPriority;
    QGroupBox *cb_bandHopper;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *pte_bandHopper;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_91;
    QWidget *WSPR_controls_widget;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_7;
    QSpinBox *WSPRfreqSpinBox;
    QSpinBox *sbFST4W_RxFreq;
    HintedSpinBox *sbFST4W_FTol;
    QComboBox *RoundRobin;
    QSpinBox *sbTxPercent;
    RestrictedSpinBox *sbTR_FST4W;
    QGroupBox *band_hopping_group_box;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *band_hopping_schedule_push_button;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *cbUploadWSPR_Spots;
    QCheckBox *WSPR_prefer_type_1_check_box;
    QCheckBox *cbNoOwnCall;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pbTxNext;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_14;
    QComboBox *TxPowerComboBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *L_Right_Controls_Middle;
    QSpinBox *RxFreqSpinBox;
    QPushButton *pbT2R;
    QPushButton *pbR2T;
    QSpinBox *TxFreqSpinBox;
    QPushButton *pb_FreeFreq;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pb_WDReset;
    QCheckBox *cb_filtering;
    QHBoxLayout *L_Right_Bottom;
    QLabel *label;
    QLineEdit *dxCallEntry;
    QLabel *label_18;
    QLineEdit *dxGridEntry;
    QComboBox *cb_specialMode;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_16;
    QSlider *outAttenuation;
    SignalMeter *signal_meter_widget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuDecode;
    QMenu *menuSave;
    QMenu *menuHelp;
    QMenu *menuMode;
    QMenu *menuConfig;
    QMenu *menuTools;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1203, 504);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionExit->setMenuRole(QAction::QuitRole);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionWide_Waterfall = new QAction(MainWindow);
        actionWide_Waterfall->setObjectName(QStringLiteral("actionWide_Waterfall"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen_next_in_directory = new QAction(MainWindow);
        actionOpen_next_in_directory->setObjectName(QStringLiteral("actionOpen_next_in_directory"));
        actionDecode_remaining_files_in_directory = new QAction(MainWindow);
        actionDecode_remaining_files_in_directory->setObjectName(QStringLiteral("actionDecode_remaining_files_in_directory"));
        actionDelete_all_wav_files_in_SaveDir = new QAction(MainWindow);
        actionDelete_all_wav_files_in_SaveDir->setObjectName(QStringLiteral("actionDelete_all_wav_files_in_SaveDir"));
        actionQuickDecode = new QAction(MainWindow);
        actionQuickDecode->setObjectName(QStringLiteral("actionQuickDecode"));
        actionQuickDecode->setCheckable(true);
        actionQuickDecode->setChecked(false);
        actionNone = new QAction(MainWindow);
        actionNone->setObjectName(QStringLiteral("actionNone"));
        actionNone->setCheckable(true);
        actionNone->setChecked(true);
        actionSave_all = new QAction(MainWindow);
        actionSave_all->setObjectName(QStringLiteral("actionSave_all"));
        actionSave_all->setCheckable(true);
        actionOnline_User_Guide = new QAction(MainWindow);
        actionOnline_User_Guide->setObjectName(QStringLiteral("actionOnline_User_Guide"));
        actionKeyboard_shortcuts = new QAction(MainWindow);
        actionKeyboard_shortcuts->setObjectName(QStringLiteral("actionKeyboard_shortcuts"));
        actionSpecial_mouse_commands = new QAction(MainWindow);
        actionSpecial_mouse_commands->setObjectName(QStringLiteral("actionSpecial_mouse_commands"));
        actionJT9 = new QAction(MainWindow);
        actionJT9->setObjectName(QStringLiteral("actionJT9"));
        actionJT9->setCheckable(true);
        actionJT9->setChecked(true);
        actionSave_decoded = new QAction(MainWindow);
        actionSave_decoded->setObjectName(QStringLiteral("actionSave_decoded"));
        actionSave_decoded->setCheckable(true);
        actionSave_decoded->setEnabled(true);
        actionMediumDecode = new QAction(MainWindow);
        actionMediumDecode->setObjectName(QStringLiteral("actionMediumDecode"));
        actionMediumDecode->setCheckable(true);
        actionMediumDecode->setChecked(false);
        actionDeepestDecode = new QAction(MainWindow);
        actionDeepestDecode->setObjectName(QStringLiteral("actionDeepestDecode"));
        actionDeepestDecode->setCheckable(true);
        actionDeepestDecode->setChecked(true);
        actionErase_ALL_TXT = new QAction(MainWindow);
        actionErase_ALL_TXT->setObjectName(QStringLiteral("actionErase_ALL_TXT"));
        actionErase_wsjtx_log_adi = new QAction(MainWindow);
        actionErase_wsjtx_log_adi->setObjectName(QStringLiteral("actionErase_wsjtx_log_adi"));
        actionJT65 = new QAction(MainWindow);
        actionJT65->setObjectName(QStringLiteral("actionJT65"));
        actionJT65->setCheckable(true);
        actionAstronomical_data = new QAction(MainWindow);
        actionAstronomical_data->setObjectName(QStringLiteral("actionAstronomical_data"));
        actionAstronomical_data->setCheckable(true);
        actionShort_list_of_add_on_prefixes_and_suffixes = new QAction(MainWindow);
        actionShort_list_of_add_on_prefixes_and_suffixes->setObjectName(QStringLiteral("actionShort_list_of_add_on_prefixes_and_suffixes"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionLocal_User_Guide = new QAction(MainWindow);
        actionLocal_User_Guide->setObjectName(QStringLiteral("actionLocal_User_Guide"));
        actionOpen_log_directory = new QAction(MainWindow);
        actionOpen_log_directory->setObjectName(QStringLiteral("actionOpen_log_directory"));
        actionJT4 = new QAction(MainWindow);
        actionJT4->setObjectName(QStringLiteral("actionJT4"));
        actionJT4->setCheckable(true);
        actionMessage_averaging = new QAction(MainWindow);
        actionMessage_averaging->setObjectName(QStringLiteral("actionMessage_averaging"));
        actionInclude_averaging = new QAction(MainWindow);
        actionInclude_averaging->setObjectName(QStringLiteral("actionInclude_averaging"));
        actionInclude_averaging->setCheckable(true);
        actionInclude_correlation = new QAction(MainWindow);
        actionInclude_correlation->setObjectName(QStringLiteral("actionInclude_correlation"));
        actionInclude_correlation->setCheckable(true);
        actionWSPR = new QAction(MainWindow);
        actionWSPR->setObjectName(QStringLiteral("actionWSPR"));
        actionWSPR->setCheckable(true);
        actionEcho_Graph = new QAction(MainWindow);
        actionEcho_Graph->setObjectName(QStringLiteral("actionEcho_Graph"));
        actionEcho = new QAction(MainWindow);
        actionEcho->setObjectName(QStringLiteral("actionEcho"));
        actionEcho->setCheckable(true);
        actionFast_Graph = new QAction(MainWindow);
        actionFast_Graph->setObjectName(QStringLiteral("actionFast_Graph"));
        download_samples_action = new QAction(MainWindow);
        download_samples_action->setObjectName(QStringLiteral("download_samples_action"));
        actionMSK144 = new QAction(MainWindow);
        actionMSK144->setObjectName(QStringLiteral("actionMSK144"));
        actionMSK144->setCheckable(true);
        actionRelease_Notes = new QAction(MainWindow);
        actionRelease_Notes->setObjectName(QStringLiteral("actionRelease_Notes"));
        actionEnable_AP_DXcall = new QAction(MainWindow);
        actionEnable_AP_DXcall->setObjectName(QStringLiteral("actionEnable_AP_DXcall"));
        actionEnable_AP_DXcall->setCheckable(true);
        actionFreqCal = new QAction(MainWindow);
        actionFreqCal->setObjectName(QStringLiteral("actionFreqCal"));
        actionFreqCal->setCheckable(true);
        actionMeasure_reference_spectrum = new QAction(MainWindow);
        actionMeasure_reference_spectrum->setObjectName(QStringLiteral("actionMeasure_reference_spectrum"));
        actionMeasure_phase_response = new QAction(MainWindow);
        actionMeasure_phase_response->setObjectName(QStringLiteral("actionMeasure_phase_response"));
        actionErase_reference_spectrum = new QAction(MainWindow);
        actionErase_reference_spectrum->setObjectName(QStringLiteral("actionErase_reference_spectrum"));
        actionFrequency_calibration = new QAction(MainWindow);
        actionFrequency_calibration->setObjectName(QStringLiteral("actionFrequency_calibration"));
        actionFrequency_calibration->setCheckable(true);
        view_phase_response_action = new QAction(MainWindow);
        view_phase_response_action->setObjectName(QStringLiteral("view_phase_response_action"));
        actionFT8 = new QAction(MainWindow);
        actionFT8->setObjectName(QStringLiteral("actionFT8"));
        actionFT8->setCheckable(true);
        actionFT8->setEnabled(true);
        actionEnable_AP_FT8 = new QAction(MainWindow);
        actionEnable_AP_FT8->setObjectName(QStringLiteral("actionEnable_AP_FT8"));
        actionEnable_AP_FT8->setCheckable(true);
        actionEnable_AP_JT65 = new QAction(MainWindow);
        actionEnable_AP_JT65->setObjectName(QStringLiteral("actionEnable_AP_JT65"));
        actionEnable_AP_JT65->setCheckable(true);
        actionSolve_FreqCal = new QAction(MainWindow);
        actionSolve_FreqCal->setObjectName(QStringLiteral("actionSolve_FreqCal"));
        actionCopyright_Notice = new QAction(MainWindow);
        actionCopyright_Notice->setObjectName(QStringLiteral("actionCopyright_Notice"));
        fox_log_action = new QAction(MainWindow);
        fox_log_action->setObjectName(QStringLiteral("fox_log_action"));
        fox_log_action->setCheckable(false);
        actionFT8_DXpedition_Mode_User_Guide = new QAction(MainWindow);
        actionFT8_DXpedition_Mode_User_Guide->setObjectName(QStringLiteral("actionFT8_DXpedition_Mode_User_Guide"));
        reset_cabrillo_log_action = new QAction(MainWindow);
        reset_cabrillo_log_action->setObjectName(QStringLiteral("reset_cabrillo_log_action"));
        actionColors = new QAction(MainWindow);
        actionColors->setObjectName(QStringLiteral("actionColors"));
        actionExport_Cabrillo_log = new QAction(MainWindow);
        actionExport_Cabrillo_log->setObjectName(QStringLiteral("actionExport_Cabrillo_log"));
        actionQuick_Start_Guide = new QAction(MainWindow);
        actionQuick_Start_Guide->setObjectName(QStringLiteral("actionQuick_Start_Guide"));
        contest_log_action = new QAction(MainWindow);
        contest_log_action->setObjectName(QStringLiteral("contest_log_action"));
        actionErase_WSPR_hashtable = new QAction(MainWindow);
        actionErase_WSPR_hashtable->setObjectName(QStringLiteral("actionErase_WSPR_hashtable"));
        actionFT4 = new QAction(MainWindow);
        actionFT4->setObjectName(QStringLiteral("actionFT4"));
        actionFT4->setCheckable(true);
        actionIgnore_station = new QAction(MainWindow);
        actionIgnore_station->setObjectName(QStringLiteral("actionIgnore_station"));
        actionCall_next = new QAction(MainWindow);
        actionCall_next->setObjectName(QStringLiteral("actionCall_next"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        actionSet_Rx_Freq = new QAction(MainWindow);
        actionSet_Rx_Freq->setObjectName(QStringLiteral("actionSet_Rx_Freq"));
        actionQRZ_Lookup = new QAction(MainWindow);
        actionQRZ_Lookup->setObjectName(QStringLiteral("actionQRZ_Lookup"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        cbDockWF = new QAction(MainWindow);
        cbDockWF->setObjectName(QStringLiteral("cbDockWF"));
        cbDockWF->setCheckable(true);
        actionCall_info = new QAction(MainWindow);
        actionCall_info->setObjectName(QStringLiteral("actionCall_info"));
        actionCall_info->setCheckable(true);
        actionWSJT_Z_Debug = new QAction(MainWindow);
        actionWSJT_Z_Debug->setObjectName(QStringLiteral("actionWSJT_Z_Debug"));
        actionWSJT_Z_Debug->setCheckable(true);
        actionWSJT_Z_Debug->setChecked(false);
        actionFST4 = new QAction(MainWindow);
        actionFST4->setObjectName(QStringLiteral("actionFST4"));
        actionFST4->setCheckable(true);
        actionFST4W = new QAction(MainWindow);
        actionFST4W->setObjectName(QStringLiteral("actionFST4W"));
        actionFST4W->setCheckable(true);
        actionSWL_Mode = new QAction(MainWindow);
        actionSWL_Mode->setObjectName(QStringLiteral("actionSWL_Mode"));
        actionSWL_Mode->setCheckable(true);
        actionAbout_WSJT_Z = new QAction(MainWindow);
        actionAbout_WSJT_Z->setObjectName(QStringLiteral("actionAbout_WSJT_Z"));
        actionDark_mode = new QAction(MainWindow);
        actionDark_mode->setObjectName(QStringLiteral("actionDark_mode"));
        actionDark_mode->setCheckable(true);
        actionQ65 = new QAction(MainWindow);
        actionQ65->setObjectName(QStringLiteral("actionQ65"));
        actionQ65->setCheckable(true);
        actionAuto_Clear_Avg = new QAction(MainWindow);
        actionAuto_Clear_Avg->setObjectName(QStringLiteral("actionAuto_Clear_Avg"));
        actionAuto_Clear_Avg->setCheckable(true);
        actionUnfiltered_View = new QAction(MainWindow);
        actionUnfiltered_View->setObjectName(QStringLiteral("actionUnfiltered_View"));
        actionUnfiltered_View->setCheckable(false);
        actionPSKReporter = new QAction(MainWindow);
        actionPSKReporter->setObjectName(QStringLiteral("actionPSKReporter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_15 = new QGridLayout(centralWidget);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        L_Buttons = new QHBoxLayout();
        L_Buttons->setSpacing(6);
        L_Buttons->setObjectName(QStringLiteral("L_Buttons"));
        cbCQonly = new QCheckBox(centralWidget);
        cbCQonly->setObjectName(QStringLiteral("cbCQonly"));

        L_Buttons->addWidget(cbCQonly);

        logQSOButton = new QPushButton(centralWidget);
        logQSOButton->setObjectName(QStringLiteral("logQSOButton"));
        logQSOButton->setMinimumSize(QSize(50, 0));

        L_Buttons->addWidget(logQSOButton);

        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setMinimumSize(QSize(50, 0));

        L_Buttons->addWidget(stopButton);

        monitorButton = new QPushButton(centralWidget);
        monitorButton->setObjectName(QStringLiteral("monitorButton"));
        monitorButton->setMinimumSize(QSize(50, 0));
        monitorButton->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"	background-color: #00aa00;\n"
"    border-style: outset;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"    border-color: black;\n"
"	min-width: 5em;\n"
"	padding: 3px;\n"
"}"));
        monitorButton->setCheckable(true);
        monitorButton->setChecked(false);

        L_Buttons->addWidget(monitorButton);

        EraseButton = new QPushButton(centralWidget);
        EraseButton->setObjectName(QStringLiteral("EraseButton"));
        EraseButton->setMinimumSize(QSize(50, 0));

        L_Buttons->addWidget(EraseButton);

        ClrAvgButton = new QPushButton(centralWidget);
        ClrAvgButton->setObjectName(QStringLiteral("ClrAvgButton"));
        ClrAvgButton->setEnabled(true);

        L_Buttons->addWidget(ClrAvgButton);

        pbBestSP = new QPushButton(centralWidget);
        pbBestSP->setObjectName(QStringLiteral("pbBestSP"));
        pbBestSP->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"	background-color: red;\n"
"	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	border-color: black;\n"
"	min-width: 5em;\n"
"	padding: 3px;\n"
"}"));
        pbBestSP->setCheckable(true);

        L_Buttons->addWidget(pbBestSP);

        DecodeButton = new QPushButton(centralWidget);
        DecodeButton->setObjectName(QStringLiteral("DecodeButton"));
        DecodeButton->setMinimumSize(QSize(50, 0));
        DecodeButton->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"	background-color: cyan;\n"
"	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	border-color: black;\n"
"	min-width: 5em;\n"
"	padding: 3px;\n"
"}"));
        DecodeButton->setCheckable(true);

        L_Buttons->addWidget(DecodeButton);

        autoButton = new QPushButton(centralWidget);
        autoButton->setObjectName(QStringLiteral("autoButton"));
        autoButton->setMinimumSize(QSize(50, 0));
        autoButton->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"	background-color: red;\n"
"	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	border-color: black;\n"
"	min-width: 5em;\n"
"	padding: 3px;\n"
"}"));
        autoButton->setCheckable(true);

        L_Buttons->addWidget(autoButton);

        stopTxButton = new QPushButton(centralWidget);
        stopTxButton->setObjectName(QStringLiteral("stopTxButton"));
        stopTxButton->setMinimumSize(QSize(50, 0));

        L_Buttons->addWidget(stopTxButton);

        tuneButton = new QPushButton(centralWidget);
        tuneButton->setObjectName(QStringLiteral("tuneButton"));
        tuneButton->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"	background-color: red;\n"
"	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	border-color: black;\n"
"	min-width: 5em;\n"
"	padding: 3px;\n"
"}"));
        tuneButton->setCheckable(true);

        L_Buttons->addWidget(tuneButton);

        cb_autoCallNext = new QCheckBox(centralWidget);
        cb_autoCallNext->setObjectName(QStringLiteral("cb_autoCallNext"));

        L_Buttons->addWidget(cb_autoCallNext);

        cbMenus = new QCheckBox(centralWidget);
        cbMenus->setObjectName(QStringLiteral("cbMenus"));
        cbMenus->setChecked(true);

        L_Buttons->addWidget(cbMenus);

        cbMini = new QCheckBox(centralWidget);
        cbMini->setObjectName(QStringLiteral("cbMini"));

        L_Buttons->addWidget(cbMini);

        L_Buttons->setStretch(1, 2);
        L_Buttons->setStretch(2, 2);
        L_Buttons->setStretch(3, 2);
        L_Buttons->setStretch(4, 2);
        L_Buttons->setStretch(5, 2);
        L_Buttons->setStretch(7, 2);
        L_Buttons->setStretch(8, 2);
        L_Buttons->setStretch(9, 2);
        L_Buttons->setStretch(10, 2);
        L_Buttons->setStretch(12, 1);

        gridLayout_15->addLayout(L_Buttons, 1, 0, 1, 1);

        decodes_splitter = new QSplitter(centralWidget);
        decodes_splitter->setObjectName(QStringLiteral("decodes_splitter"));
        decodes_splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(decodes_splitter);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_14 = new QGridLayout(frame);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        L_Left = new QVBoxLayout();
        L_Left->setSpacing(6);
        L_Left->setObjectName(QStringLiteral("L_Left"));
        lh_decodes_title_label = new QLabel(frame);
        lh_decodes_title_label->setObjectName(QStringLiteral("lh_decodes_title_label"));
        lh_decodes_title_label->setMaximumSize(QSize(500, 16777215));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        lh_decodes_title_label->setFont(font);
        lh_decodes_title_label->setAlignment(Qt::AlignCenter);

        L_Left->addWidget(lh_decodes_title_label);

        lh_decodes_headings_label = new QLabel(frame);
        lh_decodes_headings_label->setObjectName(QStringLiteral("lh_decodes_headings_label"));
        lh_decodes_headings_label->setMinimumSize(QSize(300, 20));
        lh_decodes_headings_label->setMaximumSize(QSize(16777215, 20));
        QPalette palette;
        QBrush brush(QColor(252, 252, 252, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(170, 170, 170, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lh_decodes_headings_label->setPalette(palette);
        lh_decodes_headings_label->setAutoFillBackground(true);
        lh_decodes_headings_label->setTextFormat(Qt::PlainText);
        lh_decodes_headings_label->setIndent(5);

        L_Left->addWidget(lh_decodes_headings_label);

        decodedTextBrowser = new DisplayText(frame);
        decodedTextBrowser->setObjectName(QStringLiteral("decodedTextBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(10);
        sizePolicy1.setHeightForWidth(decodedTextBrowser->sizePolicy().hasHeightForWidth());
        decodedTextBrowser->setSizePolicy(sizePolicy1);
        decodedTextBrowser->setMinimumSize(QSize(150, 50));
        decodedTextBrowser->setMouseTracking(true);
        decodedTextBrowser->setContextMenuPolicy(Qt::ActionsContextMenu);
        decodedTextBrowser->setLayoutDirection(Qt::LeftToRight);
        decodedTextBrowser->setAutoFillBackground(false);
        decodedTextBrowser->setFrameShape(QFrame::StyledPanel);
        decodedTextBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        decodedTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        decodedTextBrowser->setReadOnly(false);
        decodedTextBrowser->setCursorWidth(0);
        decodedTextBrowser->setTextInteractionFlags(Qt::TextEditorInteraction);

        L_Left->addWidget(decodedTextBrowser);

        w_callInfo = new QGroupBox(frame);
        w_callInfo->setObjectName(QStringLiteral("w_callInfo"));
        gridLayout_6 = new QGridLayout(w_callInfo);
        gridLayout_6->setSpacing(4);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(4, 4, 4, 4);
        q_state = new QLineEdit(w_callInfo);
        q_state->setObjectName(QStringLiteral("q_state"));
        q_state->setMaximumSize(QSize(16777215, 21));

        gridLayout_6->addWidget(q_state, 3, 8, 1, 1);

        l_q_state = new QLabel(w_callInfo);
        l_q_state->setObjectName(QStringLiteral("l_q_state"));
        l_q_state->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(l_q_state, 3, 7, 1, 1);

        q_name = new QLineEdit(w_callInfo);
        q_name->setObjectName(QStringLiteral("q_name"));
        q_name->setMaximumSize(QSize(16777215, 21));

        gridLayout_6->addWidget(q_name, 3, 1, 1, 1);

        q_email = new QLineEdit(w_callInfo);
        q_email->setObjectName(QStringLiteral("q_email"));
        q_email->setMaximumSize(QSize(16777215, 21));

        gridLayout_6->addWidget(q_email, 4, 1, 1, 1);

        l_q_name = new QLabel(w_callInfo);
        l_q_name->setObjectName(QStringLiteral("l_q_name"));
        l_q_name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(l_q_name, 3, 0, 1, 1);

        ci_cqzone = new QLineEdit(w_callInfo);
        ci_cqzone->setObjectName(QStringLiteral("ci_cqzone"));
        ci_cqzone->setMaximumSize(QSize(16777215, 21));
        ci_cqzone->setReadOnly(false);

        gridLayout_6->addWidget(ci_cqzone, 5, 1, 1, 1);

        l_q_zipcode = new QLabel(w_callInfo);
        l_q_zipcode->setObjectName(QStringLiteral("l_q_zipcode"));
        l_q_zipcode->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(l_q_zipcode, 4, 7, 1, 1);

        label_19 = new QLabel(w_callInfo);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_19, 5, 0, 1, 1);

        q_zipcode = new QLineEdit(w_callInfo);
        q_zipcode->setObjectName(QStringLiteral("q_zipcode"));
        q_zipcode->setMaximumSize(QSize(16777215, 21));

        gridLayout_6->addWidget(q_zipcode, 4, 8, 1, 1);

        q_button = new QPushButton(w_callInfo);
        q_button->setObjectName(QStringLiteral("q_button"));
        q_button->setMaximumSize(QSize(16777215, 21));
        QFont font1;
        font1.setPointSize(7);
        q_button->setFont(font1);

        gridLayout_6->addWidget(q_button, 6, 8, 1, 1);

        label_13 = new QLabel(w_callInfo);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_13, 2, 7, 1, 1);

        ci_dxcc = new QLineEdit(w_callInfo);
        ci_dxcc->setObjectName(QStringLiteral("ci_dxcc"));
        ci_dxcc->setMaximumSize(QSize(16777215, 21));
        ci_dxcc->setReadOnly(false);

        gridLayout_6->addWidget(ci_dxcc, 2, 6, 1, 1);

        label_17 = new QLabel(w_callInfo);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_17, 2, 5, 1, 1);

        label_3 = new QLabel(w_callInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_3, 2, 0, 1, 1);

        q_addr1 = new QLineEdit(w_callInfo);
        q_addr1->setObjectName(QStringLiteral("q_addr1"));
        q_addr1->setMaximumSize(QSize(16777215, 21));

        gridLayout_6->addWidget(q_addr1, 3, 6, 1, 1);

        q_addr2 = new QLineEdit(w_callInfo);
        q_addr2->setObjectName(QStringLiteral("q_addr2"));
        q_addr2->setMaximumSize(QSize(16777215, 21));

        gridLayout_6->addWidget(q_addr2, 4, 6, 1, 1);

        l_q_email = new QLabel(w_callInfo);
        l_q_email->setObjectName(QStringLiteral("l_q_email"));
        l_q_email->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(l_q_email, 4, 0, 1, 1);

        l_q_addr1 = new QLabel(w_callInfo);
        l_q_addr1->setObjectName(QStringLiteral("l_q_addr1"));
        l_q_addr1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(l_q_addr1, 3, 5, 1, 1);

        l_q_addr2 = new QLabel(w_callInfo);
        l_q_addr2->setObjectName(QStringLiteral("l_q_addr2"));
        l_q_addr2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(l_q_addr2, 4, 5, 1, 1);

        label_14 = new QLabel(w_callInfo);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_14, 6, 0, 1, 1);

        ci_ituzone = new QLineEdit(w_callInfo);
        ci_ituzone->setObjectName(QStringLiteral("ci_ituzone"));
        ci_ituzone->setMaximumSize(QSize(16777215, 21));
        ci_ituzone->setReadOnly(false);

        gridLayout_6->addWidget(ci_ituzone, 5, 6, 1, 1);

        label_20 = new QLabel(w_callInfo);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_20, 5, 5, 1, 1);

        ci_distance = new QLineEdit(w_callInfo);
        ci_distance->setObjectName(QStringLiteral("ci_distance"));
        ci_distance->setMaximumSize(QSize(16777215, 21));
        ci_distance->setReadOnly(false);

        gridLayout_6->addWidget(ci_distance, 6, 1, 1, 1);

        ci_bearing = new QLineEdit(w_callInfo);
        ci_bearing->setObjectName(QStringLiteral("ci_bearing"));
        ci_bearing->setMaximumSize(QSize(16777215, 21));
        ci_bearing->setReadOnly(false);

        gridLayout_6->addWidget(ci_bearing, 6, 6, 1, 1);

        label_15 = new QLabel(w_callInfo);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_15, 6, 5, 1, 1);

        ci_continent = new QLineEdit(w_callInfo);
        ci_continent->setObjectName(QStringLiteral("ci_continent"));
        ci_continent->setMaximumSize(QSize(16777215, 21));
        ci_continent->setReadOnly(false);

        gridLayout_6->addWidget(ci_continent, 2, 8, 1, 1);

        ci_grid = new QLineEdit(w_callInfo);
        ci_grid->setObjectName(QStringLiteral("ci_grid"));
        ci_grid->setMaximumSize(QSize(16777215, 21));
        ci_grid->setReadOnly(false);

        gridLayout_6->addWidget(ci_grid, 5, 8, 1, 1);

        label_11 = new QLabel(w_callInfo);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_11, 5, 7, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ci_dxcall = new QLineEdit(w_callInfo);
        ci_dxcall->setObjectName(QStringLiteral("ci_dxcall"));
        ci_dxcall->setMaximumSize(QSize(16777215, 21));
        ci_dxcall->setReadOnly(false);

        horizontalLayout_2->addWidget(ci_dxcall);

        ci_pb_lookup = new QPushButton(w_callInfo);
        ci_pb_lookup->setObjectName(QStringLiteral("ci_pb_lookup"));
        ci_pb_lookup->setMaximumSize(QSize(21, 21));
        ci_pb_lookup->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout_2->addWidget(ci_pb_lookup);


        gridLayout_6->addLayout(horizontalLayout_2, 2, 1, 1, 1);


        L_Left->addWidget(w_callInfo);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_19->setSizeConstraint(QLayout::SetMaximumSize);
        bandComboBox = new QComboBox(frame);
        bandComboBox->setObjectName(QStringLiteral("bandComboBox"));
        bandComboBox->setEditable(true);
        bandComboBox->setInsertPolicy(QComboBox::NoInsert);
        bandComboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        horizontalLayout_19->addWidget(bandComboBox);

        readFreq = new QPushButton(frame);
        readFreq->setObjectName(QStringLiteral("readFreq"));
        readFreq->setEnabled(false);
        readFreq->setStyleSheet(QLatin1String("QPushButton {\n"
" font-family: helvetica;\n"
" font-size: 9pt;\n"
" font-weight: bold;\n"
" background-color: white;\n"
" color: black;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" border-color: gray;\n"
" max-width:20px;\n"
" max-height:20px;\n"
" min-width:20px;\n"
" min-height:20px;\n"
"}\n"
"QPushButton[state=\"error\"] {\n"
" background-color: red;\n"
"}\n"
"QPushButton[state=\"warning\"] {\n"
" background-color: orange;\n"
"}\n"
"QPushButton[state=\"ok\"] {\n"
" background-color: #00ff00;\n"
"}"));

        horizontalLayout_19->addWidget(readFreq);

        labDialFreq = new QLabel(frame);
        labDialFreq->setObjectName(QStringLiteral("labDialFreq"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labDialFreq->sizePolicy().hasHeightForWidth());
        labDialFreq->setSizePolicy(sizePolicy2);
        labDialFreq->setStyleSheet(QLatin1String("QLabel {\n"
"  font-family: MS Shell Dlg 2;\n"
"  font-size: 12pt;\n"
"   color : yellow;\n"
"   background-color : black;\n"
"}\n"
"QLabel[oob=\"true\"] {\n"
"  background-color: red;\n"
"}\n"
""));
        labDialFreq->setAlignment(Qt::AlignCenter);
        labDialFreq->setMargin(2);

        horizontalLayout_19->addWidget(labDialFreq);

        labUTC = new QLabel(frame);
        labUTC->setObjectName(QStringLiteral("labUTC"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labUTC->sizePolicy().hasHeightForWidth());
        labUTC->setSizePolicy(sizePolicy3);
        labUTC->setStyleSheet(QLatin1String("QLabel {\n"
"  font-family: MS Shell Dlg 2;\n"
"  font-size: 12pt;\n"
"  background-color : black;\n"
"  color : yellow;\n"
"}"));
        labUTC->setFrameShape(QFrame::StyledPanel);
        labUTC->setFrameShadow(QFrame::Sunken);
        labUTC->setLineWidth(2);
        labUTC->setMidLineWidth(0);
        labUTC->setAlignment(Qt::AlignCenter);
        labUTC->setMargin(2);

        horizontalLayout_19->addWidget(labUTC);


        L_Left->addLayout(horizontalLayout_19);

        L_Right_Controls_Bottom = new QGroupBox(frame);
        L_Right_Controls_Bottom->setObjectName(QStringLiteral("L_Right_Controls_Bottom"));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        L_Right_Controls_Bottom->setFont(font2);
        L_Right_Controls_Bottom->setAutoFillBackground(false);
        horizontalLayout_9 = new QHBoxLayout(L_Right_Controls_Bottom);
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        cbAutoCQ = new QCheckBox(L_Right_Controls_Bottom);
        cbAutoCQ->setObjectName(QStringLiteral("cbAutoCQ"));

        horizontalLayout_9->addWidget(cbAutoCQ);

        cbAutoCall = new QCheckBox(L_Right_Controls_Bottom);
        cbAutoCall->setObjectName(QStringLiteral("cbAutoCall"));

        horizontalLayout_9->addWidget(cbAutoCall);

        cbHoldTxFreq = new QCheckBox(L_Right_Controls_Bottom);
        cbHoldTxFreq->setObjectName(QStringLiteral("cbHoldTxFreq"));

        horizontalLayout_9->addWidget(cbHoldTxFreq);

        cbRxAll = new QCheckBox(L_Right_Controls_Bottom);
        cbRxAll->setObjectName(QStringLiteral("cbRxAll"));

        horizontalLayout_9->addWidget(cbRxAll);

        txFirstCheckBox = new QCheckBox(L_Right_Controls_Bottom);
        txFirstCheckBox->setObjectName(QStringLiteral("txFirstCheckBox"));

        horizontalLayout_9->addWidget(txFirstCheckBox);


        L_Left->addWidget(L_Right_Controls_Bottom);


        gridLayout_14->addLayout(L_Left, 0, 0, 1, 1);

        decodes_splitter->addWidget(frame);
        frame_2 = new QFrame(decodes_splitter);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_13 = new QGridLayout(frame_2);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        L_Right = new QVBoxLayout();
        L_Right->setSpacing(6);
        L_Right->setObjectName(QStringLiteral("L_Right"));
        L_Right_RXFrequency = new QVBoxLayout();
        L_Right_RXFrequency->setSpacing(6);
        L_Right_RXFrequency->setObjectName(QStringLiteral("L_Right_RXFrequency"));
        rh_decodes_title_label = new QLabel(frame_2);
        rh_decodes_title_label->setObjectName(QStringLiteral("rh_decodes_title_label"));
        rh_decodes_title_label->setFont(font);
        rh_decodes_title_label->setAlignment(Qt::AlignCenter);

        L_Right_RXFrequency->addWidget(rh_decodes_title_label);

        rh_decodes_headings_label = new QLabel(frame_2);
        rh_decodes_headings_label->setObjectName(QStringLiteral("rh_decodes_headings_label"));
        rh_decodes_headings_label->setMinimumSize(QSize(300, 20));
        rh_decodes_headings_label->setMaximumSize(QSize(16777215, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        rh_decodes_headings_label->setPalette(palette1);
        rh_decodes_headings_label->setAutoFillBackground(true);
        rh_decodes_headings_label->setTextFormat(Qt::PlainText);
        rh_decodes_headings_label->setIndent(5);

        L_Right_RXFrequency->addWidget(rh_decodes_headings_label);

        decodedTextBrowser2 = new DisplayText(frame_2);
        decodedTextBrowser2->setObjectName(QStringLiteral("decodedTextBrowser2"));
        decodedTextBrowser2->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(10);
        sizePolicy4.setHeightForWidth(decodedTextBrowser2->sizePolicy().hasHeightForWidth());
        decodedTextBrowser2->setSizePolicy(sizePolicy4);
        decodedTextBrowser2->setMinimumSize(QSize(150, 50));
        decodedTextBrowser2->setMouseTracking(true);
        decodedTextBrowser2->setContextMenuPolicy(Qt::ActionsContextMenu);
        decodedTextBrowser2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        decodedTextBrowser2->setCursorWidth(0);
        decodedTextBrowser2->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        L_Right_RXFrequency->addWidget(decodedTextBrowser2);


        L_Right->addLayout(L_Right_RXFrequency);

        L_Right_Controls = new QGridLayout();
        L_Right_Controls->setSpacing(6);
        L_Right_Controls->setObjectName(QStringLiteral("L_Right_Controls"));
        controls_stack_widget = new QStackedWidget(frame_2);
        controls_stack_widget->setObjectName(QStringLiteral("controls_stack_widget"));
        sizePolicy3.setHeightForWidth(controls_stack_widget->sizePolicy().hasHeightForWidth());
        controls_stack_widget->setSizePolicy(sizePolicy3);
        controls_stack_widget->setMaximumSize(QSize(16777215, 220));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(page->sizePolicy().hasHeightForWidth());
        page->setSizePolicy(sizePolicy5);
        horizontalLayout_8 = new QHBoxLayout(page);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        QSO_controls_widget = new QWidget(page);
        QSO_controls_widget->setObjectName(QStringLiteral("QSO_controls_widget"));
        sizePolicy5.setHeightForWidth(QSO_controls_widget->sizePolicy().hasHeightForWidth());
        QSO_controls_widget->setSizePolicy(sizePolicy5);
        horizontalLayout_6 = new QHBoxLayout(QSO_controls_widget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(QSO_controls_widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setUsesScrollButtons(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy6);
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(5);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        addButton = new QPushButton(tab);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setMinimumSize(QSize(50, 0));
        addButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(addButton, 5, 0, 1, 1);

        txrb4 = new DoubleClickableRadioButton(tab);
        txrb4->setObjectName(QStringLiteral("txrb4"));
        txrb4->setStyleSheet(QStringLiteral("margin-left: 10%; margin-right: 0%"));

        gridLayout_2->addWidget(txrb4, 3, 2, 1, 1);

        txb6 = new QPushButton(tab);
        txb6->setObjectName(QStringLiteral("txb6"));
        txb6->setMinimumSize(QSize(0, 18));
        txb6->setStyleSheet(QStringLiteral("padding-left: 15%; padding-right: 15%; padding-top: 3%; padding-bottom: 3%"));

        gridLayout_2->addWidget(txb6, 5, 3, 1, 1);

        txb1 = new DoubleClickablePushButton(tab);
        txb1->setObjectName(QStringLiteral("txb1"));
        sizePolicy2.setHeightForWidth(txb1->sizePolicy().hasHeightForWidth());
        txb1->setSizePolicy(sizePolicy2);
        txb1->setMinimumSize(QSize(0, 18));
        txb1->setLayoutDirection(Qt::LeftToRight);
        txb1->setStyleSheet(QStringLiteral("padding-left: 15%; padding-right: 15%; padding-top: 3%; padding-bottom: 3%"));

        gridLayout_2->addWidget(txb1, 0, 3, 1, 1);

        txrb5 = new DoubleClickableRadioButton(tab);
        txrb5->setObjectName(QStringLiteral("txrb5"));
        txrb5->setStyleSheet(QStringLiteral("margin-left: 10%; margin-right: 0%"));

        gridLayout_2->addWidget(txrb5, 4, 2, 1, 1);

        txrb6 = new DoubleClickableRadioButton(tab);
        txrb6->setObjectName(QStringLiteral("txrb6"));
        txrb6->setStyleSheet(QStringLiteral("margin-left: 10%; margin-right: 0%"));
        txrb6->setChecked(true);

        gridLayout_2->addWidget(txrb6, 5, 2, 1, 1);

        txrb3 = new QRadioButton(tab);
        txrb3->setObjectName(QStringLiteral("txrb3"));
        txrb3->setStyleSheet(QStringLiteral("margin-left: 10%; margin-right: 0%"));

        gridLayout_2->addWidget(txrb3, 2, 2, 1, 1);

        genStdMsgsPushButton = new QPushButton(tab);
        genStdMsgsPushButton->setObjectName(QStringLiteral("genStdMsgsPushButton"));
        sizePolicy2.setHeightForWidth(genStdMsgsPushButton->sizePolicy().hasHeightForWidth());
        genStdMsgsPushButton->setSizePolicy(sizePolicy2);
        genStdMsgsPushButton->setMinimumSize(QSize(50, 0));
        genStdMsgsPushButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(genStdMsgsPushButton, 0, 0, 1, 1);

        tx5 = new QComboBox(tab);
        tx5->setObjectName(QStringLiteral("tx5"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(tx5->sizePolicy().hasHeightForWidth());
        tx5->setSizePolicy(sizePolicy7);
        tx5->setMinimumSize(QSize(0, 0));
        QFont font3;
        font3.setKerning(true);
        tx5->setFont(font3);
        tx5->setStyleSheet(QStringLiteral(" padding-top: 0;"));
        tx5->setEditable(true);
        tx5->setInsertPolicy(QComboBox::InsertAtBottom);
        tx5->setIconSize(QSize(14, 14));
        tx5->setFrame(true);

        gridLayout_2->addWidget(tx5, 4, 1, 1, 1);

        txb2 = new QPushButton(tab);
        txb2->setObjectName(QStringLiteral("txb2"));
        txb2->setMinimumSize(QSize(0, 18));
        txb2->setStyleSheet(QStringLiteral("padding-left: 15%; padding-right: 15%; padding-top: 3%; padding-bottom: 3%"));

        gridLayout_2->addWidget(txb2, 1, 3, 1, 1);

        txrb1 = new DoubleClickableRadioButton(tab);
        txrb1->setObjectName(QStringLiteral("txrb1"));
        txrb1->setStyleSheet(QStringLiteral("margin-left: 10%; margin-right: 0%"));

        gridLayout_2->addWidget(txrb1, 0, 2, 1, 1);

        txb5 = new DoubleClickablePushButton(tab);
        txb5->setObjectName(QStringLiteral("txb5"));
        txb5->setMinimumSize(QSize(0, 18));
        txb5->setStyleSheet(QStringLiteral("padding-left: 15%; padding-right: 15%; padding-top: 3%; padding-bottom: 3%"));

        gridLayout_2->addWidget(txb5, 4, 3, 1, 1);

        tx2 = new QLineEdit(tab);
        tx2->setObjectName(QStringLiteral("tx2"));

        gridLayout_2->addWidget(tx2, 1, 1, 1, 1);

        rptSpinBox = new QSpinBox(tab);
        rptSpinBox->setObjectName(QStringLiteral("rptSpinBox"));
        rptSpinBox->setAlignment(Qt::AlignCenter);
        rptSpinBox->setMinimum(-50);
        rptSpinBox->setMaximum(49);
        rptSpinBox->setValue(-15);

        gridLayout_2->addWidget(rptSpinBox, 1, 0, 1, 1);

        txb4 = new DoubleClickablePushButton(tab);
        txb4->setObjectName(QStringLiteral("txb4"));
        txb4->setMinimumSize(QSize(0, 18));
        txb4->setStyleSheet(QStringLiteral("padding-left: 15%; padding-right: 15%; padding-top: 3%; padding-bottom: 3%"));

        gridLayout_2->addWidget(txb4, 3, 3, 1, 1);

        txb3 = new QPushButton(tab);
        txb3->setObjectName(QStringLiteral("txb3"));
        txb3->setMinimumSize(QSize(0, 18));
        txb3->setStyleSheet(QStringLiteral("padding-left: 15%; padding-right: 15%; padding-top: 3%; padding-bottom: 3%"));

        gridLayout_2->addWidget(txb3, 2, 3, 1, 1);

        tx1 = new QLineEdit(tab);
        tx1->setObjectName(QStringLiteral("tx1"));

        gridLayout_2->addWidget(tx1, 0, 1, 1, 1);

        tx6 = new QLineEdit(tab);
        tx6->setObjectName(QStringLiteral("tx6"));

        gridLayout_2->addWidget(tx6, 5, 1, 1, 1);

        tx4 = new QLineEdit(tab);
        tx4->setObjectName(QStringLiteral("tx4"));

        gridLayout_2->addWidget(tx4, 3, 1, 1, 1);

        txrb2 = new QRadioButton(tab);
        txrb2->setObjectName(QStringLiteral("txrb2"));
        txrb2->setStyleSheet(QStringLiteral("margin-left: 10%; margin-right: 0%"));

        gridLayout_2->addWidget(txrb2, 1, 2, 1, 1);

        tx3 = new QLineEdit(tab);
        tx3->setObjectName(QStringLiteral("tx3"));

        gridLayout_2->addWidget(tx3, 2, 1, 1, 1);

        lookupButton = new QPushButton(tab);
        lookupButton->setObjectName(QStringLiteral("lookupButton"));
        lookupButton->setMinimumSize(QSize(50, 0));
        lookupButton->setMaximumSize(QSize(120, 16777215));

        gridLayout_2->addWidget(lookupButton, 4, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        gridLayout_12 = new QGridLayout(tab_7);
        gridLayout_12->setSpacing(5);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(5, 5, 5, 5);
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setSizeConstraint(QLayout::SetFixedSize);
        sbMax_dB = new QSpinBox(tab_7);
        sbMax_dB->setObjectName(QStringLiteral("sbMax_dB"));
        QSizePolicy sizePolicy8(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(sbMax_dB->sizePolicy().hasHeightForWidth());
        sbMax_dB->setSizePolicy(sizePolicy8);
        sbMax_dB->setMaximumSize(QSize(16777215, 16777215));
        sbMax_dB->setMinimum(-15);
        sbMax_dB->setMaximum(30);
        sbMax_dB->setValue(30);

        gridLayout_10->addWidget(sbMax_dB, 2, 0, 1, 1);

        pbFoxReset = new QPushButton(tab_7);
        pbFoxReset->setObjectName(QStringLiteral("pbFoxReset"));
        sizePolicy8.setHeightForWidth(pbFoxReset->sizePolicy().hasHeightForWidth());
        pbFoxReset->setSizePolicy(sizePolicy8);

        gridLayout_10->addWidget(pbFoxReset, 8, 0, 1, 1);

        sbNslots = new QSpinBox(tab_7);
        sbNslots->setObjectName(QStringLiteral("sbNslots"));
        sizePolicy8.setHeightForWidth(sbNslots->sizePolicy().hasHeightForWidth());
        sbNslots->setSizePolicy(sizePolicy8);
        sbNslots->setMaximumSize(QSize(16777215, 16777215));
        sbNslots->setMinimum(1);
        sbNslots->setMaximum(5);
        sbNslots->setValue(1);
        sbNslots->setDisplayIntegerBase(10);

        gridLayout_10->addWidget(sbNslots, 3, 0, 1, 1);

        comboBoxHoundSort = new QComboBox(tab_7);
        comboBoxHoundSort->addItem(QString());
        comboBoxHoundSort->addItem(QString());
        comboBoxHoundSort->addItem(QString());
        comboBoxHoundSort->addItem(QString());
        comboBoxHoundSort->addItem(QString());
        comboBoxHoundSort->setObjectName(QStringLiteral("comboBoxHoundSort"));
        sizePolicy8.setHeightForWidth(comboBoxHoundSort->sizePolicy().hasHeightForWidth());
        comboBoxHoundSort->setSizePolicy(sizePolicy8);
        comboBoxHoundSort->setMaximumSize(QSize(16777215, 16777215));
        comboBoxHoundSort->setMaxVisibleItems(5);

        gridLayout_10->addWidget(comboBoxHoundSort, 0, 0, 1, 1);

        sbNlist = new QSpinBox(tab_7);
        sbNlist->setObjectName(QStringLiteral("sbNlist"));
        sizePolicy8.setHeightForWidth(sbNlist->sizePolicy().hasHeightForWidth());
        sbNlist->setSizePolicy(sizePolicy8);
        sbNlist->setMaximumSize(QSize(16777215, 16777215));
        sbNlist->setMinimum(5);
        sbNlist->setMaximum(100);
        sbNlist->setValue(12);

        gridLayout_10->addWidget(sbNlist, 1, 0, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        comboBoxCQ = new QComboBox(tab_7);
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->addItem(QString());
        comboBoxCQ->setObjectName(QStringLiteral("comboBoxCQ"));
        sizePolicy8.setHeightForWidth(comboBoxCQ->sizePolicy().hasHeightForWidth());
        comboBoxCQ->setSizePolicy(sizePolicy8);

        horizontalLayout_18->addWidget(comboBoxCQ);

        cbMoreCQs = new QCheckBox(tab_7);
        cbMoreCQs->setObjectName(QStringLiteral("cbMoreCQs"));

        horizontalLayout_18->addWidget(cbMoreCQs);


        gridLayout_10->addLayout(horizontalLayout_18, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer, 9, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_10, 0, 1, 2, 1);

        textBrowser4 = new DisplayText(tab_7);
        textBrowser4->setObjectName(QStringLiteral("textBrowser4"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(textBrowser4->sizePolicy().hasHeightForWidth());
        textBrowser4->setSizePolicy(sizePolicy9);
        textBrowser4->setMinimumSize(QSize(50, 0));
        textBrowser4->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_12->addWidget(textBrowser4, 0, 0, 1, 1);

        tabWidget->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        gridLayout_7 = new QGridLayout(tab_9);
        gridLayout_7->setSpacing(5);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(5, 5, 5, 5);
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_6, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        cbAutoSeq = new QCheckBox(tab_9);
        cbAutoSeq->setObjectName(QStringLiteral("cbAutoSeq"));

        gridLayout_3->addWidget(cbAutoSeq, 5, 0, 1, 1);

        cbTx6 = new QCheckBox(tab_9);
        cbTx6->setObjectName(QStringLiteral("cbTx6"));
        cbTx6->setEnabled(false);

        gridLayout_3->addWidget(cbTx6, 6, 3, 1, 1);

        cbFirst = new QCheckBox(tab_9);
        cbFirst->setObjectName(QStringLiteral("cbFirst"));

        gridLayout_3->addWidget(cbFirst, 4, 0, 1, 1);

        sbCQTxFreq = new QSpinBox(tab_9);
        sbCQTxFreq->setObjectName(QStringLiteral("sbCQTxFreq"));
        sbCQTxFreq->setEnabled(false);
        sbCQTxFreq->setMinimum(1);
        sbCQTxFreq->setMaximum(999);
        sbCQTxFreq->setValue(260);

        gridLayout_3->addWidget(sbCQTxFreq, 8, 0, 1, 1);

        sbTR = new RestrictedSpinBox(tab_9);
        sbTR->setObjectName(QStringLiteral("sbTR"));
        sbTR->setAlignment(Qt::AlignCenter);
        sbTR->setMinimum(5);
        sbTR->setMaximum(30);
        sbTR->setValue(30);

        gridLayout_3->addWidget(sbTR, 8, 2, 1, 1);

        sbF_Low = new QSpinBox(tab_9);
        sbF_Low->setObjectName(QStringLiteral("sbF_Low"));
        sbF_Low->setAlignment(Qt::AlignCenter);
        sbF_Low->setMinimum(100);
        sbF_Low->setMaximum(5000);
        sbF_Low->setSingleStep(50);
        sbF_Low->setValue(600);

        gridLayout_3->addWidget(sbF_Low, 9, 1, 1, 1);

        syncSpinBox = new QSpinBox(tab_9);
        syncSpinBox->setObjectName(QStringLiteral("syncSpinBox"));
        syncSpinBox->setAlignment(Qt::AlignCenter);
        syncSpinBox->setMinimum(-1);
        syncSpinBox->setMaximum(10);
        syncSpinBox->setValue(1);

        gridLayout_3->addWidget(syncSpinBox, 7, 2, 1, 1);

        pbTxMode = new QPushButton(tab_9);
        pbTxMode->setObjectName(QStringLiteral("pbTxMode"));
        pbTxMode->setEnabled(true);
        QSizePolicy sizePolicy10(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(pbTxMode->sizePolicy().hasHeightForWidth());
        pbTxMode->setSizePolicy(sizePolicy10);

        gridLayout_3->addWidget(pbTxMode, 5, 3, 1, 1);

        sbSerialNumber = new QSpinBox(tab_9);
        sbSerialNumber->setObjectName(QStringLiteral("sbSerialNumber"));
        sbSerialNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbSerialNumber->setMinimum(1);
        sbSerialNumber->setMaximum(4095);

        gridLayout_3->addWidget(sbSerialNumber, 5, 2, 1, 1);

        sbFtol = new HintedSpinBox(tab_9);
        sbFtol->setObjectName(QStringLiteral("sbFtol"));
        sbFtol->setAlignment(Qt::AlignCenter);
        sbFtol->setMinimum(10);
        sbFtol->setMaximum(1000);
        sbFtol->setValue(10);

        gridLayout_3->addWidget(sbFtol, 4, 2, 1, 1);

        sbNB = new QSpinBox(tab_9);
        sbNB->setObjectName(QStringLiteral("sbNB"));
        sbNB->setAlignment(Qt::AlignCenter);
        sbNB->setMinimum(-2);
        sbNB->setMaximum(25);

        gridLayout_3->addWidget(sbNB, 9, 2, 1, 1);

        cbFast9 = new QCheckBox(tab_9);
        cbFast9->setObjectName(QStringLiteral("cbFast9"));

        gridLayout_3->addWidget(cbFast9, 4, 3, 1, 1);

        labNextCall = new QLabel(tab_9);
        labNextCall->setObjectName(QStringLiteral("labNextCall"));
        labNextCall->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labNextCall, 7, 3, 1, 1);

        sbSubmode = new LettersSpinBox(tab_9);
        sbSubmode->setObjectName(QStringLiteral("sbSubmode"));
        sbSubmode->setAlignment(Qt::AlignCenter);
        sbSubmode->setMinimum(0);
        sbSubmode->setMaximum(7);

        gridLayout_3->addWidget(sbSubmode, 6, 2, 1, 1);

        cbShMsgs = new QCheckBox(tab_9);
        cbShMsgs->setObjectName(QStringLiteral("cbShMsgs"));

        gridLayout_3->addWidget(cbShMsgs, 7, 1, 1, 1);

        cbSWL = new QCheckBox(tab_9);
        cbSWL->setObjectName(QStringLiteral("cbSWL"));

        gridLayout_3->addWidget(cbSWL, 6, 0, 1, 1);

        sbF_High = new QSpinBox(tab_9);
        sbF_High->setObjectName(QStringLiteral("sbF_High"));
        sbF_High->setAlignment(Qt::AlignCenter);
        sbF_High->setMinimum(100);
        sbF_High->setMaximum(5000);
        sbF_High->setSingleStep(50);
        sbF_High->setValue(1400);

        gridLayout_3->addWidget(sbF_High, 9, 0, 1, 1);

        measure_check_box = new QCheckBox(tab_9);
        measure_check_box->setObjectName(QStringLiteral("measure_check_box"));

        gridLayout_3->addWidget(measure_check_box, 7, 0, 1, 1);

        labDXped = new QLabel(tab_9);
        labDXped->setObjectName(QStringLiteral("labDXped"));
        QSizePolicy sizePolicy11(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(labDXped->sizePolicy().hasHeightForWidth());
        labDXped->setSizePolicy(sizePolicy11);
        labDXped->setMaximumSize(QSize(100, 16777215));
        labDXped->setAlignment(Qt::AlignCenter);
        labDXped->setMargin(4);

        gridLayout_3->addWidget(labDXped, 4, 1, 1, 1);

        cbCQTx = new QCheckBox(tab_9);
        cbCQTx->setObjectName(QStringLiteral("cbCQTx"));
        cbCQTx->setEnabled(false);

        gridLayout_3->addWidget(cbCQTx, 8, 1, 1, 1);

        sbMaxDrift = new QSpinBox(tab_9);
        sbMaxDrift->setObjectName(QStringLiteral("sbMaxDrift"));
        sbMaxDrift->setMaximum(50);
        sbMaxDrift->setSingleStep(5);

        gridLayout_3->addWidget(sbMaxDrift, 5, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        gridLayout = new QGridLayout(tab_10);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(4, 4, 4, 4);
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_10, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(tab_10);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        verticalLayout_14 = new QVBoxLayout(groupBox_2);
        verticalLayout_14->setSpacing(2);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(5, 3, 5, 0);
        cb_callB4onBand = new QCheckBox(groupBox_2);
        cb_callB4onBand->setObjectName(QStringLiteral("cb_callB4onBand"));

        verticalLayout_14->addWidget(cb_callB4onBand);

        cb_countryB4onBand = new QCheckBox(groupBox_2);
        cb_countryB4onBand->setObjectName(QStringLiteral("cb_countryB4onBand"));

        verticalLayout_14->addWidget(cb_countryB4onBand);

        cb_continentB4onBand = new QCheckBox(groupBox_2);
        cb_continentB4onBand->setObjectName(QStringLiteral("cb_continentB4onBand"));

        verticalLayout_14->addWidget(cb_continentB4onBand);

        cb_gridB4onBand = new QCheckBox(groupBox_2);
        cb_gridB4onBand->setObjectName(QStringLiteral("cb_gridB4onBand"));

        verticalLayout_14->addWidget(cb_gridB4onBand);

        cb_CQZoneB4onBand = new QCheckBox(groupBox_2);
        cb_CQZoneB4onBand->setObjectName(QStringLiteral("cb_CQZoneB4onBand"));

        verticalLayout_14->addWidget(cb_CQZoneB4onBand);

        cb_ITUZoneB4onBand = new QCheckBox(groupBox_2);
        cb_ITUZoneB4onBand->setObjectName(QStringLiteral("cb_ITUZoneB4onBand"));

        verticalLayout_14->addWidget(cb_ITUZoneB4onBand);


        gridLayout->addWidget(groupBox_2, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(tab_10);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        verticalLayout_13 = new QVBoxLayout(groupBox_3);
        verticalLayout_13->setSpacing(2);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(5, 3, 5, 0);
        cb_callB4 = new QCheckBox(groupBox_3);
        cb_callB4->setObjectName(QStringLiteral("cb_callB4"));

        verticalLayout_13->addWidget(cb_callB4);

        cb_countryB4 = new QCheckBox(groupBox_3);
        cb_countryB4->setObjectName(QStringLiteral("cb_countryB4"));

        verticalLayout_13->addWidget(cb_countryB4);

        cb_continentB4 = new QCheckBox(groupBox_3);
        cb_continentB4->setObjectName(QStringLiteral("cb_continentB4"));

        verticalLayout_13->addWidget(cb_continentB4);

        cb_gridB4 = new QCheckBox(groupBox_3);
        cb_gridB4->setObjectName(QStringLiteral("cb_gridB4"));

        verticalLayout_13->addWidget(cb_gridB4);

        cb_CQZoneB4 = new QCheckBox(groupBox_3);
        cb_CQZoneB4->setObjectName(QStringLiteral("cb_CQZoneB4"));

        verticalLayout_13->addWidget(cb_CQZoneB4);

        cb_ITUZoneB4 = new QCheckBox(groupBox_3);
        cb_ITUZoneB4->setObjectName(QStringLiteral("cb_ITUZoneB4"));

        verticalLayout_13->addWidget(cb_ITUZoneB4);


        gridLayout->addWidget(groupBox_3, 0, 1, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupBox_8 = new QGroupBox(tab_10);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        gridLayout_4 = new QGridLayout(groupBox_8);
        gridLayout_4->setSpacing(3);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(3, 3, 3, 0);
        cb_c_AS = new QCheckBox(groupBox_8);
        cb_c_AS->setObjectName(QStringLiteral("cb_c_AS"));

        gridLayout_4->addWidget(cb_c_AS, 1, 1, 1, 1);

        cb_c_EU = new QCheckBox(groupBox_8);
        cb_c_EU->setObjectName(QStringLiteral("cb_c_EU"));

        gridLayout_4->addWidget(cb_c_EU, 0, 0, 1, 1);

        cb_c_AF = new QCheckBox(groupBox_8);
        cb_c_AF->setObjectName(QStringLiteral("cb_c_AF"));

        gridLayout_4->addWidget(cb_c_AF, 0, 1, 1, 1);

        cb_c_NA = new QCheckBox(groupBox_8);
        cb_c_NA->setObjectName(QStringLiteral("cb_c_NA"));

        gridLayout_4->addWidget(cb_c_NA, 4, 1, 1, 1);

        cb_c_SA = new QCheckBox(groupBox_8);
        cb_c_SA->setObjectName(QStringLiteral("cb_c_SA"));

        gridLayout_4->addWidget(cb_c_SA, 4, 0, 1, 1);

        cb_c_AN = new QCheckBox(groupBox_8);
        cb_c_AN->setObjectName(QStringLiteral("cb_c_AN"));

        gridLayout_4->addWidget(cb_c_AN, 5, 0, 1, 1);

        cb_c_OC = new QCheckBox(groupBox_8);
        cb_c_OC->setObjectName(QStringLiteral("cb_c_OC"));

        gridLayout_4->addWidget(cb_c_OC, 1, 0, 1, 1);


        verticalLayout_10->addWidget(groupBox_8);

        cb_f_LOTW = new QCheckBox(tab_10);
        cb_f_LOTW->setObjectName(QStringLiteral("cb_f_LOTW"));

        verticalLayout_10->addWidget(cb_f_LOTW);


        gridLayout->addLayout(verticalLayout_10, 0, 3, 1, 1);

        tabWidget->addTab(tab_10, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_4 = new QVBoxLayout(tab_4);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        cb_prefixFilter = new QComboBox(tab_4);
        cb_prefixFilter->addItem(QString());
        cb_prefixFilter->addItem(QString());
        cb_prefixFilter->addItem(QString());
        cb_prefixFilter->setObjectName(QStringLiteral("cb_prefixFilter"));
        cb_prefixFilter->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_20->addWidget(cb_prefixFilter);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_5);

        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_20->addWidget(label_4);

        cb_filter_CQDX_Continent = new QComboBox(tab_4);
        cb_filter_CQDX_Continent->addItem(QString());
        cb_filter_CQDX_Continent->addItem(QString());
        cb_filter_CQDX_Continent->addItem(QString());
        cb_filter_CQDX_Continent->addItem(QString());
        cb_filter_CQDX_Continent->addItem(QString());
        cb_filter_CQDX_Continent->addItem(QString());
        cb_filter_CQDX_Continent->addItem(QString());
        cb_filter_CQDX_Continent->addItem(QString());
        cb_filter_CQDX_Continent->setObjectName(QStringLiteral("cb_filter_CQDX_Continent"));

        horizontalLayout_20->addWidget(cb_filter_CQDX_Continent);


        verticalLayout_4->addLayout(horizontalLayout_20);

        pte_prefixFilter = new QPlainTextEdit(tab_4);
        pte_prefixFilter->setObjectName(QStringLiteral("pte_prefixFilter"));
        QSizePolicy sizePolicy12(QSizePolicy::Ignored, QSizePolicy::MinimumExpanding);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(pte_prefixFilter->sizePolicy().hasHeightForWidth());
        pte_prefixFilter->setSizePolicy(sizePolicy12);
        pte_prefixFilter->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_4->addWidget(pte_prefixFilter);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_15->addWidget(label_6);

        cb_ignoreCQTarget = new QComboBox(tab_4);
        cb_ignoreCQTarget->addItem(QString());
        cb_ignoreCQTarget->addItem(QString());
        cb_ignoreCQTarget->addItem(QString());
        cb_ignoreCQTarget->addItem(QString());
        cb_ignoreCQTarget->setObjectName(QStringLiteral("cb_ignoreCQTarget"));

        horizontalLayout_15->addWidget(cb_ignoreCQTarget);

        le_ignoreCQXX = new QLineEdit(tab_4);
        le_ignoreCQXX->setObjectName(QStringLiteral("le_ignoreCQXX"));

        horizontalLayout_15->addWidget(le_ignoreCQXX);


        verticalLayout_4->addLayout(horizontalLayout_15);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_11 = new QGridLayout(tab_3);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        cb_stateFilter = new QComboBox(tab_3);
        cb_stateFilter->addItem(QString());
        cb_stateFilter->addItem(QString());
        cb_stateFilter->addItem(QString());
        cb_stateFilter->setObjectName(QStringLiteral("cb_stateFilter"));
        QSizePolicy sizePolicy13(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(cb_stateFilter->sizePolicy().hasHeightForWidth());
        cb_stateFilter->setSizePolicy(sizePolicy13);
        cb_stateFilter->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_11->addWidget(cb_stateFilter, 0, 0, 1, 1);

        pte_stateFilter = new QPlainTextEdit(tab_3);
        pte_stateFilter->setObjectName(QStringLiteral("pte_stateFilter"));
        sizePolicy12.setHeightForWidth(pte_stateFilter->sizePolicy().hasHeightForWidth());
        pte_stateFilter->setSizePolicy(sizePolicy12);
        pte_stateFilter->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_11->addWidget(pte_stateFilter, 1, 0, 1, 2);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_11 = new QVBoxLayout(tab_2);
        verticalLayout_11->setSpacing(5);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_11->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        cb_IgnoreAfterWD = new QCheckBox(tab_2);
        cb_IgnoreAfterWD->setObjectName(QStringLiteral("cb_IgnoreAfterWD"));

        horizontalLayout_11->addWidget(cb_IgnoreAfterWD);

        btn_addToIgnore = new QPushButton(tab_2);
        btn_addToIgnore->setObjectName(QStringLiteral("btn_addToIgnore"));

        horizontalLayout_11->addWidget(btn_addToIgnore);

        btn_clearIgnore = new QPushButton(tab_2);
        btn_clearIgnore->setObjectName(QStringLiteral("btn_clearIgnore"));

        horizontalLayout_11->addWidget(btn_clearIgnore);


        verticalLayout_11->addLayout(horizontalLayout_11);

        pte_IgnoredStations = new QPlainTextEdit(tab_2);
        pte_IgnoredStations->setObjectName(QStringLiteral("pte_IgnoredStations"));
        QSizePolicy sizePolicy14(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy14.setHorizontalStretch(0);
        sizePolicy14.setVerticalStretch(0);
        sizePolicy14.setHeightForWidth(pte_IgnoredStations->sizePolicy().hasHeightForWidth());
        pte_IgnoredStations->setSizePolicy(sizePolicy14);

        verticalLayout_11->addWidget(pte_IgnoredStations);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_11);

        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        horizontalLayout_21 = new QHBoxLayout(tab_5);
        horizontalLayout_21->setSpacing(5);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(5, 5, 5, 5);
        groupBox_4 = new QGroupBox(tab_5);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        verticalLayout_16 = new QVBoxLayout(groupBox_4);
        verticalLayout_16->setSpacing(2);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(5, 3, 5, 0);
        cb_callB4_alert = new QCheckBox(groupBox_4);
        cb_callB4_alert->setObjectName(QStringLiteral("cb_callB4_alert"));

        verticalLayout_16->addWidget(cb_callB4_alert);

        cb_countryB4_alert = new QCheckBox(groupBox_4);
        cb_countryB4_alert->setObjectName(QStringLiteral("cb_countryB4_alert"));

        verticalLayout_16->addWidget(cb_countryB4_alert);

        cb_continentB4_alert = new QCheckBox(groupBox_4);
        cb_continentB4_alert->setObjectName(QStringLiteral("cb_continentB4_alert"));

        verticalLayout_16->addWidget(cb_continentB4_alert);

        cb_gridB4_alert = new QCheckBox(groupBox_4);
        cb_gridB4_alert->setObjectName(QStringLiteral("cb_gridB4_alert"));

        verticalLayout_16->addWidget(cb_gridB4_alert);

        cb_CQZoneB4_alert = new QCheckBox(groupBox_4);
        cb_CQZoneB4_alert->setObjectName(QStringLiteral("cb_CQZoneB4_alert"));

        verticalLayout_16->addWidget(cb_CQZoneB4_alert);

        cb_ITUZoneB4_alert = new QCheckBox(groupBox_4);
        cb_ITUZoneB4_alert->setObjectName(QStringLiteral("cb_ITUZoneB4_alert"));

        verticalLayout_16->addWidget(cb_ITUZoneB4_alert);


        horizontalLayout_21->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(tab_5);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setAlignment(Qt::AlignCenter);
        verticalLayout_17 = new QVBoxLayout(groupBox_5);
        verticalLayout_17->setSpacing(2);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(5, 3, 5, 0);
        cb_callB4onBand_alert = new QCheckBox(groupBox_5);
        cb_callB4onBand_alert->setObjectName(QStringLiteral("cb_callB4onBand_alert"));

        verticalLayout_17->addWidget(cb_callB4onBand_alert);

        cb_countryB4onBand_alert = new QCheckBox(groupBox_5);
        cb_countryB4onBand_alert->setObjectName(QStringLiteral("cb_countryB4onBand_alert"));

        verticalLayout_17->addWidget(cb_countryB4onBand_alert);

        cb_continentB4onBand_alert = new QCheckBox(groupBox_5);
        cb_continentB4onBand_alert->setObjectName(QStringLiteral("cb_continentB4onBand_alert"));

        verticalLayout_17->addWidget(cb_continentB4onBand_alert);

        cb_gridB4onBand_alert = new QCheckBox(groupBox_5);
        cb_gridB4onBand_alert->setObjectName(QStringLiteral("cb_gridB4onBand_alert"));

        verticalLayout_17->addWidget(cb_gridB4onBand_alert);

        cb_CQZoneB4onBand_alert = new QCheckBox(groupBox_5);
        cb_CQZoneB4onBand_alert->setObjectName(QStringLiteral("cb_CQZoneB4onBand_alert"));

        verticalLayout_17->addWidget(cb_CQZoneB4onBand_alert);

        cb_ITUZoneB4onBand_alert = new QCheckBox(groupBox_5);
        cb_ITUZoneB4onBand_alert->setObjectName(QStringLiteral("cb_ITUZoneB4onBand_alert"));

        verticalLayout_17->addWidget(cb_ITUZoneB4onBand_alert);


        horizontalLayout_21->addWidget(groupBox_5);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_19->addWidget(label_12);

        le_CustomAlerts = new QLineEdit(tab_5);
        le_CustomAlerts->setObjectName(QStringLiteral("le_CustomAlerts"));

        verticalLayout_19->addWidget(le_CustomAlerts);

        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_19->addWidget(label_5);

        pte_alerts = new QPlainTextEdit(tab_5);
        pte_alerts->setObjectName(QStringLiteral("pte_alerts"));
        sizePolicy14.setHeightForWidth(pte_alerts->sizePolicy().hasHeightForWidth());
        pte_alerts->setSizePolicy(sizePolicy14);

        verticalLayout_19->addWidget(pte_alerts);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_19->addItem(verticalSpacer_12);


        horizontalLayout_21->addLayout(verticalLayout_19);

        tabWidget->addTab(tab_5, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_8 = new QGridLayout(widget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        cb_autoModeSwitch = new QGroupBox(widget);
        cb_autoModeSwitch->setObjectName(QStringLiteral("cb_autoModeSwitch"));
        QSizePolicy sizePolicy15(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy15.setHorizontalStretch(0);
        sizePolicy15.setVerticalStretch(0);
        sizePolicy15.setHeightForWidth(cb_autoModeSwitch->sizePolicy().hasHeightForWidth());
        cb_autoModeSwitch->setSizePolicy(sizePolicy15);
        cb_autoModeSwitch->setCheckable(true);
        gridLayout_5 = new QGridLayout(cb_autoModeSwitch);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setHorizontalSpacing(4);
        gridLayout_5->setVerticalSpacing(2);
        gridLayout_5->setContentsMargins(5, 5, 5, 5);
        le_autoCallLeft = new QLineEdit(cb_autoModeSwitch);
        le_autoCallLeft->setObjectName(QStringLiteral("le_autoCallLeft"));
        le_autoCallLeft->setEnabled(true);
        le_autoCallLeft->setMaximumSize(QSize(40, 16777215));
        le_autoCallLeft->setReadOnly(true);

        gridLayout_5->addWidget(le_autoCallLeft, 1, 2, 1, 1);

        label_22 = new QLabel(cb_autoModeSwitch);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_5->addWidget(label_22, 1, 0, 1, 1);

        label_21 = new QLabel(cb_autoModeSwitch);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_5->addWidget(label_21, 0, 0, 1, 1);

        le_autoCQLeft = new QLineEdit(cb_autoModeSwitch);
        le_autoCQLeft->setObjectName(QStringLiteral("le_autoCQLeft"));
        le_autoCQLeft->setEnabled(true);
        le_autoCQLeft->setMaximumSize(QSize(40, 16777215));
        le_autoCQLeft->setReadOnly(true);

        gridLayout_5->addWidget(le_autoCQLeft, 0, 2, 1, 1);

        sb_autoCallCount = new QSpinBox(cb_autoModeSwitch);
        sb_autoCallCount->setObjectName(QStringLiteral("sb_autoCallCount"));
        sb_autoCallCount->setEnabled(true);

        gridLayout_5->addWidget(sb_autoCallCount, 1, 1, 1, 1);

        sb_autoCQCount = new QSpinBox(cb_autoModeSwitch);
        sb_autoCQCount->setObjectName(QStringLiteral("sb_autoCQCount"));
        sb_autoCQCount->setEnabled(true);

        gridLayout_5->addWidget(sb_autoCQCount, 0, 1, 1, 1);


        gridLayout_8->addWidget(cb_autoModeSwitch, 0, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_10);

        sbMindB = new QSpinBox(widget);
        sbMindB->setObjectName(QStringLiteral("sbMindB"));
        sbMindB->setMinimum(-30);
        sbMindB->setMaximum(30);
        sbMindB->setValue(-30);

        horizontalLayout_5->addWidget(sbMindB);


        gridLayout_8->addLayout(horizontalLayout_5, 1, 1, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        cbCQonlyIncl73 = new QCheckBox(widget);
        cbCQonlyIncl73->setObjectName(QStringLiteral("cbCQonlyIncl73"));

        horizontalLayout_17->addWidget(cbCQonlyIncl73);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_8);

        label_23 = new QLabel(widget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_17->addWidget(label_23);

        cb_autoCallPriority = new QComboBox(widget);
        cb_autoCallPriority->addItem(QString());
        cb_autoCallPriority->addItem(QString());
        cb_autoCallPriority->addItem(QString());
        cb_autoCallPriority->setObjectName(QStringLiteral("cb_autoCallPriority"));
        sizePolicy13.setHeightForWidth(cb_autoCallPriority->sizePolicy().hasHeightForWidth());
        cb_autoCallPriority->setSizePolicy(sizePolicy13);

        horizontalLayout_17->addWidget(cb_autoCallPriority);


        gridLayout_8->addLayout(horizontalLayout_17, 2, 0, 1, 2);

        cb_bandHopper = new QGroupBox(widget);
        cb_bandHopper->setObjectName(QStringLiteral("cb_bandHopper"));
        cb_bandHopper->setCheckable(true);
        verticalLayout = new QVBoxLayout(cb_bandHopper);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        pte_bandHopper = new QPlainTextEdit(cb_bandHopper);
        pte_bandHopper->setObjectName(QStringLiteral("pte_bandHopper"));
        pte_bandHopper->setEnabled(true);
        sizePolicy14.setHeightForWidth(pte_bandHopper->sizePolicy().hasHeightForWidth());
        pte_bandHopper->setSizePolicy(sizePolicy14);

        verticalLayout->addWidget(pte_bandHopper);


        gridLayout_8->addWidget(cb_bandHopper, 0, 0, 2, 1);

        gridLayout_8->setColumnStretch(0, 2);
        gridLayout_8->setColumnStretch(1, 1);
        tabWidget->addTab(widget, QString());

        horizontalLayout_6->addWidget(tabWidget);


        horizontalLayout_8->addWidget(QSO_controls_widget);

        controls_stack_widget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(page_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_91 = new QHBoxLayout(widget_2);
        horizontalLayout_91->setSpacing(6);
        horizontalLayout_91->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_91->setObjectName(QStringLiteral("horizontalLayout_91"));
        horizontalLayout_91->setContentsMargins(0, 0, 0, 0);
        WSPR_controls_widget = new QWidget(widget_2);
        WSPR_controls_widget->setObjectName(QStringLiteral("WSPR_controls_widget"));
        gridLayout_9 = new QGridLayout(WSPR_controls_widget);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_6, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        WSPRfreqSpinBox = new QSpinBox(WSPR_controls_widget);
        WSPRfreqSpinBox->setObjectName(QStringLiteral("WSPRfreqSpinBox"));
        WSPRfreqSpinBox->setAlignment(Qt::AlignCenter);
        WSPRfreqSpinBox->setMinimum(1400);
        WSPRfreqSpinBox->setMaximum(1600);
        WSPRfreqSpinBox->setValue(1500);

        verticalLayout_7->addWidget(WSPRfreqSpinBox);

        sbFST4W_RxFreq = new QSpinBox(WSPR_controls_widget);
        sbFST4W_RxFreq->setObjectName(QStringLiteral("sbFST4W_RxFreq"));
        sbFST4W_RxFreq->setAlignment(Qt::AlignCenter);
        sbFST4W_RxFreq->setMinimum(100);
        sbFST4W_RxFreq->setMaximum(4900);
        sbFST4W_RxFreq->setSingleStep(100);
        sbFST4W_RxFreq->setValue(1500);

        verticalLayout_7->addWidget(sbFST4W_RxFreq);

        sbFST4W_FTol = new HintedSpinBox(WSPR_controls_widget);
        sbFST4W_FTol->setObjectName(QStringLiteral("sbFST4W_FTol"));
        sbFST4W_FTol->setAlignment(Qt::AlignCenter);
        sbFST4W_FTol->setMinimum(100);
        sbFST4W_FTol->setMaximum(500);
        sbFST4W_FTol->setSingleStep(100);

        verticalLayout_7->addWidget(sbFST4W_FTol);

        RoundRobin = new QComboBox(WSPR_controls_widget);
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->addItem(QString());
        RoundRobin->setObjectName(QStringLiteral("RoundRobin"));
        RoundRobin->setEditable(true);

        verticalLayout_7->addWidget(RoundRobin);

        sbTxPercent = new QSpinBox(WSPR_controls_widget);
        sbTxPercent->setObjectName(QStringLiteral("sbTxPercent"));
        sbTxPercent->setStyleSheet(QLatin1String("QSpinBox:enabled[notx=\"true\"] {\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 0);\n"
"}"));
        sbTxPercent->setAlignment(Qt::AlignCenter);
        sbTxPercent->setMaximum(100);

        verticalLayout_7->addWidget(sbTxPercent);

        sbTR_FST4W = new RestrictedSpinBox(WSPR_controls_widget);
        sbTR_FST4W->setObjectName(QStringLiteral("sbTR_FST4W"));
        sbTR_FST4W->setAlignment(Qt::AlignCenter);
        sbTR_FST4W->setMinimum(15);
        sbTR_FST4W->setMaximum(1800);

        verticalLayout_7->addWidget(sbTR_FST4W);

        band_hopping_group_box = new QGroupBox(WSPR_controls_widget);
        band_hopping_group_box->setObjectName(QStringLiteral("band_hopping_group_box"));
        band_hopping_group_box->setCheckable(true);
        horizontalLayout_7 = new QHBoxLayout(band_hopping_group_box);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        band_hopping_schedule_push_button = new QPushButton(band_hopping_group_box);
        band_hopping_schedule_push_button->setObjectName(QStringLiteral("band_hopping_schedule_push_button"));

        horizontalLayout_7->addWidget(band_hopping_schedule_push_button);


        verticalLayout_7->addWidget(band_hopping_group_box);


        horizontalLayout_12->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        cbUploadWSPR_Spots = new QCheckBox(WSPR_controls_widget);
        cbUploadWSPR_Spots->setObjectName(QStringLiteral("cbUploadWSPR_Spots"));
        cbUploadWSPR_Spots->setStyleSheet(QLatin1String("QCheckBox:unchecked {\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 0);\n"
"}"));

        horizontalLayout_10->addWidget(cbUploadWSPR_Spots);


        verticalLayout_2->addLayout(horizontalLayout_10);

        WSPR_prefer_type_1_check_box = new QCheckBox(WSPR_controls_widget);
        WSPR_prefer_type_1_check_box->setObjectName(QStringLiteral("WSPR_prefer_type_1_check_box"));
        WSPR_prefer_type_1_check_box->setChecked(true);

        verticalLayout_2->addWidget(WSPR_prefer_type_1_check_box);

        cbNoOwnCall = new QCheckBox(WSPR_controls_widget);
        cbNoOwnCall->setObjectName(QStringLiteral("cbNoOwnCall"));

        verticalLayout_2->addWidget(cbNoOwnCall);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        pbTxNext = new QPushButton(WSPR_controls_widget);
        pbTxNext->setObjectName(QStringLiteral("pbTxNext"));
        pbTxNext->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: red;\n"
"	border-style: outset;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	border-color: black;\n"
"	min-width: 5em;\n"
"	padding: 3px;\n"
"}"));
        pbTxNext->setCheckable(true);

        horizontalLayout_13->addWidget(pbTxNext);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        TxPowerComboBox = new QComboBox(WSPR_controls_widget);
        TxPowerComboBox->setObjectName(QStringLiteral("TxPowerComboBox"));

        horizontalLayout_14->addWidget(TxPowerComboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_14);


        verticalLayout_8->addLayout(verticalLayout_2);


        horizontalLayout_12->addLayout(verticalLayout_8);


        gridLayout_9->addLayout(horizontalLayout_12, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_3, 0, 1, 1, 1);


        horizontalLayout_91->addWidget(WSPR_controls_widget);


        verticalLayout_5->addWidget(widget_2);

        controls_stack_widget->addWidget(page_2);

        L_Right_Controls->addWidget(controls_stack_widget, 1, 0, 1, 1);


        L_Right->addLayout(L_Right_Controls);

        L_Right_Controls_Middle = new QHBoxLayout();
        L_Right_Controls_Middle->setSpacing(5);
        L_Right_Controls_Middle->setObjectName(QStringLiteral("L_Right_Controls_Middle"));
        L_Right_Controls_Middle->setContentsMargins(0, 0, 0, 0);
        RxFreqSpinBox = new QSpinBox(frame_2);
        RxFreqSpinBox->setObjectName(QStringLiteral("RxFreqSpinBox"));
        RxFreqSpinBox->setAlignment(Qt::AlignCenter);
        RxFreqSpinBox->setMinimum(200);
        RxFreqSpinBox->setMaximum(5000);
        RxFreqSpinBox->setValue(1500);

        L_Right_Controls_Middle->addWidget(RxFreqSpinBox);

        pbT2R = new QPushButton(frame_2);
        pbT2R->setObjectName(QStringLiteral("pbT2R"));
        sizePolicy10.setHeightForWidth(pbT2R->sizePolicy().hasHeightForWidth());
        pbT2R->setSizePolicy(sizePolicy10);
        pbT2R->setMinimumSize(QSize(10, 0));
        pbT2R->setMaximumSize(QSize(20, 25));
        QFont font4;
        font4.setPointSize(12);
        font4.setStyleStrategy(QFont::PreferAntialias);
        pbT2R->setFont(font4);

        L_Right_Controls_Middle->addWidget(pbT2R);

        pbR2T = new QPushButton(frame_2);
        pbR2T->setObjectName(QStringLiteral("pbR2T"));
        sizePolicy10.setHeightForWidth(pbR2T->sizePolicy().hasHeightForWidth());
        pbR2T->setSizePolicy(sizePolicy10);
        pbR2T->setMinimumSize(QSize(10, 0));
        pbR2T->setMaximumSize(QSize(20, 25));
        pbR2T->setFont(font4);

        L_Right_Controls_Middle->addWidget(pbR2T);

        TxFreqSpinBox = new QSpinBox(frame_2);
        TxFreqSpinBox->setObjectName(QStringLiteral("TxFreqSpinBox"));
        TxFreqSpinBox->setAlignment(Qt::AlignCenter);
        TxFreqSpinBox->setMinimum(200);
        TxFreqSpinBox->setMaximum(5000);
        TxFreqSpinBox->setValue(1500);

        L_Right_Controls_Middle->addWidget(TxFreqSpinBox);

        pb_FreeFreq = new QPushButton(frame_2);
        pb_FreeFreq->setObjectName(QStringLiteral("pb_FreeFreq"));

        L_Right_Controls_Middle->addWidget(pb_FreeFreq);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        L_Right_Controls_Middle->addItem(horizontalSpacer_4);

        pb_WDReset = new QPushButton(frame_2);
        pb_WDReset->setObjectName(QStringLiteral("pb_WDReset"));

        L_Right_Controls_Middle->addWidget(pb_WDReset);

        cb_filtering = new QCheckBox(frame_2);
        cb_filtering->setObjectName(QStringLiteral("cb_filtering"));

        L_Right_Controls_Middle->addWidget(cb_filtering);


        L_Right->addLayout(L_Right_Controls_Middle);

        L_Right_Bottom = new QHBoxLayout();
        L_Right_Bottom->setSpacing(5);
        L_Right_Bottom->setObjectName(QStringLiteral("L_Right_Bottom"));
        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        L_Right_Bottom->addWidget(label);

        dxCallEntry = new QLineEdit(frame_2);
        dxCallEntry->setObjectName(QStringLiteral("dxCallEntry"));
        sizePolicy2.setHeightForWidth(dxCallEntry->sizePolicy().hasHeightForWidth());
        dxCallEntry->setSizePolicy(sizePolicy2);
        dxCallEntry->setMinimumSize(QSize(40, 0));
        dxCallEntry->setMaximumSize(QSize(16777215, 16777215));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        dxCallEntry->setFont(font5);
        dxCallEntry->setStyleSheet(QStringLiteral(""));
        dxCallEntry->setFrame(true);
        dxCallEntry->setAlignment(Qt::AlignCenter);
        dxCallEntry->setClearButtonEnabled(false);

        L_Right_Bottom->addWidget(dxCallEntry);

        label_18 = new QLabel(frame_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        L_Right_Bottom->addWidget(label_18);

        dxGridEntry = new QLineEdit(frame_2);
        dxGridEntry->setObjectName(QStringLiteral("dxGridEntry"));
        sizePolicy2.setHeightForWidth(dxGridEntry->sizePolicy().hasHeightForWidth());
        dxGridEntry->setSizePolicy(sizePolicy2);
        dxGridEntry->setMinimumSize(QSize(40, 0));
        dxGridEntry->setMaximumSize(QSize(16777215, 16777215));
        dxGridEntry->setFont(font5);
        dxGridEntry->setStyleSheet(QStringLiteral(""));
        dxGridEntry->setFrame(true);
        dxGridEntry->setAlignment(Qt::AlignCenter);

        L_Right_Bottom->addWidget(dxGridEntry);

        cb_specialMode = new QComboBox(frame_2);
        cb_specialMode->addItem(QString());
        cb_specialMode->addItem(QString());
        cb_specialMode->addItem(QString());
        cb_specialMode->setObjectName(QStringLiteral("cb_specialMode"));
        cb_specialMode->setAutoFillBackground(false);

        L_Right_Bottom->addWidget(cb_specialMode);

        L_Right_Bottom->setStretch(1, 2);
        L_Right_Bottom->setStretch(3, 1);

        L_Right->addLayout(L_Right_Bottom);

        L_Right->setStretch(0, 1);

        gridLayout_13->addLayout(L_Right, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(12);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_16);

        outAttenuation = new QSlider(frame_2);
        outAttenuation->setObjectName(QStringLiteral("outAttenuation"));
        QSizePolicy sizePolicy16(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy16.setHorizontalStretch(0);
        sizePolicy16.setVerticalStretch(0);
        sizePolicy16.setHeightForWidth(outAttenuation->sizePolicy().hasHeightForWidth());
        outAttenuation->setSizePolicy(sizePolicy16);
        outAttenuation->setMinimumSize(QSize(20, 0));
        outAttenuation->setMaximum(450);
        outAttenuation->setValue(0);
        outAttenuation->setOrientation(Qt::Vertical);
        outAttenuation->setInvertedAppearance(true);
        outAttenuation->setInvertedControls(true);
        outAttenuation->setTickPosition(QSlider::NoTicks);
        outAttenuation->setTickInterval(50);

        verticalLayout_3->addWidget(outAttenuation);

        signal_meter_widget = new SignalMeter(frame_2);
        signal_meter_widget->setObjectName(QStringLiteral("signal_meter_widget"));
        QSizePolicy sizePolicy17(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy17.setHorizontalStretch(0);
        sizePolicy17.setVerticalStretch(0);
        sizePolicy17.setHeightForWidth(signal_meter_widget->sizePolicy().hasHeightForWidth());
        signal_meter_widget->setSizePolicy(sizePolicy17);
        signal_meter_widget->setMinimumSize(QSize(20, 0));
        signal_meter_widget->setMaximumSize(QSize(60, 16777215));
        signal_meter_widget->setFrameShape(QFrame::Panel);
        signal_meter_widget->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(signal_meter_widget);


        gridLayout_13->addLayout(verticalLayout_3, 0, 1, 1, 1);

        decodes_splitter->addWidget(frame_2);

        gridLayout_15->addWidget(decodes_splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1203, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuDecode = new QMenu(menuBar);
        menuDecode->setObjectName(QStringLiteral("menuDecode"));
        menuSave = new QMenu(menuBar);
        menuSave->setObjectName(QStringLiteral("menuSave"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuMode = new QMenu(menuBar);
        menuMode->setObjectName(QStringLiteral("menuMode"));
        menuConfig = new QMenu(menuBar);
        menuConfig->setObjectName(QStringLiteral("menuConfig"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuConfig->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuMode->menuAction());
        menuBar->addAction(menuDecode->menuAction());
        menuBar->addAction(menuSave->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpen_next_in_directory);
        menuFile->addAction(actionDecode_remaining_files_in_directory);
        menuFile->addSeparator();
        menuFile->addAction(actionDelete_all_wav_files_in_SaveDir);
        menuFile->addAction(actionErase_ALL_TXT);
        menuFile->addAction(actionErase_wsjtx_log_adi);
        menuFile->addAction(actionErase_WSPR_hashtable);
        menuFile->addAction(reset_cabrillo_log_action);
        menuFile->addAction(actionExport_Cabrillo_log);
        menuFile->addAction(actionOpen_log_directory);
        menuFile->addSeparator();
        menuFile->addAction(actionSettings);
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuView->addAction(actionWide_Waterfall);
        menuView->addAction(actionAstronomical_data);
        menuView->addAction(actionMessage_averaging);
        menuView->addAction(actionEcho_Graph);
        menuView->addAction(actionFast_Graph);
        menuView->addAction(contest_log_action);
        menuView->addAction(fox_log_action);
        menuView->addAction(actionColors);
        menuView->addAction(actionSWL_Mode);
        menuView->addSeparator();
        menuView->addAction(cbDockWF);
        menuView->addAction(actionCall_info);
        menuView->addAction(actionDark_mode);
        menuView->addSeparator();
        menuView->addAction(actionUnfiltered_View);
        menuView->addAction(actionPSKReporter);
        menuDecode->addAction(actionQuickDecode);
        menuDecode->addAction(actionMediumDecode);
        menuDecode->addAction(actionDeepestDecode);
        menuDecode->addSeparator();
        menuDecode->addAction(actionInclude_averaging);
        menuDecode->addAction(actionInclude_correlation);
        menuDecode->addAction(actionEnable_AP_FT8);
        menuDecode->addAction(actionEnable_AP_JT65);
        menuDecode->addAction(actionEnable_AP_DXcall);
        menuDecode->addAction(actionAuto_Clear_Avg);
        menuSave->addAction(actionNone);
        menuSave->addAction(actionSave_decoded);
        menuSave->addAction(actionSave_all);
        menuHelp->addAction(actionRelease_Notes);
        menuHelp->addAction(actionOnline_User_Guide);
        menuHelp->addAction(actionLocal_User_Guide);
        menuHelp->addAction(actionFT8_DXpedition_Mode_User_Guide);
        menuHelp->addAction(actionQuick_Start_Guide);
        menuHelp->addAction(download_samples_action);
        menuHelp->addSeparator();
        menuHelp->addAction(actionKeyboard_shortcuts);
        menuHelp->addAction(actionSpecial_mouse_commands);
        menuHelp->addAction(actionShort_list_of_add_on_prefixes_and_suffixes);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCopyright_Notice);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_WSJT_Z);
        menuMode->addAction(actionFST4);
        menuMode->addAction(actionFT4);
        menuMode->addAction(actionFT8);
        menuMode->addAction(actionJT4);
        menuMode->addAction(actionJT9);
        menuMode->addAction(actionJT65);
        menuMode->addAction(actionQ65);
        menuMode->addSeparator();
        menuMode->addAction(actionMSK144);
        menuMode->addSeparator();
        menuMode->addAction(actionFST4W);
        menuMode->addAction(actionWSPR);
        menuMode->addSeparator();
        menuMode->addAction(actionEcho);
        menuMode->addSeparator();
        menuMode->addAction(actionFreqCal);
        menuTools->addAction(actionErase_reference_spectrum);
        menuTools->addAction(actionMeasure_reference_spectrum);
        menuTools->addSeparator();
        menuTools->addAction(actionMeasure_phase_response);
        menuTools->addAction(view_phase_response_action);
        menuTools->addSeparator();
        menuTools->addAction(actionFrequency_calibration);
        menuTools->addAction(actionSolve_FreqCal);
        menuTools->addSeparator();
        menuTools->addAction(actionWSJT_Z_Debug);

        retranslateUi(MainWindow);

        controls_stack_widget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(8);
        RoundRobin->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WSJT-X   by K1JT", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About WSJT-X", nullptr));
        actionWide_Waterfall->setText(QApplication::translate("MainWindow", "Waterfall", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen_next_in_directory->setText(QApplication::translate("MainWindow", "Open next in directory", nullptr));
        actionDecode_remaining_files_in_directory->setText(QApplication::translate("MainWindow", "Decode remaining files in directory", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDecode_remaining_files_in_directory->setShortcut(QApplication::translate("MainWindow", "Shift+F6", nullptr));
#endif // QT_NO_SHORTCUT
        actionDelete_all_wav_files_in_SaveDir->setText(QApplication::translate("MainWindow", "Delete all *.wav && *.c2 files in SaveDir", nullptr));
        actionQuickDecode->setText(QApplication::translate("MainWindow", "Fast", nullptr));
        actionNone->setText(QApplication::translate("MainWindow", "None", nullptr));
        actionSave_all->setText(QApplication::translate("MainWindow", "Save all", nullptr));
        actionOnline_User_Guide->setText(QApplication::translate("MainWindow", "Online User Guide", nullptr));
        actionKeyboard_shortcuts->setText(QApplication::translate("MainWindow", "Keyboard shortcuts", nullptr));
        actionSpecial_mouse_commands->setText(QApplication::translate("MainWindow", "Special mouse commands", nullptr));
        actionJT9->setText(QApplication::translate("MainWindow", "JT9", nullptr));
        actionSave_decoded->setText(QApplication::translate("MainWindow", "Save decoded", nullptr));
        actionMediumDecode->setText(QApplication::translate("MainWindow", "Normal", nullptr));
        actionDeepestDecode->setText(QApplication::translate("MainWindow", "Deep", nullptr));
        actionErase_ALL_TXT->setText(QApplication::translate("MainWindow", "Erase ALL.TXT", nullptr));
        actionErase_wsjtx_log_adi->setText(QApplication::translate("MainWindow", "Erase wsjtx_log.adi", nullptr));
        actionJT65->setText(QApplication::translate("MainWindow", "JT65", nullptr));
        actionAstronomical_data->setText(QApplication::translate("MainWindow", "Astronomical data", nullptr));
        actionShort_list_of_add_on_prefixes_and_suffixes->setText(QApplication::translate("MainWindow", "List of Type 1 prefixes and suffixes", nullptr));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings...", nullptr));
        actionLocal_User_Guide->setText(QApplication::translate("MainWindow", "Local User Guide", nullptr));
        actionOpen_log_directory->setText(QApplication::translate("MainWindow", "Open log directory", nullptr));
        actionJT4->setText(QApplication::translate("MainWindow", "JT4", nullptr));
        actionMessage_averaging->setText(QApplication::translate("MainWindow", "Message averaging", nullptr));
#ifndef QT_NO_SHORTCUT
        actionMessage_averaging->setShortcut(QApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_NO_SHORTCUT
        actionInclude_averaging->setText(QApplication::translate("MainWindow", "Enable averaging", nullptr));
        actionInclude_correlation->setText(QApplication::translate("MainWindow", "Enable deep search", nullptr));
        actionWSPR->setText(QApplication::translate("MainWindow", "WSPR", nullptr));
        actionEcho_Graph->setText(QApplication::translate("MainWindow", "Echo Graph", nullptr));
#ifndef QT_NO_SHORTCUT
        actionEcho_Graph->setShortcut(QApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_NO_SHORTCUT
        actionEcho->setText(QApplication::translate("MainWindow", "Echo", nullptr));
#ifndef QT_NO_TOOLTIP
        actionEcho->setToolTip(QApplication::translate("MainWindow", "EME Echo mode", nullptr));
#endif // QT_NO_TOOLTIP
        actionFast_Graph->setText(QApplication::translate("MainWindow", "Fast Graph", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFast_Graph->setShortcut(QApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_NO_SHORTCUT
        download_samples_action->setText(QApplication::translate("MainWindow", "&Download Samples ...", nullptr));
#ifndef QT_NO_WHATSTHIS
        download_samples_action->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Download sample audio files demonstrating the various modes.</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        actionMSK144->setText(QApplication::translate("MainWindow", "MSK144", nullptr));
        actionRelease_Notes->setText(QApplication::translate("MainWindow", "Release Notes", nullptr));
        actionEnable_AP_DXcall->setText(QApplication::translate("MainWindow", "Enable AP for DX Call", nullptr));
        actionFreqCal->setText(QApplication::translate("MainWindow", "FreqCal", nullptr));
        actionMeasure_reference_spectrum->setText(QApplication::translate("MainWindow", "Measure reference spectrum", nullptr));
        actionMeasure_phase_response->setText(QApplication::translate("MainWindow", "Measure phase response", nullptr));
        actionErase_reference_spectrum->setText(QApplication::translate("MainWindow", "Erase reference spectrum", nullptr));
        actionFrequency_calibration->setText(QApplication::translate("MainWindow", "Execute frequency calibration cycle", nullptr));
        view_phase_response_action->setText(QApplication::translate("MainWindow", "Equalization tools ...", nullptr));
        actionFT8->setText(QApplication::translate("MainWindow", "FT8", nullptr));
        actionEnable_AP_FT8->setText(QApplication::translate("MainWindow", "Enable AP", nullptr));
        actionEnable_AP_JT65->setText(QApplication::translate("MainWindow", "Enable AP", nullptr));
        actionSolve_FreqCal->setText(QApplication::translate("MainWindow", "Solve for calibration parameters", nullptr));
        actionCopyright_Notice->setText(QApplication::translate("MainWindow", "Copyright notice", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopyright_Notice->setShortcut(QApplication::translate("MainWindow", "Shift+F1", nullptr));
#endif // QT_NO_SHORTCUT
        fox_log_action->setText(QApplication::translate("MainWindow", "Fox log", nullptr));
        actionFT8_DXpedition_Mode_User_Guide->setText(QApplication::translate("MainWindow", "FT8 DXpedition Mode User Guide", nullptr));
        reset_cabrillo_log_action->setText(QApplication::translate("MainWindow", "Reset Cabrillo log ...", nullptr));
        actionColors->setText(QApplication::translate("MainWindow", "Color highlighting scheme", nullptr));
        actionExport_Cabrillo_log->setText(QApplication::translate("MainWindow", "Export Cabrillo log ...", nullptr));
        actionQuick_Start_Guide->setText(QApplication::translate("MainWindow", "Quick-Start Guide to FST4 and FST4W", nullptr));
#ifndef QT_NO_TOOLTIP
        actionQuick_Start_Guide->setToolTip(QApplication::translate("MainWindow", "Quick-Start Guide to FST4 and FST4W", nullptr));
#endif // QT_NO_TOOLTIP
        contest_log_action->setText(QApplication::translate("MainWindow", "Contest log", nullptr));
        actionErase_WSPR_hashtable->setText(QApplication::translate("MainWindow", "Erase WSPR hashtable", nullptr));
        actionFT4->setText(QApplication::translate("MainWindow", "FT4", nullptr));
        actionIgnore_station->setText(QApplication::translate("MainWindow", "Ignore station", nullptr));
#ifndef QT_NO_TOOLTIP
        actionIgnore_station->setToolTip(QApplication::translate("MainWindow", "Add station to the temporary ignore list.", nullptr));
#endif // QT_NO_TOOLTIP
        actionCall_next->setText(QApplication::translate("MainWindow", "Pounce", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCall_next->setToolTip(QApplication::translate("MainWindow", "Call the station as soon as it becomes available.", nullptr));
#endif // QT_NO_TOOLTIP
        actionClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("MainWindow", "Clear this window", nullptr));
#endif // QT_NO_TOOLTIP
        actionSet_Rx_Freq->setText(QApplication::translate("MainWindow", "Set Rx Freq", nullptr));
        actionQRZ_Lookup->setText(QApplication::translate("MainWindow", "QRZ Lookup", nullptr));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("MainWindow", "Copy selected line", nullptr));
#endif // QT_NO_TOOLTIP
        cbDockWF->setText(QApplication::translate("MainWindow", "Dock Windows", nullptr));
        actionCall_info->setText(QApplication::translate("MainWindow", "Call info", nullptr));
        actionWSJT_Z_Debug->setText(QApplication::translate("MainWindow", "WSJT-Z Debug ", nullptr));
        actionFST4->setText(QApplication::translate("MainWindow", "FST4", nullptr));
#ifndef QT_NO_TOOLTIP
        actionFST4->setToolTip(QApplication::translate("MainWindow", "FST4", nullptr));
#endif // QT_NO_TOOLTIP
        actionFST4W->setText(QApplication::translate("MainWindow", "FST4W", nullptr));
#ifndef QT_NO_TOOLTIP
        actionFST4W->setToolTip(QApplication::translate("MainWindow", "FST4W", nullptr));
#endif // QT_NO_TOOLTIP
        actionSWL_Mode->setText(QApplication::translate("MainWindow", "SWL Mode", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSWL_Mode->setToolTip(QApplication::translate("MainWindow", "SWL Mode", nullptr));
#endif // QT_NO_TOOLTIP
        actionAbout_WSJT_Z->setText(QApplication::translate("MainWindow", "About WSJT-Z", nullptr));
        actionDark_mode->setText(QApplication::translate("MainWindow", "Dark mode", nullptr));
        actionQ65->setText(QApplication::translate("MainWindow", "Q65", nullptr));
        actionAuto_Clear_Avg->setText(QApplication::translate("MainWindow", "Auto Clear Avg after decode", nullptr));
        actionUnfiltered_View->setText(QApplication::translate("MainWindow", "Raw View", nullptr));
        actionPSKReporter->setText(QApplication::translate("MainWindow", "PSK Reporter", nullptr));
        cbCQonly->setText(QApplication::translate("MainWindow", "CQ only", nullptr));
#ifndef QT_NO_TOOLTIP
        logQSOButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Enter this QSO in log</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        logQSOButton->setText(QApplication::translate("MainWindow", "Log &QSO", nullptr));
#ifndef QT_NO_TOOLTIP
        stopButton->setToolTip(QApplication::translate("MainWindow", "Stop monitoring", nullptr));
#endif // QT_NO_TOOLTIP
        stopButton->setText(QApplication::translate("MainWindow", "&Stop", nullptr));
#ifndef QT_NO_TOOLTIP
        monitorButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Toggle monitoring On/Off</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        monitorButton->setText(QApplication::translate("MainWindow", "&Monitor", nullptr));
#ifndef QT_NO_TOOLTIP
        EraseButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Erase right window. Double-click to erase both windows.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        EraseButton->setText(QApplication::translate("MainWindow", "&Erase", nullptr));
#ifndef QT_NO_TOOLTIP
        ClrAvgButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Clear the accumulating message average.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        ClrAvgButton->setText(QApplication::translate("MainWindow", "Clear Avg", nullptr));
        pbBestSP->setText(QApplication::translate("MainWindow", "Best S+P", nullptr));
#ifndef QT_NO_TOOLTIP
        DecodeButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Decode most recent Rx period at QSO Frequency</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        DecodeButton->setText(QApplication::translate("MainWindow", "&Decode", nullptr));
#ifndef QT_NO_TOOLTIP
        autoButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Toggle Auto-Tx On/Off</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        autoButton->setText(QApplication::translate("MainWindow", "E&nable Tx", nullptr));
#ifndef QT_NO_TOOLTIP
        stopTxButton->setToolTip(QApplication::translate("MainWindow", "Stop transmitting immediately", nullptr));
#endif // QT_NO_TOOLTIP
        stopTxButton->setText(QApplication::translate("MainWindow", "&Halt Tx", nullptr));
#ifndef QT_NO_TOOLTIP
        tuneButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Toggle a pure Tx tone On/Off</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tuneButton->setText(QApplication::translate("MainWindow", "&Tune", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_autoCallNext->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>If this option is selected and a callsign is entered in the DX Call text box, software will automatically start calling that station as soon as it 'hears' it calling CQ or 73.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_autoCallNext->setText(QApplication::translate("MainWindow", "Pounce", nullptr));
        cbMenus->setText(QApplication::translate("MainWindow", "Menus", nullptr));
#ifndef QT_NO_SHORTCUT
        cbMenus->setShortcut(QApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_NO_SHORTCUT
        cbMini->setText(QApplication::translate("MainWindow", "Mini", nullptr));
#ifndef QT_NO_SHORTCUT
        cbMini->setShortcut(QApplication::translate("MainWindow", "F12", nullptr));
#endif // QT_NO_SHORTCUT
        lh_decodes_title_label->setText(QApplication::translate("MainWindow", "Band Activity", nullptr));
        lh_decodes_headings_label->setText(QApplication::translate("MainWindow", "UTC           dB            DT           Freq          Dr ", nullptr));
        w_callInfo->setTitle(QApplication::translate("MainWindow", "Call Info", nullptr));
        l_q_state->setText(QApplication::translate("MainWindow", "State", nullptr));
        l_q_name->setText(QApplication::translate("MainWindow", "Name", nullptr));
        l_q_zipcode->setText(QApplication::translate("MainWindow", "Zip", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "CQ Zone", nullptr));
        q_button->setText(QApplication::translate("MainWindow", "CLEAR", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Cont.", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "DXCC", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "DX Call", nullptr));
        l_q_email->setText(QApplication::translate("MainWindow", "Email", nullptr));
        l_q_addr1->setText(QApplication::translate("MainWindow", "Addr 1", nullptr));
        l_q_addr2->setText(QApplication::translate("MainWindow", "Addr 2", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Distance", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "ITU Zone", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Bearing", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Grid", nullptr));
        ci_pb_lookup->setText(QApplication::translate("MainWindow", ">", nullptr));
#ifndef QT_NO_TOOLTIP
        bandComboBox->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Select operating band or enter frequency in MHz or enter kHz increment followed by k.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        readFreq->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>If orange or red there has been a rig control failure, click to reset and read the dial frequency.  S implies split mode.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        readFreq->setText(QApplication::translate("MainWindow", "?", nullptr));
#ifndef QT_NO_TOOLTIP
        labDialFreq->setToolTip(QApplication::translate("MainWindow", "USB dial frequency", nullptr));
#endif // QT_NO_TOOLTIP
        labDialFreq->setText(QApplication::translate("MainWindow", "14.078 000", nullptr));
        labUTC->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">01:23:45 </p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        cbAutoCQ->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>When this is ticked, all hell breaks loose, the antichrist takes over, earth implodes and all humanity ceases to exist. </p><p><span style=\" font-weight:600;\">WARNING</span>: Tested on animals, non-vegan, includes gluten and traces of nuts!</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbAutoCQ->setText(QApplication::translate("MainWindow", "Auto CQ", nullptr));
#ifndef QT_NO_TOOLTIP
        cbAutoCall->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Similarly to Auto CQ, but the earth doesn't implode. Gluten free.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbAutoCall->setText(QApplication::translate("MainWindow", "Auto Call", nullptr));
#ifndef QT_NO_TOOLTIP
        cbHoldTxFreq->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check to keep Tx frequency fixed when double-clicking on decoded text.</p><p><span style=\" font-weight:600;\">NOTE: Will be forced if you select &quot;Treat 73's as CQ&quot; </span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbHoldTxFreq->setText(QApplication::translate("MainWindow", "Hold Tx Freq", nullptr));
        cbRxAll->setText(QApplication::translate("MainWindow", "Rx All Freqs", nullptr));
#ifndef QT_NO_TOOLTIP
        txFirstCheckBox->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check to Tx in even-numbered minutes or sequences, starting at 0; uncheck for odd sequences.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        txFirstCheckBox->setText(QApplication::translate("MainWindow", "Tx even/1st", nullptr));
        rh_decodes_title_label->setText(QApplication::translate("MainWindow", "Rx Frequency", nullptr));
        rh_decodes_headings_label->setText(QApplication::translate("MainWindow", "UTC           dB            DT           Freq          Dr ", nullptr));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("MainWindow", "Add callsign and locator to database", nullptr));
#endif // QT_NO_TOOLTIP
        addButton->setText(QApplication::translate("MainWindow", "Add", nullptr));
#ifndef QT_NO_TOOLTIP
        txrb4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Send this message in next Tx interval</p><p>Double-click to toggle between RRR and RR73 messages in Tx4 (not allowed for type 2 compound call holders)</p><p>RR73 messages should only be used when you are reasonably confident that no message repetitions will be required</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        txrb4->setText(QString());
#ifndef QT_NO_SHORTCUT
        txrb4->setShortcut(QApplication::translate("MainWindow", "Ctrl+4", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        txb6->setToolTip(QApplication::translate("MainWindow", "Switch to this Tx message NOW", nullptr));
#endif // QT_NO_TOOLTIP
        txb6->setText(QApplication::translate("MainWindow", "Tx &6", nullptr));
#ifndef QT_NO_SHORTCUT
        txb6->setShortcut(QApplication::translate("MainWindow", "Alt+6", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        txb1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Switch to this Tx message NOW</p><p>Double click to toggle the use of the Tx1 message to start a QSO with a station (not allowed for type 1 compound call holders)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        txb1->setText(QApplication::translate("MainWindow", "Tx &1", nullptr));
#ifndef QT_NO_SHORTCUT
        txb1->setShortcut(QApplication::translate("MainWindow", "Alt+1", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        txrb5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Send this message in next Tx interval</p><p>Double-click to reset to the standard 73 message</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        txrb5->setText(QString());
#ifndef QT_NO_SHORTCUT
        txrb5->setShortcut(QApplication::translate("MainWindow", "Ctrl+5", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        txrb6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Send this message in next Tx interval</p><p><br/></p><p>Double click to clear DX Call/DX Grid and TX 1-5 fields. </p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        txrb6->setText(QString());
#ifndef QT_NO_SHORTCUT
        txrb6->setShortcut(QApplication::translate("MainWindow", "Ctrl+6", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        txrb3->setToolTip(QApplication::translate("MainWindow", "Send this message in next Tx interval", nullptr));
#endif // QT_NO_TOOLTIP
        txrb3->setText(QString());
#ifndef QT_NO_SHORTCUT
        txrb3->setShortcut(QApplication::translate("MainWindow", "Ctrl+3", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        genStdMsgsPushButton->setToolTip(QApplication::translate("MainWindow", "Generate standard messages for minimal QSO", nullptr));
#endif // QT_NO_TOOLTIP
        genStdMsgsPushButton->setText(QApplication::translate("MainWindow", "Gen Msgs", nullptr));
#ifndef QT_NO_TOOLTIP
        tx5->setToolTip(QApplication::translate("MainWindow", "Enter a free text message (maximum 13 characters)\n"
"or select a predefined macro from the dropdown list.\n"
"Press ENTER to add the current text to the predefined\n"
"list. The list can be maintained in Settings (F2).", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        txb2->setToolTip(QApplication::translate("MainWindow", "Switch to this Tx message NOW", nullptr));
#endif // QT_NO_TOOLTIP
        txb2->setText(QApplication::translate("MainWindow", "Tx &2", nullptr));
#ifndef QT_NO_SHORTCUT
        txb2->setShortcut(QApplication::translate("MainWindow", "Alt+2", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        txrb1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Send this message in next Tx interval</p><p>Double click to toggle the use of the Tx1 message to start a QSO with a station (not allowed for type 1 compound call holders)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        txrb1->setText(QString());
#ifndef QT_NO_SHORTCUT
        txrb1->setShortcut(QApplication::translate("MainWindow", "Ctrl+1", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        txb5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Switch to this Tx message NOW</p><p>Double-click to reset to the standard 73 message</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        txb5->setText(QApplication::translate("MainWindow", "Tx &5", nullptr));
#ifndef QT_NO_SHORTCUT
        txb5->setShortcut(QApplication::translate("MainWindow", "Alt+5", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        rptSpinBox->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Signal report: Signal-to-noise ratio in 2500 Hz reference bandwidth (dB).</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        rptSpinBox->setPrefix(QApplication::translate("MainWindow", "Rep ", nullptr));
#ifndef QT_NO_TOOLTIP
        txb4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Switch to this Tx message NOW</p><p>Double-click to toggle between RRR and RR73 messages in Tx4 (not allowed for type2 compound call holders)</p><p>RR73 messages should only be used when you are reasonably confident that no message repetitions will be required</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        txb4->setText(QApplication::translate("MainWindow", "Tx &4", nullptr));
#ifndef QT_NO_SHORTCUT
        txb4->setShortcut(QApplication::translate("MainWindow", "Alt+4", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        txb3->setToolTip(QApplication::translate("MainWindow", "Switch to this Tx message NOW", nullptr));
#endif // QT_NO_TOOLTIP
        txb3->setText(QApplication::translate("MainWindow", "Tx &3", nullptr));
#ifndef QT_NO_SHORTCUT
        txb3->setShortcut(QApplication::translate("MainWindow", "Alt+3", nullptr));
#endif // QT_NO_SHORTCUT
        tx1->setText(QString());
        tx6->setText(QString());
        tx4->setText(QString());
#ifndef QT_NO_TOOLTIP
        txrb2->setToolTip(QApplication::translate("MainWindow", "Send this message in next Tx interval", nullptr));
#endif // QT_NO_TOOLTIP
        txrb2->setText(QString());
#ifndef QT_NO_SHORTCUT
        txrb2->setShortcut(QApplication::translate("MainWindow", "Ctrl+2", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        lookupButton->setToolTip(QApplication::translate("MainWindow", "Search for callsign in database", nullptr));
#endif // QT_NO_TOOLTIP
        lookupButton->setText(QApplication::translate("MainWindow", "&Lookup", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "1", nullptr));
        sbMax_dB->setPrefix(QApplication::translate("MainWindow", "Max dB  ", nullptr));
        pbFoxReset->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        sbNslots->setSuffix(QString());
        sbNslots->setPrefix(QApplication::translate("MainWindow", "N Slots    ", nullptr));
        comboBoxHoundSort->setItemText(0, QApplication::translate("MainWindow", "Random", nullptr));
        comboBoxHoundSort->setItemText(1, QApplication::translate("MainWindow", "Call", nullptr));
        comboBoxHoundSort->setItemText(2, QApplication::translate("MainWindow", "Grid", nullptr));
        comboBoxHoundSort->setItemText(3, QApplication::translate("MainWindow", "S/N (dB)", nullptr));
        comboBoxHoundSort->setItemText(4, QApplication::translate("MainWindow", "Distance", nullptr));

        comboBoxHoundSort->setCurrentText(QApplication::translate("MainWindow", "Random", nullptr));
        sbNlist->setPrefix(QApplication::translate("MainWindow", "N List     ", nullptr));
        comboBoxCQ->setItemText(0, QApplication::translate("MainWindow", "CQ", nullptr));
        comboBoxCQ->setItemText(1, QApplication::translate("MainWindow", "CQ AF", nullptr));
        comboBoxCQ->setItemText(2, QApplication::translate("MainWindow", "CQ AN", nullptr));
        comboBoxCQ->setItemText(3, QApplication::translate("MainWindow", "CQ AS", nullptr));
        comboBoxCQ->setItemText(4, QApplication::translate("MainWindow", "CQ EU", nullptr));
        comboBoxCQ->setItemText(5, QApplication::translate("MainWindow", "CQ NA", nullptr));
        comboBoxCQ->setItemText(6, QApplication::translate("MainWindow", "CQ OC", nullptr));
        comboBoxCQ->setItemText(7, QApplication::translate("MainWindow", "CQ SA", nullptr));
        comboBoxCQ->setItemText(8, QApplication::translate("MainWindow", "CQ 0", nullptr));
        comboBoxCQ->setItemText(9, QApplication::translate("MainWindow", "CQ 1", nullptr));
        comboBoxCQ->setItemText(10, QApplication::translate("MainWindow", "CQ 2", nullptr));
        comboBoxCQ->setItemText(11, QApplication::translate("MainWindow", "CQ 3", nullptr));
        comboBoxCQ->setItemText(12, QApplication::translate("MainWindow", "CQ 4", nullptr));
        comboBoxCQ->setItemText(13, QApplication::translate("MainWindow", "CQ 5", nullptr));
        comboBoxCQ->setItemText(14, QApplication::translate("MainWindow", "CQ 6", nullptr));
        comboBoxCQ->setItemText(15, QApplication::translate("MainWindow", "CQ 7", nullptr));
        comboBoxCQ->setItemText(16, QApplication::translate("MainWindow", "CQ 8", nullptr));
        comboBoxCQ->setItemText(17, QApplication::translate("MainWindow", "CQ 9", nullptr));

        comboBoxCQ->setCurrentText(QApplication::translate("MainWindow", "CQ", nullptr));
        cbMoreCQs->setText(QApplication::translate("MainWindow", "More CQs", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("MainWindow", "2", nullptr));
#ifndef QT_NO_TOOLTIP
        cbAutoSeq->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check to enable automatic sequencing of Tx messages based on received messages.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbAutoSeq->setText(QApplication::translate("MainWindow", "Auto Seq", nullptr));
#ifndef QT_NO_TOOLTIP
        cbTx6->setToolTip(QApplication::translate("MainWindow", "Check to generate \"@1250  (SEND MSGS)\" in Tx6.", nullptr));
#endif // QT_NO_TOOLTIP
        cbTx6->setText(QApplication::translate("MainWindow", "Tx6", nullptr));
#ifndef QT_NO_TOOLTIP
        cbFirst->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check to call the first decoded responder to my CQ.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbFirst->setText(QApplication::translate("MainWindow", "Call 1st", nullptr));
#ifndef QT_NO_TOOLTIP
        sbCQTxFreq->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Frequency to call CQ on in kHz above the current MHz</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        sbCQTxFreq->setPrefix(QApplication::translate("MainWindow", "Tx CQ ", nullptr));
#ifndef QT_NO_TOOLTIP
        sbTR->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Tx/Rx or Frequency calibration sequence length</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        sbTR->setSuffix(QApplication::translate("MainWindow", "  s", nullptr));
        sbTR->setPrefix(QApplication::translate("MainWindow", "T/R  ", nullptr));
        sbF_Low->setPrefix(QApplication::translate("MainWindow", "F Low   ", nullptr));
#ifndef QT_NO_TOOLTIP
        syncSpinBox->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Synchronizing threshold.  Lower numbers accept weaker sync signals.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        syncSpinBox->setPrefix(QApplication::translate("MainWindow", "Sync   ", nullptr));
#ifndef QT_NO_TOOLTIP
        pbTxMode->setToolTip(QApplication::translate("MainWindow", "Toggle Tx mode", nullptr));
#endif // QT_NO_TOOLTIP
        pbTxMode->setText(QApplication::translate("MainWindow", "Tx JT9 @", nullptr));
        sbSerialNumber->setPrefix(QApplication::translate("MainWindow", "Tx# ", nullptr));
#ifndef QT_NO_TOOLTIP
        sbFtol->setToolTip(QApplication::translate("MainWindow", "Frequency tolerance (Hz)", nullptr));
#endif // QT_NO_TOOLTIP
        sbFtol->setPrefix(QApplication::translate("MainWindow", "F Tol  ", nullptr));
        sbNB->setSuffix(QApplication::translate("MainWindow", "  %", nullptr));
        sbNB->setPrefix(QApplication::translate("MainWindow", "NB  ", nullptr));
#ifndef QT_NO_TOOLTIP
        cbFast9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check to enable JT9 fast modes</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbFast9->setText(QApplication::translate("MainWindow", "Fast", nullptr));
#ifndef QT_NO_TOOLTIP
        labNextCall->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Double-click on another caller to queue that call for your next QSO.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labNextCall->setText(QApplication::translate("MainWindow", "Next Call", nullptr));
#ifndef QT_NO_TOOLTIP
        sbSubmode->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Submode determines tone spacing; A is narrowest.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        sbSubmode->setPrefix(QApplication::translate("MainWindow", "Submode ", nullptr));
#ifndef QT_NO_TOOLTIP
        cbShMsgs->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check to use short-format messages.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbShMsgs->setText(QApplication::translate("MainWindow", "Sh", nullptr));
#ifndef QT_NO_TOOLTIP
        cbSWL->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check to monitor Sh messages.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbSWL->setText(QApplication::translate("MainWindow", "SWL", nullptr));
        sbF_High->setSuffix(QString());
        sbF_High->setPrefix(QApplication::translate("MainWindow", "F High ", nullptr));
#ifndef QT_NO_TOOLTIP
        measure_check_box->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check this to start recording calibration data.<br/>While measuring calibration correction is disabled.<br/>When not checked you can view the calibration results.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        measure_check_box->setText(QApplication::translate("MainWindow", "Measure", nullptr));
        labDXped->setText(QApplication::translate("MainWindow", "Fox", nullptr));
#ifndef QT_NO_TOOLTIP
        cbCQTx->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Check this to call CQ on the &quot;Tx CQ&quot; frequency. Rx will be on the current frequency and the CQ message wiill include the current Rx frequency so callers know which frequency to reply on.</p><p>Not available to nonstandard callsign holders.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbCQTx->setText(QString());
        sbMaxDrift->setPrefix(QApplication::translate("MainWindow", "Max Drift ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "3", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Only stations with new Call/DXCC/Continent... on band will be shown in the Band Activity window</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("MainWindow", "New on band", nullptr));
        cb_callB4onBand->setText(QApplication::translate("MainWindow", "Call", nullptr));
        cb_countryB4onBand->setText(QApplication::translate("MainWindow", "DXCC", nullptr));
        cb_continentB4onBand->setText(QApplication::translate("MainWindow", "Continent", nullptr));
        cb_gridB4onBand->setText(QApplication::translate("MainWindow", "Grid", nullptr));
        cb_CQZoneB4onBand->setText(QApplication::translate("MainWindow", "CQ zone", nullptr));
        cb_ITUZoneB4onBand->setText(QApplication::translate("MainWindow", "ITU zone", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Only stations with new Call/DXCC/Continent... will be shown in the Band Activity window</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("MainWindow", "New", nullptr));
        cb_callB4->setText(QApplication::translate("MainWindow", "Call", nullptr));
        cb_countryB4->setText(QApplication::translate("MainWindow", "DXCC", nullptr));
        cb_continentB4->setText(QApplication::translate("MainWindow", "Continent", nullptr));
        cb_gridB4->setText(QApplication::translate("MainWindow", "Grid", nullptr));
        cb_CQZoneB4->setText(QApplication::translate("MainWindow", "CQ zone", nullptr));
        cb_ITUZoneB4->setText(QApplication::translate("MainWindow", "ITU zone", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Show only stations from the selected continents</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groupBox_8->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Continents", nullptr));
        cb_c_AS->setText(QApplication::translate("MainWindow", "Asia", nullptr));
        cb_c_EU->setText(QApplication::translate("MainWindow", "Europe", nullptr));
        cb_c_AF->setText(QApplication::translate("MainWindow", "Africa", nullptr));
        cb_c_NA->setText(QApplication::translate("MainWindow", "N. America", nullptr));
        cb_c_SA->setText(QApplication::translate("MainWindow", "S. America", nullptr));
        cb_c_AN->setText(QApplication::translate("MainWindow", "Antarctica", nullptr));
        cb_c_OC->setText(QApplication::translate("MainWindow", "Oceania", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_f_LOTW->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Show only stations registered with LOTW</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_f_LOTW->setText(QApplication::translate("MainWindow", "LOTW Only", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("MainWindow", "Filtering", nullptr));
        cb_prefixFilter->setItemText(0, QApplication::translate("MainWindow", "Off", nullptr));
        cb_prefixFilter->setItemText(1, QApplication::translate("MainWindow", "Include", nullptr));
        cb_prefixFilter->setItemText(2, QApplication::translate("MainWindow", "Exclude", nullptr));

#ifndef QT_NO_TOOLTIP
        cb_prefixFilter->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Control the prefix filtering</p><p>- OFF: Prefix filtering off</p><p>- Exclude: Exclude listed prefixes</p><p>- Include: Include listed prefixes only</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Use this option to ignore stations calling CQ DX from your continent. </p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MainWindow", "Ignore CQ DX from:", nullptr));
        cb_filter_CQDX_Continent->setItemText(0, QString());
        cb_filter_CQDX_Continent->setItemText(1, QApplication::translate("MainWindow", "Africa", nullptr));
        cb_filter_CQDX_Continent->setItemText(2, QApplication::translate("MainWindow", "N. America", nullptr));
        cb_filter_CQDX_Continent->setItemText(3, QApplication::translate("MainWindow", "S. America", nullptr));
        cb_filter_CQDX_Continent->setItemText(4, QApplication::translate("MainWindow", "Oceania", nullptr));
        cb_filter_CQDX_Continent->setItemText(5, QApplication::translate("MainWindow", "Europe", nullptr));
        cb_filter_CQDX_Continent->setItemText(6, QApplication::translate("MainWindow", "Asia", nullptr));
        cb_filter_CQDX_Continent->setItemText(7, QApplication::translate("MainWindow", "Antarctica", nullptr));

#ifndef QT_NO_TOOLTIP
        cb_filter_CQDX_Continent->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Use this option to ignore stations calling CQ DX from your continent. </p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pte_prefixFilter->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>List of prefixes and DXCC's to be included or excluded from the band activity window. </p><p>Prefixes or DXCC names (prefixed with '+' sign) can be used here.</p><p>Each row can contain entries for one band.</p><p><span style=\" font-weight:600;\">Example: </span></p><p>80m:SP,GB,DE</p><p>40m:+poland,+england,+germany</p><p><br/></p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pte_prefixFilter->setPlainText(QString());
        label_6->setText(QApplication::translate("MainWindow", "CQ Targets", nullptr));
        cb_ignoreCQTarget->setItemText(0, QApplication::translate("MainWindow", "Off", nullptr));
        cb_ignoreCQTarget->setItemText(1, QApplication::translate("MainWindow", "Include", nullptr));
        cb_ignoreCQTarget->setItemText(2, QApplication::translate("MainWindow", "Exclude", nullptr));
        cb_ignoreCQTarget->setItemText(3, QApplication::translate("MainWindow", "Show only", nullptr));

#ifndef QT_NO_TOOLTIP
        cb_ignoreCQTarget->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>You can include/exclude specific CQ targets here, ie. CQ EU, CQ SP etc.</p><p>When &quot;Show only&quot; is selected, only the stations with matching CQ target will be shown.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        le_ignoreCQXX->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Comma separated list of CQ targets to be ignored if the &quot;Ignore CQ Targets&quot; option is selected. </p><p><span style=\" font-weight:600;\">Example:</span></p><p>NA,AS,JA,TEST,VK</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Prefixes", nullptr));
        cb_stateFilter->setItemText(0, QApplication::translate("MainWindow", "Off", nullptr));
        cb_stateFilter->setItemText(1, QApplication::translate("MainWindow", "Include", nullptr));
        cb_stateFilter->setItemText(2, QApplication::translate("MainWindow", "Exclude", nullptr));

#ifndef QT_NO_TOOLTIP
        cb_stateFilter->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Control the prefix filtering</p><p>- OFF: Prefix filtering off</p><p>- Exclude: Exclude listed prefixes</p><p>- Include: Include listed prefixes only</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pte_stateFilter->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>List of USA state codes per band</p><p><span style=\" font-weight:600;\">Example: </span></p><p>80m:CT,CA,MD</p><p>40m:HI,LA,AK</p><p><br/></p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pte_stateFilter->setPlainText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "States", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Ignored stations", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_IgnoreAfterWD->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>When this option is used, software will add the station to the ignore list automatically if it was calling it and the TX watchdog expired. When a station is added to the Ignored stations list, it will not appear on the Band Activity pane.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_IgnoreAfterWD->setText(QApplication::translate("MainWindow", "Auto ignore", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_addToIgnore->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Add current DX Call to the Ignored stations list. </p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        btn_addToIgnore->setText(QApplication::translate("MainWindow", "Add station", nullptr));
#ifndef QT_NO_TOOLTIP
        btn_clearIgnore->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Clear Ignored stations list.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        btn_clearIgnore->setText(QApplication::translate("MainWindow", "Clear", nullptr));
#ifndef QT_NO_TOOLTIP
        pte_IgnoredStations->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>If a callsign is added to this list, either via Auto ignore option, or manually, it will not appear on the Band Activity pane. </p><p><span style=\" font-weight:600;\">Syntax: </span>One callsign per row.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Ignore", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>If a station calling CQ matches the selection, default windows notification sound will be played and the station details will be added to the Alerts log. </p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_4->setTitle(QApplication::translate("MainWindow", "New", nullptr));
        cb_callB4_alert->setText(QApplication::translate("MainWindow", "Call", nullptr));
        cb_countryB4_alert->setText(QApplication::translate("MainWindow", "DXCC", nullptr));
        cb_continentB4_alert->setText(QApplication::translate("MainWindow", "Continent", nullptr));
        cb_gridB4_alert->setText(QApplication::translate("MainWindow", "Grid", nullptr));
        cb_CQZoneB4_alert->setText(QApplication::translate("MainWindow", "CQ zone", nullptr));
        cb_ITUZoneB4_alert->setText(QApplication::translate("MainWindow", "ITU zone", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>If a station calling CQ matches the selection, default windows notification sound will be played and the station details will be added to the Alerts log. </p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_5->setTitle(QApplication::translate("MainWindow", "New on band", nullptr));
        cb_callB4onBand_alert->setText(QApplication::translate("MainWindow", "Call", nullptr));
        cb_countryB4onBand_alert->setText(QApplication::translate("MainWindow", "DXCC", nullptr));
        cb_continentB4onBand_alert->setText(QApplication::translate("MainWindow", "Continent", nullptr));
        cb_gridB4onBand_alert->setText(QApplication::translate("MainWindow", "Grid", nullptr));
        cb_CQZoneB4onBand_alert->setText(QApplication::translate("MainWindow", "CQ zone", nullptr));
        cb_ITUZoneB4onBand_alert->setText(QApplication::translate("MainWindow", "ITU zone", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Custom Alerts", nullptr));
#ifndef QT_NO_TOOLTIP
        le_CustomAlerts->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>You can use this text area to define custom criteria for your alerts. </p><p>Comma separated strings entered here will be matched against the stations calling CQ.</p><p>These could be prefixes, suffixes or whole call signs.</p><p><span style=\" font-weight:600;\">Example: </span></p><p>SP,SQ,HF,SQ9FVE,FVE</p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("MainWindow", "Alerts log", nullptr));
#ifndef QT_NO_TOOLTIP
        pte_alerts->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>This text area will show all your alert history.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Alerts", nullptr));
        cb_autoModeSwitch->setTitle(QApplication::translate("MainWindow", "Mode switching", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "AutoCall #", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "Auto CQ #", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Min Signal", nullptr));
#ifndef QT_NO_TOOLTIP
        sbMindB->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Show only stations with signal stronger than...</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cbCQonlyIncl73->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>When &quot;CQ Only&quot; selected, include stations calling 73/RR73.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbCQonlyIncl73->setText(QApplication::translate("MainWindow", "Treat 73's as CQ", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Priority:", nullptr));
        cb_autoCallPriority->setItemText(0, QApplication::translate("MainWindow", "Last decoded", nullptr));
        cb_autoCallPriority->setItemText(1, QApplication::translate("MainWindow", "Signal strength", nullptr));
        cb_autoCallPriority->setItemText(2, QApplication::translate("MainWindow", "Distance", nullptr));

#ifndef QT_NO_TOOLTIP
        cb_autoCallPriority->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Priority of automatic station selection:</p><p><span style=\" font-weight:600;\">- Last decoded: </span>call last decoded station</p><p><span style=\" font-weight:600;\">- Distance: </span>call the station with the longest distance</p><p><span style=\" font-weight:600;\">- Signal strength: </span>call the station with the strongest signal</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_bandHopper->setTitle(QApplication::translate("MainWindow", "Band hopping", nullptr));
#ifndef QT_NO_TOOLTIP
        pte_bandHopper->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>This feature allows you to set up automatic band changes.</p><p><br/></p><p><span style=\" font-weight:600;\">Syntax:</span></p><p>&lt;hour&gt;:&lt;band1&gt;,&lt;band2&gt;,&lt;bandX&gt;</p><p><br/></p><p><span style=\" font-weight:600;\">Example:</span></p><p>14:20m,40m</p><p>22:80m:40m</p><p><br/></p><p>In the above example, Z will switch between 20m and 40m between 14 and 22, then betwee 22 and 14 it will switch between 80m and 40m.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", "Others", nullptr));
        WSPRfreqSpinBox->setSuffix(QApplication::translate("MainWindow", "  Hz", nullptr));
        WSPRfreqSpinBox->setPrefix(QApplication::translate("MainWindow", "Tx  ", nullptr));
        sbFST4W_RxFreq->setSuffix(QApplication::translate("MainWindow", "  Hz", nullptr));
        sbFST4W_RxFreq->setPrefix(QApplication::translate("MainWindow", "Rx  ", nullptr));
        sbFST4W_FTol->setSuffix(QApplication::translate("MainWindow", "  Hz", nullptr));
        sbFST4W_FTol->setPrefix(QApplication::translate("MainWindow", "F Tol  ", nullptr));
        RoundRobin->setItemText(0, QApplication::translate("MainWindow", "Random", nullptr));
        RoundRobin->setItemText(1, QApplication::translate("MainWindow", "1/2", nullptr));
        RoundRobin->setItemText(2, QApplication::translate("MainWindow", "2/2", nullptr));
        RoundRobin->setItemText(3, QApplication::translate("MainWindow", "1/3", nullptr));
        RoundRobin->setItemText(4, QApplication::translate("MainWindow", "2/3", nullptr));
        RoundRobin->setItemText(5, QApplication::translate("MainWindow", "3/3", nullptr));
        RoundRobin->setItemText(6, QApplication::translate("MainWindow", "1/4", nullptr));
        RoundRobin->setItemText(7, QApplication::translate("MainWindow", "2/4", nullptr));
        RoundRobin->setItemText(8, QApplication::translate("MainWindow", "3/4", nullptr));
        RoundRobin->setItemText(9, QApplication::translate("MainWindow", "4/4", nullptr));
        RoundRobin->setItemText(10, QApplication::translate("MainWindow", "1/5", nullptr));
        RoundRobin->setItemText(11, QApplication::translate("MainWindow", "2/5", nullptr));
        RoundRobin->setItemText(12, QApplication::translate("MainWindow", "3/5", nullptr));
        RoundRobin->setItemText(13, QApplication::translate("MainWindow", "4/5", nullptr));
        RoundRobin->setItemText(14, QApplication::translate("MainWindow", "5/5", nullptr));
        RoundRobin->setItemText(15, QApplication::translate("MainWindow", "1/6", nullptr));
        RoundRobin->setItemText(16, QApplication::translate("MainWindow", "2/6", nullptr));
        RoundRobin->setItemText(17, QApplication::translate("MainWindow", "3/6", nullptr));
        RoundRobin->setItemText(18, QApplication::translate("MainWindow", "4/6", nullptr));
        RoundRobin->setItemText(19, QApplication::translate("MainWindow", "5/6", nullptr));
        RoundRobin->setItemText(20, QApplication::translate("MainWindow", "6/6", nullptr));

#ifndef QT_NO_TOOLTIP
        sbTxPercent->setToolTip(QApplication::translate("MainWindow", "Percentage of minute sequences devoted to transmitting.", nullptr));
#endif // QT_NO_TOOLTIP
        sbTxPercent->setSuffix(QApplication::translate("MainWindow", "  %", nullptr));
        sbTxPercent->setPrefix(QApplication::translate("MainWindow", "Tx Pct ", nullptr));
        sbTR_FST4W->setSuffix(QApplication::translate("MainWindow", "  s", nullptr));
        sbTR_FST4W->setPrefix(QApplication::translate("MainWindow", "T/R  ", nullptr));
        band_hopping_group_box->setTitle(QApplication::translate("MainWindow", "Band Hopping", nullptr));
#ifndef QT_NO_TOOLTIP
        band_hopping_schedule_push_button->setToolTip(QApplication::translate("MainWindow", "Choose bands and times of day for band-hopping.", nullptr));
#endif // QT_NO_TOOLTIP
        band_hopping_schedule_push_button->setText(QApplication::translate("MainWindow", "Schedule ...", nullptr));
#ifndef QT_NO_TOOLTIP
        cbUploadWSPR_Spots->setToolTip(QApplication::translate("MainWindow", "Upload decoded messages to WSPRnet.org.", nullptr));
#endif // QT_NO_TOOLTIP
        cbUploadWSPR_Spots->setText(QApplication::translate("MainWindow", "Upload spots", nullptr));
#ifndef QT_NO_TOOLTIP
        WSPR_prefer_type_1_check_box->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>6 digit locators cause 2 different messages to be sent, the second contains the full locator but only a hashed callsign, other stations must have decoded the first once before they can decode your call in the second. Check this option to only send 4 digit locators if it will avoid the two message protocol.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        WSPR_prefer_type_1_check_box->setAccessibleDescription(QApplication::translate("MainWindow", "6 digit locators cause 2 different messages to be sent, the second contains the full locator but only a hashed callsign, other stations must have decoded the first once before they can decode your call in the second. Check this option to only send 4 digit locators if it will avoid the two message protocol.", nullptr));
#endif // QT_NO_ACCESSIBILITY
        WSPR_prefer_type_1_check_box->setText(QApplication::translate("MainWindow", "Prefer Type 1 messages", nullptr));
        cbNoOwnCall->setText(QApplication::translate("MainWindow", "No own call decodes", nullptr));
#ifndef QT_NO_TOOLTIP
        pbTxNext->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Transmit during the next sequence.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pbTxNext->setText(QApplication::translate("MainWindow", "Tx Next", nullptr));
#ifndef QT_NO_TOOLTIP
        TxPowerComboBox->setToolTip(QApplication::translate("MainWindow", "Set Tx power in dBm (dB above 1 mW) as part of your WSPR message.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        RxFreqSpinBox->setToolTip(QApplication::translate("MainWindow", "Audio Rx frequency", nullptr));
#endif // QT_NO_TOOLTIP
        RxFreqSpinBox->setSuffix(QString());
        RxFreqSpinBox->setPrefix(QApplication::translate("MainWindow", "Rx ", nullptr));
#ifndef QT_NO_TOOLTIP
        pbT2R->setToolTip(QApplication::translate("MainWindow", "Set Rx frequency to Tx Frequency", nullptr));
#endif // QT_NO_TOOLTIP
        pbT2R->setText(QApplication::translate("MainWindow", "<", nullptr));
#ifndef QT_NO_TOOLTIP
        pbR2T->setToolTip(QApplication::translate("MainWindow", "Set Tx frequency to Rx Frequency", nullptr));
#endif // QT_NO_TOOLTIP
        pbR2T->setText(QApplication::translate("MainWindow", ">", nullptr));
#ifndef QT_NO_TOOLTIP
        TxFreqSpinBox->setToolTip(QApplication::translate("MainWindow", "Audio Tx frequency", nullptr));
#endif // QT_NO_TOOLTIP
        TxFreqSpinBox->setSuffix(QString());
        TxFreqSpinBox->setPrefix(QApplication::translate("MainWindow", "Tx ", nullptr));
#ifndef QT_NO_TOOLTIP
        pb_FreeFreq->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Automatically sets TX frequency by analysing the activity on the band.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pb_FreeFreq->setText(QApplication::translate("MainWindow", "Auto", nullptr));
        pb_WDReset->setText(QApplication::translate("MainWindow", "Reset WD", nullptr));
        cb_filtering->setText(QApplication::translate("MainWindow", "Filtering", nullptr));
        label->setText(QApplication::translate("MainWindow", "Call ", nullptr));
#ifndef QT_NO_TOOLTIP
        dxCallEntry->setToolTip(QApplication::translate("MainWindow", "Callsign of station to be worked", nullptr));
#endif // QT_NO_TOOLTIP
        dxCallEntry->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", " Grid ", nullptr));
#ifndef QT_NO_TOOLTIP
        dxGridEntry->setToolTip(QApplication::translate("MainWindow", "Locator of station to be worked", nullptr));
#endif // QT_NO_TOOLTIP
        dxGridEntry->setText(QString());
        cb_specialMode->setItemText(0, QApplication::translate("MainWindow", "F/H: None", nullptr));
        cb_specialMode->setItemText(1, QApplication::translate("MainWindow", "F/H: Fox", nullptr));
        cb_specialMode->setItemText(2, QApplication::translate("MainWindow", "F/H: Hound", nullptr));

        label_16->setText(QApplication::translate("MainWindow", " Pwr", nullptr));
#ifndef QT_NO_TOOLTIP
        outAttenuation->setToolTip(QApplication::translate("MainWindow", "Adjust Tx audio level", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        signal_meter_widget->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>30dB recommended when only noise present<br/>Green when good<br/>Red when clipping may occur<br/>Yellow when too low</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuDecode->setTitle(QApplication::translate("MainWindow", "Decode", nullptr));
        menuSave->setTitle(QApplication::translate("MainWindow", "Save", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuMode->setTitle(QApplication::translate("MainWindow", "Mode", nullptr));
        menuConfig->setTitle(QApplication::translate("MainWindow", "Configurations", nullptr));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
