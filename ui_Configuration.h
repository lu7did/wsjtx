/********************************************************************************
** Form generated from reading UI file 'Configuration.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATION_H
#define UI_CONFIGURATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/CheckableItemComboBox.hpp"
#include "widgets/DecodeHighlightingListView.hpp"
#include "widgets/LazyFillComboBox.hpp"

QT_BEGIN_NAMESPACE

class Ui_configuration_dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *configuration_tabs;
    QWidget *general_tab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *station_group_box;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_14;
    QFormLayout *formLayout_3;
    QLabel *callsign_label;
    QLineEdit *callsign_line_edit;
    QFormLayout *formLayout_12;
    QLabel *grid_label;
    QLineEdit *grid_line_edit;
    QCheckBox *use_dynamic_grid;
    QFormLayout *formLayout_2;
    QLabel *label_12;
    QComboBox *region_combo_box;
    QFormLayout *formLayout_13;
    QLabel *label_5;
    QComboBox *type_2_msg_gen_combo_box;
    QFrame *line_5;
    QGroupBox *display_group_box;
    QGridLayout *gridLayout_4;
    QCheckBox *TX_messages_check_box;
    QCheckBox *DXCC_check_box;
    QCheckBox *decodes_from_top_check_box;
    QCheckBox *ppfx_check_box;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *font_push_button;
    QPushButton *decoded_text_font_push_button;
    QSpacerItem *verticalSpacer;
    QCheckBox *insert_blank_check_box;
    QCheckBox *miles_check_box;
    QFrame *line_7;
    QGroupBox *behaviour_group_box;
    QGridLayout *gridLayout_8;
    QCheckBox *decode_at_52s_check_box;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_10;
    QSpinBox *tx_watchdog_spin_box;
    QCheckBox *enable_VHF_features_check_box;
    QCheckBox *single_decode_check_box;
    QCheckBox *tx_QSY_check_box;
    QCheckBox *monitor_off_check_box;
    QCheckBox *monitor_last_used_check_box;
    QCheckBox *alternate_bindings_check_box;
    QCheckBox *disable_TX_on_73_check_box;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *CW_id_after_73_check_box;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpinBox *CW_id_interval_spin_box;
    QCheckBox *quick_call_check_box;
    QCheckBox *force_call_1st_check_box;
    QSpacerItem *verticalSpacer_9;
    QWidget *radio_tab;
    QGridLayout *gridLayout_3;
    QGroupBox *CAT_control_group_box;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *CAT_port_label;
    QComboBox *CAT_port_combo_box;
    QGroupBox *CAT_serial_port_parameters_group_box;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_5;
    QLabel *CAT_baud_label;
    QComboBox *CAT_serial_baud_combo_box;
    QGroupBox *CAT_data_bits_group_box;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *CAT_default_bit_radio_button;
    QRadioButton *CAT_7_bit_radio_button;
    QRadioButton *CAT_8_bit_radio_button;
    QGroupBox *CAT_stop_bits_group_box;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *CAT_default_stop_bit_radio_button;
    QRadioButton *CAT_one_stop_bit_radio_button;
    QRadioButton *CAT_two_stop_bit_radio_button;
    QGroupBox *CAT_handshake_group_box;
    QGridLayout *gridLayout_11;
    QRadioButton *CAT_handshake_default_radio_button;
    QRadioButton *CAT_handshake_none_radio_button;
    QRadioButton *CAT_handshake_xon_radio_button;
    QRadioButton *CAT_handshake_hardware_radio_button;
    QGroupBox *CAT_control_lines_group_box;
    QHBoxLayout *horizontalLayout_8;
    QFormLayout *formLayout_8;
    QComboBox *force_DTR_combo_box;
    QLabel *force_DTR_label;
    QFormLayout *formLayout_9;
    QLabel *force_RTS_label;
    QComboBox *force_RTS_combo_box;
    QFrame *line_6;
    QFrame *line;
    QGroupBox *PTT_method_group_box;
    QGridLayout *gridLayout_2;
    QRadioButton *PTT_VOX_radio_button;
    QRadioButton *PTT_DTR_radio_button;
    QRadioButton *PTT_CAT_radio_button;
    QRadioButton *PTT_RTS_radio_button;
    QFormLayout *formLayout_4;
    QLabel *PTT_port_label;
    QComboBox *PTT_port_combo_box;
    QGroupBox *mode_group_box;
    QGridLayout *gridLayout_10;
    QRadioButton *mode_USB_radio_button;
    QRadioButton *mode_none_radio_button;
    QRadioButton *mode_data_radio_button;
    QGroupBox *TX_audio_source_group_box;
    QGridLayout *gridLayout_7;
    QRadioButton *TX_source_data_radio_button;
    QRadioButton *TX_source_mic_radio_button;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_3;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *rig_label;
    QComboBox *rig_combo_box;
    QLabel *CAT_poll_interval_label;
    QSpinBox *CAT_poll_interval_spin_box;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *test_CAT_push_button;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *test_PTT_push_button;
    QGroupBox *split_operation_group_box;
    QGridLayout *gridLayout_12;
    QRadioButton *split_emulate_radio_button;
    QRadioButton *split_rig_radio_button;
    QRadioButton *split_none_radio_button;
    QSpacerItem *verticalSpacer_5;
    QWidget *audio_tab;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *soundcard_group_box;
    QGridLayout *gridLayout_6;
    LazyFillComboBox *sound_output_combo_box;
    QComboBox *sound_input_channel_combo_box;
    LazyFillComboBox *sound_input_combo_box;
    QLabel *sound_output_label;
    QComboBox *sound_output_channel_combo_box;
    QLabel *sound_input_label;
    QGroupBox *save_path_group_box;
    QHBoxLayout *horizontalLayout_5;
    QLabel *save_path_label;
    QLabel *save_path_display_label;
    QPushButton *save_path_select_push_button;
    QGroupBox *azel_path_group_box;
    QHBoxLayout *horizontalLayout_10;
    QLabel *azel_path_label;
    QLabel *azel_path_display_label;
    QPushButton *azel_path_select_push_button;
    QGroupBox *split_operation_group_box_2;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *checkBoxPwrBandTxMemory;
    QCheckBox *checkBoxPwrBandTuneMemory;
    QSpacerItem *verticalSpacer_3;
    QWidget *tx_macros_tab;
    QGridLayout *gridLayout;
    QPushButton *add_macro_push_button;
    QLineEdit *add_macro_line_edit;
    QPushButton *delete_macro_push_button;
    QListView *macros_list_view;
    QWidget *reporting_tab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *logging_group_box;
    QGridLayout *gridLayout_14;
    QCheckBox *prompt_to_log_check_box;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_13;
    QCheckBox *report_in_comments_check_box;
    QCheckBox *clear_DX_check_box;
    QCheckBox *log_as_RTTY_check_box;
    QLineEdit *opCallEntry;
    QCheckBox *cbAutoLog;
    QFrame *line_8;
    QGroupBox *network_group_box;
    QHBoxLayout *horizontalLayout_22;
    QCheckBox *psk_reporter_check_box;
    QCheckBox *psk_reporter_tcpip_check_box;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_16;
    QFormLayout *formLayout_6;
    QLabel *udp_server_label;
    QLineEdit *udp_server_line_edit;
    QLabel *label_6;
    QSpinBox *udp_server_port_spin_box;
    QLabel *udp_interfaces_label;
    CheckableItemComboBox *udp_interfaces_combo_box;
    QSpinBox *udp_TTL_spin_box;
    QLabel *udp_TTL_label;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *accept_udp_requests_check_box;
    QCheckBox *udpWindowToFront;
    QCheckBox *udpWindowRestore;
    QGroupBox *n1mm_group_box;
    QFormLayout *formLayout_15;
    QCheckBox *enable_n1mm_broadcast_check_box;
    QLabel *n1mm_server_name_label;
    QLineEdit *n1mm_server_name_line_edit;
    QLabel *n1mm_server_port_label;
    QSpinBox *n1mm_server_port_spin_box;
    QSpacerItem *verticalSpacer_4;
    QWidget *frequencies_tab;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout_7;
    QLabel *label_8;
    QDoubleSpinBox *calibration_slope_ppm_spin_box;
    QFormLayout *formLayout_14;
    QLabel *label_7;
    QDoubleSpinBox *calibration_intercept_spin_box;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableView *frequencies_table_view;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QTableView *stations_table_view;
    QWidget *colors_tab;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *rescan_log_push_button;
    QPushButton *reset_highlighting_to_defaults_push_button;
    DecodeHighlightingListView *highlighting_list_view;
    QCheckBox *highlight_by_mode_check_box;
    QCheckBox *include_WAE_check_box;
    QCheckBox *only_fields_check_box;
    QGroupBox *groupBox_11;
    QFormLayout *formLayout_18;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_20;
    QLineEdit *LotW_CSV_URL_line_edit;
    QPushButton *LotW_CSV_fetch_push_button;
    QLabel *label_14;
    QSpinBox *LotW_days_since_upload_spin_box;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_6;
    QWidget *advanced_tab;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_11;
    QLabel *label_2;
    QSpinBox *sbNtrials;
    QLabel *label_4;
    QSpinBox *sbAggressive;
    QCheckBox *cbTwoPass;
    QGroupBox *gbSpecialOpActivity;
    QGridLayout *gridLayout_15;
    QRadioButton *rbHound;
    QRadioButton *rbNA_VHF_Contest;
    QRadioButton *rbFox;
    QRadioButton *rbEU_VHF_Contest;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_18;
    QRadioButton *rbRTTY_Roundup;
    QSpacerItem *horizontalSpacer_10;
    QFormLayout *formLayout_17;
    QLabel *labRTTY;
    QLineEdit *RTTY_Exchange;
    QHBoxLayout *horizontalLayout_17;
    QRadioButton *rbField_Day;
    QSpacerItem *horizontalSpacer_9;
    QFormLayout *formLayout_16;
    QLabel *labFD;
    QLineEdit *Field_Day_Exchange;
    QRadioButton *rbWW_DIGI;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_10;
    QLabel *label_3;
    QDoubleSpinBox *sbDegrade;
    QLabel *label_9;
    QSpinBox *sbBandwidth;
    QLabel *label_11;
    QDoubleSpinBox *sbTxDelay;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_19;
    QCheckBox *cbx2ToneSpacing;
    QCheckBox *cbx4ToneSpacing;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_16;
    QRadioButton *rbLowSidelobes;
    QRadioButton *rbMaxSensitivity;
    QSpacerItem *verticalSpacer_8;
    QWidget *wsjtz_tab;
    QGridLayout *gridLayout_18;
    QGroupBox *groupBox_13;
    QGridLayout *gridLayout_17;
    QSpinBox *sb_ignoreListReset;
    QLabel *label_21;
    QTextEdit *te_permIgnoreList;
    QLabel *label_20;
    QGroupBox *cb_autoTXFreq;
    QHBoxLayout *horizontalLayout_25;
    QRadioButton *rb_autoFreqWide;
    QRadioButton *rb_autoFreqNarrow;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_21;
    QCheckBox *cb_showDistance;
    QCheckBox *cb_highlightDX;
    QLineEdit *le_separatorColor;
    QCheckBox *cb_colourAll;
    QCheckBox *cb_clearRx;
    QLabel *label_22;
    QCheckBox *cb_showBearing;
    QCheckBox *cb_showState;
    QCheckBox *cb_rawViewDXCC;
    QWidget *tab_2;
    QGridLayout *gridLayout_22;
    QCheckBox *cb_processTailenders;
    QCheckBox *cb_autoCQfiltering;
    QCheckBox *cb_disableWriteALL;
    QCheckBox *cb_disableWriteFoxQSO;
    QCheckBox *cb_udpFiltering;
    QCheckBox *cb_rxTotxFreq;
    QCheckBox *cb_WD_resetAnywhere;
    QCheckBox *cb_autoTune;
    QCheckBox *cb_noFoxQSY;
    QSpacerItem *verticalSpacer_11;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_18;
    QLineEdit *le_qrzComUn;
    QLabel *label_19;
    QLineEdit *le_qrzComPw;
    QGroupBox *gb_WD_Timer;
    QGridLayout *gridLayout_19;
    QLabel *label_17;
    QSpinBox *sb_WD_FT8;
    QLabel *label_16;
    QSpinBox *sb_WD_FT4;
    QGroupBox *groupBox_9;
    QHBoxLayout *horizontalLayout_24;
    QRadioButton *rb_dbg_Screen;
    QRadioButton *rb_dbg_File;
    QRadioButton *rb_dbg_Both;
    QSpacerItem *verticalSpacer_10;
    QGroupBox *groupBox_14;
    QHBoxLayout *horizontalLayout_26;
    QLineEdit *le_alertCmdLine;
    QDialogButtonBox *configuration_dialog_button_box;
    QButtonGroup *PTT_method_button_group;
    QButtonGroup *CAT_data_bits_button_group;
    QButtonGroup *split_mode_button_group;
    QButtonGroup *TX_mode_button_group;
    QButtonGroup *TX_audio_source_button_group;
    QButtonGroup *CAT_handshake_button_group;
    QButtonGroup *special_op_activity_button_group;
    QButtonGroup *CAT_stop_bits_button_group;

    void setupUi(QDialog *configuration_dialog)
    {
        if (configuration_dialog->objectName().isEmpty())
            configuration_dialog->setObjectName(QStringLiteral("configuration_dialog"));
        configuration_dialog->resize(557, 619);
        verticalLayout_2 = new QVBoxLayout(configuration_dialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        configuration_tabs = new QTabWidget(configuration_dialog);
        configuration_tabs->setObjectName(QStringLiteral("configuration_tabs"));
        general_tab = new QWidget();
        general_tab->setObjectName(QStringLiteral("general_tab"));
        verticalLayout_4 = new QVBoxLayout(general_tab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        station_group_box = new QGroupBox(general_tab);
        station_group_box->setObjectName(QStringLiteral("station_group_box"));
        verticalLayout_12 = new QVBoxLayout(station_group_box);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        callsign_label = new QLabel(station_group_box);
        callsign_label->setObjectName(QStringLiteral("callsign_label"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, callsign_label);

        callsign_line_edit = new QLineEdit(station_group_box);
        callsign_line_edit->setObjectName(QStringLiteral("callsign_line_edit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, callsign_line_edit);


        horizontalLayout_14->addLayout(formLayout_3);

        formLayout_12 = new QFormLayout();
        formLayout_12->setObjectName(QStringLiteral("formLayout_12"));
        grid_label = new QLabel(station_group_box);
        grid_label->setObjectName(QStringLiteral("grid_label"));

        formLayout_12->setWidget(0, QFormLayout::LabelRole, grid_label);

        grid_line_edit = new QLineEdit(station_group_box);
        grid_line_edit->setObjectName(QStringLiteral("grid_line_edit"));

        formLayout_12->setWidget(0, QFormLayout::FieldRole, grid_line_edit);


        horizontalLayout_14->addLayout(formLayout_12);

        use_dynamic_grid = new QCheckBox(station_group_box);
        use_dynamic_grid->setObjectName(QStringLiteral("use_dynamic_grid"));

        horizontalLayout_14->addWidget(use_dynamic_grid);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_12 = new QLabel(station_group_box);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_12);

        region_combo_box = new QComboBox(station_group_box);
        region_combo_box->setObjectName(QStringLiteral("region_combo_box"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, region_combo_box);


        horizontalLayout_14->addLayout(formLayout_2);


        verticalLayout_12->addLayout(horizontalLayout_14);

        formLayout_13 = new QFormLayout();
        formLayout_13->setObjectName(QStringLiteral("formLayout_13"));
        label_5 = new QLabel(station_group_box);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_5);

        type_2_msg_gen_combo_box = new QComboBox(station_group_box);
        type_2_msg_gen_combo_box->addItem(QString());
        type_2_msg_gen_combo_box->addItem(QString());
        type_2_msg_gen_combo_box->addItem(QString());
        type_2_msg_gen_combo_box->setObjectName(QStringLiteral("type_2_msg_gen_combo_box"));
        type_2_msg_gen_combo_box->setEnabled(true);

        formLayout_13->setWidget(0, QFormLayout::FieldRole, type_2_msg_gen_combo_box);


        verticalLayout_12->addLayout(formLayout_13);


        verticalLayout_4->addWidget(station_group_box);

        line_5 = new QFrame(general_tab);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_5);

        display_group_box = new QGroupBox(general_tab);
        display_group_box->setObjectName(QStringLiteral("display_group_box"));
        gridLayout_4 = new QGridLayout(display_group_box);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        TX_messages_check_box = new QCheckBox(display_group_box);
        TX_messages_check_box->setObjectName(QStringLiteral("TX_messages_check_box"));

        gridLayout_4->addWidget(TX_messages_check_box, 3, 0, 1, 1);

        DXCC_check_box = new QCheckBox(display_group_box);
        DXCC_check_box->setObjectName(QStringLiteral("DXCC_check_box"));
        DXCC_check_box->setChecked(false);

        gridLayout_4->addWidget(DXCC_check_box, 4, 0, 1, 1);

        decodes_from_top_check_box = new QCheckBox(display_group_box);
        decodes_from_top_check_box->setObjectName(QStringLiteral("decodes_from_top_check_box"));

        gridLayout_4->addWidget(decodes_from_top_check_box, 0, 0, 1, 1);

        ppfx_check_box = new QCheckBox(display_group_box);
        ppfx_check_box->setObjectName(QStringLiteral("ppfx_check_box"));

        gridLayout_4->addWidget(ppfx_check_box, 4, 1, 1, 1);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        font_push_button = new QPushButton(display_group_box);
        font_push_button->setObjectName(QStringLiteral("font_push_button"));

        verticalLayout_6->addWidget(font_push_button);

        decoded_text_font_push_button = new QPushButton(display_group_box);
        decoded_text_font_push_button->setObjectName(QStringLiteral("decoded_text_font_push_button"));

        verticalLayout_6->addWidget(decoded_text_font_push_button);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        horizontalLayout_21->addLayout(verticalLayout_6);


        gridLayout_4->addLayout(horizontalLayout_21, 0, 1, 4, 1);

        insert_blank_check_box = new QCheckBox(display_group_box);
        insert_blank_check_box->setObjectName(QStringLiteral("insert_blank_check_box"));

        gridLayout_4->addWidget(insert_blank_check_box, 1, 0, 1, 1);

        miles_check_box = new QCheckBox(display_group_box);
        miles_check_box->setObjectName(QStringLiteral("miles_check_box"));

        gridLayout_4->addWidget(miles_check_box, 2, 0, 1, 1);


        verticalLayout_4->addWidget(display_group_box);

        line_7 = new QFrame(general_tab);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_7);

        behaviour_group_box = new QGroupBox(general_tab);
        behaviour_group_box->setObjectName(QStringLiteral("behaviour_group_box"));
        gridLayout_8 = new QGridLayout(behaviour_group_box);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        decode_at_52s_check_box = new QCheckBox(behaviour_group_box);
        decode_at_52s_check_box->setObjectName(QStringLiteral("decode_at_52s_check_box"));

        gridLayout_8->addWidget(decode_at_52s_check_box, 3, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);

        label_10 = new QLabel(behaviour_group_box);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_12->addWidget(label_10);

        tx_watchdog_spin_box = new QSpinBox(behaviour_group_box);
        tx_watchdog_spin_box->setObjectName(QStringLiteral("tx_watchdog_spin_box"));
        tx_watchdog_spin_box->setValue(6);

        horizontalLayout_12->addWidget(tx_watchdog_spin_box);


        gridLayout_8->addLayout(horizontalLayout_12, 5, 1, 1, 1);

        enable_VHF_features_check_box = new QCheckBox(behaviour_group_box);
        enable_VHF_features_check_box->setObjectName(QStringLiteral("enable_VHF_features_check_box"));

        gridLayout_8->addWidget(enable_VHF_features_check_box, 0, 1, 1, 1);

        single_decode_check_box = new QCheckBox(behaviour_group_box);
        single_decode_check_box->setObjectName(QStringLiteral("single_decode_check_box"));

        gridLayout_8->addWidget(single_decode_check_box, 2, 1, 1, 1);

        tx_QSY_check_box = new QCheckBox(behaviour_group_box);
        tx_QSY_check_box->setObjectName(QStringLiteral("tx_QSY_check_box"));

        gridLayout_8->addWidget(tx_QSY_check_box, 1, 1, 1, 1);

        monitor_off_check_box = new QCheckBox(behaviour_group_box);
        monitor_off_check_box->setObjectName(QStringLiteral("monitor_off_check_box"));
        monitor_off_check_box->setChecked(false);

        gridLayout_8->addWidget(monitor_off_check_box, 0, 0, 1, 1);

        monitor_last_used_check_box = new QCheckBox(behaviour_group_box);
        monitor_last_used_check_box->setObjectName(QStringLiteral("monitor_last_used_check_box"));

        gridLayout_8->addWidget(monitor_last_used_check_box, 1, 0, 1, 1);

        alternate_bindings_check_box = new QCheckBox(behaviour_group_box);
        alternate_bindings_check_box->setObjectName(QStringLiteral("alternate_bindings_check_box"));

        gridLayout_8->addWidget(alternate_bindings_check_box, 5, 0, 1, 1);

        disable_TX_on_73_check_box = new QCheckBox(behaviour_group_box);
        disable_TX_on_73_check_box->setObjectName(QStringLiteral("disable_TX_on_73_check_box"));

        gridLayout_8->addWidget(disable_TX_on_73_check_box, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        CW_id_after_73_check_box = new QCheckBox(behaviour_group_box);
        CW_id_after_73_check_box->setObjectName(QStringLiteral("CW_id_after_73_check_box"));

        horizontalLayout_9->addWidget(CW_id_after_73_check_box);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        label = new QLabel(behaviour_group_box);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(label);

        CW_id_interval_spin_box = new QSpinBox(behaviour_group_box);
        CW_id_interval_spin_box->setObjectName(QStringLiteral("CW_id_interval_spin_box"));

        horizontalLayout_9->addWidget(CW_id_interval_spin_box);


        gridLayout_8->addLayout(horizontalLayout_9, 7, 0, 1, 2);

        quick_call_check_box = new QCheckBox(behaviour_group_box);
        quick_call_check_box->setObjectName(QStringLiteral("quick_call_check_box"));

        gridLayout_8->addWidget(quick_call_check_box, 2, 0, 1, 1);

        force_call_1st_check_box = new QCheckBox(behaviour_group_box);
        force_call_1st_check_box->setObjectName(QStringLiteral("force_call_1st_check_box"));

        gridLayout_8->addWidget(force_call_1st_check_box, 4, 0, 1, 1);


        verticalLayout_4->addWidget(behaviour_group_box);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_9);

        configuration_tabs->addTab(general_tab, QString());
        radio_tab = new QWidget();
        radio_tab->setObjectName(QStringLiteral("radio_tab"));
        gridLayout_3 = new QGridLayout(radio_tab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        CAT_control_group_box = new QGroupBox(radio_tab);
        CAT_control_group_box->setObjectName(QStringLiteral("CAT_control_group_box"));
        sizePolicy.setHeightForWidth(CAT_control_group_box->sizePolicy().hasHeightForWidth());
        CAT_control_group_box->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(CAT_control_group_box);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        CAT_port_label = new QLabel(CAT_control_group_box);
        CAT_port_label->setObjectName(QStringLiteral("CAT_port_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, CAT_port_label);

        CAT_port_combo_box = new QComboBox(CAT_control_group_box);
        CAT_port_combo_box->setObjectName(QStringLiteral("CAT_port_combo_box"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CAT_port_combo_box->sizePolicy().hasHeightForWidth());
        CAT_port_combo_box->setSizePolicy(sizePolicy1);
        CAT_port_combo_box->setEditable(true);
        CAT_port_combo_box->setInsertPolicy(QComboBox::NoInsert);

        formLayout->setWidget(0, QFormLayout::FieldRole, CAT_port_combo_box);


        verticalLayout_3->addLayout(formLayout);

        CAT_serial_port_parameters_group_box = new QGroupBox(CAT_control_group_box);
        CAT_serial_port_parameters_group_box->setObjectName(QStringLiteral("CAT_serial_port_parameters_group_box"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(CAT_serial_port_parameters_group_box->sizePolicy().hasHeightForWidth());
        CAT_serial_port_parameters_group_box->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(CAT_serial_port_parameters_group_box);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        CAT_baud_label = new QLabel(CAT_serial_port_parameters_group_box);
        CAT_baud_label->setObjectName(QStringLiteral("CAT_baud_label"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, CAT_baud_label);

        CAT_serial_baud_combo_box = new QComboBox(CAT_serial_port_parameters_group_box);
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->addItem(QString());
        CAT_serial_baud_combo_box->setObjectName(QStringLiteral("CAT_serial_baud_combo_box"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(CAT_serial_baud_combo_box->sizePolicy().hasHeightForWidth());
        CAT_serial_baud_combo_box->setSizePolicy(sizePolicy3);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, CAT_serial_baud_combo_box);


        verticalLayout->addLayout(formLayout_5);

        CAT_data_bits_group_box = new QGroupBox(CAT_serial_port_parameters_group_box);
        CAT_data_bits_group_box->setObjectName(QStringLiteral("CAT_data_bits_group_box"));
        horizontalLayout_4 = new QHBoxLayout(CAT_data_bits_group_box);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        CAT_default_bit_radio_button = new QRadioButton(CAT_data_bits_group_box);
        CAT_data_bits_button_group = new QButtonGroup(configuration_dialog);
        CAT_data_bits_button_group->setObjectName(QStringLiteral("CAT_data_bits_button_group"));
        CAT_data_bits_button_group->addButton(CAT_default_bit_radio_button);
        CAT_default_bit_radio_button->setObjectName(QStringLiteral("CAT_default_bit_radio_button"));
        CAT_default_bit_radio_button->setChecked(true);

        horizontalLayout_4->addWidget(CAT_default_bit_radio_button);

        CAT_7_bit_radio_button = new QRadioButton(CAT_data_bits_group_box);
        CAT_data_bits_button_group->addButton(CAT_7_bit_radio_button);
        CAT_7_bit_radio_button->setObjectName(QStringLiteral("CAT_7_bit_radio_button"));
        CAT_7_bit_radio_button->setAutoExclusive(true);

        horizontalLayout_4->addWidget(CAT_7_bit_radio_button);

        CAT_8_bit_radio_button = new QRadioButton(CAT_data_bits_group_box);
        CAT_data_bits_button_group->addButton(CAT_8_bit_radio_button);
        CAT_8_bit_radio_button->setObjectName(QStringLiteral("CAT_8_bit_radio_button"));
        CAT_8_bit_radio_button->setChecked(false);

        horizontalLayout_4->addWidget(CAT_8_bit_radio_button);


        verticalLayout->addWidget(CAT_data_bits_group_box);

        CAT_stop_bits_group_box = new QGroupBox(CAT_serial_port_parameters_group_box);
        CAT_stop_bits_group_box->setObjectName(QStringLiteral("CAT_stop_bits_group_box"));
        horizontalLayout_2 = new QHBoxLayout(CAT_stop_bits_group_box);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        CAT_default_stop_bit_radio_button = new QRadioButton(CAT_stop_bits_group_box);
        CAT_stop_bits_button_group = new QButtonGroup(configuration_dialog);
        CAT_stop_bits_button_group->setObjectName(QStringLiteral("CAT_stop_bits_button_group"));
        CAT_stop_bits_button_group->addButton(CAT_default_stop_bit_radio_button);
        CAT_default_stop_bit_radio_button->setObjectName(QStringLiteral("CAT_default_stop_bit_radio_button"));
        CAT_default_stop_bit_radio_button->setChecked(true);

        horizontalLayout_2->addWidget(CAT_default_stop_bit_radio_button);

        CAT_one_stop_bit_radio_button = new QRadioButton(CAT_stop_bits_group_box);
        CAT_stop_bits_button_group->addButton(CAT_one_stop_bit_radio_button);
        CAT_one_stop_bit_radio_button->setObjectName(QStringLiteral("CAT_one_stop_bit_radio_button"));

        horizontalLayout_2->addWidget(CAT_one_stop_bit_radio_button);

        CAT_two_stop_bit_radio_button = new QRadioButton(CAT_stop_bits_group_box);
        CAT_stop_bits_button_group->addButton(CAT_two_stop_bit_radio_button);
        CAT_two_stop_bit_radio_button->setObjectName(QStringLiteral("CAT_two_stop_bit_radio_button"));
        CAT_two_stop_bit_radio_button->setChecked(false);

        horizontalLayout_2->addWidget(CAT_two_stop_bit_radio_button);


        verticalLayout->addWidget(CAT_stop_bits_group_box);

        CAT_handshake_group_box = new QGroupBox(CAT_serial_port_parameters_group_box);
        CAT_handshake_group_box->setObjectName(QStringLiteral("CAT_handshake_group_box"));
        gridLayout_11 = new QGridLayout(CAT_handshake_group_box);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        CAT_handshake_default_radio_button = new QRadioButton(CAT_handshake_group_box);
        CAT_handshake_button_group = new QButtonGroup(configuration_dialog);
        CAT_handshake_button_group->setObjectName(QStringLiteral("CAT_handshake_button_group"));
        CAT_handshake_button_group->addButton(CAT_handshake_default_radio_button);
        CAT_handshake_default_radio_button->setObjectName(QStringLiteral("CAT_handshake_default_radio_button"));
        CAT_handshake_default_radio_button->setChecked(true);

        gridLayout_11->addWidget(CAT_handshake_default_radio_button, 0, 0, 1, 1);

        CAT_handshake_none_radio_button = new QRadioButton(CAT_handshake_group_box);
        CAT_handshake_button_group->addButton(CAT_handshake_none_radio_button);
        CAT_handshake_none_radio_button->setObjectName(QStringLiteral("CAT_handshake_none_radio_button"));
        CAT_handshake_none_radio_button->setChecked(false);

        gridLayout_11->addWidget(CAT_handshake_none_radio_button, 0, 1, 1, 1);

        CAT_handshake_xon_radio_button = new QRadioButton(CAT_handshake_group_box);
        CAT_handshake_button_group->addButton(CAT_handshake_xon_radio_button);
        CAT_handshake_xon_radio_button->setObjectName(QStringLiteral("CAT_handshake_xon_radio_button"));

        gridLayout_11->addWidget(CAT_handshake_xon_radio_button, 1, 0, 1, 1);

        CAT_handshake_hardware_radio_button = new QRadioButton(CAT_handshake_group_box);
        CAT_handshake_button_group->addButton(CAT_handshake_hardware_radio_button);
        CAT_handshake_hardware_radio_button->setObjectName(QStringLiteral("CAT_handshake_hardware_radio_button"));

        gridLayout_11->addWidget(CAT_handshake_hardware_radio_button, 1, 1, 1, 1);


        verticalLayout->addWidget(CAT_handshake_group_box);

        CAT_control_lines_group_box = new QGroupBox(CAT_serial_port_parameters_group_box);
        CAT_control_lines_group_box->setObjectName(QStringLiteral("CAT_control_lines_group_box"));
        CAT_control_lines_group_box->setChecked(false);
        horizontalLayout_8 = new QHBoxLayout(CAT_control_lines_group_box);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        force_DTR_combo_box = new QComboBox(CAT_control_lines_group_box);
        force_DTR_combo_box->addItem(QString());
        force_DTR_combo_box->addItem(QString());
        force_DTR_combo_box->addItem(QString());
        force_DTR_combo_box->setObjectName(QStringLiteral("force_DTR_combo_box"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, force_DTR_combo_box);

        force_DTR_label = new QLabel(CAT_control_lines_group_box);
        force_DTR_label->setObjectName(QStringLiteral("force_DTR_label"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, force_DTR_label);


        horizontalLayout_8->addLayout(formLayout_8);

        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName(QStringLiteral("formLayout_9"));
        force_RTS_label = new QLabel(CAT_control_lines_group_box);
        force_RTS_label->setObjectName(QStringLiteral("force_RTS_label"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, force_RTS_label);

        force_RTS_combo_box = new QComboBox(CAT_control_lines_group_box);
        force_RTS_combo_box->addItem(QString());
        force_RTS_combo_box->addItem(QString());
        force_RTS_combo_box->addItem(QString());
        force_RTS_combo_box->setObjectName(QStringLiteral("force_RTS_combo_box"));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, force_RTS_combo_box);


        horizontalLayout_8->addLayout(formLayout_9);


        verticalLayout->addWidget(CAT_control_lines_group_box);


        verticalLayout_3->addWidget(CAT_serial_port_parameters_group_box);


        gridLayout_3->addWidget(CAT_control_group_box, 1, 0, 11, 1);

        line_6 = new QFrame(radio_tab);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_6, 6, 2, 1, 1);

        line = new QFrame(radio_tab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 1, 12, 1);

        PTT_method_group_box = new QGroupBox(radio_tab);
        PTT_method_group_box->setObjectName(QStringLiteral("PTT_method_group_box"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(PTT_method_group_box->sizePolicy().hasHeightForWidth());
        PTT_method_group_box->setSizePolicy(sizePolicy4);
        gridLayout_2 = new QGridLayout(PTT_method_group_box);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        PTT_VOX_radio_button = new QRadioButton(PTT_method_group_box);
        PTT_method_button_group = new QButtonGroup(configuration_dialog);
        PTT_method_button_group->setObjectName(QStringLiteral("PTT_method_button_group"));
        PTT_method_button_group->addButton(PTT_VOX_radio_button);
        PTT_VOX_radio_button->setObjectName(QStringLiteral("PTT_VOX_radio_button"));

        gridLayout_2->addWidget(PTT_VOX_radio_button, 0, 0, 1, 1);

        PTT_DTR_radio_button = new QRadioButton(PTT_method_group_box);
        PTT_method_button_group->addButton(PTT_DTR_radio_button);
        PTT_DTR_radio_button->setObjectName(QStringLiteral("PTT_DTR_radio_button"));
        PTT_DTR_radio_button->setChecked(true);

        gridLayout_2->addWidget(PTT_DTR_radio_button, 0, 1, 1, 1);

        PTT_CAT_radio_button = new QRadioButton(PTT_method_group_box);
        PTT_method_button_group->addButton(PTT_CAT_radio_button);
        PTT_CAT_radio_button->setObjectName(QStringLiteral("PTT_CAT_radio_button"));

        gridLayout_2->addWidget(PTT_CAT_radio_button, 1, 0, 1, 1);

        PTT_RTS_radio_button = new QRadioButton(PTT_method_group_box);
        PTT_method_button_group->addButton(PTT_RTS_radio_button);
        PTT_RTS_radio_button->setObjectName(QStringLiteral("PTT_RTS_radio_button"));

        gridLayout_2->addWidget(PTT_RTS_radio_button, 1, 1, 1, 1);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        PTT_port_label = new QLabel(PTT_method_group_box);
        PTT_port_label->setObjectName(QStringLiteral("PTT_port_label"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, PTT_port_label);

        PTT_port_combo_box = new QComboBox(PTT_method_group_box);
        PTT_port_combo_box->setObjectName(QStringLiteral("PTT_port_combo_box"));
        sizePolicy1.setHeightForWidth(PTT_port_combo_box->sizePolicy().hasHeightForWidth());
        PTT_port_combo_box->setSizePolicy(sizePolicy1);
        PTT_port_combo_box->setEditable(true);
        PTT_port_combo_box->setInsertPolicy(QComboBox::NoInsert);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, PTT_port_combo_box);


        gridLayout_2->addLayout(formLayout_4, 2, 0, 2, 2);


        gridLayout_3->addWidget(PTT_method_group_box, 1, 2, 1, 1);

        mode_group_box = new QGroupBox(radio_tab);
        mode_group_box->setObjectName(QStringLiteral("mode_group_box"));
        gridLayout_10 = new QGridLayout(mode_group_box);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        mode_USB_radio_button = new QRadioButton(mode_group_box);
        TX_mode_button_group = new QButtonGroup(configuration_dialog);
        TX_mode_button_group->setObjectName(QStringLiteral("TX_mode_button_group"));
        TX_mode_button_group->addButton(mode_USB_radio_button);
        mode_USB_radio_button->setObjectName(QStringLiteral("mode_USB_radio_button"));
        mode_USB_radio_button->setChecked(true);

        gridLayout_10->addWidget(mode_USB_radio_button, 0, 1, 1, 1);

        mode_none_radio_button = new QRadioButton(mode_group_box);
        TX_mode_button_group->addButton(mode_none_radio_button);
        mode_none_radio_button->setObjectName(QStringLiteral("mode_none_radio_button"));

        gridLayout_10->addWidget(mode_none_radio_button, 0, 0, 1, 1);

        mode_data_radio_button = new QRadioButton(mode_group_box);
        TX_mode_button_group->addButton(mode_data_radio_button);
        mode_data_radio_button->setObjectName(QStringLiteral("mode_data_radio_button"));

        gridLayout_10->addWidget(mode_data_radio_button, 0, 2, 1, 1);


        gridLayout_3->addWidget(mode_group_box, 5, 2, 1, 1);

        TX_audio_source_group_box = new QGroupBox(radio_tab);
        TX_audio_source_group_box->setObjectName(QStringLiteral("TX_audio_source_group_box"));
        gridLayout_7 = new QGridLayout(TX_audio_source_group_box);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        TX_source_data_radio_button = new QRadioButton(TX_audio_source_group_box);
        TX_audio_source_button_group = new QButtonGroup(configuration_dialog);
        TX_audio_source_button_group->setObjectName(QStringLiteral("TX_audio_source_button_group"));
        TX_audio_source_button_group->addButton(TX_source_data_radio_button);
        TX_source_data_radio_button->setObjectName(QStringLiteral("TX_source_data_radio_button"));

        gridLayout_7->addWidget(TX_source_data_radio_button, 0, 0, 1, 1);

        TX_source_mic_radio_button = new QRadioButton(TX_audio_source_group_box);
        TX_audio_source_button_group->addButton(TX_source_mic_radio_button);
        TX_source_mic_radio_button->setObjectName(QStringLiteral("TX_source_mic_radio_button"));
        TX_source_mic_radio_button->setChecked(true);

        gridLayout_7->addWidget(TX_source_mic_radio_button, 0, 1, 1, 1);


        gridLayout_3->addWidget(TX_audio_source_group_box, 3, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 9, 2, 1, 1);

        line_3 = new QFrame(radio_tab);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 2, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 11, 2, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        rig_label = new QLabel(radio_tab);
        rig_label->setObjectName(QStringLiteral("rig_label"));

        horizontalLayout_7->addWidget(rig_label);

        rig_combo_box = new QComboBox(radio_tab);
        rig_combo_box->setObjectName(QStringLiteral("rig_combo_box"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(rig_combo_box->sizePolicy().hasHeightForWidth());
        rig_combo_box->setSizePolicy(sizePolicy5);

        horizontalLayout_7->addWidget(rig_combo_box);

        CAT_poll_interval_label = new QLabel(radio_tab);
        CAT_poll_interval_label->setObjectName(QStringLiteral("CAT_poll_interval_label"));

        horizontalLayout_7->addWidget(CAT_poll_interval_label);

        CAT_poll_interval_spin_box = new QSpinBox(radio_tab);
        CAT_poll_interval_spin_box->setObjectName(QStringLiteral("CAT_poll_interval_spin_box"));
        CAT_poll_interval_spin_box->setMinimum(1);

        horizontalLayout_7->addWidget(CAT_poll_interval_spin_box);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 3);

        line_4 = new QFrame(radio_tab);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 4, 2, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        test_CAT_push_button = new QPushButton(radio_tab);
        test_CAT_push_button->setObjectName(QStringLiteral("test_CAT_push_button"));

        horizontalLayout_11->addWidget(test_CAT_push_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        test_PTT_push_button = new QPushButton(radio_tab);
        test_PTT_push_button->setObjectName(QStringLiteral("test_PTT_push_button"));
        test_PTT_push_button->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"	background-color: red;\n"
"	border-style	: outset;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	border-color: black;\n"
"	min-width: 5em;\n"
"	padding: 3px;\n"
"}"));
        test_PTT_push_button->setCheckable(true);

        horizontalLayout_11->addWidget(test_PTT_push_button);


        gridLayout_3->addLayout(horizontalLayout_11, 10, 2, 1, 1);

        split_operation_group_box = new QGroupBox(radio_tab);
        split_operation_group_box->setObjectName(QStringLiteral("split_operation_group_box"));
        gridLayout_12 = new QGridLayout(split_operation_group_box);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        split_emulate_radio_button = new QRadioButton(split_operation_group_box);
        split_mode_button_group = new QButtonGroup(configuration_dialog);
        split_mode_button_group->setObjectName(QStringLiteral("split_mode_button_group"));
        split_mode_button_group->addButton(split_emulate_radio_button);
        split_emulate_radio_button->setObjectName(QStringLiteral("split_emulate_radio_button"));

        gridLayout_12->addWidget(split_emulate_radio_button, 0, 2, 1, 1);

        split_rig_radio_button = new QRadioButton(split_operation_group_box);
        split_mode_button_group->addButton(split_rig_radio_button);
        split_rig_radio_button->setObjectName(QStringLiteral("split_rig_radio_button"));

        gridLayout_12->addWidget(split_rig_radio_button, 0, 1, 1, 1);

        split_none_radio_button = new QRadioButton(split_operation_group_box);
        split_mode_button_group->addButton(split_none_radio_button);
        split_none_radio_button->setObjectName(QStringLiteral("split_none_radio_button"));
        split_none_radio_button->setChecked(true);

        gridLayout_12->addWidget(split_none_radio_button, 0, 0, 1, 1);


        gridLayout_3->addWidget(split_operation_group_box, 8, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 12, 0, 1, 1);

        configuration_tabs->addTab(radio_tab, QString());
        audio_tab = new QWidget();
        audio_tab->setObjectName(QStringLiteral("audio_tab"));
        verticalLayout_9 = new QVBoxLayout(audio_tab);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        soundcard_group_box = new QGroupBox(audio_tab);
        soundcard_group_box->setObjectName(QStringLiteral("soundcard_group_box"));
        gridLayout_6 = new QGridLayout(soundcard_group_box);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        sound_output_combo_box = new LazyFillComboBox(soundcard_group_box);
        sound_output_combo_box->setObjectName(QStringLiteral("sound_output_combo_box"));
        sizePolicy5.setHeightForWidth(sound_output_combo_box->sizePolicy().hasHeightForWidth());
        sound_output_combo_box->setSizePolicy(sizePolicy5);

        gridLayout_6->addWidget(sound_output_combo_box, 1, 1, 1, 1);

        sound_input_channel_combo_box = new QComboBox(soundcard_group_box);
        sound_input_channel_combo_box->addItem(QString());
        sound_input_channel_combo_box->addItem(QString());
        sound_input_channel_combo_box->addItem(QString());
        sound_input_channel_combo_box->addItem(QString());
        sound_input_channel_combo_box->setObjectName(QStringLiteral("sound_input_channel_combo_box"));

        gridLayout_6->addWidget(sound_input_channel_combo_box, 0, 2, 1, 1);

        sound_input_combo_box = new LazyFillComboBox(soundcard_group_box);
        sound_input_combo_box->setObjectName(QStringLiteral("sound_input_combo_box"));
        sizePolicy5.setHeightForWidth(sound_input_combo_box->sizePolicy().hasHeightForWidth());
        sound_input_combo_box->setSizePolicy(sizePolicy5);

        gridLayout_6->addWidget(sound_input_combo_box, 0, 1, 1, 1);

        sound_output_label = new QLabel(soundcard_group_box);
        sound_output_label->setObjectName(QStringLiteral("sound_output_label"));

        gridLayout_6->addWidget(sound_output_label, 1, 0, 1, 1);

        sound_output_channel_combo_box = new QComboBox(soundcard_group_box);
        sound_output_channel_combo_box->addItem(QString());
        sound_output_channel_combo_box->addItem(QString());
        sound_output_channel_combo_box->addItem(QString());
        sound_output_channel_combo_box->addItem(QString());
        sound_output_channel_combo_box->setObjectName(QStringLiteral("sound_output_channel_combo_box"));

        gridLayout_6->addWidget(sound_output_channel_combo_box, 1, 2, 1, 1);

        sound_input_label = new QLabel(soundcard_group_box);
        sound_input_label->setObjectName(QStringLiteral("sound_input_label"));

        gridLayout_6->addWidget(sound_input_label, 0, 0, 1, 1);


        verticalLayout_9->addWidget(soundcard_group_box);

        save_path_group_box = new QGroupBox(audio_tab);
        save_path_group_box->setObjectName(QStringLiteral("save_path_group_box"));
        horizontalLayout_5 = new QHBoxLayout(save_path_group_box);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        save_path_label = new QLabel(save_path_group_box);
        save_path_label->setObjectName(QStringLiteral("save_path_label"));

        horizontalLayout_5->addWidget(save_path_label);

        save_path_display_label = new QLabel(save_path_group_box);
        save_path_display_label->setObjectName(QStringLiteral("save_path_display_label"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(save_path_display_label->sizePolicy().hasHeightForWidth());
        save_path_display_label->setSizePolicy(sizePolicy6);
        save_path_display_label->setAutoFillBackground(false);
        save_path_display_label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(save_path_display_label);

        save_path_select_push_button = new QPushButton(save_path_group_box);
        save_path_select_push_button->setObjectName(QStringLiteral("save_path_select_push_button"));

        horizontalLayout_5->addWidget(save_path_select_push_button);


        verticalLayout_9->addWidget(save_path_group_box);

        azel_path_group_box = new QGroupBox(audio_tab);
        azel_path_group_box->setObjectName(QStringLiteral("azel_path_group_box"));
        horizontalLayout_10 = new QHBoxLayout(azel_path_group_box);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        azel_path_label = new QLabel(azel_path_group_box);
        azel_path_label->setObjectName(QStringLiteral("azel_path_label"));

        horizontalLayout_10->addWidget(azel_path_label);

        azel_path_display_label = new QLabel(azel_path_group_box);
        azel_path_display_label->setObjectName(QStringLiteral("azel_path_display_label"));
        sizePolicy6.setHeightForWidth(azel_path_display_label->sizePolicy().hasHeightForWidth());
        azel_path_display_label->setSizePolicy(sizePolicy6);
        azel_path_display_label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_10->addWidget(azel_path_display_label);

        azel_path_select_push_button = new QPushButton(azel_path_group_box);
        azel_path_select_push_button->setObjectName(QStringLiteral("azel_path_select_push_button"));

        horizontalLayout_10->addWidget(azel_path_select_push_button);


        verticalLayout_9->addWidget(azel_path_group_box);

        split_operation_group_box_2 = new QGroupBox(audio_tab);
        split_operation_group_box_2->setObjectName(QStringLiteral("split_operation_group_box_2"));
        horizontalLayout_13 = new QHBoxLayout(split_operation_group_box_2);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        checkBoxPwrBandTxMemory = new QCheckBox(split_operation_group_box_2);
        checkBoxPwrBandTxMemory->setObjectName(QStringLiteral("checkBoxPwrBandTxMemory"));

        horizontalLayout_13->addWidget(checkBoxPwrBandTxMemory);

        checkBoxPwrBandTuneMemory = new QCheckBox(split_operation_group_box_2);
        checkBoxPwrBandTuneMemory->setObjectName(QStringLiteral("checkBoxPwrBandTuneMemory"));

        horizontalLayout_13->addWidget(checkBoxPwrBandTuneMemory);


        verticalLayout_9->addWidget(split_operation_group_box_2);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_3);

        configuration_tabs->addTab(audio_tab, QString());
        tx_macros_tab = new QWidget();
        tx_macros_tab->setObjectName(QStringLiteral("tx_macros_tab"));
        gridLayout = new QGridLayout(tx_macros_tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        add_macro_push_button = new QPushButton(tx_macros_tab);
        add_macro_push_button->setObjectName(QStringLiteral("add_macro_push_button"));

        gridLayout->addWidget(add_macro_push_button, 0, 1, 1, 1);

        add_macro_line_edit = new QLineEdit(tx_macros_tab);
        add_macro_line_edit->setObjectName(QStringLiteral("add_macro_line_edit"));

        gridLayout->addWidget(add_macro_line_edit, 0, 0, 1, 1);

        delete_macro_push_button = new QPushButton(tx_macros_tab);
        delete_macro_push_button->setObjectName(QStringLiteral("delete_macro_push_button"));

        gridLayout->addWidget(delete_macro_push_button, 0, 2, 1, 1);

        macros_list_view = new QListView(tx_macros_tab);
        macros_list_view->setObjectName(QStringLiteral("macros_list_view"));
        macros_list_view->setContextMenuPolicy(Qt::ActionsContextMenu);
        macros_list_view->setStyleSheet(QLatin1String("QListView {\n"
"    show-decoration-selected: 1; /* make the selection span the entire width of the view */\n"
"}\n"
"\n"
"QListView::item:alternate {\n"
"    background: #EEEEEE;\n"
"}\n"
"\n"
"QListView::item:selected {\n"
"    border: 1px solid #6a6ea9;\n"
"}\n"
"\n"
"QListView::item:selected:!active {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #ABAFE5, stop: 1 #8588B2);\n"
"}\n"
"\n"
"QListView::item:selected:active {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #6a6ea9, stop: 1 #888dd9);\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #FAFBFE, stop: 1 #DCDEF1);\n"
"}"));
        macros_list_view->setDragDropMode(QAbstractItemView::InternalMove);
        macros_list_view->setDefaultDropAction(Qt::MoveAction);
        macros_list_view->setAlternatingRowColors(true);
        macros_list_view->setSelectionMode(QAbstractItemView::ExtendedSelection);
        macros_list_view->setUniformItemSizes(true);

        gridLayout->addWidget(macros_list_view, 1, 0, 1, 3);

        configuration_tabs->addTab(tx_macros_tab, QString());
        reporting_tab = new QWidget();
        reporting_tab->setObjectName(QStringLiteral("reporting_tab"));
        verticalLayout_5 = new QVBoxLayout(reporting_tab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        logging_group_box = new QGroupBox(reporting_tab);
        logging_group_box->setObjectName(QStringLiteral("logging_group_box"));
        gridLayout_14 = new QGridLayout(logging_group_box);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        prompt_to_log_check_box = new QCheckBox(logging_group_box);
        prompt_to_log_check_box->setObjectName(QStringLiteral("prompt_to_log_check_box"));

        gridLayout_14->addWidget(prompt_to_log_check_box, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(136, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        label_13 = new QLabel(logging_group_box);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_14->addWidget(label_13, 0, 2, 1, 1);

        report_in_comments_check_box = new QCheckBox(logging_group_box);
        report_in_comments_check_box->setObjectName(QStringLiteral("report_in_comments_check_box"));

        gridLayout_14->addWidget(report_in_comments_check_box, 3, 0, 1, 1);

        clear_DX_check_box = new QCheckBox(logging_group_box);
        clear_DX_check_box->setObjectName(QStringLiteral("clear_DX_check_box"));

        gridLayout_14->addWidget(clear_DX_check_box, 4, 0, 1, 2);

        log_as_RTTY_check_box = new QCheckBox(logging_group_box);
        log_as_RTTY_check_box->setObjectName(QStringLiteral("log_as_RTTY_check_box"));

        gridLayout_14->addWidget(log_as_RTTY_check_box, 2, 0, 1, 1);

        opCallEntry = new QLineEdit(logging_group_box);
        opCallEntry->setObjectName(QStringLiteral("opCallEntry"));

        gridLayout_14->addWidget(opCallEntry, 0, 3, 1, 1);

        cbAutoLog = new QCheckBox(logging_group_box);
        cbAutoLog->setObjectName(QStringLiteral("cbAutoLog"));

        gridLayout_14->addWidget(cbAutoLog, 1, 0, 1, 1);


        verticalLayout_5->addWidget(logging_group_box);

        line_8 = new QFrame(reporting_tab);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_8);

        network_group_box = new QGroupBox(reporting_tab);
        network_group_box->setObjectName(QStringLiteral("network_group_box"));
        horizontalLayout_22 = new QHBoxLayout(network_group_box);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        psk_reporter_check_box = new QCheckBox(network_group_box);
        psk_reporter_check_box->setObjectName(QStringLiteral("psk_reporter_check_box"));

        horizontalLayout_22->addWidget(psk_reporter_check_box);

        psk_reporter_tcpip_check_box = new QCheckBox(network_group_box);
        psk_reporter_tcpip_check_box->setObjectName(QStringLiteral("psk_reporter_tcpip_check_box"));

        horizontalLayout_22->addWidget(psk_reporter_tcpip_check_box);


        verticalLayout_5->addWidget(network_group_box);

        groupBox_4 = new QGroupBox(reporting_tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_16 = new QGridLayout(groupBox_4);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        udp_server_label = new QLabel(groupBox_4);
        udp_server_label->setObjectName(QStringLiteral("udp_server_label"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, udp_server_label);

        udp_server_line_edit = new QLineEdit(groupBox_4);
        udp_server_line_edit->setObjectName(QStringLiteral("udp_server_line_edit"));
        udp_server_line_edit->setInputMethodHints(Qt::ImhDigitsOnly);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, udp_server_line_edit);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_6);

        udp_server_port_spin_box = new QSpinBox(groupBox_4);
        udp_server_port_spin_box->setObjectName(QStringLiteral("udp_server_port_spin_box"));
        udp_server_port_spin_box->setMaximum(65534);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, udp_server_port_spin_box);

        udp_interfaces_label = new QLabel(groupBox_4);
        udp_interfaces_label->setObjectName(QStringLiteral("udp_interfaces_label"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, udp_interfaces_label);

        udp_interfaces_combo_box = new CheckableItemComboBox(groupBox_4);
        udp_interfaces_combo_box->setObjectName(QStringLiteral("udp_interfaces_combo_box"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, udp_interfaces_combo_box);

        udp_TTL_spin_box = new QSpinBox(groupBox_4);
        udp_TTL_spin_box->setObjectName(QStringLiteral("udp_TTL_spin_box"));
        udp_TTL_spin_box->setMaximum(255);
        udp_TTL_spin_box->setValue(1);

        formLayout_6->setWidget(3, QFormLayout::FieldRole, udp_TTL_spin_box);

        udp_TTL_label = new QLabel(groupBox_4);
        udp_TTL_label->setObjectName(QStringLiteral("udp_TTL_label"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, udp_TTL_label);


        gridLayout_16->addLayout(formLayout_6, 0, 0, 1, 1);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        accept_udp_requests_check_box = new QCheckBox(groupBox_4);
        accept_udp_requests_check_box->setObjectName(QStringLiteral("accept_udp_requests_check_box"));

        verticalLayout_11->addWidget(accept_udp_requests_check_box);

        udpWindowToFront = new QCheckBox(groupBox_4);
        udpWindowToFront->setObjectName(QStringLiteral("udpWindowToFront"));

        verticalLayout_11->addWidget(udpWindowToFront);

        udpWindowRestore = new QCheckBox(groupBox_4);
        udpWindowRestore->setObjectName(QStringLiteral("udpWindowRestore"));

        verticalLayout_11->addWidget(udpWindowRestore);


        gridLayout_16->addLayout(verticalLayout_11, 0, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox_4);

        n1mm_group_box = new QGroupBox(reporting_tab);
        n1mm_group_box->setObjectName(QStringLiteral("n1mm_group_box"));
        formLayout_15 = new QFormLayout(n1mm_group_box);
        formLayout_15->setObjectName(QStringLiteral("formLayout_15"));
        enable_n1mm_broadcast_check_box = new QCheckBox(n1mm_group_box);
        enable_n1mm_broadcast_check_box->setObjectName(QStringLiteral("enable_n1mm_broadcast_check_box"));

        formLayout_15->setWidget(0, QFormLayout::SpanningRole, enable_n1mm_broadcast_check_box);

        n1mm_server_name_label = new QLabel(n1mm_group_box);
        n1mm_server_name_label->setObjectName(QStringLiteral("n1mm_server_name_label"));

        formLayout_15->setWidget(1, QFormLayout::LabelRole, n1mm_server_name_label);

        n1mm_server_name_line_edit = new QLineEdit(n1mm_group_box);
        n1mm_server_name_line_edit->setObjectName(QStringLiteral("n1mm_server_name_line_edit"));

        formLayout_15->setWidget(1, QFormLayout::FieldRole, n1mm_server_name_line_edit);

        n1mm_server_port_label = new QLabel(n1mm_group_box);
        n1mm_server_port_label->setObjectName(QStringLiteral("n1mm_server_port_label"));

        formLayout_15->setWidget(2, QFormLayout::LabelRole, n1mm_server_port_label);

        n1mm_server_port_spin_box = new QSpinBox(n1mm_group_box);
        n1mm_server_port_spin_box->setObjectName(QStringLiteral("n1mm_server_port_spin_box"));
        n1mm_server_port_spin_box->setMaximum(65534);

        formLayout_15->setWidget(2, QFormLayout::FieldRole, n1mm_server_port_spin_box);


        verticalLayout_5->addWidget(n1mm_group_box);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        configuration_tabs->addTab(reporting_tab, QString());
        frequencies_tab = new QWidget();
        frequencies_tab->setObjectName(QStringLiteral("frequencies_tab"));
        verticalLayout_10 = new QVBoxLayout(frequencies_tab);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupBox_3 = new QGroupBox(frequencies_tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_3);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_8);

        calibration_slope_ppm_spin_box = new QDoubleSpinBox(groupBox_3);
        calibration_slope_ppm_spin_box->setObjectName(QStringLiteral("calibration_slope_ppm_spin_box"));
        calibration_slope_ppm_spin_box->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        calibration_slope_ppm_spin_box->setDecimals(4);
        calibration_slope_ppm_spin_box->setMinimum(-1000);
        calibration_slope_ppm_spin_box->setMaximum(1000);
        calibration_slope_ppm_spin_box->setSingleStep(0.1);
        calibration_slope_ppm_spin_box->setValue(0);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, calibration_slope_ppm_spin_box);


        horizontalLayout_6->addLayout(formLayout_7);

        formLayout_14 = new QFormLayout();
        formLayout_14->setObjectName(QStringLiteral("formLayout_14"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_14->setWidget(0, QFormLayout::LabelRole, label_7);

        calibration_intercept_spin_box = new QDoubleSpinBox(groupBox_3);
        calibration_intercept_spin_box->setObjectName(QStringLiteral("calibration_intercept_spin_box"));
        calibration_intercept_spin_box->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        calibration_intercept_spin_box->setDecimals(2);
        calibration_intercept_spin_box->setMinimum(-100000);
        calibration_intercept_spin_box->setMaximum(100000);
        calibration_intercept_spin_box->setSingleStep(0.1);

        formLayout_14->setWidget(0, QFormLayout::FieldRole, calibration_intercept_spin_box);


        horizontalLayout_6->addLayout(formLayout_14);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_10->addWidget(groupBox_3);

        groupBox = new QGroupBox(frequencies_tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frequencies_table_view = new QTableView(groupBox);
        frequencies_table_view->setObjectName(QStringLiteral("frequencies_table_view"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(frequencies_table_view->sizePolicy().hasHeightForWidth());
        frequencies_table_view->setSizePolicy(sizePolicy7);
        frequencies_table_view->setContextMenuPolicy(Qt::ActionsContextMenu);
        frequencies_table_view->setDragDropMode(QAbstractItemView::DragOnly);
        frequencies_table_view->setAlternatingRowColors(true);
        frequencies_table_view->setSelectionBehavior(QAbstractItemView::SelectRows);
        frequencies_table_view->setSortingEnabled(true);
        frequencies_table_view->horizontalHeader()->setStretchLastSection(true);
        frequencies_table_view->verticalHeader()->setVisible(false);

        horizontalLayout->addWidget(frequencies_table_view);


        verticalLayout_10->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frequencies_tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        stations_table_view = new QTableView(groupBox_2);
        stations_table_view->setObjectName(QStringLiteral("stations_table_view"));
        stations_table_view->setContextMenuPolicy(Qt::ActionsContextMenu);
        stations_table_view->setAcceptDrops(true);
        stations_table_view->setDragEnabled(true);
        stations_table_view->setDragDropOverwriteMode(true);
        stations_table_view->setDragDropMode(QAbstractItemView::DragDrop);
        stations_table_view->setDefaultDropAction(Qt::MoveAction);
        stations_table_view->setAlternatingRowColors(true);
        stations_table_view->setSelectionMode(QAbstractItemView::ExtendedSelection);
        stations_table_view->setSelectionBehavior(QAbstractItemView::SelectRows);
        stations_table_view->setSortingEnabled(true);
        stations_table_view->setWordWrap(true);
        stations_table_view->horizontalHeader()->setCascadingSectionResizes(true);
        stations_table_view->horizontalHeader()->setStretchLastSection(true);
        stations_table_view->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(stations_table_view);


        verticalLayout_10->addWidget(groupBox_2);

        configuration_tabs->addTab(frequencies_tab, QString());
        colors_tab = new QWidget();
        colors_tab->setObjectName(QStringLiteral("colors_tab"));
        verticalLayout_7 = new QVBoxLayout(colors_tab);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_12 = new QGroupBox(colors_tab);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        gridLayout_5 = new QGridLayout(groupBox_12);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_5);

        rescan_log_push_button = new QPushButton(groupBox_12);
        rescan_log_push_button->setObjectName(QStringLiteral("rescan_log_push_button"));

        horizontalLayout_15->addWidget(rescan_log_push_button);


        gridLayout_5->addLayout(horizontalLayout_15, 2, 1, 1, 1);

        reset_highlighting_to_defaults_push_button = new QPushButton(groupBox_12);
        reset_highlighting_to_defaults_push_button->setObjectName(QStringLiteral("reset_highlighting_to_defaults_push_button"));

        gridLayout_5->addWidget(reset_highlighting_to_defaults_push_button, 1, 0, 1, 2);

        highlighting_list_view = new DecodeHighlightingListView(groupBox_12);
        highlighting_list_view->setObjectName(QStringLiteral("highlighting_list_view"));
        sizePolicy4.setHeightForWidth(highlighting_list_view->sizePolicy().hasHeightForWidth());
        highlighting_list_view->setSizePolicy(sizePolicy4);
        highlighting_list_view->setContextMenuPolicy(Qt::ActionsContextMenu);
        highlighting_list_view->setAcceptDrops(true);
        highlighting_list_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
        highlighting_list_view->setDragEnabled(true);
        highlighting_list_view->setDragDropMode(QAbstractItemView::InternalMove);
        highlighting_list_view->setDefaultDropAction(Qt::MoveAction);
        highlighting_list_view->setSelectionMode(QAbstractItemView::SingleSelection);
        highlighting_list_view->setResizeMode(QListView::Adjust);

        gridLayout_5->addWidget(highlighting_list_view, 0, 0, 1, 2);

        highlight_by_mode_check_box = new QCheckBox(groupBox_12);
        highlight_by_mode_check_box->setObjectName(QStringLiteral("highlight_by_mode_check_box"));

        gridLayout_5->addWidget(highlight_by_mode_check_box, 2, 0, 1, 1);

        include_WAE_check_box = new QCheckBox(groupBox_12);
        include_WAE_check_box->setObjectName(QStringLiteral("include_WAE_check_box"));

        gridLayout_5->addWidget(include_WAE_check_box, 4, 0, 1, 1);

        only_fields_check_box = new QCheckBox(groupBox_12);
        only_fields_check_box->setObjectName(QStringLiteral("only_fields_check_box"));

        gridLayout_5->addWidget(only_fields_check_box, 3, 0, 1, 1);


        verticalLayout_7->addWidget(groupBox_12);

        groupBox_11 = new QGroupBox(colors_tab);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        formLayout_18 = new QFormLayout(groupBox_11);
        formLayout_18->setObjectName(QStringLiteral("formLayout_18"));
        label_15 = new QLabel(groupBox_11);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_18->setWidget(1, QFormLayout::LabelRole, label_15);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        LotW_CSV_URL_line_edit = new QLineEdit(groupBox_11);
        LotW_CSV_URL_line_edit->setObjectName(QStringLiteral("LotW_CSV_URL_line_edit"));

        horizontalLayout_20->addWidget(LotW_CSV_URL_line_edit);

        LotW_CSV_fetch_push_button = new QPushButton(groupBox_11);
        LotW_CSV_fetch_push_button->setObjectName(QStringLiteral("LotW_CSV_fetch_push_button"));

        horizontalLayout_20->addWidget(LotW_CSV_fetch_push_button);


        formLayout_18->setLayout(1, QFormLayout::FieldRole, horizontalLayout_20);

        label_14 = new QLabel(groupBox_11);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_18->setWidget(2, QFormLayout::LabelRole, label_14);

        LotW_days_since_upload_spin_box = new QSpinBox(groupBox_11);
        LotW_days_since_upload_spin_box->setObjectName(QStringLiteral("LotW_days_since_upload_spin_box"));
        LotW_days_since_upload_spin_box->setMinimum(0);
        LotW_days_since_upload_spin_box->setMaximum(9999);
        LotW_days_since_upload_spin_box->setValue(365);

        formLayout_18->setWidget(2, QFormLayout::FieldRole, LotW_days_since_upload_spin_box);


        verticalLayout_7->addWidget(groupBox_11);

        horizontalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_7->addItem(horizontalSpacer_8);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        configuration_tabs->addTab(colors_tab, QString());
        advanced_tab = new QWidget();
        advanced_tab->setObjectName(QStringLiteral("advanced_tab"));
        gridLayout_9 = new QGridLayout(advanced_tab);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        groupBox_6 = new QGroupBox(advanced_tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        formLayout_11 = new QFormLayout(groupBox_6);
        formLayout_11->setObjectName(QStringLiteral("formLayout_11"));
        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_11->setWidget(0, QFormLayout::LabelRole, label_2);

        sbNtrials = new QSpinBox(groupBox_6);
        sbNtrials->setObjectName(QStringLiteral("sbNtrials"));
        sbNtrials->setMinimum(0);
        sbNtrials->setMaximum(12);
        sbNtrials->setValue(6);

        formLayout_11->setWidget(0, QFormLayout::FieldRole, sbNtrials);

        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_11->setWidget(1, QFormLayout::LabelRole, label_4);

        sbAggressive = new QSpinBox(groupBox_6);
        sbAggressive->setObjectName(QStringLiteral("sbAggressive"));
        sbAggressive->setMaximum(10);

        formLayout_11->setWidget(1, QFormLayout::FieldRole, sbAggressive);

        cbTwoPass = new QCheckBox(groupBox_6);
        cbTwoPass->setObjectName(QStringLiteral("cbTwoPass"));
        cbTwoPass->setChecked(true);

        formLayout_11->setWidget(2, QFormLayout::LabelRole, cbTwoPass);


        gridLayout_9->addWidget(groupBox_6, 0, 0, 1, 1);

        gbSpecialOpActivity = new QGroupBox(advanced_tab);
        gbSpecialOpActivity->setObjectName(QStringLiteral("gbSpecialOpActivity"));
        gbSpecialOpActivity->setCheckable(true);
        gbSpecialOpActivity->setChecked(false);
        gridLayout_15 = new QGridLayout(gbSpecialOpActivity);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        rbHound = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group = new QButtonGroup(configuration_dialog);
        special_op_activity_button_group->setObjectName(QStringLiteral("special_op_activity_button_group"));
        special_op_activity_button_group->addButton(rbHound);
        rbHound->setObjectName(QStringLiteral("rbHound"));
        rbHound->setChecked(true);

        gridLayout_15->addWidget(rbHound, 0, 3, 1, 1);

        rbNA_VHF_Contest = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbNA_VHF_Contest);
        rbNA_VHF_Contest->setObjectName(QStringLiteral("rbNA_VHF_Contest"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(rbNA_VHF_Contest->sizePolicy().hasHeightForWidth());
        rbNA_VHF_Contest->setSizePolicy(sizePolicy8);

        gridLayout_15->addWidget(rbNA_VHF_Contest, 1, 0, 1, 1);

        rbFox = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbFox);
        rbFox->setObjectName(QStringLiteral("rbFox"));
        rbFox->setChecked(false);

        gridLayout_15->addWidget(rbFox, 0, 0, 1, 1);

        rbEU_VHF_Contest = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbEU_VHF_Contest);
        rbEU_VHF_Contest->setObjectName(QStringLiteral("rbEU_VHF_Contest"));
        sizePolicy8.setHeightForWidth(rbEU_VHF_Contest->sizePolicy().hasHeightForWidth());
        rbEU_VHF_Contest->setSizePolicy(sizePolicy8);

        gridLayout_15->addWidget(rbEU_VHF_Contest, 2, 0, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_11, 0, 1, 3, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        rbRTTY_Roundup = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbRTTY_Roundup);
        rbRTTY_Roundup->setObjectName(QStringLiteral("rbRTTY_Roundup"));

        horizontalLayout_18->addWidget(rbRTTY_Roundup);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_10);

        formLayout_17 = new QFormLayout();
        formLayout_17->setObjectName(QStringLiteral("formLayout_17"));
        labRTTY = new QLabel(gbSpecialOpActivity);
        labRTTY->setObjectName(QStringLiteral("labRTTY"));

        formLayout_17->setWidget(0, QFormLayout::LabelRole, labRTTY);

        RTTY_Exchange = new QLineEdit(gbSpecialOpActivity);
        RTTY_Exchange->setObjectName(QStringLiteral("RTTY_Exchange"));
        RTTY_Exchange->setMinimumSize(QSize(70, 0));
        RTTY_Exchange->setAlignment(Qt::AlignCenter);

        formLayout_17->setWidget(0, QFormLayout::FieldRole, RTTY_Exchange);


        horizontalLayout_18->addLayout(formLayout_17);

        horizontalLayout_18->setStretch(0, 2);
        horizontalLayout_18->setStretch(1, 1);
        horizontalLayout_18->setStretch(2, 1);

        gridLayout_15->addLayout(horizontalLayout_18, 2, 3, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        rbField_Day = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbField_Day);
        rbField_Day->setObjectName(QStringLiteral("rbField_Day"));

        horizontalLayout_17->addWidget(rbField_Day);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_9);

        formLayout_16 = new QFormLayout();
        formLayout_16->setObjectName(QStringLiteral("formLayout_16"));
        labFD = new QLabel(gbSpecialOpActivity);
        labFD->setObjectName(QStringLiteral("labFD"));

        formLayout_16->setWidget(0, QFormLayout::LabelRole, labFD);

        Field_Day_Exchange = new QLineEdit(gbSpecialOpActivity);
        Field_Day_Exchange->setObjectName(QStringLiteral("Field_Day_Exchange"));
        Field_Day_Exchange->setMinimumSize(QSize(70, 0));
        Field_Day_Exchange->setAlignment(Qt::AlignCenter);

        formLayout_16->setWidget(0, QFormLayout::FieldRole, Field_Day_Exchange);


        horizontalLayout_17->addLayout(formLayout_16);

        horizontalLayout_17->setStretch(0, 2);
        horizontalLayout_17->setStretch(1, 1);
        horizontalLayout_17->setStretch(2, 1);

        gridLayout_15->addLayout(horizontalLayout_17, 1, 3, 1, 1);

        rbWW_DIGI = new QRadioButton(gbSpecialOpActivity);
        special_op_activity_button_group->addButton(rbWW_DIGI);
        rbWW_DIGI->setObjectName(QStringLiteral("rbWW_DIGI"));
        rbWW_DIGI->setMinimumSize(QSize(0, 18));

        gridLayout_15->addWidget(rbWW_DIGI, 3, 0, 1, 1);

        gridLayout_15->setColumnStretch(0, 1);

        gridLayout_9->addWidget(gbSpecialOpActivity, 1, 0, 1, 2);

        groupBox_5 = new QGroupBox(advanced_tab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        formLayout_10 = new QFormLayout(groupBox_5);
        formLayout_10->setObjectName(QStringLiteral("formLayout_10"));
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_3);

        sbDegrade = new QDoubleSpinBox(groupBox_5);
        sbDegrade->setObjectName(QStringLiteral("sbDegrade"));
        sbDegrade->setDecimals(1);
        sbDegrade->setSingleStep(1);

        formLayout_10->setWidget(0, QFormLayout::FieldRole, sbDegrade);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_10->setWidget(1, QFormLayout::LabelRole, label_9);

        sbBandwidth = new QSpinBox(groupBox_5);
        sbBandwidth->setObjectName(QStringLiteral("sbBandwidth"));
        sbBandwidth->setMaximum(6000);
        sbBandwidth->setSingleStep(100);
        sbBandwidth->setValue(2500);

        formLayout_10->setWidget(1, QFormLayout::FieldRole, sbBandwidth);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_10->setWidget(2, QFormLayout::LabelRole, label_11);

        sbTxDelay = new QDoubleSpinBox(groupBox_5);
        sbTxDelay->setObjectName(QStringLiteral("sbTxDelay"));
        sbTxDelay->setDecimals(1);
        sbTxDelay->setMinimum(0);
        sbTxDelay->setMaximum(0.5);
        sbTxDelay->setSingleStep(0.1);

        formLayout_10->setWidget(2, QFormLayout::FieldRole, sbTxDelay);

        groupBox_10 = new QGroupBox(groupBox_5);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setMinimumSize(QSize(0, 50));
        horizontalLayout_19 = new QHBoxLayout(groupBox_10);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        cbx2ToneSpacing = new QCheckBox(groupBox_10);
        cbx2ToneSpacing->setObjectName(QStringLiteral("cbx2ToneSpacing"));

        horizontalLayout_19->addWidget(cbx2ToneSpacing);

        cbx4ToneSpacing = new QCheckBox(groupBox_10);
        cbx4ToneSpacing->setObjectName(QStringLiteral("cbx4ToneSpacing"));
        cbx4ToneSpacing->setEnabled(true);

        horizontalLayout_19->addWidget(cbx4ToneSpacing);


        formLayout_10->setWidget(3, QFormLayout::SpanningRole, groupBox_10);

        groupBox_7 = new QGroupBox(groupBox_5);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(0, 50));
        horizontalLayout_16 = new QHBoxLayout(groupBox_7);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        rbLowSidelobes = new QRadioButton(groupBox_7);
        rbLowSidelobes->setObjectName(QStringLiteral("rbLowSidelobes"));
        rbLowSidelobes->setChecked(true);

        horizontalLayout_16->addWidget(rbLowSidelobes);

        rbMaxSensitivity = new QRadioButton(groupBox_7);
        rbMaxSensitivity->setObjectName(QStringLiteral("rbMaxSensitivity"));

        horizontalLayout_16->addWidget(rbMaxSensitivity);


        formLayout_10->setWidget(4, QFormLayout::SpanningRole, groupBox_7);


        gridLayout_9->addWidget(groupBox_5, 0, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_8, 2, 0, 1, 2);

        configuration_tabs->addTab(advanced_tab, QString());
        wsjtz_tab = new QWidget();
        wsjtz_tab->setObjectName(QStringLiteral("wsjtz_tab"));
        gridLayout_18 = new QGridLayout(wsjtz_tab);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        groupBox_13 = new QGroupBox(wsjtz_tab);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        gridLayout_17 = new QGridLayout(groupBox_13);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        sb_ignoreListReset = new QSpinBox(groupBox_13);
        sb_ignoreListReset->setObjectName(QStringLiteral("sb_ignoreListReset"));
        sb_ignoreListReset->setMaximum(999);

        gridLayout_17->addWidget(sb_ignoreListReset, 2, 1, 1, 1);

        label_21 = new QLabel(groupBox_13);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_17->addWidget(label_21, 2, 0, 1, 1);

        te_permIgnoreList = new QTextEdit(groupBox_13);
        te_permIgnoreList->setObjectName(QStringLiteral("te_permIgnoreList"));
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(te_permIgnoreList->sizePolicy().hasHeightForWidth());
        te_permIgnoreList->setSizePolicy(sizePolicy9);
        te_permIgnoreList->setMaximumSize(QSize(16777215, 60));

        gridLayout_17->addWidget(te_permIgnoreList, 1, 0, 1, 2);

        label_20 = new QLabel(groupBox_13);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_17->addWidget(label_20, 0, 0, 1, 2);


        gridLayout_18->addWidget(groupBox_13, 3, 1, 2, 2);

        cb_autoTXFreq = new QGroupBox(wsjtz_tab);
        cb_autoTXFreq->setObjectName(QStringLiteral("cb_autoTXFreq"));
        cb_autoTXFreq->setCheckable(true);
        horizontalLayout_25 = new QHBoxLayout(cb_autoTXFreq);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        rb_autoFreqWide = new QRadioButton(cb_autoTXFreq);
        rb_autoFreqWide->setObjectName(QStringLiteral("rb_autoFreqWide"));

        horizontalLayout_25->addWidget(rb_autoFreqWide);

        rb_autoFreqNarrow = new QRadioButton(cb_autoTXFreq);
        rb_autoFreqNarrow->setObjectName(QStringLiteral("rb_autoFreqNarrow"));

        horizontalLayout_25->addWidget(rb_autoFreqNarrow);


        gridLayout_18->addWidget(cb_autoTXFreq, 5, 0, 1, 1);

        tabWidget = new QTabWidget(wsjtz_tab);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_21 = new QGridLayout(tab);
        gridLayout_21->setObjectName(QStringLiteral("gridLayout_21"));
        cb_showDistance = new QCheckBox(tab);
        cb_showDistance->setObjectName(QStringLiteral("cb_showDistance"));

        gridLayout_21->addWidget(cb_showDistance, 0, 0, 1, 1);

        cb_highlightDX = new QCheckBox(tab);
        cb_highlightDX->setObjectName(QStringLiteral("cb_highlightDX"));

        gridLayout_21->addWidget(cb_highlightDX, 3, 0, 1, 1);

        le_separatorColor = new QLineEdit(tab);
        le_separatorColor->setObjectName(QStringLiteral("le_separatorColor"));

        gridLayout_21->addWidget(le_separatorColor, 4, 2, 1, 1);

        cb_colourAll = new QCheckBox(tab);
        cb_colourAll->setObjectName(QStringLiteral("cb_colourAll"));

        gridLayout_21->addWidget(cb_colourAll, 4, 0, 1, 1);

        cb_clearRx = new QCheckBox(tab);
        cb_clearRx->setObjectName(QStringLiteral("cb_clearRx"));

        gridLayout_21->addWidget(cb_clearRx, 2, 0, 1, 1);

        label_22 = new QLabel(tab);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_21->addWidget(label_22, 4, 1, 1, 1);

        cb_showBearing = new QCheckBox(tab);
        cb_showBearing->setObjectName(QStringLiteral("cb_showBearing"));

        gridLayout_21->addWidget(cb_showBearing, 3, 1, 1, 2);

        cb_showState = new QCheckBox(tab);
        cb_showState->setObjectName(QStringLiteral("cb_showState"));

        gridLayout_21->addWidget(cb_showState, 2, 1, 1, 2);

        cb_rawViewDXCC = new QCheckBox(tab);
        cb_rawViewDXCC->setObjectName(QStringLiteral("cb_rawViewDXCC"));

        gridLayout_21->addWidget(cb_rawViewDXCC, 0, 1, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_22 = new QGridLayout(tab_2);
        gridLayout_22->setObjectName(QStringLiteral("gridLayout_22"));
        cb_processTailenders = new QCheckBox(tab_2);
        cb_processTailenders->setObjectName(QStringLiteral("cb_processTailenders"));

        gridLayout_22->addWidget(cb_processTailenders, 0, 1, 1, 1);

        cb_autoCQfiltering = new QCheckBox(tab_2);
        cb_autoCQfiltering->setObjectName(QStringLiteral("cb_autoCQfiltering"));

        gridLayout_22->addWidget(cb_autoCQfiltering, 1, 1, 1, 1);

        cb_disableWriteALL = new QCheckBox(tab_2);
        cb_disableWriteALL->setObjectName(QStringLiteral("cb_disableWriteALL"));

        gridLayout_22->addWidget(cb_disableWriteALL, 0, 0, 1, 1);

        cb_disableWriteFoxQSO = new QCheckBox(tab_2);
        cb_disableWriteFoxQSO->setObjectName(QStringLiteral("cb_disableWriteFoxQSO"));

        gridLayout_22->addWidget(cb_disableWriteFoxQSO, 1, 0, 1, 1);

        cb_udpFiltering = new QCheckBox(tab_2);
        cb_udpFiltering->setObjectName(QStringLiteral("cb_udpFiltering"));

        gridLayout_22->addWidget(cb_udpFiltering, 2, 1, 1, 1);

        cb_rxTotxFreq = new QCheckBox(tab_2);
        cb_rxTotxFreq->setObjectName(QStringLiteral("cb_rxTotxFreq"));

        gridLayout_22->addWidget(cb_rxTotxFreq, 3, 1, 1, 1);

        cb_WD_resetAnywhere = new QCheckBox(tab_2);
        cb_WD_resetAnywhere->setObjectName(QStringLiteral("cb_WD_resetAnywhere"));

        gridLayout_22->addWidget(cb_WD_resetAnywhere, 2, 0, 1, 1);

        cb_autoTune = new QCheckBox(tab_2);
        cb_autoTune->setObjectName(QStringLiteral("cb_autoTune"));

        gridLayout_22->addWidget(cb_autoTune, 3, 0, 1, 1);

        cb_noFoxQSY = new QCheckBox(tab_2);
        cb_noFoxQSY->setObjectName(QStringLiteral("cb_noFoxQSY"));

        gridLayout_22->addWidget(cb_noFoxQSY, 4, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_18->addWidget(tabWidget, 1, 0, 1, 3);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_18->addItem(verticalSpacer_11, 7, 0, 1, 1);

        groupBox_8 = new QGroupBox(wsjtz_tab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setFlat(false);
        horizontalLayout_23 = new QHBoxLayout(groupBox_8);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_18 = new QLabel(groupBox_8);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_23->addWidget(label_18);

        le_qrzComUn = new QLineEdit(groupBox_8);
        le_qrzComUn->setObjectName(QStringLiteral("le_qrzComUn"));

        horizontalLayout_23->addWidget(le_qrzComUn);

        label_19 = new QLabel(groupBox_8);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_23->addWidget(label_19);

        le_qrzComPw = new QLineEdit(groupBox_8);
        le_qrzComPw->setObjectName(QStringLiteral("le_qrzComPw"));
        le_qrzComPw->setEchoMode(QLineEdit::Password);

        horizontalLayout_23->addWidget(le_qrzComPw);


        gridLayout_18->addWidget(groupBox_8, 0, 0, 1, 3);

        gb_WD_Timer = new QGroupBox(wsjtz_tab);
        gb_WD_Timer->setObjectName(QStringLiteral("gb_WD_Timer"));
        gb_WD_Timer->setCheckable(true);
        gb_WD_Timer->setChecked(false);
        gridLayout_19 = new QGridLayout(gb_WD_Timer);
        gridLayout_19->setObjectName(QStringLiteral("gridLayout_19"));
        label_17 = new QLabel(gb_WD_Timer);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_19->addWidget(label_17, 1, 0, 1, 1);

        sb_WD_FT8 = new QSpinBox(gb_WD_Timer);
        sb_WD_FT8->setObjectName(QStringLiteral("sb_WD_FT8"));

        gridLayout_19->addWidget(sb_WD_FT8, 0, 1, 1, 1);

        label_16 = new QLabel(gb_WD_Timer);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_19->addWidget(label_16, 0, 0, 1, 1);

        sb_WD_FT4 = new QSpinBox(gb_WD_Timer);
        sb_WD_FT4->setObjectName(QStringLiteral("sb_WD_FT4"));

        gridLayout_19->addWidget(sb_WD_FT4, 1, 1, 1, 1);


        gridLayout_18->addWidget(gb_WD_Timer, 3, 0, 1, 1);

        groupBox_9 = new QGroupBox(wsjtz_tab);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        horizontalLayout_24 = new QHBoxLayout(groupBox_9);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        rb_dbg_Screen = new QRadioButton(groupBox_9);
        rb_dbg_Screen->setObjectName(QStringLiteral("rb_dbg_Screen"));
        rb_dbg_Screen->setChecked(true);

        horizontalLayout_24->addWidget(rb_dbg_Screen);

        rb_dbg_File = new QRadioButton(groupBox_9);
        rb_dbg_File->setObjectName(QStringLiteral("rb_dbg_File"));
        rb_dbg_File->setChecked(false);

        horizontalLayout_24->addWidget(rb_dbg_File);

        rb_dbg_Both = new QRadioButton(groupBox_9);
        rb_dbg_Both->setObjectName(QStringLiteral("rb_dbg_Both"));

        horizontalLayout_24->addWidget(rb_dbg_Both);


        gridLayout_18->addWidget(groupBox_9, 4, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_18->addItem(verticalSpacer_10, 7, 1, 1, 1);

        groupBox_14 = new QGroupBox(wsjtz_tab);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        horizontalLayout_26 = new QHBoxLayout(groupBox_14);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        le_alertCmdLine = new QLineEdit(groupBox_14);
        le_alertCmdLine->setObjectName(QStringLiteral("le_alertCmdLine"));

        horizontalLayout_26->addWidget(le_alertCmdLine);


        gridLayout_18->addWidget(groupBox_14, 6, 0, 1, 3);

        configuration_tabs->addTab(wsjtz_tab, QString());

        verticalLayout_2->addWidget(configuration_tabs);

        configuration_dialog_button_box = new QDialogButtonBox(configuration_dialog);
        configuration_dialog_button_box->setObjectName(QStringLiteral("configuration_dialog_button_box"));
        configuration_dialog_button_box->setOrientation(Qt::Horizontal);
        configuration_dialog_button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(configuration_dialog_button_box);

#ifndef QT_NO_SHORTCUT
        callsign_label->setBuddy(callsign_line_edit);
        grid_label->setBuddy(grid_line_edit);
        label_12->setBuddy(region_combo_box);
        label_5->setBuddy(type_2_msg_gen_combo_box);
        label_10->setBuddy(tx_watchdog_spin_box);
        label->setBuddy(CW_id_interval_spin_box);
        CAT_port_label->setBuddy(CAT_port_combo_box);
        CAT_baud_label->setBuddy(CAT_serial_baud_combo_box);
        force_DTR_label->setBuddy(force_DTR_combo_box);
        force_RTS_label->setBuddy(force_RTS_combo_box);
        PTT_port_label->setBuddy(PTT_port_combo_box);
        rig_label->setBuddy(rig_combo_box);
        CAT_poll_interval_label->setBuddy(CAT_poll_interval_spin_box);
        sound_output_label->setBuddy(sound_output_combo_box);
        sound_input_label->setBuddy(sound_input_combo_box);
        save_path_label->setBuddy(save_path_select_push_button);
        azel_path_label->setBuddy(azel_path_select_push_button);
        label_13->setBuddy(opCallEntry);
        udp_server_label->setBuddy(udp_server_line_edit);
        label_6->setBuddy(udp_server_port_spin_box);
        udp_interfaces_label->setBuddy(udp_interfaces_combo_box);
        udp_TTL_label->setBuddy(udp_TTL_spin_box);
        n1mm_server_name_label->setBuddy(n1mm_server_name_line_edit);
        n1mm_server_port_label->setBuddy(n1mm_server_port_spin_box);
        label_8->setBuddy(calibration_slope_ppm_spin_box);
        label_7->setBuddy(calibration_intercept_spin_box);
        label_15->setBuddy(LotW_CSV_URL_line_edit);
        label_14->setBuddy(LotW_days_since_upload_spin_box);
        label_2->setBuddy(sbNtrials);
        label_4->setBuddy(sbAggressive);
        labRTTY->setBuddy(RTTY_Exchange);
        labFD->setBuddy(Field_Day_Exchange);
        label_3->setBuddy(sbDegrade);
        label_9->setBuddy(sbBandwidth);
        label_11->setBuddy(sbTxDelay);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(configuration_tabs, callsign_line_edit);
        QWidget::setTabOrder(callsign_line_edit, grid_line_edit);
        QWidget::setTabOrder(grid_line_edit, use_dynamic_grid);
        QWidget::setTabOrder(use_dynamic_grid, region_combo_box);
        QWidget::setTabOrder(region_combo_box, type_2_msg_gen_combo_box);
        QWidget::setTabOrder(type_2_msg_gen_combo_box, decodes_from_top_check_box);
        QWidget::setTabOrder(decodes_from_top_check_box, insert_blank_check_box);
        QWidget::setTabOrder(insert_blank_check_box, miles_check_box);
        QWidget::setTabOrder(miles_check_box, TX_messages_check_box);
        QWidget::setTabOrder(TX_messages_check_box, DXCC_check_box);
        QWidget::setTabOrder(DXCC_check_box, ppfx_check_box);
        QWidget::setTabOrder(ppfx_check_box, font_push_button);
        QWidget::setTabOrder(font_push_button, decoded_text_font_push_button);
        QWidget::setTabOrder(decoded_text_font_push_button, monitor_off_check_box);
        QWidget::setTabOrder(monitor_off_check_box, monitor_last_used_check_box);
        QWidget::setTabOrder(monitor_last_used_check_box, quick_call_check_box);
        QWidget::setTabOrder(quick_call_check_box, disable_TX_on_73_check_box);
        QWidget::setTabOrder(disable_TX_on_73_check_box, force_call_1st_check_box);
        QWidget::setTabOrder(force_call_1st_check_box, alternate_bindings_check_box);
        QWidget::setTabOrder(alternate_bindings_check_box, CW_id_after_73_check_box);
        QWidget::setTabOrder(CW_id_after_73_check_box, enable_VHF_features_check_box);
        QWidget::setTabOrder(enable_VHF_features_check_box, tx_QSY_check_box);
        QWidget::setTabOrder(tx_QSY_check_box, single_decode_check_box);
        QWidget::setTabOrder(single_decode_check_box, decode_at_52s_check_box);
        QWidget::setTabOrder(decode_at_52s_check_box, tx_watchdog_spin_box);
        QWidget::setTabOrder(tx_watchdog_spin_box, CW_id_interval_spin_box);
        QWidget::setTabOrder(CW_id_interval_spin_box, rig_combo_box);
        QWidget::setTabOrder(rig_combo_box, CAT_poll_interval_spin_box);
        QWidget::setTabOrder(CAT_poll_interval_spin_box, CAT_port_combo_box);
        QWidget::setTabOrder(CAT_port_combo_box, CAT_serial_baud_combo_box);
        QWidget::setTabOrder(CAT_serial_baud_combo_box, CAT_default_bit_radio_button);
        QWidget::setTabOrder(CAT_default_bit_radio_button, CAT_7_bit_radio_button);
        QWidget::setTabOrder(CAT_7_bit_radio_button, CAT_8_bit_radio_button);
        QWidget::setTabOrder(CAT_8_bit_radio_button, CAT_default_stop_bit_radio_button);
        QWidget::setTabOrder(CAT_default_stop_bit_radio_button, CAT_one_stop_bit_radio_button);
        QWidget::setTabOrder(CAT_one_stop_bit_radio_button, CAT_two_stop_bit_radio_button);
        QWidget::setTabOrder(CAT_two_stop_bit_radio_button, CAT_handshake_default_radio_button);
        QWidget::setTabOrder(CAT_handshake_default_radio_button, CAT_handshake_xon_radio_button);
        QWidget::setTabOrder(CAT_handshake_xon_radio_button, CAT_handshake_none_radio_button);
        QWidget::setTabOrder(CAT_handshake_none_radio_button, CAT_handshake_hardware_radio_button);
        QWidget::setTabOrder(CAT_handshake_hardware_radio_button, force_DTR_combo_box);
        QWidget::setTabOrder(force_DTR_combo_box, force_RTS_combo_box);
        QWidget::setTabOrder(force_RTS_combo_box, PTT_VOX_radio_button);
        QWidget::setTabOrder(PTT_VOX_radio_button, PTT_CAT_radio_button);
        QWidget::setTabOrder(PTT_CAT_radio_button, PTT_DTR_radio_button);
        QWidget::setTabOrder(PTT_DTR_radio_button, PTT_RTS_radio_button);
        QWidget::setTabOrder(PTT_RTS_radio_button, PTT_port_combo_box);
        QWidget::setTabOrder(PTT_port_combo_box, TX_source_data_radio_button);
        QWidget::setTabOrder(TX_source_data_radio_button, TX_source_mic_radio_button);
        QWidget::setTabOrder(TX_source_mic_radio_button, mode_none_radio_button);
        QWidget::setTabOrder(mode_none_radio_button, mode_USB_radio_button);
        QWidget::setTabOrder(mode_USB_radio_button, mode_data_radio_button);
        QWidget::setTabOrder(mode_data_radio_button, split_none_radio_button);
        QWidget::setTabOrder(split_none_radio_button, split_rig_radio_button);
        QWidget::setTabOrder(split_rig_radio_button, split_emulate_radio_button);
        QWidget::setTabOrder(split_emulate_radio_button, test_CAT_push_button);
        QWidget::setTabOrder(test_CAT_push_button, test_PTT_push_button);
        QWidget::setTabOrder(test_PTT_push_button, sound_input_combo_box);
        QWidget::setTabOrder(sound_input_combo_box, sound_input_channel_combo_box);
        QWidget::setTabOrder(sound_input_channel_combo_box, sound_output_combo_box);
        QWidget::setTabOrder(sound_output_combo_box, sound_output_channel_combo_box);
        QWidget::setTabOrder(sound_output_channel_combo_box, save_path_select_push_button);
        QWidget::setTabOrder(save_path_select_push_button, azel_path_select_push_button);
        QWidget::setTabOrder(azel_path_select_push_button, checkBoxPwrBandTxMemory);
        QWidget::setTabOrder(checkBoxPwrBandTxMemory, checkBoxPwrBandTuneMemory);
        QWidget::setTabOrder(checkBoxPwrBandTuneMemory, add_macro_line_edit);
        QWidget::setTabOrder(add_macro_line_edit, add_macro_push_button);
        QWidget::setTabOrder(add_macro_push_button, delete_macro_push_button);
        QWidget::setTabOrder(delete_macro_push_button, macros_list_view);
        QWidget::setTabOrder(macros_list_view, prompt_to_log_check_box);
        QWidget::setTabOrder(prompt_to_log_check_box, cbAutoLog);
        QWidget::setTabOrder(cbAutoLog, log_as_RTTY_check_box);
        QWidget::setTabOrder(log_as_RTTY_check_box, report_in_comments_check_box);
        QWidget::setTabOrder(report_in_comments_check_box, clear_DX_check_box);
        QWidget::setTabOrder(clear_DX_check_box, opCallEntry);
        QWidget::setTabOrder(opCallEntry, psk_reporter_check_box);
        QWidget::setTabOrder(psk_reporter_check_box, psk_reporter_tcpip_check_box);
        QWidget::setTabOrder(psk_reporter_tcpip_check_box, udp_server_line_edit);
        QWidget::setTabOrder(udp_server_line_edit, udp_server_port_spin_box);
        QWidget::setTabOrder(udp_server_port_spin_box, udp_interfaces_combo_box);
        QWidget::setTabOrder(udp_interfaces_combo_box, udp_TTL_spin_box);
        QWidget::setTabOrder(udp_TTL_spin_box, accept_udp_requests_check_box);
        QWidget::setTabOrder(accept_udp_requests_check_box, udpWindowToFront);
        QWidget::setTabOrder(udpWindowToFront, udpWindowRestore);
        QWidget::setTabOrder(udpWindowRestore, enable_n1mm_broadcast_check_box);
        QWidget::setTabOrder(enable_n1mm_broadcast_check_box, n1mm_server_name_line_edit);
        QWidget::setTabOrder(n1mm_server_name_line_edit, n1mm_server_port_spin_box);
        QWidget::setTabOrder(n1mm_server_port_spin_box, calibration_slope_ppm_spin_box);
        QWidget::setTabOrder(calibration_slope_ppm_spin_box, calibration_intercept_spin_box);
        QWidget::setTabOrder(calibration_intercept_spin_box, frequencies_table_view);
        QWidget::setTabOrder(frequencies_table_view, stations_table_view);
        QWidget::setTabOrder(stations_table_view, highlighting_list_view);
        QWidget::setTabOrder(highlighting_list_view, reset_highlighting_to_defaults_push_button);
        QWidget::setTabOrder(reset_highlighting_to_defaults_push_button, highlight_by_mode_check_box);
        QWidget::setTabOrder(highlight_by_mode_check_box, only_fields_check_box);
        QWidget::setTabOrder(only_fields_check_box, include_WAE_check_box);
        QWidget::setTabOrder(include_WAE_check_box, rescan_log_push_button);
        QWidget::setTabOrder(rescan_log_push_button, LotW_CSV_URL_line_edit);
        QWidget::setTabOrder(LotW_CSV_URL_line_edit, LotW_CSV_fetch_push_button);
        QWidget::setTabOrder(LotW_CSV_fetch_push_button, LotW_days_since_upload_spin_box);
        QWidget::setTabOrder(LotW_days_since_upload_spin_box, sbNtrials);
        QWidget::setTabOrder(sbNtrials, sbAggressive);
        QWidget::setTabOrder(sbAggressive, cbTwoPass);
        QWidget::setTabOrder(cbTwoPass, sbDegrade);
        QWidget::setTabOrder(sbDegrade, sbBandwidth);
        QWidget::setTabOrder(sbBandwidth, sbTxDelay);
        QWidget::setTabOrder(sbTxDelay, cbx2ToneSpacing);
        QWidget::setTabOrder(cbx2ToneSpacing, cbx4ToneSpacing);
        QWidget::setTabOrder(cbx4ToneSpacing, rbLowSidelobes);
        QWidget::setTabOrder(rbLowSidelobes, rbMaxSensitivity);
        QWidget::setTabOrder(rbMaxSensitivity, gbSpecialOpActivity);
        QWidget::setTabOrder(gbSpecialOpActivity, rbFox);
        QWidget::setTabOrder(rbFox, rbHound);
        QWidget::setTabOrder(rbHound, rbNA_VHF_Contest);
        QWidget::setTabOrder(rbNA_VHF_Contest, rbField_Day);
        QWidget::setTabOrder(rbField_Day, rbEU_VHF_Contest);
        QWidget::setTabOrder(rbEU_VHF_Contest, rbRTTY_Roundup);
        QWidget::setTabOrder(rbRTTY_Roundup, rbWW_DIGI);
        QWidget::setTabOrder(rbWW_DIGI, Field_Day_Exchange);
        QWidget::setTabOrder(Field_Day_Exchange, RTTY_Exchange);

        retranslateUi(configuration_dialog);
        QObject::connect(configuration_dialog_button_box, SIGNAL(accepted()), configuration_dialog, SLOT(accept()));
        QObject::connect(configuration_dialog_button_box, SIGNAL(rejected()), configuration_dialog, SLOT(reject()));
        QObject::connect(add_macro_push_button, SIGNAL(clicked()), add_macro_line_edit, SLOT(setFocus()));
        QObject::connect(add_macro_line_edit, SIGNAL(returnPressed()), add_macro_push_button, SLOT(setFocus()));

        configuration_tabs->setCurrentIndex(8);
        type_2_msg_gen_combo_box->setCurrentIndex(1);
        CAT_serial_baud_combo_box->setCurrentIndex(0);
        PTT_port_combo_box->setCurrentIndex(-1);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(configuration_dialog);
    } // setupUi

    void retranslateUi(QDialog *configuration_dialog)
    {
        configuration_dialog->setWindowTitle(QApplication::translate("configuration_dialog", "Settings", nullptr));
        station_group_box->setTitle(QApplication::translate("configuration_dialog", "Station Details", nullptr));
        callsign_label->setText(QApplication::translate("configuration_dialog", "My C&all:", nullptr));
#ifndef QT_NO_TOOLTIP
        callsign_line_edit->setToolTip(QApplication::translate("configuration_dialog", "Station callsign.", nullptr));
#endif // QT_NO_TOOLTIP
        grid_label->setText(QApplication::translate("configuration_dialog", "M&y Grid:", nullptr));
#ifndef QT_NO_TOOLTIP
        grid_line_edit->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Maidenhead locator, preferably 6 characters.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        use_dynamic_grid->setToolTip(QApplication::translate("configuration_dialog", "Check to allow grid changes from external programs", nullptr));
#endif // QT_NO_TOOLTIP
        use_dynamic_grid->setText(QApplication::translate("configuration_dialog", "AutoGrid", nullptr));
        label_12->setText(QApplication::translate("configuration_dialog", "IARU Region:", nullptr));
#ifndef QT_NO_TOOLTIP
        region_combo_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Select your IARU region.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("configuration_dialog", "Message generation for type 2 compound callsign holders:", nullptr));
        type_2_msg_gen_combo_box->setItemText(0, QApplication::translate("configuration_dialog", "Full call in Tx1", nullptr));
        type_2_msg_gen_combo_box->setItemText(1, QApplication::translate("configuration_dialog", "Full call in Tx3", nullptr));
        type_2_msg_gen_combo_box->setItemText(2, QApplication::translate("configuration_dialog", "Full call in Tx5 only", nullptr));

#ifndef QT_NO_TOOLTIP
        type_2_msg_gen_combo_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Type 2 compound callsigns are those with prefixes or suffixes not included in the allowed shortlist (See Help-&gt;Add-on prefixes and suffixes).</p><p>This option determines which generated messages should contain your full type 2 compound call sign rather than your base callsign. It only applies if you have a type 2 compound callsign.</p><p>This option controls the way the messages that are used to answer CQ calls are generated. Generated messages 6 (CQ) and 5 (73) will always contain your full callsign. The JT65 and JT9 protocols allow for some standard messages with your full call at the expense of another piece of information such as the DX call or your locator.</p><p>Choosing message 1 omits the DX callsign which may be an issue when replying to CQ calls. Choosing message 3 also omits the DX callsign and many versions of this and other software will not extract the report. Choosing neither means that your full callsign only goes in your message 5 (73) so your QSO partner may log the "
                        "wrong callsign.</p><p>None of these options are perfect, message 3 is usually best but be aware your QSO partner may not log the report you send them.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        display_group_box->setTitle(QApplication::translate("configuration_dialog", "Display", nullptr));
#ifndef QT_NO_TOOLTIP
        TX_messages_check_box->setToolTip(QApplication::translate("configuration_dialog", "Show outgoing transmitted messages in the Rx frequency window.", nullptr));
#endif // QT_NO_TOOLTIP
        TX_messages_check_box->setText(QApplication::translate("configuration_dialog", "&Tx messages to Rx frequency window", nullptr));
#ifndef QT_NO_TOOLTIP
        DXCC_check_box->setToolTip(QApplication::translate("configuration_dialog", "Show if decoded stations are new DXCC entities or worked before.", nullptr));
#endif // QT_NO_TOOLTIP
        DXCC_check_box->setText(QApplication::translate("configuration_dialog", "Show &DXCC, grid, and worked-before status", nullptr));
#ifndef QT_NO_TOOLTIP
        decodes_from_top_check_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Check to have decodes for a new period start at the top of the Band Activity window and not scroll off the top when the window is full.</p><p>This is to aid selecting decodes to double-click while decoding is still in progress. Use the Band Activity vertical scroll bar to reveal decodes past the bottom of the window.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        decodes_from_top_check_box->setText(QApplication::translate("configuration_dialog", "Start new period decodes at top", nullptr));
        ppfx_check_box->setText(QApplication::translate("configuration_dialog", "Show principal prefix instead of country name", nullptr));
#ifndef QT_NO_TOOLTIP
        font_push_button->setToolTip(QApplication::translate("configuration_dialog", "Set the font characteristics for the application.", nullptr));
#endif // QT_NO_TOOLTIP
        font_push_button->setText(QApplication::translate("configuration_dialog", "Font...", nullptr));
#ifndef QT_NO_TOOLTIP
        decoded_text_font_push_button->setToolTip(QApplication::translate("configuration_dialog", "Set the font characteristics for the Band Activity and Rx Frequency areas.", nullptr));
#endif // QT_NO_TOOLTIP
        decoded_text_font_push_button->setText(QApplication::translate("configuration_dialog", "Decoded Text Font...", nullptr));
#ifndef QT_NO_TOOLTIP
        insert_blank_check_box->setToolTip(QApplication::translate("configuration_dialog", "Include a separator line between periods in the band activity window.", nullptr));
#endif // QT_NO_TOOLTIP
        insert_blank_check_box->setText(QApplication::translate("configuration_dialog", "&Blank line between decoding periods", nullptr));
#ifndef QT_NO_TOOLTIP
        miles_check_box->setToolTip(QApplication::translate("configuration_dialog", "Show distance to DX station in miles rather than kilometers.", nullptr));
#endif // QT_NO_TOOLTIP
        miles_check_box->setText(QApplication::translate("configuration_dialog", "Display dista&nce in miles", nullptr));
        behaviour_group_box->setTitle(QApplication::translate("configuration_dialog", "Behavior", nullptr));
        decode_at_52s_check_box->setText(QApplication::translate("configuration_dialog", "Decode after EME delay", nullptr));
        label_10->setText(QApplication::translate("configuration_dialog", "Tx watchdog:", nullptr));
#ifndef QT_NO_TOOLTIP
        tx_watchdog_spin_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Number of minutes before unattended transmissions are aborted</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tx_watchdog_spin_box->setSpecialValueText(QApplication::translate("configuration_dialog", "Disabled", nullptr));
        tx_watchdog_spin_box->setSuffix(QApplication::translate("configuration_dialog", " minutes", nullptr));
        tx_watchdog_spin_box->setPrefix(QString());
        enable_VHF_features_check_box->setText(QApplication::translate("configuration_dialog", "Enable VHF and submode features", nullptr));
        single_decode_check_box->setText(QApplication::translate("configuration_dialog", "Single decode", nullptr));
#ifndef QT_NO_TOOLTIP
        tx_QSY_check_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Some rigs are not able to process CAT commands while transmitting. This means that if you are operating in split mode you may have to uncheck this option.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        tx_QSY_check_box->setText(QApplication::translate("configuration_dialog", "Allow Tx frequency changes while transmitting", nullptr));
#ifndef QT_NO_TOOLTIP
        monitor_off_check_box->setToolTip(QApplication::translate("configuration_dialog", "Don't start decoding until the monitor button is clicked.", nullptr));
#endif // QT_NO_TOOLTIP
        monitor_off_check_box->setText(QApplication::translate("configuration_dialog", "Mon&itor off at startup", nullptr));
#ifndef QT_NO_TOOLTIP
        monitor_last_used_check_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Check this if you wish to automatically return to the last monitored frequency when monitor is enabled, leave it unchecked if you wish to have the current rig frequency maintained.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        monitor_last_used_check_box->setText(QApplication::translate("configuration_dialog", "Monitor returns to last used frequency", nullptr));
        alternate_bindings_check_box->setText(QApplication::translate("configuration_dialog", "Alternate F1-F6 bindings", nullptr));
#ifndef QT_NO_TOOLTIP
        disable_TX_on_73_check_box->setToolTip(QApplication::translate("configuration_dialog", "Turns off automatic transmissions after sending a 73 or any other free\n"
"text message.", nullptr));
#endif // QT_NO_TOOLTIP
        disable_TX_on_73_check_box->setText(QApplication::translate("configuration_dialog", "Di&sable Tx after sending 73", nullptr));
#ifndef QT_NO_TOOLTIP
        CW_id_after_73_check_box->setToolTip(QApplication::translate("configuration_dialog", "Send a CW ID after every 73 or free text message.", nullptr));
#endif // QT_NO_TOOLTIP
        CW_id_after_73_check_box->setText(QApplication::translate("configuration_dialog", "CW ID a&fter 73", nullptr));
        label->setText(QApplication::translate("configuration_dialog", "Periodic CW ID Inter&val:", nullptr));
#ifndef QT_NO_TOOLTIP
        CW_id_interval_spin_box->setToolTip(QApplication::translate("configuration_dialog", "Send a CW ID periodically every few minutes.\n"
"This might be required under your countries licence regulations.\n"
"It will not interfere with other users as it is always sent in the\n"
"quiet period when decoding is done.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        quick_call_check_box->setToolTip(QApplication::translate("configuration_dialog", "Automatic transmission mode.", nullptr));
#endif // QT_NO_TOOLTIP
        quick_call_check_box->setText(QApplication::translate("configuration_dialog", "Doubl&e-click on call sets Tx enable", nullptr));
        force_call_1st_check_box->setText(QApplication::translate("configuration_dialog", "Calling CQ forces Call 1st", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(general_tab), QApplication::translate("configuration_dialog", "Genera&l", nullptr));
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(general_tab), QApplication::translate("configuration_dialog", "General station details and settings.", nullptr));
#ifndef QT_NO_TOOLTIP
        CAT_control_group_box->setToolTip(QApplication::translate("configuration_dialog", "Settings that control your CAT interface.", nullptr));
#endif // QT_NO_TOOLTIP
        CAT_control_group_box->setTitle(QApplication::translate("configuration_dialog", "CAT Control", nullptr));
        CAT_port_label->setText(QApplication::translate("configuration_dialog", "Port:", nullptr));
#ifndef QT_NO_TOOLTIP
        CAT_port_combo_box->setToolTip(QApplication::translate("configuration_dialog", "Serial port used for CAT control.", nullptr));
#endif // QT_NO_TOOLTIP
        CAT_port_combo_box->setCurrentText(QString());
#ifndef QT_NO_ACCESSIBILITY
        CAT_serial_port_parameters_group_box->setAccessibleName(QApplication::translate("configuration_dialog", "Serial Port Parameters", nullptr));
#endif // QT_NO_ACCESSIBILITY
        CAT_serial_port_parameters_group_box->setTitle(QApplication::translate("configuration_dialog", "Serial Port Parameters", nullptr));
        CAT_baud_label->setText(QApplication::translate("configuration_dialog", "Baud Rate:", nullptr));
        CAT_serial_baud_combo_box->setItemText(0, QApplication::translate("configuration_dialog", "1200", nullptr));
        CAT_serial_baud_combo_box->setItemText(1, QApplication::translate("configuration_dialog", "2400", nullptr));
        CAT_serial_baud_combo_box->setItemText(2, QApplication::translate("configuration_dialog", "4800", nullptr));
        CAT_serial_baud_combo_box->setItemText(3, QApplication::translate("configuration_dialog", "9600", nullptr));
        CAT_serial_baud_combo_box->setItemText(4, QApplication::translate("configuration_dialog", "19200", nullptr));
        CAT_serial_baud_combo_box->setItemText(5, QApplication::translate("configuration_dialog", "38400", nullptr));
        CAT_serial_baud_combo_box->setItemText(6, QApplication::translate("configuration_dialog", "57600", nullptr));
        CAT_serial_baud_combo_box->setItemText(7, QApplication::translate("configuration_dialog", "115200", nullptr));

#ifndef QT_NO_TOOLTIP
        CAT_serial_baud_combo_box->setToolTip(QApplication::translate("configuration_dialog", "Serial port data rate which must match the setting of your radio.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        CAT_data_bits_group_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Number of data bits used to communicate with your radio's CAT interface (usually eight).</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        CAT_data_bits_group_box->setAccessibleName(QApplication::translate("configuration_dialog", "Data bits", nullptr));
#endif // QT_NO_ACCESSIBILITY
        CAT_data_bits_group_box->setTitle(QApplication::translate("configuration_dialog", "Data Bits", nullptr));
        CAT_default_bit_radio_button->setText(QApplication::translate("configuration_dialog", "D&efault", nullptr));
        CAT_7_bit_radio_button->setText(QApplication::translate("configuration_dialog", "Se&ven", nullptr));
        CAT_8_bit_radio_button->setText(QApplication::translate("configuration_dialog", "E&ight", nullptr));
#ifndef QT_NO_TOOLTIP
        CAT_stop_bits_group_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Number of stop bits used when communicating with your radio's CAT interface</p><p>(consult you radio's manual for details).</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        CAT_stop_bits_group_box->setAccessibleName(QApplication::translate("configuration_dialog", "Stop bits", nullptr));
#endif // QT_NO_ACCESSIBILITY
        CAT_stop_bits_group_box->setTitle(QApplication::translate("configuration_dialog", "Stop Bits", nullptr));
        CAT_default_stop_bit_radio_button->setText(QApplication::translate("configuration_dialog", "Default", nullptr));
        CAT_one_stop_bit_radio_button->setText(QApplication::translate("configuration_dialog", "On&e", nullptr));
        CAT_two_stop_bit_radio_button->setText(QApplication::translate("configuration_dialog", "T&wo", nullptr));
#ifndef QT_NO_TOOLTIP
        CAT_handshake_group_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Flow control protocol used between this computer and your radio's CAT interface (usually &quot;None&quot; but some require &quot;Hardware&quot;).</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        CAT_handshake_group_box->setAccessibleName(QApplication::translate("configuration_dialog", "Handshake", nullptr));
#endif // QT_NO_ACCESSIBILITY
        CAT_handshake_group_box->setTitle(QApplication::translate("configuration_dialog", "Handshake", nullptr));
        CAT_handshake_default_radio_button->setText(QApplication::translate("configuration_dialog", "Default", nullptr));
        CAT_handshake_none_radio_button->setText(QApplication::translate("configuration_dialog", "&None", nullptr));
#ifndef QT_NO_TOOLTIP
        CAT_handshake_xon_radio_button->setToolTip(QApplication::translate("configuration_dialog", "Software flow control (very rare on CAT interfaces).", nullptr));
#endif // QT_NO_TOOLTIP
        CAT_handshake_xon_radio_button->setText(QApplication::translate("configuration_dialog", "XON/XOFF", nullptr));
#ifndef QT_NO_TOOLTIP
        CAT_handshake_hardware_radio_button->setToolTip(QApplication::translate("configuration_dialog", "Flow control using the RTS and CTS RS-232 control lines\n"
"not often used but some radios have it as an option and \n"
"a few, particularly some Kenwood rigs, require it).", nullptr));
#endif // QT_NO_TOOLTIP
        CAT_handshake_hardware_radio_button->setText(QApplication::translate("configuration_dialog", "&Hardware", nullptr));
#ifndef QT_NO_TOOLTIP
        CAT_control_lines_group_box->setToolTip(QApplication::translate("configuration_dialog", "Special control of CAT port control lines.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        CAT_control_lines_group_box->setAccessibleName(QApplication::translate("configuration_dialog", "Force Control Lines", nullptr));
#endif // QT_NO_ACCESSIBILITY
        CAT_control_lines_group_box->setTitle(QApplication::translate("configuration_dialog", "Force Control Lines", nullptr));
        force_DTR_combo_box->setItemText(0, QString());
        force_DTR_combo_box->setItemText(1, QApplication::translate("configuration_dialog", "High", nullptr));
        force_DTR_combo_box->setItemText(2, QApplication::translate("configuration_dialog", "Low", nullptr));

        force_DTR_label->setText(QApplication::translate("configuration_dialog", "DTR:", nullptr));
        force_RTS_label->setText(QApplication::translate("configuration_dialog", "RTS:", nullptr));
        force_RTS_combo_box->setItemText(0, QString());
        force_RTS_combo_box->setItemText(1, QApplication::translate("configuration_dialog", "High", nullptr));
        force_RTS_combo_box->setItemText(2, QApplication::translate("configuration_dialog", "Low", nullptr));

#ifndef QT_NO_TOOLTIP
        PTT_method_group_box->setToolTip(QApplication::translate("configuration_dialog", "How this program activates the PTT on your radio?", nullptr));
#endif // QT_NO_TOOLTIP
        PTT_method_group_box->setTitle(QApplication::translate("configuration_dialog", "PTT Method", nullptr));
#ifndef QT_NO_TOOLTIP
        PTT_VOX_radio_button->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>No PTT activation, instead the radio's automatic VOX is used to key the transmitter.</p><p>Use this if you have no radio interface hardware.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        PTT_VOX_radio_button->setText(QApplication::translate("configuration_dialog", "VO&X", nullptr));
#ifndef QT_NO_TOOLTIP
        PTT_DTR_radio_button->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Use the RS-232 DTR control line to toggle your radio's PTT, requires hardware to interface the line.</p><p>Some commercial interface units also use this method.</p><p>The DTR control line of the CAT serial port may be used for this or a DTR control line on a different serial port may be used.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        PTT_DTR_radio_button->setText(QApplication::translate("configuration_dialog", "&DTR", nullptr));
#ifndef QT_NO_TOOLTIP
        PTT_CAT_radio_button->setToolTip(QApplication::translate("configuration_dialog", "Some radios support PTT via CAT commands,\n"
"use this option if your radio supports it and you have no\n"
"other hardware interface for PTT.", nullptr));
#endif // QT_NO_TOOLTIP
        PTT_CAT_radio_button->setText(QApplication::translate("configuration_dialog", "C&AT", nullptr));
#ifndef QT_NO_TOOLTIP
        PTT_RTS_radio_button->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Use the RS-232 RTS control line to toggle your radio's PTT, requires hardware to interface the line.</p><p>Some commercial interface units also use this method.</p><p>The RTS control line of the CAT serial port may be used for this or a RTS control line on a different serial port may be used. Note that this option is not available on the CAT serial port when hardware flow control is used.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        PTT_RTS_radio_button->setText(QApplication::translate("configuration_dialog", "R&TS", nullptr));
        PTT_port_label->setText(QApplication::translate("configuration_dialog", "Port:", nullptr));
#ifndef QT_NO_TOOLTIP
        PTT_port_combo_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Select the RS-232 serial port utilised for PTT control, this option is available when DTR or RTS is selected above as a transmit method.</p><p>This port can be the same one as the one used for CAT control.</p><p>For some interface types the special value CAT may be chosen, this is used for non-serial CAT interfaces that can control serial port control lines remotely (OmniRig for example).</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        PTT_port_combo_box->setCurrentText(QString());
#ifndef QT_NO_TOOLTIP
        mode_group_box->setToolTip(QApplication::translate("configuration_dialog", "Modulation mode selected on radio.", nullptr));
#endif // QT_NO_TOOLTIP
        mode_group_box->setTitle(QApplication::translate("configuration_dialog", "Mode", nullptr));
#ifndef QT_NO_TOOLTIP
        mode_USB_radio_button->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>USB is usually the correct modulation mode,</p><p>unless the radio has a special data or packet mode setting</p><p>for AFSK operation.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        mode_USB_radio_button->setText(QApplication::translate("configuration_dialog", "US&B", nullptr));
#ifndef QT_NO_TOOLTIP
        mode_none_radio_button->setToolTip(QApplication::translate("configuration_dialog", "Don't allow the program to set the radio mode\n"
"(not recommended but use if the wrong mode\n"
"or bandwidth is selected).", nullptr));
#endif // QT_NO_TOOLTIP
        mode_none_radio_button->setText(QApplication::translate("configuration_dialog", "None", nullptr));
#ifndef QT_NO_TOOLTIP
        mode_data_radio_button->setToolTip(QApplication::translate("configuration_dialog", "If this is available then it is usually the correct mode for this program.", nullptr));
#endif // QT_NO_TOOLTIP
        mode_data_radio_button->setText(QApplication::translate("configuration_dialog", "Data/P&kt", nullptr));
#ifndef QT_NO_TOOLTIP
        TX_audio_source_group_box->setToolTip(QApplication::translate("configuration_dialog", "Some radios can select the audio input using a CAT command,\n"
"this setting allows you to select which audio input will be used\n"
"(if it is available then generally the Rear/Data option is best).", nullptr));
#endif // QT_NO_TOOLTIP
        TX_audio_source_group_box->setTitle(QApplication::translate("configuration_dialog", "Transmit Audio Source", nullptr));
        TX_source_data_radio_button->setText(QApplication::translate("configuration_dialog", "Rear&/Data", nullptr));
        TX_source_mic_radio_button->setText(QApplication::translate("configuration_dialog", "&Front/Mic", nullptr));
        rig_label->setText(QApplication::translate("configuration_dialog", "Rig:", nullptr));
        CAT_poll_interval_label->setText(QApplication::translate("configuration_dialog", "Poll Interval:", nullptr));
#ifndef QT_NO_TOOLTIP
        CAT_poll_interval_spin_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Interval to poll rig for status. Longer intervals will mean that changes to the rig will take longer to be detected.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        CAT_poll_interval_spin_box->setSuffix(QApplication::translate("configuration_dialog", " s", nullptr));
#ifndef QT_NO_TOOLTIP
        test_CAT_push_button->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Attempt to connect to the radio with these settings.</p><p>The button will turn green if the connection is successful or red if there is a problem.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        test_CAT_push_button->setText(QApplication::translate("configuration_dialog", "Test CAT", nullptr));
#ifndef QT_NO_TOOLTIP
        test_PTT_push_button->setToolTip(QApplication::translate("configuration_dialog", "Attempt to activate the transmitter.\n"
"Click again to deactivate. Normally no power should be\n"
"output since there is no audio being generated at this time.\n"
"Check that any Tx indication on your radio and/or your\n"
"radio interface behave as expected.", nullptr));
#endif // QT_NO_TOOLTIP
        test_PTT_push_button->setText(QApplication::translate("configuration_dialog", "Test PTT", nullptr));
        split_operation_group_box->setTitle(QApplication::translate("configuration_dialog", "Split Operation", nullptr));
        split_emulate_radio_button->setText(QApplication::translate("configuration_dialog", "Fake It", nullptr));
        split_rig_radio_button->setText(QApplication::translate("configuration_dialog", "Rig", nullptr));
        split_none_radio_button->setText(QApplication::translate("configuration_dialog", "None", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(radio_tab), QApplication::translate("configuration_dialog", "&Radio", nullptr));
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(radio_tab), QApplication::translate("configuration_dialog", "Radio interface configuration settings.", nullptr));
#ifndef QT_NO_TOOLTIP
        soundcard_group_box->setToolTip(QApplication::translate("configuration_dialog", "Souncard", nullptr));
#endif // QT_NO_TOOLTIP
        soundcard_group_box->setTitle(QApplication::translate("configuration_dialog", "Soundcard", nullptr));
#ifndef QT_NO_TOOLTIP
        sound_output_combo_box->setToolTip(QApplication::translate("configuration_dialog", "Select the audio CODEC to use for transmitting.\n"
"If this is your default device for system sounds then\n"
"ensure that all system sounds are disabled otherwise\n"
"you will broadcast any systems sounds generated during\n"
"transmitting periods.", nullptr));
#endif // QT_NO_TOOLTIP
        sound_input_channel_combo_box->setItemText(0, QApplication::translate("configuration_dialog", "Mono", nullptr));
        sound_input_channel_combo_box->setItemText(1, QApplication::translate("configuration_dialog", "Left", nullptr));
        sound_input_channel_combo_box->setItemText(2, QApplication::translate("configuration_dialog", "Right", nullptr));
        sound_input_channel_combo_box->setItemText(3, QApplication::translate("configuration_dialog", "Both", nullptr));

#ifndef QT_NO_TOOLTIP
        sound_input_channel_combo_box->setToolTip(QApplication::translate("configuration_dialog", "Select the channel to use for receiving.", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        sound_input_combo_box->setToolTip(QApplication::translate("configuration_dialog", "Select the audio CODEC to use for receiving.", nullptr));
#endif // QT_NO_TOOLTIP
        sound_output_label->setText(QApplication::translate("configuration_dialog", "Ou&tput:", nullptr));
        sound_output_channel_combo_box->setItemText(0, QApplication::translate("configuration_dialog", "Mono", nullptr));
        sound_output_channel_combo_box->setItemText(1, QApplication::translate("configuration_dialog", "Left", nullptr));
        sound_output_channel_combo_box->setItemText(2, QApplication::translate("configuration_dialog", "Right", nullptr));
        sound_output_channel_combo_box->setItemText(3, QApplication::translate("configuration_dialog", "Both", nullptr));

#ifndef QT_NO_TOOLTIP
        sound_output_channel_combo_box->setToolTip(QApplication::translate("configuration_dialog", "Select the audio channel used for transmission.\n"
"Unless you have multiple radios connected on different\n"
"channels; then you will usually want to select mono or\n"
"both here.", nullptr));
#endif // QT_NO_TOOLTIP
        sound_input_label->setText(QApplication::translate("configuration_dialog", "&Input:", nullptr));
#ifndef QT_NO_TOOLTIP
        save_path_group_box->setToolTip(QApplication::translate("configuration_dialog", "Save Directory", nullptr));
#endif // QT_NO_TOOLTIP
        save_path_group_box->setTitle(QApplication::translate("configuration_dialog", "Save Directory", nullptr));
        save_path_label->setText(QApplication::translate("configuration_dialog", "Loc&ation:", nullptr));
#ifndef QT_NO_TOOLTIP
        save_path_display_label->setToolTip(QApplication::translate("configuration_dialog", "Path to which .WAV files are saved.", nullptr));
#endif // QT_NO_TOOLTIP
        save_path_display_label->setText(QApplication::translate("configuration_dialog", "TextLabel", nullptr));
#ifndef QT_NO_TOOLTIP
        save_path_select_push_button->setToolTip(QApplication::translate("configuration_dialog", "Click to select a different save directory for .WAV files.", nullptr));
#endif // QT_NO_TOOLTIP
        save_path_select_push_button->setText(QApplication::translate("configuration_dialog", "S&elect", nullptr));
#ifndef QT_NO_TOOLTIP
        azel_path_group_box->setToolTip(QApplication::translate("configuration_dialog", "AzEl Directory", nullptr));
#endif // QT_NO_TOOLTIP
        azel_path_group_box->setTitle(QApplication::translate("configuration_dialog", "AzEl Directory", nullptr));
        azel_path_label->setText(QApplication::translate("configuration_dialog", "Location:", nullptr));
        azel_path_display_label->setText(QApplication::translate("configuration_dialog", "TextLabel", nullptr));
        azel_path_select_push_button->setText(QApplication::translate("configuration_dialog", "Select", nullptr));
#ifndef QT_NO_TOOLTIP
        split_operation_group_box_2->setToolTip(QApplication::translate("configuration_dialog", "Power Memory By Band", nullptr));
#endif // QT_NO_TOOLTIP
        split_operation_group_box_2->setTitle(QApplication::translate("configuration_dialog", "Remember power settings by band", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxPwrBandTxMemory->setToolTip(QApplication::translate("configuration_dialog", "Enable power memory during transmit", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxPwrBandTxMemory->setText(QApplication::translate("configuration_dialog", "Transmit", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxPwrBandTuneMemory->setToolTip(QApplication::translate("configuration_dialog", "Enable power memory during tuning", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxPwrBandTuneMemory->setText(QApplication::translate("configuration_dialog", "Tune", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(audio_tab), QApplication::translate("configuration_dialog", "A&udio", nullptr));
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(audio_tab), QApplication::translate("configuration_dialog", "Audio interface settings", nullptr));
        add_macro_push_button->setText(QApplication::translate("configuration_dialog", "&Add", nullptr));
        delete_macro_push_button->setText(QApplication::translate("configuration_dialog", "&Delete", nullptr));
#ifndef QT_NO_TOOLTIP
        macros_list_view->setToolTip(QApplication::translate("configuration_dialog", "Drag and drop items to rearrange order\n"
"Right click for item specific actions\n"
"Click, SHIFT+Click and, CRTL+Click to select items", nullptr));
#endif // QT_NO_TOOLTIP
        configuration_tabs->setTabText(configuration_tabs->indexOf(tx_macros_tab), QApplication::translate("configuration_dialog", "Tx &Macros", nullptr));
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(tx_macros_tab), QApplication::translate("configuration_dialog", "Canned free text messages setup", nullptr));
        logging_group_box->setTitle(QApplication::translate("configuration_dialog", "Logging", nullptr));
#ifndef QT_NO_TOOLTIP
        prompt_to_log_check_box->setToolTip(QApplication::translate("configuration_dialog", "The program will pop up a partially completed Log QSO dialog when you send a 73 or free text message.", nullptr));
#endif // QT_NO_TOOLTIP
        prompt_to_log_check_box->setText(QApplication::translate("configuration_dialog", "Promp&t me to log QSO", nullptr));
        label_13->setText(QApplication::translate("configuration_dialog", "Op Call:", nullptr));
#ifndef QT_NO_TOOLTIP
        report_in_comments_check_box->setToolTip(QApplication::translate("configuration_dialog", "Some logging programs will not accept the type of reports\n"
"saved by this program.\n"
"Check this option to save the sent and received reports in the\n"
"comments field.", nullptr));
#endif // QT_NO_TOOLTIP
        report_in_comments_check_box->setText(QApplication::translate("configuration_dialog", "d&B reports to comments", nullptr));
#ifndef QT_NO_TOOLTIP
        clear_DX_check_box->setToolTip(QApplication::translate("configuration_dialog", "Check this option to force the clearing of the DX Call\n"
"and DX Grid fields when a 73 or free text message is sent.", nullptr));
#endif // QT_NO_TOOLTIP
        clear_DX_check_box->setText(QApplication::translate("configuration_dialog", "Clear &DX call and grid after logging", nullptr));
#ifndef QT_NO_TOOLTIP
        log_as_RTTY_check_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Some logging programs will not accept WSJT-X mode names.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        log_as_RTTY_check_box->setText(QApplication::translate("configuration_dialog", "Con&vert mode to RTTY", nullptr));
#ifndef QT_NO_TOOLTIP
        opCallEntry->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>The callsign of the operator, if different from the station callsign.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cbAutoLog->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Check to have QSOs logged automatically, when complete.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbAutoLog->setText(QApplication::translate("configuration_dialog", "Log automatically (contesting only)", nullptr));
        network_group_box->setTitle(QApplication::translate("configuration_dialog", "Network Services", nullptr));
#ifndef QT_NO_TOOLTIP
        psk_reporter_check_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>The program can send your station details and all decoded signals with grid squares as spots to the http://pskreporter.info web site.</p><p>This is used for reverse beacon analysis which is very useful for assessing propagation and system performance.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        psk_reporter_check_box->setText(QApplication::translate("configuration_dialog", "Enable &PSK Reporter Spotting", nullptr));
#ifndef QT_NO_TOOLTIP
        psk_reporter_tcpip_check_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Check this option if a reliable connection is needed</p><p>Most users do not need this, the default uses UDP which is more efficient. Only check this if you have evidence that UDP traffic from you to PSK Reporter is being lost.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        psk_reporter_tcpip_check_box->setText(QApplication::translate("configuration_dialog", "Use TCP/IP connection", nullptr));
        groupBox_4->setTitle(QApplication::translate("configuration_dialog", "UDP Server", nullptr));
        udp_server_label->setText(QApplication::translate("configuration_dialog", "UDP Server:", nullptr));
#ifndef QT_NO_TOOLTIP
        udp_server_line_edit->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Optional hostname of network service to receive decodes.</p><p>Formats:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">hostname</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 multicast group address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 multicast group address</li></ul><p>Clearing this field will disable the broadcasting of UDP status updates.</p></body></htm"
                        "l>", nullptr));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("configuration_dialog", "UDP Server port number:", nullptr));
#ifndef QT_NO_TOOLTIP
        udp_server_port_spin_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Enter the service port number of the UDP server that WSJT-X should send updates to. If this is zero no updates will be sent.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        udp_interfaces_label->setText(QApplication::translate("configuration_dialog", "Outgoing interfaces:", nullptr));
#ifndef QT_NO_TOOLTIP
        udp_interfaces_combo_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>When sending updates to a multicast group address it is necessary to specify which network interface(s) to send them to. If the loop-back interface is multicast capable then at least that one will be selected.</p><p>For most users the loop-back interface is all that is needed, that will allow multiple other applications on the same machine to interoperate with WSJT-X. If applications running on other hosts are to receive status updates then a suitable network interface should be used.</p><p>On some Linux systems it may be necessary to enable multicast on the loop-back network interface.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        udp_TTL_spin_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Sets the number or router hops that multicast datagrams are allowed to make. Almost everyone should set this to 1 to keep outgoing multicast traffic withn the local subnet.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        udp_TTL_label->setText(QApplication::translate("configuration_dialog", "Multicast TTL:", nullptr));
#ifndef QT_NO_TOOLTIP
        accept_udp_requests_check_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>With this enabled WSJT-X will accept certain requests back from a UDP server that receives decode messages.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        accept_udp_requests_check_box->setText(QApplication::translate("configuration_dialog", "Accept UDP requests", nullptr));
#ifndef QT_NO_TOOLTIP
        udpWindowToFront->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Indicate acceptance of an incoming UDP request. The effect of this option varies depending on the operating system and window manager, its intent is to notify the acceptance of an incoming UDP request even if this application is minimized or hidden.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        udpWindowToFront->setText(QApplication::translate("configuration_dialog", "Notify on accepted UDP request", nullptr));
#ifndef QT_NO_TOOLTIP
        udpWindowRestore->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Restore the window from minimized if an UDP request is accepted.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        udpWindowRestore->setText(QApplication::translate("configuration_dialog", "Accepted UDP request restores window", nullptr));
        n1mm_group_box->setTitle(QApplication::translate("configuration_dialog", "Secondary UDP Server (deprecated)", nullptr));
#ifndef QT_NO_TOOLTIP
        enable_n1mm_broadcast_check_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>When checked, WSJT-X will broadcast a logged contact in ADIF format to the configured hostname and port. </p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        enable_n1mm_broadcast_check_box->setText(QApplication::translate("configuration_dialog", "Enable logged contact ADIF broadcast", nullptr));
        n1mm_server_name_label->setText(QApplication::translate("configuration_dialog", "Server name or IP address:", nullptr));
#ifndef QT_NO_TOOLTIP
        n1mm_server_name_line_edit->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Optional host name of N1MM Logger+ program to receive ADIF UDP broadcasts. This is usually 'localhost' or ip address 127.0.0.1</p><p>Formats:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">hostname</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv4 multicast group address</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">IPv6 multicast group address</li></ul><p>Clearing this fiel"
                        "d will disable broadcasting of ADIF information via UDP.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        n1mm_server_port_label->setText(QApplication::translate("configuration_dialog", "Server port number:", nullptr));
#ifndef QT_NO_TOOLTIP
        n1mm_server_port_spin_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Enter the port number that WSJT-X should use for UDP broadcasts of ADIF log information. For N1MM Logger+, this value should be 2333. If this is zero,  no updates will be broadcast.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        configuration_tabs->setTabText(configuration_tabs->indexOf(reporting_tab), QApplication::translate("configuration_dialog", "Reportin&g", nullptr));
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(reporting_tab), QApplication::translate("configuration_dialog", "Reporting and logging settings", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_3->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>See &quot;Frequency Calibration&quot; in the WSJT-X User Guide for details of how to determine these parameters for your radio.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("configuration_dialog", "Frequency Calibration", nullptr));
        label_8->setText(QApplication::translate("configuration_dialog", "Slope:", nullptr));
        calibration_slope_ppm_spin_box->setSuffix(QApplication::translate("configuration_dialog", " ppm", nullptr));
        label_7->setText(QApplication::translate("configuration_dialog", "Intercept:", nullptr));
        calibration_intercept_spin_box->setSuffix(QApplication::translate("configuration_dialog", " Hz", nullptr));
        groupBox->setTitle(QApplication::translate("configuration_dialog", "Working Frequencies", nullptr));
#ifndef QT_NO_TOOLTIP
        frequencies_table_view->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Right click to maintain the working frequencies list.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("configuration_dialog", "Station Information", nullptr));
#ifndef QT_NO_TOOLTIP
        stations_table_view->setToolTip(QApplication::translate("configuration_dialog", "Items may be edited.\n"
"Right click for insert and delete options.", nullptr));
#endif // QT_NO_TOOLTIP
        configuration_tabs->setTabText(configuration_tabs->indexOf(frequencies_tab), QApplication::translate("configuration_dialog", "Frequencies", nullptr));
        configuration_tabs->setTabToolTip(configuration_tabs->indexOf(frequencies_tab), QApplication::translate("configuration_dialog", "Default frequencies and band specific station details setup", nullptr));
        groupBox_12->setTitle(QApplication::translate("configuration_dialog", "Decode Highlightling", nullptr));
#ifndef QT_NO_TOOLTIP
        rescan_log_push_button->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Click to scan the wsjtx_log.adi ADIF file again for worked before information</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        rescan_log_push_button->setText(QApplication::translate("configuration_dialog", "Rescan ADIF Log", nullptr));
#ifndef QT_NO_TOOLTIP
        reset_highlighting_to_defaults_push_button->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Push to reset all highlight items above to default values and priorities.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        reset_highlighting_to_defaults_push_button->setText(QApplication::translate("configuration_dialog", "Reset Highlighting", nullptr));
#ifndef QT_NO_TOOLTIP
        highlighting_list_view->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Enable or disable using the check boxes and right-click an item to change or unset the foreground color, background color, or reset the item to default values. Drag and drop the items to change their priority, higher in the list is higher in priority.</p><p>Note that each foreground or background color may be either set or unset, unset means that it is not allocated for that item's type and lower priority items may apply.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        highlight_by_mode_check_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Check to indicate new DXCC entities, grid squares, and callsigns per mode.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        highlight_by_mode_check_box->setText(QApplication::translate("configuration_dialog", "Highlight by Mode", nullptr));
        include_WAE_check_box->setText(QApplication::translate("configuration_dialog", "Include extra WAE entities", nullptr));
#ifndef QT_NO_TOOLTIP
        only_fields_check_box->setToolTip(QApplication::translate("configuration_dialog", "Check to for grid highlighting to only apply to unworked grid fields", nullptr));
#endif // QT_NO_TOOLTIP
        only_fields_check_box->setText(QApplication::translate("configuration_dialog", "Only grid Fields sought", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_11->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Controls for Logbook of the World user lookup.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_11->setTitle(QApplication::translate("configuration_dialog", "Logbook of the World User Validation", nullptr));
        label_15->setText(QApplication::translate("configuration_dialog", "Users CSV file URL:", nullptr));
#ifndef QT_NO_TOOLTIP
        LotW_CSV_URL_line_edit->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>URL of the ARRL LotW user's last upload dates and times data file which is used to highlight decodes from stations that are known to upload their log file to LotW.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        LotW_CSV_URL_line_edit->setAccessibleName(QApplication::translate("configuration_dialog", "URL", nullptr));
#endif // QT_NO_ACCESSIBILITY
        LotW_CSV_URL_line_edit->setText(QApplication::translate("configuration_dialog", "https://lotw.arrl.org/lotw-user-activity.csv", nullptr));
#ifndef QT_NO_TOOLTIP
        LotW_CSV_fetch_push_button->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Push this button to fetch the latest LotW user's upload date and time data file.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        LotW_CSV_fetch_push_button->setText(QApplication::translate("configuration_dialog", "Fetch Now", nullptr));
        label_14->setText(QApplication::translate("configuration_dialog", "Age of last upload less than:", nullptr));
#ifndef QT_NO_TOOLTIP
        LotW_days_since_upload_spin_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Adjust this spin box to set the age threshold of LotW user's last upload date that is accepted as a current LotW user.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        LotW_days_since_upload_spin_box->setAccessibleName(QApplication::translate("configuration_dialog", "Days since last upload", nullptr));
#endif // QT_NO_ACCESSIBILITY
        LotW_days_since_upload_spin_box->setSuffix(QApplication::translate("configuration_dialog", " days", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(colors_tab), QApplication::translate("configuration_dialog", "Colors", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_6->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>User-selectable parameters for JT65 VHF/UHF/Microwave decoding.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_6->setTitle(QApplication::translate("configuration_dialog", "JT65 VHF/UHF/Microwave decoding parameters", nullptr));
        label_2->setText(QApplication::translate("configuration_dialog", "Random erasure patterns:", nullptr));
#ifndef QT_NO_TOOLTIP
        sbNtrials->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Maximum number of erasure patterns for stochastic soft-decision Reed Solomon decoder is 10^(n/2).</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("configuration_dialog", "Aggressive decoding level:", nullptr));
#ifndef QT_NO_TOOLTIP
        sbAggressive->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Higher levels will increase the probability of decoding, but will also increase probability of a false decode.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbTwoPass->setText(QApplication::translate("configuration_dialog", "Two-pass decoding", nullptr));
        gbSpecialOpActivity->setTitle(QApplication::translate("configuration_dialog", "Special operating activity:  Generation of FT4, FT8, and MSK144 messages", nullptr));
#ifndef QT_NO_TOOLTIP
        rbHound->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>FT8 DXpedition mode:  Hound operator calling the DX.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        rbHound->setAccessibleName(QApplication::translate("configuration_dialog", "Hound", nullptr));
#endif // QT_NO_ACCESSIBILITY
        rbHound->setText(QApplication::translate("configuration_dialog", "Hound", nullptr));
#ifndef QT_NO_TOOLTIP
        rbNA_VHF_Contest->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>North American VHF/UHF/Microwave contests and others in which a 4-character grid locator is the required exchange.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        rbNA_VHF_Contest->setAccessibleName(QApplication::translate("configuration_dialog", "NA VHF Contest", nullptr));
#endif // QT_NO_ACCESSIBILITY
        rbNA_VHF_Contest->setText(QApplication::translate("configuration_dialog", "NA VHF Contest", nullptr));
#ifndef QT_NO_TOOLTIP
        rbFox->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>FT8 DXpedition mode:  Fox (DXpedition) operator.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        rbFox->setAccessibleName(QApplication::translate("configuration_dialog", "Fox", nullptr));
#endif // QT_NO_ACCESSIBILITY
        rbFox->setText(QApplication::translate("configuration_dialog", "Fox", nullptr));
#ifndef QT_NO_TOOLTIP
        rbEU_VHF_Contest->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>European VHF+ contests requiring a signal report, serial number, and 6-character locator.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        rbEU_VHF_Contest->setAccessibleName(QApplication::translate("configuration_dialog", "EU VHF Contest", nullptr));
#endif // QT_NO_ACCESSIBILITY
        rbEU_VHF_Contest->setText(QApplication::translate("configuration_dialog", "EU VHF Contest", nullptr));
#ifndef QT_NO_TOOLTIP
        rbRTTY_Roundup->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>ARRL RTTY Roundup and similar contests.  Exchange is US state, Canadian province, or &quot;DX&quot;.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        rbRTTY_Roundup->setAccessibleName(QApplication::translate("configuration_dialog", "R T T Y Roundup", nullptr));
#endif // QT_NO_ACCESSIBILITY
        rbRTTY_Roundup->setText(QApplication::translate("configuration_dialog", "RTTY Roundup messages", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        labRTTY->setAccessibleName(QApplication::translate("configuration_dialog", "RTTY Roundup exchange", nullptr));
#endif // QT_NO_ACCESSIBILITY
        labRTTY->setText(QApplication::translate("configuration_dialog", "RTTY RU Exch:", nullptr));
#ifndef QT_NO_TOOLTIP
        RTTY_Exchange->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>ARRL RTTY Roundup and similar contests.  Exchange is US state, Canadian province, or &quot;DX&quot;.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        RTTY_Exchange->setText(QApplication::translate("configuration_dialog", "NJ", nullptr));
#ifndef QT_NO_TOOLTIP
        rbField_Day->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>ARRL Field Day exchange: number of transmitters, Class, and ARRL/RAC section or &quot;DX&quot;.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        rbField_Day->setAccessibleName(QApplication::translate("configuration_dialog", "A R R L Field Day", nullptr));
#endif // QT_NO_ACCESSIBILITY
        rbField_Day->setText(QApplication::translate("configuration_dialog", "ARRL Field Day", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        labFD->setAccessibleName(QApplication::translate("configuration_dialog", "Field Day exchange", nullptr));
#endif // QT_NO_ACCESSIBILITY
        labFD->setText(QApplication::translate("configuration_dialog", "FD Exch:", nullptr));
#ifndef QT_NO_TOOLTIP
        Field_Day_Exchange->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>ARRL Field Day exchange: number of transmitters, Class, and ARRL/RAC section or &quot;DX&quot;.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        Field_Day_Exchange->setText(QApplication::translate("configuration_dialog", "6A SNJ", nullptr));
#ifndef QT_NO_TOOLTIP
        rbWW_DIGI->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>World-Wide Digi-mode contest</p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        rbWW_DIGI->setAccessibleName(QApplication::translate("configuration_dialog", "WW Digital Contest", nullptr));
#endif // QT_NO_ACCESSIBILITY
        rbWW_DIGI->setText(QApplication::translate("configuration_dialog", "WW Digi Contest", nullptr));
        groupBox_5->setTitle(QApplication::translate("configuration_dialog", "Miscellaneous", nullptr));
        label_3->setText(QApplication::translate("configuration_dialog", "Degrade S/N of .wav file: ", nullptr));
#ifndef QT_NO_TOOLTIP
        sbDegrade->setToolTip(QApplication::translate("configuration_dialog", "For offline sensitivity tests", nullptr));
#endif // QT_NO_TOOLTIP
        sbDegrade->setSuffix(QApplication::translate("configuration_dialog", " dB", nullptr));
        label_9->setText(QApplication::translate("configuration_dialog", "Receiver bandwidth:", nullptr));
#ifndef QT_NO_TOOLTIP
        sbBandwidth->setToolTip(QApplication::translate("configuration_dialog", "For offline sensitivity tests", nullptr));
#endif // QT_NO_TOOLTIP
        sbBandwidth->setSuffix(QApplication::translate("configuration_dialog", "  Hz", nullptr));
        label_11->setText(QApplication::translate("configuration_dialog", "Tx delay:", nullptr));
#ifndef QT_NO_TOOLTIP
        sbTxDelay->setToolTip(QApplication::translate("configuration_dialog", "Minimum delay between assertion of PTT and start of Tx audio.", nullptr));
#endif // QT_NO_TOOLTIP
        sbTxDelay->setSuffix(QApplication::translate("configuration_dialog", "  s", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        groupBox_10->setAccessibleName(QApplication::translate("configuration_dialog", "Tone spacing", nullptr));
#endif // QT_NO_ACCESSIBILITY
        groupBox_10->setTitle(QApplication::translate("configuration_dialog", "Tone spacing", nullptr));
#ifndef QT_NO_TOOLTIP
        cbx2ToneSpacing->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Generate Tx audio with twice the normal tone spacing.  Intended for special LF/MF transmitters that use a divide-by-2 before generating RF.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbx2ToneSpacing->setText(QApplication::translate("configuration_dialog", "x 2", nullptr));
#ifndef QT_NO_TOOLTIP
        cbx4ToneSpacing->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Generate Tx audio with four times the normal tone spacing. Intended for special LF/MF transmitters that use a divide-by-4 before generating RF.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cbx4ToneSpacing->setText(QApplication::translate("configuration_dialog", "x 4 ", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        groupBox_7->setAccessibleName(QApplication::translate("configuration_dialog", "Waterfall spectra", nullptr));
#endif // QT_NO_ACCESSIBILITY
        groupBox_7->setTitle(QApplication::translate("configuration_dialog", "Waterfall spectra", nullptr));
        rbLowSidelobes->setText(QApplication::translate("configuration_dialog", "Low sidelobes", nullptr));
        rbMaxSensitivity->setText(QApplication::translate("configuration_dialog", "Most sensitive", nullptr));
        configuration_tabs->setTabText(configuration_tabs->indexOf(advanced_tab), QApplication::translate("configuration_dialog", "Advanced", nullptr));
        groupBox_13->setTitle(QApplication::translate("configuration_dialog", "Ignore List", nullptr));
        sb_ignoreListReset->setSuffix(QApplication::translate("configuration_dialog", " min", nullptr));
        label_21->setText(QApplication::translate("configuration_dialog", "List reset interval ", nullptr));
#ifndef QT_NO_TOOLTIP
        te_permIgnoreList->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>These callsigns will be copied to the Ignore List on startup.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_20->setText(QApplication::translate("configuration_dialog", "Permanent Ignore list", nullptr));
        cb_autoTXFreq->setTitle(QApplication::translate("configuration_dialog", "Find free freq after auto band/mode change", nullptr));
        rb_autoFreqWide->setText(QApplication::translate("configuration_dialog", "Wide (200-3000)", nullptr));
        rb_autoFreqNarrow->setText(QApplication::translate("configuration_dialog", "Narrow (500-2000)", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_showDistance->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>If a station sends locator, calculate and show the distance in Band Activity pane.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_showDistance->setText(QApplication::translate("configuration_dialog", "Show distance when locator is available", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_highlightDX->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Marks the callsign of our QSO partner in Band Activity box.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_highlightDX->setText(QApplication::translate("configuration_dialog", "Highlight current DX", nullptr));
        le_separatorColor->setText(QString());
#ifndef QT_NO_TOOLTIP
        cb_colourAll->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Colour and show dxcc for all messages, not just CQ.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_colourAll->setText(QApplication::translate("configuration_dialog", "Display colours/dxcc for all messages", nullptr));
        cb_clearRx->setText(QApplication::translate("configuration_dialog", "Clear RX windows when band changed", nullptr));
        label_22->setText(QApplication::translate("configuration_dialog", "Separator color", nullptr));
        cb_showBearing->setText(QApplication::translate("configuration_dialog", "Show bearing when locator is available", nullptr));
        cb_showState->setText(QApplication::translate("configuration_dialog", "Show state for US callsigns", nullptr));
        cb_rawViewDXCC->setText(QApplication::translate("configuration_dialog", "Display dxcc in raw view", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("configuration_dialog", "RX  Windows", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_processTailenders->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Respond to any station calling us when we're finishing or not in QSO or (even if we're not calling CQ)</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_processTailenders->setText(QApplication::translate("configuration_dialog", "Always respond to stations calling us", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_autoCQfiltering->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>When calling CQ, check if the station responding to us passed our filtering. </p><p>If not, Z will not respond to them automatically.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_autoCQfiltering->setText(QApplication::translate("configuration_dialog", "Apply filtering to stations calling us", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_disableWriteALL->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Disable writing to ALL.TXT</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_disableWriteALL->setText(QApplication::translate("configuration_dialog", "Disable writing to ALL.TXT", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_disableWriteFoxQSO->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Disable writing to FoxQSO.txt</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_disableWriteFoxQSO->setText(QApplication::translate("configuration_dialog", "Disable writing to FoxQSO.txt", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_udpFiltering->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Only send messages that passed filtering to other programs via UDP.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_udpFiltering->setText(QApplication::translate("configuration_dialog", "Apply filtering to UDP messages (JTalert, etc)", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_rxTotxFreq->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Resets the RX frequency at the end of each QSO.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_rxTotxFreq->setText(QApplication::translate("configuration_dialog", "Set RX freq to TX freq when finished QSO", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_WD_resetAnywhere->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Reset WD timer when clicked anywhere in the app. </p><p>If this is disabled, &quot;Reset WD&quot; button will appear in bottom right corner. </p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_WD_resetAnywhere->setText(QApplication::translate("configuration_dialog", "Reset WD when clicked anywhere in Z", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_autoTune->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>When band hopping enabled, Z will hit Tune for few seconds to adjust automatic antenna tuners.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_autoTune->setText(QApplication::translate("configuration_dialog", "Auto-tune after auto band change", nullptr));
#ifndef QT_NO_TOOLTIP
        cb_noFoxQSY->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>When this is enabled Z will not automatically change frequency in HOUND mode. </p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        cb_noFoxQSY->setText(QApplication::translate("configuration_dialog", "No frequency changes for HOUND mode", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("configuration_dialog", "Misc", nullptr));
        groupBox_8->setTitle(QApplication::translate("configuration_dialog", "QRZ.COM", nullptr));
        label_18->setText(QApplication::translate("configuration_dialog", "Username", nullptr));
        label_19->setText(QApplication::translate("configuration_dialog", "Password", nullptr));
#ifndef QT_NO_TOOLTIP
        gb_WD_Timer->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Different WD timeouts for each mode.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        gb_WD_Timer->setTitle(QApplication::translate("configuration_dialog", "Custom WD Timer", nullptr));
        label_17->setText(QApplication::translate("configuration_dialog", "FT4", nullptr));
        label_16->setText(QApplication::translate("configuration_dialog", "FT8", nullptr));
        groupBox_9->setTitle(QApplication::translate("configuration_dialog", "Debug", nullptr));
        rb_dbg_Screen->setText(QApplication::translate("configuration_dialog", "Screen only", nullptr));
        rb_dbg_File->setText(QApplication::translate("configuration_dialog", "File only", nullptr));
        rb_dbg_Both->setText(QApplication::translate("configuration_dialog", "Both", nullptr));
        groupBox_14->setTitle(QApplication::translate("configuration_dialog", "Custom alert command line", nullptr));
#ifndef QT_NO_TOOLTIP
        le_alertCmdLine->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Command to run when an alert is triggered.</p><p>Following variables will be expanded automatically.</p><p>%<span style=\" font-weight:600;\">band</span>% </p><p>%<span style=\" font-weight:600;\">call</span>% </p><p>%<span style=\" font-weight:600;\">dxcc</span>% </p><p>%<span style=\" font-weight:600;\">datetime</span>%</p><p><br/></p><p>Example: </p><p><span style=\" font-style:italic;\">cmd.exe /c echo %band% %call% %dxcc% %datetime% &gt;&gt; C:\\log.txt</span></p><p><br/></p><p><br/></p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        configuration_tabs->setTabText(configuration_tabs->indexOf(wsjtz_tab), QApplication::translate("configuration_dialog", "WSJT-Z", nullptr));
#ifndef QT_NO_TOOLTIP
        configuration_dialog_button_box->setToolTip(QApplication::translate("configuration_dialog", "<html><head/><body><p>Discard (Cancel) or apply (OK) configuration changes including</p><p>resetting the radio interface and applying any soundcard changes</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class configuration_dialog: public Ui_configuration_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATION_H
