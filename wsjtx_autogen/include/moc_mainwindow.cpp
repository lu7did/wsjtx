/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widgets/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[341];
    char stringdata0[6666];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 27), // "initializeAudioOutputStream"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "QAudioDeviceInfo"
QT_MOC_LITERAL(4, 57, 8), // "channels"
QT_MOC_LITERAL(5, 66, 10), // "msBuffered"
QT_MOC_LITERAL(6, 77, 21), // "stopAudioOutputStream"
QT_MOC_LITERAL(7, 99, 21), // "startAudioInputStream"
QT_MOC_LITERAL(8, 121, 15), // "framesPerBuffer"
QT_MOC_LITERAL(9, 137, 12), // "AudioDevice*"
QT_MOC_LITERAL(10, 150, 4), // "sink"
QT_MOC_LITERAL(11, 155, 16), // "downSampleFactor"
QT_MOC_LITERAL(12, 172, 20), // "AudioDevice::Channel"
QT_MOC_LITERAL(13, 193, 23), // "suspendAudioInputStream"
QT_MOC_LITERAL(14, 217, 22), // "resumeAudioInputStream"
QT_MOC_LITERAL(15, 240, 13), // "startDetector"
QT_MOC_LITERAL(16, 254, 7), // "FFTSize"
QT_MOC_LITERAL(17, 262, 13), // "detectorClose"
QT_MOC_LITERAL(18, 276, 8), // "finished"
QT_MOC_LITERAL(19, 285, 17), // "transmitFrequency"
QT_MOC_LITERAL(20, 303, 18), // "endTransmitMessage"
QT_MOC_LITERAL(21, 322, 5), // "quick"
QT_MOC_LITERAL(22, 328, 4), // "tune"
QT_MOC_LITERAL(23, 333, 11), // "sendMessage"
QT_MOC_LITERAL(24, 345, 4), // "mode"
QT_MOC_LITERAL(25, 350, 13), // "symbolsLength"
QT_MOC_LITERAL(26, 364, 15), // "framesPerSymbol"
QT_MOC_LITERAL(27, 380, 9), // "frequency"
QT_MOC_LITERAL(28, 390, 11), // "toneSpacing"
QT_MOC_LITERAL(29, 402, 12), // "SoundOutput*"
QT_MOC_LITERAL(30, 415, 11), // "synchronize"
QT_MOC_LITERAL(31, 427, 8), // "fastMode"
QT_MOC_LITERAL(32, 436, 5), // "dBSNR"
QT_MOC_LITERAL(33, 442, 8), // "TRperiod"
QT_MOC_LITERAL(34, 451, 21), // "outAttenuationChanged"
QT_MOC_LITERAL(35, 473, 15), // "toggleShorthand"
QT_MOC_LITERAL(36, 489, 24), // "reset_audio_input_stream"
QT_MOC_LITERAL(37, 514, 21), // "report_dropped_frames"
QT_MOC_LITERAL(38, 536, 16), // "showSoundInError"
QT_MOC_LITERAL(39, 553, 8), // "errorMsg"
QT_MOC_LITERAL(40, 562, 17), // "showSoundOutError"
QT_MOC_LITERAL(41, 580, 17), // "showStatusMessage"
QT_MOC_LITERAL(42, 598, 9), // "statusMsg"
QT_MOC_LITERAL(43, 608, 8), // "dataSink"
QT_MOC_LITERAL(44, 617, 6), // "frames"
QT_MOC_LITERAL(45, 624, 8), // "fastSink"
QT_MOC_LITERAL(46, 633, 7), // "diskDat"
QT_MOC_LITERAL(47, 641, 12), // "freezeDecode"
QT_MOC_LITERAL(48, 654, 1), // "n"
QT_MOC_LITERAL(49, 656, 9), // "guiUpdate"
QT_MOC_LITERAL(50, 666, 17), // "doubleClickOnCall"
QT_MOC_LITERAL(51, 684, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(52, 706, 18), // "doubleClickOnCall2"
QT_MOC_LITERAL(53, 725, 21), // "doubleClickOnFoxQueue"
QT_MOC_LITERAL(54, 747, 14), // "readFromStdout"
QT_MOC_LITERAL(55, 762, 16), // "p1ReadFromStdout"
QT_MOC_LITERAL(56, 779, 6), // "setXIT"
QT_MOC_LITERAL(57, 786, 9), // "Frequency"
QT_MOC_LITERAL(58, 796, 4), // "base"
QT_MOC_LITERAL(59, 801, 8), // "setFreq4"
QT_MOC_LITERAL(60, 810, 6), // "rxFreq"
QT_MOC_LITERAL(61, 817, 6), // "txFreq"
QT_MOC_LITERAL(62, 824, 13), // "msgAvgDecode2"
QT_MOC_LITERAL(63, 838, 8), // "fastPick"
QT_MOC_LITERAL(64, 847, 2), // "x0"
QT_MOC_LITERAL(65, 850, 2), // "x1"
QT_MOC_LITERAL(66, 853, 1), // "y"
QT_MOC_LITERAL(67, 855, 16), // "initialize_fonts"
QT_MOC_LITERAL(68, 872, 22), // "on_tx1_editingFinished"
QT_MOC_LITERAL(69, 895, 22), // "on_tx2_editingFinished"
QT_MOC_LITERAL(70, 918, 22), // "on_tx3_editingFinished"
QT_MOC_LITERAL(71, 941, 22), // "on_tx4_editingFinished"
QT_MOC_LITERAL(72, 964, 25), // "on_tx5_currentTextChanged"
QT_MOC_LITERAL(73, 990, 22), // "on_tx6_editingFinished"
QT_MOC_LITERAL(74, 1013, 27), // "on_actionSettings_triggered"
QT_MOC_LITERAL(75, 1041, 24), // "on_monitorButton_clicked"
QT_MOC_LITERAL(76, 1066, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(77, 1091, 21), // "on_autoButton_clicked"
QT_MOC_LITERAL(78, 1113, 23), // "on_stopTxButton_clicked"
QT_MOC_LITERAL(79, 1137, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(80, 1159, 32), // "on_actionRelease_Notes_triggered"
QT_MOC_LITERAL(81, 1192, 49), // "on_actionFT8_DXpedition_Mode_..."
QT_MOC_LITERAL(82, 1242, 27), // "on_actionQSG_FST4_triggered"
QT_MOC_LITERAL(83, 1270, 26), // "on_actionQSG_Q65_triggered"
QT_MOC_LITERAL(84, 1297, 30), // "on_actionQSG_X250_M3_triggered"
QT_MOC_LITERAL(85, 1328, 36), // "on_actionOnline_User_Guide_tr..."
QT_MOC_LITERAL(86, 1365, 35), // "on_actionLocal_User_Guide_tri..."
QT_MOC_LITERAL(87, 1401, 33), // "on_actionWide_Waterfall_trigg..."
QT_MOC_LITERAL(88, 1435, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(89, 1459, 41), // "on_actionOpen_next_in_directo..."
QT_MOC_LITERAL(90, 1501, 54), // "on_actionDecode_remaining_fil..."
QT_MOC_LITERAL(91, 1556, 50), // "on_actionDelete_all_wav_files..."
QT_MOC_LITERAL(92, 1607, 37), // "on_actionOpen_log_directory_t..."
QT_MOC_LITERAL(93, 1645, 23), // "on_actionNone_triggered"
QT_MOC_LITERAL(94, 1669, 27), // "on_actionSave_all_triggered"
QT_MOC_LITERAL(95, 1697, 37), // "on_actionKeyboard_shortcuts_t..."
QT_MOC_LITERAL(96, 1735, 41), // "on_actionSpecial_mouse_comman..."
QT_MOC_LITERAL(97, 1777, 32), // "on_actionSolve_FreqCal_triggered"
QT_MOC_LITERAL(98, 1810, 35), // "on_actionCopyright_Notice_tri..."
QT_MOC_LITERAL(99, 1846, 27), // "on_actionSWL_Mode_triggered"
QT_MOC_LITERAL(100, 1874, 7), // "checked"
QT_MOC_LITERAL(101, 1882, 23), // "on_DecodeButton_clicked"
QT_MOC_LITERAL(102, 1906, 6), // "decode"
QT_MOC_LITERAL(103, 1913, 10), // "decodeBusy"
QT_MOC_LITERAL(104, 1924, 1), // "b"
QT_MOC_LITERAL(105, 1926, 22), // "on_EraseButton_clicked"
QT_MOC_LITERAL(106, 1949, 21), // "band_activity_cleared"
QT_MOC_LITERAL(107, 1971, 29), // "rx_frequency_activity_cleared"
QT_MOC_LITERAL(108, 2001, 31), // "on_txFirstCheckBox_stateChanged"
QT_MOC_LITERAL(109, 2033, 4), // "arg1"
QT_MOC_LITERAL(110, 2038, 15), // "set_dateTimeQSO"
QT_MOC_LITERAL(111, 2054, 5), // "m_ntx"
QT_MOC_LITERAL(112, 2060, 7), // "set_ntx"
QT_MOC_LITERAL(113, 2068, 16), // "on_txrb1_toggled"
QT_MOC_LITERAL(114, 2085, 6), // "status"
QT_MOC_LITERAL(115, 2092, 22), // "on_txrb1_doubleClicked"
QT_MOC_LITERAL(116, 2115, 16), // "on_txrb2_toggled"
QT_MOC_LITERAL(117, 2132, 16), // "on_txrb3_toggled"
QT_MOC_LITERAL(118, 2149, 16), // "on_txrb4_toggled"
QT_MOC_LITERAL(119, 2166, 22), // "on_txrb4_doubleClicked"
QT_MOC_LITERAL(120, 2189, 16), // "on_txrb5_toggled"
QT_MOC_LITERAL(121, 2206, 22), // "on_txrb5_doubleClicked"
QT_MOC_LITERAL(122, 2229, 16), // "on_txrb6_toggled"
QT_MOC_LITERAL(123, 2246, 15), // "on_txb1_clicked"
QT_MOC_LITERAL(124, 2262, 21), // "on_txb1_doubleClicked"
QT_MOC_LITERAL(125, 2284, 15), // "on_txb2_clicked"
QT_MOC_LITERAL(126, 2300, 15), // "on_txb3_clicked"
QT_MOC_LITERAL(127, 2316, 15), // "on_txb4_clicked"
QT_MOC_LITERAL(128, 2332, 21), // "on_txb4_doubleClicked"
QT_MOC_LITERAL(129, 2354, 15), // "on_txb5_clicked"
QT_MOC_LITERAL(130, 2370, 21), // "on_txb5_doubleClicked"
QT_MOC_LITERAL(131, 2392, 15), // "on_txb6_clicked"
QT_MOC_LITERAL(132, 2408, 23), // "on_lookupButton_clicked"
QT_MOC_LITERAL(133, 2432, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(134, 2453, 26), // "on_dxCallEntry_textChanged"
QT_MOC_LITERAL(135, 2480, 26), // "on_dxGridEntry_textChanged"
QT_MOC_LITERAL(136, 2507, 30), // "on_dxCallEntry_editingFinished"
QT_MOC_LITERAL(137, 2538, 28), // "on_dxCallEntry_returnPressed"
QT_MOC_LITERAL(138, 2567, 31), // "on_genStdMsgsPushButton_clicked"
QT_MOC_LITERAL(139, 2599, 23), // "on_logQSOButton_clicked"
QT_MOC_LITERAL(140, 2623, 22), // "on_actionJT9_triggered"
QT_MOC_LITERAL(141, 2646, 23), // "on_actionJT65_triggered"
QT_MOC_LITERAL(142, 2670, 22), // "on_actionJT4_triggered"
QT_MOC_LITERAL(143, 2693, 22), // "on_actionFT4_triggered"
QT_MOC_LITERAL(144, 2716, 22), // "on_actionFT8_triggered"
QT_MOC_LITERAL(145, 2739, 23), // "on_actionFST4_triggered"
QT_MOC_LITERAL(146, 2763, 24), // "on_actionFST4W_triggered"
QT_MOC_LITERAL(147, 2788, 29), // "on_TxFreqSpinBox_valueChanged"
QT_MOC_LITERAL(148, 2818, 31), // "on_actionSave_decoded_triggered"
QT_MOC_LITERAL(149, 2850, 28), // "on_actionQuickDecode_toggled"
QT_MOC_LITERAL(150, 2879, 29), // "on_actionMediumDecode_toggled"
QT_MOC_LITERAL(151, 2909, 30), // "on_actionDeepestDecode_toggled"
QT_MOC_LITERAL(152, 2940, 8), // "bumpFqso"
QT_MOC_LITERAL(153, 2949, 32), // "on_actionErase_ALL_TXT_triggered"
QT_MOC_LITERAL(154, 2982, 38), // "on_reset_cabrillo_log_action_..."
QT_MOC_LITERAL(155, 3021, 38), // "on_actionErase_wsjtx_log_adi_..."
QT_MOC_LITERAL(156, 3060, 39), // "on_actionErase_WSPR_hashtable..."
QT_MOC_LITERAL(157, 3100, 38), // "on_actionExport_Cabrillo_log_..."
QT_MOC_LITERAL(158, 3139, 8), // "startTx2"
QT_MOC_LITERAL(159, 3148, 7), // "startP1"
QT_MOC_LITERAL(160, 3156, 6), // "stopTx"
QT_MOC_LITERAL(161, 3163, 7), // "stopTx2"
QT_MOC_LITERAL(162, 3171, 26), // "on_rptSpinBox_valueChanged"
QT_MOC_LITERAL(163, 3198, 8), // "killFile"
QT_MOC_LITERAL(164, 3207, 21), // "on_tuneButton_clicked"
QT_MOC_LITERAL(165, 3229, 16), // "on_pbR2T_clicked"
QT_MOC_LITERAL(166, 3246, 16), // "on_pbT2R_clicked"
QT_MOC_LITERAL(167, 3263, 9), // "acceptQSO"
QT_MOC_LITERAL(168, 3273, 4), // "call"
QT_MOC_LITERAL(169, 3278, 4), // "grid"
QT_MOC_LITERAL(170, 3283, 9), // "dial_freq"
QT_MOC_LITERAL(171, 3293, 8), // "rpt_sent"
QT_MOC_LITERAL(172, 3302, 12), // "rpt_received"
QT_MOC_LITERAL(173, 3315, 8), // "tx_power"
QT_MOC_LITERAL(174, 3324, 8), // "comments"
QT_MOC_LITERAL(175, 3333, 4), // "name"
QT_MOC_LITERAL(176, 3338, 11), // "QSO_date_on"
QT_MOC_LITERAL(177, 3350, 13), // "operator_call"
QT_MOC_LITERAL(178, 3364, 7), // "my_call"
QT_MOC_LITERAL(179, 3372, 7), // "my_grid"
QT_MOC_LITERAL(180, 3380, 13), // "exchange_sent"
QT_MOC_LITERAL(181, 3394, 13), // "exchange_rcvd"
QT_MOC_LITERAL(182, 3408, 8), // "propmode"
QT_MOC_LITERAL(183, 3417, 4), // "ADIF"
QT_MOC_LITERAL(184, 3422, 35), // "on_bandComboBox_currentIndexC..."
QT_MOC_LITERAL(185, 3458, 5), // "index"
QT_MOC_LITERAL(186, 3464, 31), // "on_bandComboBox_editTextChanged"
QT_MOC_LITERAL(187, 3496, 4), // "text"
QT_MOC_LITERAL(188, 3501, 25), // "on_bandComboBox_activated"
QT_MOC_LITERAL(189, 3527, 19), // "on_readFreq_clicked"
QT_MOC_LITERAL(190, 3547, 29), // "on_RxFreqSpinBox_valueChanged"
QT_MOC_LITERAL(191, 3577, 30), // "on_outAttenuation_valueChanged"
QT_MOC_LITERAL(192, 3608, 7), // "rigOpen"
QT_MOC_LITERAL(193, 3616, 25), // "handle_transceiver_update"
QT_MOC_LITERAL(194, 3642, 29), // "Transceiver::TransceiverState"
QT_MOC_LITERAL(195, 3672, 26), // "handle_transceiver_failure"
QT_MOC_LITERAL(196, 3699, 6), // "reason"
QT_MOC_LITERAL(197, 3706, 34), // "on_actionAstronomical_data_to..."
QT_MOC_LITERAL(198, 3741, 61), // "on_actionShort_list_of_add_on..."
QT_MOC_LITERAL(199, 3803, 12), // "band_changed"
QT_MOC_LITERAL(200, 3816, 7), // "monitor"
QT_MOC_LITERAL(201, 3824, 10), // "end_tuning"
QT_MOC_LITERAL(202, 3835, 11), // "stop_tuning"
QT_MOC_LITERAL(203, 3847, 11), // "stopTuneATU"
QT_MOC_LITERAL(204, 3859, 12), // "auto_tx_mode"
QT_MOC_LITERAL(205, 3872, 36), // "on_actionMessage_averaging_tr..."
QT_MOC_LITERAL(206, 3909, 31), // "on_contest_log_action_triggered"
QT_MOC_LITERAL(207, 3941, 27), // "on_fox_log_action_triggered"
QT_MOC_LITERAL(208, 3969, 25), // "on_actionColors_triggered"
QT_MOC_LITERAL(209, 3995, 34), // "on_actionInclude_averaging_to..."
QT_MOC_LITERAL(210, 4030, 36), // "on_actionInclude_correlation_..."
QT_MOC_LITERAL(211, 4067, 33), // "on_actionEnable_AP_DXcall_tog..."
QT_MOC_LITERAL(212, 4101, 31), // "on_actionAuto_Clear_Avg_toggled"
QT_MOC_LITERAL(213, 4133, 20), // "VHF_features_enabled"
QT_MOC_LITERAL(214, 4154, 25), // "on_sbSubmode_valueChanged"
QT_MOC_LITERAL(215, 4180, 19), // "on_cbShMsgs_toggled"
QT_MOC_LITERAL(216, 4200, 16), // "on_cbSWL_toggled"
QT_MOC_LITERAL(217, 4217, 16), // "on_cbTx6_toggled"
QT_MOC_LITERAL(218, 4234, 18), // "on_cbMenus_toggled"
QT_MOC_LITERAL(219, 4253, 19), // "on_cbCQonly_toggled"
QT_MOC_LITERAL(220, 4273, 18), // "on_cbFirst_toggled"
QT_MOC_LITERAL(221, 4292, 20), // "on_cbAutoSeq_toggled"
QT_MOC_LITERAL(222, 4313, 12), // "networkError"
QT_MOC_LITERAL(223, 4326, 23), // "on_ClrAvgButton_clicked"
QT_MOC_LITERAL(224, 4350, 23), // "on_actionWSPR_triggered"
QT_MOC_LITERAL(225, 4374, 27), // "on_syncSpinBox_valueChanged"
QT_MOC_LITERAL(226, 4402, 38), // "on_TxPowerComboBox_currentInd..."
QT_MOC_LITERAL(227, 4441, 27), // "on_sbTxPercent_valueChanged"
QT_MOC_LITERAL(228, 4469, 29), // "on_cbUploadWSPR_Spots_toggled"
QT_MOC_LITERAL(229, 4499, 11), // "WSPR_config"
QT_MOC_LITERAL(230, 4511, 15), // "uploadWSPRSpots"
QT_MOC_LITERAL(231, 4527, 11), // "direct_post"
QT_MOC_LITERAL(232, 4539, 11), // "decode_text"
QT_MOC_LITERAL(233, 4551, 7), // "TxAgain"
QT_MOC_LITERAL(234, 4559, 14), // "uploadResponse"
QT_MOC_LITERAL(235, 4574, 8), // "response"
QT_MOC_LITERAL(236, 4583, 31), // "on_WSPRfreqSpinBox_valueChanged"
QT_MOC_LITERAL(237, 4615, 30), // "on_sbFST4W_RxFreq_valueChanged"
QT_MOC_LITERAL(238, 4646, 28), // "on_sbFST4W_FTol_valueChanged"
QT_MOC_LITERAL(239, 4675, 19), // "on_pbTxNext_clicked"
QT_MOC_LITERAL(240, 4695, 29), // "on_actionEcho_Graph_triggered"
QT_MOC_LITERAL(241, 4725, 23), // "on_actionEcho_triggered"
QT_MOC_LITERAL(242, 4749, 29), // "on_actionFast_Graph_triggered"
QT_MOC_LITERAL(243, 4779, 16), // "fast_decode_done"
QT_MOC_LITERAL(244, 4796, 45), // "on_actionMeasure_reference_sp..."
QT_MOC_LITERAL(245, 4842, 43), // "on_actionErase_reference_spec..."
QT_MOC_LITERAL(246, 4886, 41), // "on_actionMeasure_phase_respon..."
QT_MOC_LITERAL(247, 4928, 20), // "on_sbTR_valueChanged"
QT_MOC_LITERAL(248, 4949, 26), // "on_sbTR_FST4W_valueChanged"
QT_MOC_LITERAL(249, 4976, 22), // "on_sbFtol_valueChanged"
QT_MOC_LITERAL(250, 4999, 18), // "on_cbFast9_clicked"
QT_MOC_LITERAL(251, 5018, 26), // "on_sbCQTxFreq_valueChanged"
QT_MOC_LITERAL(252, 5045, 17), // "on_cbCQTx_toggled"
QT_MOC_LITERAL(253, 5063, 25), // "on_actionMSK144_triggered"
QT_MOC_LITERAL(254, 5089, 22), // "on_actionQ65_triggered"
QT_MOC_LITERAL(255, 5112, 26), // "on_actionFreqCal_triggered"
QT_MOC_LITERAL(256, 5139, 11), // "splash_done"
QT_MOC_LITERAL(257, 5151, 33), // "on_measure_check_box_stateCha..."
QT_MOC_LITERAL(258, 5185, 23), // "on_sbNlist_valueChanged"
QT_MOC_LITERAL(259, 5209, 24), // "on_sbNslots_valueChanged"
QT_MOC_LITERAL(260, 5234, 24), // "on_sbMax_dB_valueChanged"
QT_MOC_LITERAL(261, 5259, 23), // "on_sbF_Low_valueChanged"
QT_MOC_LITERAL(262, 5283, 24), // "on_sbF_High_valueChanged"
QT_MOC_LITERAL(263, 5308, 19), // "chk_FST4_freq_range"
QT_MOC_LITERAL(264, 5328, 21), // "on_pbFoxReset_clicked"
QT_MOC_LITERAL(265, 5350, 30), // "on_comboBoxHoundSort_activated"
QT_MOC_LITERAL(266, 5381, 22), // "not_GA_warning_message"
QT_MOC_LITERAL(267, 5404, 22), // "checkMSK144ContestType"
QT_MOC_LITERAL(268, 5427, 19), // "on_pbBestSP_clicked"
QT_MOC_LITERAL(269, 5447, 32), // "on_RoundRobin_currentTextChanged"
QT_MOC_LITERAL(270, 5480, 8), // "setTxMsg"
QT_MOC_LITERAL(271, 5489, 7), // "stdCall"
QT_MOC_LITERAL(272, 5497, 1), // "w"
QT_MOC_LITERAL(273, 5499, 16), // "remote_configure"
QT_MOC_LITERAL(274, 5516, 19), // "frequency_tolerance"
QT_MOC_LITERAL(275, 5536, 7), // "submode"
QT_MOC_LITERAL(276, 5544, 9), // "fast_mode"
QT_MOC_LITERAL(277, 5554, 9), // "tr_period"
QT_MOC_LITERAL(278, 5564, 5), // "rx_df"
QT_MOC_LITERAL(279, 5570, 7), // "dx_call"
QT_MOC_LITERAL(280, 5578, 7), // "dx_grid"
QT_MOC_LITERAL(281, 5586, 17), // "generate_messages"
QT_MOC_LITERAL(282, 5604, 15), // "pskTableClicked"
QT_MOC_LITERAL(283, 5620, 8), // "logSlots"
QT_MOC_LITERAL(284, 5629, 7), // "execCmd"
QT_MOC_LITERAL(285, 5637, 3), // "cmd"
QT_MOC_LITERAL(286, 5641, 11), // "setFreeFreq"
QT_MOC_LITERAL(287, 5653, 10), // "isSlotFree"
QT_MOC_LITERAL(288, 5664, 1), // "f"
QT_MOC_LITERAL(289, 5666, 7), // "addSlot"
QT_MOC_LITERAL(290, 5674, 4), // "freq"
QT_MOC_LITERAL(291, 5679, 22), // "on_pb_FreeFreq_clicked"
QT_MOC_LITERAL(292, 5702, 21), // "on_cbAutoCall_toggled"
QT_MOC_LITERAL(293, 5724, 19), // "on_cbAutoCQ_toggled"
QT_MOC_LITERAL(294, 5744, 16), // "callsignFiltered"
QT_MOC_LITERAL(295, 5761, 11), // "DecodedText"
QT_MOC_LITERAL(296, 5773, 2), // "dt"
QT_MOC_LITERAL(297, 5776, 26), // "on_btn_addToIgnore_clicked"
QT_MOC_LITERAL(298, 5803, 26), // "on_btn_clearIgnore_clicked"
QT_MOC_LITERAL(299, 5830, 33), // "on_actionIgnore_station_trigg..."
QT_MOC_LITERAL(300, 5864, 28), // "on_actionCall_next_triggered"
QT_MOC_LITERAL(301, 5893, 24), // "on_actionClear_triggered"
QT_MOC_LITERAL(302, 5918, 26), // "on_cb_autoCallNext_toggled"
QT_MOC_LITERAL(303, 5945, 17), // "on_cbMini_toggled"
QT_MOC_LITERAL(304, 5963, 25), // "on_cbCQonlyIncl73_toggled"
QT_MOC_LITERAL(305, 5989, 23), // "on_cb_filtering_toggled"
QT_MOC_LITERAL(306, 6013, 30), // "on_actionSet_Rx_Freq_triggered"
QT_MOC_LITERAL(307, 6044, 29), // "on_actionQRZ_Lookup_triggered"
QT_MOC_LITERAL(308, 6074, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(309, 6098, 9), // "moveEvent"
QT_MOC_LITERAL(310, 6108, 11), // "QMoveEvent*"
QT_MOC_LITERAL(311, 6120, 9), // "hideEvent"
QT_MOC_LITERAL(312, 6130, 11), // "QHideEvent*"
QT_MOC_LITERAL(313, 6142, 9), // "showEvent"
QT_MOC_LITERAL(314, 6152, 11), // "QShowEvent*"
QT_MOC_LITERAL(315, 6164, 22), // "on_txrb6_doubleClicked"
QT_MOC_LITERAL(316, 6187, 8), // "dxLookup"
QT_MOC_LITERAL(317, 6196, 6), // "dxCall"
QT_MOC_LITERAL(318, 6203, 6), // "dxGrid"
QT_MOC_LITERAL(319, 6210, 16), // "leftClickHandler"
QT_MOC_LITERAL(320, 6227, 9), // "modifiers"
QT_MOC_LITERAL(321, 6237, 28), // "on_actionCall_info_triggered"
QT_MOC_LITERAL(322, 6266, 28), // "on_actionDark_mode_triggered"
QT_MOC_LITERAL(323, 6295, 7), // "qrzInit"
QT_MOC_LITERAL(324, 6303, 16), // "qrzSetSessionKey"
QT_MOC_LITERAL(325, 6320, 14), // "QNetworkReply*"
QT_MOC_LITERAL(326, 6335, 1), // "r"
QT_MOC_LITERAL(327, 6337, 18), // "qrzResponseHandler"
QT_MOC_LITERAL(328, 6356, 19), // "on_q_button_clicked"
QT_MOC_LITERAL(329, 6376, 23), // "on_ci_pb_lookup_clicked"
QT_MOC_LITERAL(330, 6400, 37), // "on_cb_specialMode_currentInde..."
QT_MOC_LITERAL(331, 6438, 28), // "on_cb_autoModeSwitch_toggled"
QT_MOC_LITERAL(332, 6467, 31), // "on_actionAbout_WSJT_Z_triggered"
QT_MOC_LITERAL(333, 6499, 21), // "on_pb_WDReset_clicked"
QT_MOC_LITERAL(334, 6521, 15), // "resetAutoSwitch"
QT_MOC_LITERAL(335, 6537, 8), // "watchdog"
QT_MOC_LITERAL(336, 6546, 34), // "on_actionUnfiltered_View_trig..."
QT_MOC_LITERAL(337, 6581, 30), // "on_actionPSKReporter_triggered"
QT_MOC_LITERAL(338, 6612, 16), // "updateQsoCounter"
QT_MOC_LITERAL(339, 6629, 9), // "increment"
QT_MOC_LITERAL(340, 6639, 26) // "on_txFirstCheckBox_toggled"

    },
    "MainWindow\0initializeAudioOutputStream\0"
    "\0QAudioDeviceInfo\0channels\0msBuffered\0"
    "stopAudioOutputStream\0startAudioInputStream\0"
    "framesPerBuffer\0AudioDevice*\0sink\0"
    "downSampleFactor\0AudioDevice::Channel\0"
    "suspendAudioInputStream\0resumeAudioInputStream\0"
    "startDetector\0FFTSize\0detectorClose\0"
    "finished\0transmitFrequency\0"
    "endTransmitMessage\0quick\0tune\0sendMessage\0"
    "mode\0symbolsLength\0framesPerSymbol\0"
    "frequency\0toneSpacing\0SoundOutput*\0"
    "synchronize\0fastMode\0dBSNR\0TRperiod\0"
    "outAttenuationChanged\0toggleShorthand\0"
    "reset_audio_input_stream\0report_dropped_frames\0"
    "showSoundInError\0errorMsg\0showSoundOutError\0"
    "showStatusMessage\0statusMsg\0dataSink\0"
    "frames\0fastSink\0diskDat\0freezeDecode\0"
    "n\0guiUpdate\0doubleClickOnCall\0"
    "Qt::KeyboardModifiers\0doubleClickOnCall2\0"
    "doubleClickOnFoxQueue\0readFromStdout\0"
    "p1ReadFromStdout\0setXIT\0Frequency\0"
    "base\0setFreq4\0rxFreq\0txFreq\0msgAvgDecode2\0"
    "fastPick\0x0\0x1\0y\0initialize_fonts\0"
    "on_tx1_editingFinished\0on_tx2_editingFinished\0"
    "on_tx3_editingFinished\0on_tx4_editingFinished\0"
    "on_tx5_currentTextChanged\0"
    "on_tx6_editingFinished\0"
    "on_actionSettings_triggered\0"
    "on_monitorButton_clicked\0"
    "on_actionAbout_triggered\0on_autoButton_clicked\0"
    "on_stopTxButton_clicked\0on_stopButton_clicked\0"
    "on_actionRelease_Notes_triggered\0"
    "on_actionFT8_DXpedition_Mode_User_Guide_triggered\0"
    "on_actionQSG_FST4_triggered\0"
    "on_actionQSG_Q65_triggered\0"
    "on_actionQSG_X250_M3_triggered\0"
    "on_actionOnline_User_Guide_triggered\0"
    "on_actionLocal_User_Guide_triggered\0"
    "on_actionWide_Waterfall_triggered\0"
    "on_actionOpen_triggered\0"
    "on_actionOpen_next_in_directory_triggered\0"
    "on_actionDecode_remaining_files_in_directory_triggered\0"
    "on_actionDelete_all_wav_files_in_SaveDir_triggered\0"
    "on_actionOpen_log_directory_triggered\0"
    "on_actionNone_triggered\0"
    "on_actionSave_all_triggered\0"
    "on_actionKeyboard_shortcuts_triggered\0"
    "on_actionSpecial_mouse_commands_triggered\0"
    "on_actionSolve_FreqCal_triggered\0"
    "on_actionCopyright_Notice_triggered\0"
    "on_actionSWL_Mode_triggered\0checked\0"
    "on_DecodeButton_clicked\0decode\0"
    "decodeBusy\0b\0on_EraseButton_clicked\0"
    "band_activity_cleared\0"
    "rx_frequency_activity_cleared\0"
    "on_txFirstCheckBox_stateChanged\0arg1\0"
    "set_dateTimeQSO\0m_ntx\0set_ntx\0"
    "on_txrb1_toggled\0status\0on_txrb1_doubleClicked\0"
    "on_txrb2_toggled\0on_txrb3_toggled\0"
    "on_txrb4_toggled\0on_txrb4_doubleClicked\0"
    "on_txrb5_toggled\0on_txrb5_doubleClicked\0"
    "on_txrb6_toggled\0on_txb1_clicked\0"
    "on_txb1_doubleClicked\0on_txb2_clicked\0"
    "on_txb3_clicked\0on_txb4_clicked\0"
    "on_txb4_doubleClicked\0on_txb5_clicked\0"
    "on_txb5_doubleClicked\0on_txb6_clicked\0"
    "on_lookupButton_clicked\0on_addButton_clicked\0"
    "on_dxCallEntry_textChanged\0"
    "on_dxGridEntry_textChanged\0"
    "on_dxCallEntry_editingFinished\0"
    "on_dxCallEntry_returnPressed\0"
    "on_genStdMsgsPushButton_clicked\0"
    "on_logQSOButton_clicked\0on_actionJT9_triggered\0"
    "on_actionJT65_triggered\0on_actionJT4_triggered\0"
    "on_actionFT4_triggered\0on_actionFT8_triggered\0"
    "on_actionFST4_triggered\0"
    "on_actionFST4W_triggered\0"
    "on_TxFreqSpinBox_valueChanged\0"
    "on_actionSave_decoded_triggered\0"
    "on_actionQuickDecode_toggled\0"
    "on_actionMediumDecode_toggled\0"
    "on_actionDeepestDecode_toggled\0bumpFqso\0"
    "on_actionErase_ALL_TXT_triggered\0"
    "on_reset_cabrillo_log_action_triggered\0"
    "on_actionErase_wsjtx_log_adi_triggered\0"
    "on_actionErase_WSPR_hashtable_triggered\0"
    "on_actionExport_Cabrillo_log_triggered\0"
    "startTx2\0startP1\0stopTx\0stopTx2\0"
    "on_rptSpinBox_valueChanged\0killFile\0"
    "on_tuneButton_clicked\0on_pbR2T_clicked\0"
    "on_pbT2R_clicked\0acceptQSO\0call\0grid\0"
    "dial_freq\0rpt_sent\0rpt_received\0"
    "tx_power\0comments\0name\0QSO_date_on\0"
    "operator_call\0my_call\0my_grid\0"
    "exchange_sent\0exchange_rcvd\0propmode\0"
    "ADIF\0on_bandComboBox_currentIndexChanged\0"
    "index\0on_bandComboBox_editTextChanged\0"
    "text\0on_bandComboBox_activated\0"
    "on_readFreq_clicked\0on_RxFreqSpinBox_valueChanged\0"
    "on_outAttenuation_valueChanged\0rigOpen\0"
    "handle_transceiver_update\0"
    "Transceiver::TransceiverState\0"
    "handle_transceiver_failure\0reason\0"
    "on_actionAstronomical_data_toggled\0"
    "on_actionShort_list_of_add_on_prefixes_and_suffixes_triggered\0"
    "band_changed\0monitor\0end_tuning\0"
    "stop_tuning\0stopTuneATU\0auto_tx_mode\0"
    "on_actionMessage_averaging_triggered\0"
    "on_contest_log_action_triggered\0"
    "on_fox_log_action_triggered\0"
    "on_actionColors_triggered\0"
    "on_actionInclude_averaging_toggled\0"
    "on_actionInclude_correlation_toggled\0"
    "on_actionEnable_AP_DXcall_toggled\0"
    "on_actionAuto_Clear_Avg_toggled\0"
    "VHF_features_enabled\0on_sbSubmode_valueChanged\0"
    "on_cbShMsgs_toggled\0on_cbSWL_toggled\0"
    "on_cbTx6_toggled\0on_cbMenus_toggled\0"
    "on_cbCQonly_toggled\0on_cbFirst_toggled\0"
    "on_cbAutoSeq_toggled\0networkError\0"
    "on_ClrAvgButton_clicked\0on_actionWSPR_triggered\0"
    "on_syncSpinBox_valueChanged\0"
    "on_TxPowerComboBox_currentIndexChanged\0"
    "on_sbTxPercent_valueChanged\0"
    "on_cbUploadWSPR_Spots_toggled\0WSPR_config\0"
    "uploadWSPRSpots\0direct_post\0decode_text\0"
    "TxAgain\0uploadResponse\0response\0"
    "on_WSPRfreqSpinBox_valueChanged\0"
    "on_sbFST4W_RxFreq_valueChanged\0"
    "on_sbFST4W_FTol_valueChanged\0"
    "on_pbTxNext_clicked\0on_actionEcho_Graph_triggered\0"
    "on_actionEcho_triggered\0"
    "on_actionFast_Graph_triggered\0"
    "fast_decode_done\0"
    "on_actionMeasure_reference_spectrum_triggered\0"
    "on_actionErase_reference_spectrum_triggered\0"
    "on_actionMeasure_phase_response_triggered\0"
    "on_sbTR_valueChanged\0on_sbTR_FST4W_valueChanged\0"
    "on_sbFtol_valueChanged\0on_cbFast9_clicked\0"
    "on_sbCQTxFreq_valueChanged\0on_cbCQTx_toggled\0"
    "on_actionMSK144_triggered\0"
    "on_actionQ65_triggered\0"
    "on_actionFreqCal_triggered\0splash_done\0"
    "on_measure_check_box_stateChanged\0"
    "on_sbNlist_valueChanged\0"
    "on_sbNslots_valueChanged\0"
    "on_sbMax_dB_valueChanged\0"
    "on_sbF_Low_valueChanged\0"
    "on_sbF_High_valueChanged\0chk_FST4_freq_range\0"
    "on_pbFoxReset_clicked\0"
    "on_comboBoxHoundSort_activated\0"
    "not_GA_warning_message\0checkMSK144ContestType\0"
    "on_pbBestSP_clicked\0"
    "on_RoundRobin_currentTextChanged\0"
    "setTxMsg\0stdCall\0w\0remote_configure\0"
    "frequency_tolerance\0submode\0fast_mode\0"
    "tr_period\0rx_df\0dx_call\0dx_grid\0"
    "generate_messages\0pskTableClicked\0"
    "logSlots\0execCmd\0cmd\0setFreeFreq\0"
    "isSlotFree\0f\0addSlot\0freq\0"
    "on_pb_FreeFreq_clicked\0on_cbAutoCall_toggled\0"
    "on_cbAutoCQ_toggled\0callsignFiltered\0"
    "DecodedText\0dt\0on_btn_addToIgnore_clicked\0"
    "on_btn_clearIgnore_clicked\0"
    "on_actionIgnore_station_triggered\0"
    "on_actionCall_next_triggered\0"
    "on_actionClear_triggered\0"
    "on_cb_autoCallNext_toggled\0on_cbMini_toggled\0"
    "on_cbCQonlyIncl73_toggled\0"
    "on_cb_filtering_toggled\0"
    "on_actionSet_Rx_Freq_triggered\0"
    "on_actionQRZ_Lookup_triggered\0"
    "on_actionCopy_triggered\0moveEvent\0"
    "QMoveEvent*\0hideEvent\0QHideEvent*\0"
    "showEvent\0QShowEvent*\0on_txrb6_doubleClicked\0"
    "dxLookup\0dxCall\0dxGrid\0leftClickHandler\0"
    "modifiers\0on_actionCall_info_triggered\0"
    "on_actionDark_mode_triggered\0qrzInit\0"
    "qrzSetSessionKey\0QNetworkReply*\0r\0"
    "qrzResponseHandler\0on_q_button_clicked\0"
    "on_ci_pb_lookup_clicked\0"
    "on_cb_specialMode_currentIndexChanged\0"
    "on_cb_autoModeSwitch_toggled\0"
    "on_actionAbout_WSJT_Z_triggered\0"
    "on_pb_WDReset_clicked\0resetAutoSwitch\0"
    "watchdog\0on_actionUnfiltered_View_triggered\0"
    "on_actionPSKReporter_triggered\0"
    "updateQsoCounter\0increment\0"
    "on_txFirstCheckBox_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     266,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3, 1344,    2, 0x04 /* Private */,
       6,    0, 1351,    2, 0x04 /* Private */,
       7,    5, 1352,    2, 0x04 /* Private */,
      13,    0, 1363,    2, 0x04 /* Private */,
      14,    0, 1364,    2, 0x04 /* Private */,
      15,    1, 1365,    2, 0x04 /* Private */,
      16,    1, 1368,    2, 0x04 /* Private */,
      17,    0, 1371,    2, 0x04 /* Private */,
      18,    0, 1372,    2, 0x04 /* Private */,
      19,    1, 1373,    2, 0x04 /* Private */,
      20,    1, 1376,    2, 0x04 /* Private */,
      20,    0, 1379,    2, 0x24 /* Private | MethodCloned */,
      22,    1, 1380,    2, 0x04 /* Private */,
      22,    0, 1383,    2, 0x24 /* Private | MethodCloned */,
      23,   11, 1384,    2, 0x04 /* Private */,
      23,   10, 1407,    2, 0x24 /* Private | MethodCloned */,
      23,    9, 1428,    2, 0x24 /* Private | MethodCloned */,
      23,    8, 1447,    2, 0x24 /* Private | MethodCloned */,
      23,    7, 1464,    2, 0x24 /* Private | MethodCloned */,
      23,    6, 1479,    2, 0x24 /* Private | MethodCloned */,
      34,    1, 1492,    2, 0x04 /* Private */,
      35,    0, 1495,    2, 0x04 /* Private */,
      36,    1, 1496,    2, 0x04 /* Private */,

 // slots: name, argc, parameters, tag, flags
      38,    1, 1499,    2, 0x0a /* Public */,
      40,    1, 1502,    2, 0x0a /* Public */,
      41,    1, 1505,    2, 0x0a /* Public */,
      43,    1, 1508,    2, 0x0a /* Public */,
      45,    1, 1511,    2, 0x0a /* Public */,
      46,    0, 1514,    2, 0x0a /* Public */,
      47,    1, 1515,    2, 0x0a /* Public */,
      49,    0, 1518,    2, 0x0a /* Public */,
      50,    1, 1519,    2, 0x0a /* Public */,
      52,    1, 1522,    2, 0x0a /* Public */,
      53,    1, 1525,    2, 0x0a /* Public */,
      54,    0, 1528,    2, 0x0a /* Public */,
      55,    0, 1529,    2, 0x0a /* Public */,
      56,    2, 1530,    2, 0x0a /* Public */,
      56,    1, 1535,    2, 0x2a /* Public | MethodCloned */,
      59,    2, 1538,    2, 0x0a /* Public */,
      62,    0, 1543,    2, 0x0a /* Public */,
      63,    3, 1544,    2, 0x0a /* Public */,
      67,    0, 1551,    2, 0x08 /* Private */,
      68,    0, 1552,    2, 0x08 /* Private */,
      69,    0, 1553,    2, 0x08 /* Private */,
      70,    0, 1554,    2, 0x08 /* Private */,
      71,    0, 1555,    2, 0x08 /* Private */,
      72,    1, 1556,    2, 0x08 /* Private */,
      73,    0, 1559,    2, 0x08 /* Private */,
      74,    0, 1560,    2, 0x08 /* Private */,
      75,    1, 1561,    2, 0x08 /* Private */,
      76,    0, 1564,    2, 0x08 /* Private */,
      77,    1, 1565,    2, 0x08 /* Private */,
      78,    0, 1568,    2, 0x08 /* Private */,
      79,    0, 1569,    2, 0x08 /* Private */,
      80,    0, 1570,    2, 0x08 /* Private */,
      81,    0, 1571,    2, 0x08 /* Private */,
      82,    0, 1572,    2, 0x08 /* Private */,
      83,    0, 1573,    2, 0x08 /* Private */,
      84,    0, 1574,    2, 0x08 /* Private */,
      85,    0, 1575,    2, 0x08 /* Private */,
      86,    0, 1576,    2, 0x08 /* Private */,
      87,    0, 1577,    2, 0x08 /* Private */,
      88,    0, 1578,    2, 0x08 /* Private */,
      89,    0, 1579,    2, 0x08 /* Private */,
      90,    0, 1580,    2, 0x08 /* Private */,
      91,    0, 1581,    2, 0x08 /* Private */,
      92,    0, 1582,    2, 0x08 /* Private */,
      93,    0, 1583,    2, 0x08 /* Private */,
      94,    0, 1584,    2, 0x08 /* Private */,
      95,    0, 1585,    2, 0x08 /* Private */,
      96,    0, 1586,    2, 0x08 /* Private */,
      97,    0, 1587,    2, 0x08 /* Private */,
      98,    0, 1588,    2, 0x08 /* Private */,
      99,    1, 1589,    2, 0x08 /* Private */,
     101,    1, 1592,    2, 0x08 /* Private */,
     102,    0, 1595,    2, 0x08 /* Private */,
     103,    1, 1596,    2, 0x08 /* Private */,
     105,    0, 1599,    2, 0x08 /* Private */,
     106,    0, 1600,    2, 0x08 /* Private */,
     107,    0, 1601,    2, 0x08 /* Private */,
     108,    1, 1602,    2, 0x08 /* Private */,
     110,    1, 1605,    2, 0x08 /* Private */,
     112,    1, 1608,    2, 0x08 /* Private */,
     113,    1, 1611,    2, 0x08 /* Private */,
     115,    0, 1614,    2, 0x08 /* Private */,
     116,    1, 1615,    2, 0x08 /* Private */,
     117,    1, 1618,    2, 0x08 /* Private */,
     118,    1, 1621,    2, 0x08 /* Private */,
     119,    0, 1624,    2, 0x08 /* Private */,
     120,    1, 1625,    2, 0x08 /* Private */,
     121,    0, 1628,    2, 0x08 /* Private */,
     122,    1, 1629,    2, 0x08 /* Private */,
     123,    0, 1632,    2, 0x08 /* Private */,
     124,    0, 1633,    2, 0x08 /* Private */,
     125,    0, 1634,    2, 0x08 /* Private */,
     126,    0, 1635,    2, 0x08 /* Private */,
     127,    0, 1636,    2, 0x08 /* Private */,
     128,    0, 1637,    2, 0x08 /* Private */,
     129,    0, 1638,    2, 0x08 /* Private */,
     130,    0, 1639,    2, 0x08 /* Private */,
     131,    0, 1640,    2, 0x08 /* Private */,
     132,    0, 1641,    2, 0x08 /* Private */,
     133,    0, 1642,    2, 0x08 /* Private */,
     134,    1, 1643,    2, 0x08 /* Private */,
     135,    1, 1646,    2, 0x08 /* Private */,
     136,    0, 1649,    2, 0x08 /* Private */,
     137,    0, 1650,    2, 0x08 /* Private */,
     138,    0, 1651,    2, 0x08 /* Private */,
     139,    0, 1652,    2, 0x08 /* Private */,
     140,    0, 1653,    2, 0x08 /* Private */,
     141,    0, 1654,    2, 0x08 /* Private */,
     142,    0, 1655,    2, 0x08 /* Private */,
     143,    0, 1656,    2, 0x08 /* Private */,
     144,    0, 1657,    2, 0x08 /* Private */,
     145,    0, 1658,    2, 0x08 /* Private */,
     146,    0, 1659,    2, 0x08 /* Private */,
     147,    1, 1660,    2, 0x08 /* Private */,
     148,    0, 1663,    2, 0x08 /* Private */,
     149,    1, 1664,    2, 0x08 /* Private */,
     150,    1, 1667,    2, 0x08 /* Private */,
     151,    1, 1670,    2, 0x08 /* Private */,
     152,    1, 1673,    2, 0x08 /* Private */,
     153,    0, 1676,    2, 0x08 /* Private */,
     154,    0, 1677,    2, 0x08 /* Private */,
     155,    0, 1678,    2, 0x08 /* Private */,
     156,    0, 1679,    2, 0x08 /* Private */,
     157,    0, 1680,    2, 0x08 /* Private */,
     158,    0, 1681,    2, 0x08 /* Private */,
     159,    0, 1682,    2, 0x08 /* Private */,
     160,    0, 1683,    2, 0x08 /* Private */,
     161,    0, 1684,    2, 0x08 /* Private */,
     162,    1, 1685,    2, 0x08 /* Private */,
     163,    0, 1688,    2, 0x08 /* Private */,
     164,    1, 1689,    2, 0x08 /* Private */,
     165,    0, 1692,    2, 0x08 /* Private */,
     166,    0, 1693,    2, 0x08 /* Private */,
     167,   18, 1694,    2, 0x08 /* Private */,
     184,    1, 1731,    2, 0x08 /* Private */,
     186,    1, 1734,    2, 0x08 /* Private */,
     188,    1, 1737,    2, 0x08 /* Private */,
     189,    0, 1740,    2, 0x08 /* Private */,
     190,    1, 1741,    2, 0x08 /* Private */,
     191,    1, 1744,    2, 0x08 /* Private */,
     192,    0, 1747,    2, 0x08 /* Private */,
     193,    1, 1748,    2, 0x08 /* Private */,
     195,    1, 1751,    2, 0x08 /* Private */,
     197,    1, 1754,    2, 0x08 /* Private */,
     198,    0, 1757,    2, 0x08 /* Private */,
     199,    1, 1758,    2, 0x08 /* Private */,
     200,    1, 1761,    2, 0x08 /* Private */,
     201,    0, 1764,    2, 0x08 /* Private */,
     202,    0, 1765,    2, 0x08 /* Private */,
     203,    0, 1766,    2, 0x08 /* Private */,
     204,    1, 1767,    2, 0x08 /* Private */,
     205,    0, 1770,    2, 0x08 /* Private */,
     206,    0, 1771,    2, 0x08 /* Private */,
     207,    0, 1772,    2, 0x08 /* Private */,
     208,    0, 1773,    2, 0x08 /* Private */,
     209,    1, 1774,    2, 0x08 /* Private */,
     210,    1, 1777,    2, 0x08 /* Private */,
     211,    1, 1780,    2, 0x08 /* Private */,
     212,    1, 1783,    2, 0x08 /* Private */,
     213,    1, 1786,    2, 0x08 /* Private */,
     214,    1, 1789,    2, 0x08 /* Private */,
     215,    1, 1792,    2, 0x08 /* Private */,
     216,    1, 1795,    2, 0x08 /* Private */,
     217,    1, 1798,    2, 0x08 /* Private */,
     218,    1, 1801,    2, 0x08 /* Private */,
     219,    1, 1804,    2, 0x08 /* Private */,
     220,    1, 1807,    2, 0x08 /* Private */,
     221,    1, 1810,    2, 0x08 /* Private */,
     222,    1, 1813,    2, 0x08 /* Private */,
     223,    0, 1816,    2, 0x08 /* Private */,
     224,    0, 1817,    2, 0x08 /* Private */,
     225,    1, 1818,    2, 0x08 /* Private */,
     226,    1, 1821,    2, 0x08 /* Private */,
     227,    1, 1824,    2, 0x08 /* Private */,
     228,    1, 1827,    2, 0x08 /* Private */,
     229,    1, 1830,    2, 0x08 /* Private */,
     230,    2, 1833,    2, 0x08 /* Private */,
     230,    1, 1838,    2, 0x28 /* Private | MethodCloned */,
     230,    0, 1841,    2, 0x28 /* Private | MethodCloned */,
     233,    0, 1842,    2, 0x08 /* Private */,
     234,    1, 1843,    2, 0x08 /* Private */,
     236,    1, 1846,    2, 0x08 /* Private */,
     237,    1, 1849,    2, 0x08 /* Private */,
     238,    1, 1852,    2, 0x08 /* Private */,
     239,    1, 1855,    2, 0x08 /* Private */,
     240,    0, 1858,    2, 0x08 /* Private */,
     241,    0, 1859,    2, 0x08 /* Private */,
     242,    0, 1860,    2, 0x08 /* Private */,
     243,    0, 1861,    2, 0x08 /* Private */,
     244,    0, 1862,    2, 0x08 /* Private */,
     245,    0, 1863,    2, 0x08 /* Private */,
     246,    0, 1864,    2, 0x08 /* Private */,
     247,    1, 1865,    2, 0x08 /* Private */,
     248,    1, 1868,    2, 0x08 /* Private */,
     249,    1, 1871,    2, 0x08 /* Private */,
     250,    1, 1874,    2, 0x08 /* Private */,
     251,    1, 1877,    2, 0x08 /* Private */,
     252,    1, 1880,    2, 0x08 /* Private */,
     253,    0, 1883,    2, 0x08 /* Private */,
     254,    0, 1884,    2, 0x08 /* Private */,
     255,    0, 1885,    2, 0x08 /* Private */,
     256,    0, 1886,    2, 0x08 /* Private */,
     257,    1, 1887,    2, 0x08 /* Private */,
     258,    1, 1890,    2, 0x08 /* Private */,
     259,    1, 1893,    2, 0x08 /* Private */,
     260,    1, 1896,    2, 0x08 /* Private */,
     261,    1, 1899,    2, 0x08 /* Private */,
     262,    1, 1902,    2, 0x08 /* Private */,
     263,    0, 1905,    2, 0x08 /* Private */,
     264,    0, 1906,    2, 0x08 /* Private */,
     265,    1, 1907,    2, 0x08 /* Private */,
     266,    0, 1910,    2, 0x08 /* Private */,
     267,    0, 1911,    2, 0x08 /* Private */,
     268,    0, 1912,    2, 0x08 /* Private */,
     269,    1, 1913,    2, 0x08 /* Private */,
     270,    1, 1916,    2, 0x08 /* Private */,
     271,    1, 1919,    2, 0x08 /* Private */,
     273,    9, 1922,    2, 0x08 /* Private */,
     282,    2, 1941,    2, 0x08 /* Private */,
     283,    0, 1946,    2, 0x08 /* Private */,
     284,    1, 1947,    2, 0x08 /* Private */,
     286,    0, 1950,    2, 0x08 /* Private */,
     287,    1, 1951,    2, 0x08 /* Private */,
     289,    1, 1954,    2, 0x08 /* Private */,
     291,    0, 1957,    2, 0x08 /* Private */,
     292,    1, 1958,    2, 0x08 /* Private */,
     293,    1, 1961,    2, 0x08 /* Private */,
     294,    1, 1964,    2, 0x08 /* Private */,
     297,    0, 1967,    2, 0x08 /* Private */,
     298,    0, 1968,    2, 0x08 /* Private */,
     299,    0, 1969,    2, 0x08 /* Private */,
     300,    0, 1970,    2, 0x08 /* Private */,
     301,    0, 1971,    2, 0x08 /* Private */,
     302,    1, 1972,    2, 0x08 /* Private */,
     303,    1, 1975,    2, 0x08 /* Private */,
     304,    1, 1978,    2, 0x08 /* Private */,
     305,    1, 1981,    2, 0x08 /* Private */,
     306,    0, 1984,    2, 0x08 /* Private */,
     307,    0, 1985,    2, 0x08 /* Private */,
     308,    0, 1986,    2, 0x08 /* Private */,
     309,    1, 1987,    2, 0x08 /* Private */,
     311,    1, 1990,    2, 0x08 /* Private */,
     313,    1, 1993,    2, 0x08 /* Private */,
     315,    0, 1996,    2, 0x08 /* Private */,
     316,    2, 1997,    2, 0x08 /* Private */,
     319,    1, 2002,    2, 0x08 /* Private */,
     321,    0, 2005,    2, 0x08 /* Private */,
     322,    0, 2006,    2, 0x08 /* Private */,
     323,    0, 2007,    2, 0x08 /* Private */,
     324,    1, 2008,    2, 0x08 /* Private */,
     327,    1, 2011,    2, 0x08 /* Private */,
     328,    0, 2014,    2, 0x08 /* Private */,
     329,    0, 2015,    2, 0x08 /* Private */,
     330,    1, 2016,    2, 0x08 /* Private */,
     331,    1, 2019,    2, 0x08 /* Private */,
     332,    0, 2022,    2, 0x08 /* Private */,
     333,    0, 2023,    2, 0x08 /* Private */,
     334,    0, 2024,    2, 0x08 /* Private */,
     335,    0, 2025,    2, 0x08 /* Private */,
     336,    0, 2026,    2, 0x08 /* Private */,
     337,    0, 2027,    2, 0x08 /* Private */,
     338,    1, 2028,    2, 0x08 /* Private */,
     340,    0, 2031,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::UInt,    2,    4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, 0x80000000 | 9, QMetaType::UInt, 0x80000000 | 12,    2,    8,   10,   11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 29, 0x80000000 | 12, QMetaType::Bool, QMetaType::Bool, QMetaType::Double, QMetaType::Int,   24,   25,   26,   27,   28,    2,    2,   30,   31,   32,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 29, 0x80000000 | 12, QMetaType::Bool, QMetaType::Bool, QMetaType::Double,   24,   25,   26,   27,   28,    2,    2,   30,   31,   32,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 29, 0x80000000 | 12, QMetaType::Bool, QMetaType::Bool,   24,   25,   26,   27,   28,    2,    2,   30,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 29, 0x80000000 | 12, QMetaType::Bool,   24,   25,   26,   27,   28,    2,    2,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 29, 0x80000000 | 12,   24,   25,   26,   27,   28,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 29,   24,   25,   26,   27,   28,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   37,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::LongLong,   44,
    QMetaType::Void, QMetaType::LongLong,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 57,   48,   58,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   60,   61,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   64,   65,   66,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  100,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  109,
    QMetaType::Void, QMetaType::Int,  111,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Bool,  114,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  114,
    QMetaType::Void, QMetaType::Bool,  114,
    QMetaType::Void, QMetaType::Bool,  114,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  114,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  114,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  109,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString, 0x80000000 | 57, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray,    2,  168,  169,  170,   24,  171,  172,  173,  174,  175,  176,  177,  178,  179,  180,  181,  182,  183,
    QMetaType::Void, QMetaType::Int,  185,
    QMetaType::Void, QMetaType::QString,  187,
    QMetaType::Void, QMetaType::Int,  185,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 194,    2,
    QMetaType::Void, QMetaType::QString,  196,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 57,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,  231,  232,
    QMetaType::Void, QMetaType::Bool,  231,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  235,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  185,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  187,
    QMetaType::Void, QMetaType::Int,   48,
    QMetaType::Bool, QMetaType::QString,  272,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt, QMetaType::QString, QMetaType::Bool, QMetaType::UInt, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   24,  274,  275,  276,  277,  278,  279,  280,  281,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  285,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,  288,
    QMetaType::Void, QMetaType::Int,  290,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Bool, 0x80000000 | 295,  296,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 310,    2,
    QMetaType::Void, 0x80000000 | 312,    2,
    QMetaType::Void, 0x80000000 | 314,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  317,  318,
    QMetaType::Void, 0x80000000 | 51,  320,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 325,  326,
    QMetaType::Void, 0x80000000 | 325,  326,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  185,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  339,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initializeAudioOutputStream((*reinterpret_cast< QAudioDeviceInfo(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->stopAudioOutputStream(); break;
        case 2: _t->startAudioInputStream((*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< AudioDevice*(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< AudioDevice::Channel(*)>(_a[5]))); break;
        case 3: _t->suspendAudioInputStream(); break;
        case 4: _t->resumeAudioInputStream(); break;
        case 5: _t->startDetector((*reinterpret_cast< AudioDevice::Channel(*)>(_a[1]))); break;
        case 6: _t->FFTSize((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->detectorClose(); break;
        case 8: _t->finished(); break;
        case 9: _t->transmitFrequency((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->endTransmitMessage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->endTransmitMessage(); break;
        case 12: _t->tune((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->tune(); break;
        case 14: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< SoundOutput*(*)>(_a[6])),(*reinterpret_cast< AudioDevice::Channel(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< int(*)>(_a[11]))); break;
        case 15: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< SoundOutput*(*)>(_a[6])),(*reinterpret_cast< AudioDevice::Channel(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10]))); break;
        case 16: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< SoundOutput*(*)>(_a[6])),(*reinterpret_cast< AudioDevice::Channel(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 17: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< SoundOutput*(*)>(_a[6])),(*reinterpret_cast< AudioDevice::Channel(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 18: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< SoundOutput*(*)>(_a[6])),(*reinterpret_cast< AudioDevice::Channel(*)>(_a[7]))); break;
        case 19: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< SoundOutput*(*)>(_a[6]))); break;
        case 20: _t->outAttenuationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 21: _t->toggleShorthand(); break;
        case 22: _t->reset_audio_input_stream((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->showSoundInError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->showSoundOutError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->dataSink((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 27: _t->fastSink((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 28: _t->diskDat(); break;
        case 29: _t->freezeDecode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->guiUpdate(); break;
        case 31: _t->doubleClickOnCall((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        case 32: _t->doubleClickOnCall2((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        case 33: _t->doubleClickOnFoxQueue((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        case 34: _t->readFromStdout(); break;
        case 35: _t->p1ReadFromStdout(); break;
        case 36: _t->setXIT((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Frequency(*)>(_a[2]))); break;
        case 37: _t->setXIT((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->setFreq4((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 39: _t->msgAvgDecode2(); break;
        case 40: _t->fastPick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 41: _t->initialize_fonts(); break;
        case 42: _t->on_tx1_editingFinished(); break;
        case 43: _t->on_tx2_editingFinished(); break;
        case 44: _t->on_tx3_editingFinished(); break;
        case 45: _t->on_tx4_editingFinished(); break;
        case 46: _t->on_tx5_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 47: _t->on_tx6_editingFinished(); break;
        case 48: _t->on_actionSettings_triggered(); break;
        case 49: _t->on_monitorButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->on_actionAbout_triggered(); break;
        case 51: _t->on_autoButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->on_stopTxButton_clicked(); break;
        case 53: _t->on_stopButton_clicked(); break;
        case 54: _t->on_actionRelease_Notes_triggered(); break;
        case 55: _t->on_actionFT8_DXpedition_Mode_User_Guide_triggered(); break;
        case 56: _t->on_actionQSG_FST4_triggered(); break;
        case 57: _t->on_actionQSG_Q65_triggered(); break;
        case 58: _t->on_actionQSG_X250_M3_triggered(); break;
        case 59: _t->on_actionOnline_User_Guide_triggered(); break;
        case 60: _t->on_actionLocal_User_Guide_triggered(); break;
        case 61: _t->on_actionWide_Waterfall_triggered(); break;
        case 62: _t->on_actionOpen_triggered(); break;
        case 63: _t->on_actionOpen_next_in_directory_triggered(); break;
        case 64: _t->on_actionDecode_remaining_files_in_directory_triggered(); break;
        case 65: _t->on_actionDelete_all_wav_files_in_SaveDir_triggered(); break;
        case 66: _t->on_actionOpen_log_directory_triggered(); break;
        case 67: _t->on_actionNone_triggered(); break;
        case 68: _t->on_actionSave_all_triggered(); break;
        case 69: _t->on_actionKeyboard_shortcuts_triggered(); break;
        case 70: _t->on_actionSpecial_mouse_commands_triggered(); break;
        case 71: _t->on_actionSolve_FreqCal_triggered(); break;
        case 72: _t->on_actionCopyright_Notice_triggered(); break;
        case 73: _t->on_actionSWL_Mode_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: _t->on_DecodeButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 75: _t->decode(); break;
        case 76: _t->decodeBusy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 77: _t->on_EraseButton_clicked(); break;
        case 78: _t->band_activity_cleared(); break;
        case 79: _t->rx_frequency_activity_cleared(); break;
        case 80: _t->on_txFirstCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->set_dateTimeQSO((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 82: _t->set_ntx((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 83: _t->on_txrb1_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 84: _t->on_txrb1_doubleClicked(); break;
        case 85: _t->on_txrb2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 86: _t->on_txrb3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: _t->on_txrb4_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->on_txrb4_doubleClicked(); break;
        case 89: _t->on_txrb5_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 90: _t->on_txrb5_doubleClicked(); break;
        case 91: _t->on_txrb6_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 92: _t->on_txb1_clicked(); break;
        case 93: _t->on_txb1_doubleClicked(); break;
        case 94: _t->on_txb2_clicked(); break;
        case 95: _t->on_txb3_clicked(); break;
        case 96: _t->on_txb4_clicked(); break;
        case 97: _t->on_txb4_doubleClicked(); break;
        case 98: _t->on_txb5_clicked(); break;
        case 99: _t->on_txb5_doubleClicked(); break;
        case 100: _t->on_txb6_clicked(); break;
        case 101: _t->on_lookupButton_clicked(); break;
        case 102: _t->on_addButton_clicked(); break;
        case 103: _t->on_dxCallEntry_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 104: _t->on_dxGridEntry_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 105: _t->on_dxCallEntry_editingFinished(); break;
        case 106: _t->on_dxCallEntry_returnPressed(); break;
        case 107: _t->on_genStdMsgsPushButton_clicked(); break;
        case 108: _t->on_logQSOButton_clicked(); break;
        case 109: _t->on_actionJT9_triggered(); break;
        case 110: _t->on_actionJT65_triggered(); break;
        case 111: _t->on_actionJT4_triggered(); break;
        case 112: _t->on_actionFT4_triggered(); break;
        case 113: _t->on_actionFT8_triggered(); break;
        case 114: _t->on_actionFST4_triggered(); break;
        case 115: _t->on_actionFST4W_triggered(); break;
        case 116: _t->on_TxFreqSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 117: _t->on_actionSave_decoded_triggered(); break;
        case 118: _t->on_actionQuickDecode_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 119: _t->on_actionMediumDecode_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 120: _t->on_actionDeepestDecode_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 121: _t->bumpFqso((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 122: _t->on_actionErase_ALL_TXT_triggered(); break;
        case 123: _t->on_reset_cabrillo_log_action_triggered(); break;
        case 124: _t->on_actionErase_wsjtx_log_adi_triggered(); break;
        case 125: _t->on_actionErase_WSPR_hashtable_triggered(); break;
        case 126: _t->on_actionExport_Cabrillo_log_triggered(); break;
        case 127: _t->startTx2(); break;
        case 128: _t->startP1(); break;
        case 129: _t->stopTx(); break;
        case 130: _t->stopTx2(); break;
        case 131: _t->on_rptSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 132: _t->killFile(); break;
        case 133: _t->on_tuneButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 134: _t->on_pbR2T_clicked(); break;
        case 135: _t->on_pbT2R_clicked(); break;
        case 136: _t->acceptQSO((*reinterpret_cast< const QDateTime(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< Frequency(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10])),(*reinterpret_cast< const QDateTime(*)>(_a[11])),(*reinterpret_cast< const QString(*)>(_a[12])),(*reinterpret_cast< const QString(*)>(_a[13])),(*reinterpret_cast< const QString(*)>(_a[14])),(*reinterpret_cast< const QString(*)>(_a[15])),(*reinterpret_cast< const QString(*)>(_a[16])),(*reinterpret_cast< const QString(*)>(_a[17])),(*reinterpret_cast< const QByteArray(*)>(_a[18]))); break;
        case 137: _t->on_bandComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 138: _t->on_bandComboBox_editTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 139: _t->on_bandComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 140: _t->on_readFreq_clicked(); break;
        case 141: _t->on_RxFreqSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 142: _t->on_outAttenuation_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 143: _t->rigOpen(); break;
        case 144: _t->handle_transceiver_update((*reinterpret_cast< const Transceiver::TransceiverState(*)>(_a[1]))); break;
        case 145: _t->handle_transceiver_failure((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 146: _t->on_actionAstronomical_data_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 147: _t->on_actionShort_list_of_add_on_prefixes_and_suffixes_triggered(); break;
        case 148: _t->band_changed((*reinterpret_cast< Frequency(*)>(_a[1]))); break;
        case 149: _t->monitor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 150: _t->end_tuning(); break;
        case 151: _t->stop_tuning(); break;
        case 152: _t->stopTuneATU(); break;
        case 153: _t->auto_tx_mode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 154: _t->on_actionMessage_averaging_triggered(); break;
        case 155: _t->on_contest_log_action_triggered(); break;
        case 156: _t->on_fox_log_action_triggered(); break;
        case 157: _t->on_actionColors_triggered(); break;
        case 158: _t->on_actionInclude_averaging_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 159: _t->on_actionInclude_correlation_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 160: _t->on_actionEnable_AP_DXcall_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 161: _t->on_actionAuto_Clear_Avg_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 162: _t->VHF_features_enabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 163: _t->on_sbSubmode_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 164: _t->on_cbShMsgs_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 165: _t->on_cbSWL_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 166: _t->on_cbTx6_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 167: _t->on_cbMenus_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 168: _t->on_cbCQonly_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 169: _t->on_cbFirst_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 170: _t->on_cbAutoSeq_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 171: _t->networkError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 172: _t->on_ClrAvgButton_clicked(); break;
        case 173: _t->on_actionWSPR_triggered(); break;
        case 174: _t->on_syncSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 175: _t->on_TxPowerComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 176: _t->on_sbTxPercent_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 177: _t->on_cbUploadWSPR_Spots_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 178: _t->WSPR_config((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 179: _t->uploadWSPRSpots((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 180: _t->uploadWSPRSpots((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 181: _t->uploadWSPRSpots(); break;
        case 182: _t->TxAgain(); break;
        case 183: _t->uploadResponse((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 184: _t->on_WSPRfreqSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 185: _t->on_sbFST4W_RxFreq_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 186: _t->on_sbFST4W_FTol_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 187: _t->on_pbTxNext_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 188: _t->on_actionEcho_Graph_triggered(); break;
        case 189: _t->on_actionEcho_triggered(); break;
        case 190: _t->on_actionFast_Graph_triggered(); break;
        case 191: _t->fast_decode_done(); break;
        case 192: _t->on_actionMeasure_reference_spectrum_triggered(); break;
        case 193: _t->on_actionErase_reference_spectrum_triggered(); break;
        case 194: _t->on_actionMeasure_phase_response_triggered(); break;
        case 195: _t->on_sbTR_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 196: _t->on_sbTR_FST4W_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 197: _t->on_sbFtol_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 198: _t->on_cbFast9_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 199: _t->on_sbCQTxFreq_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 200: _t->on_cbCQTx_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 201: _t->on_actionMSK144_triggered(); break;
        case 202: _t->on_actionQ65_triggered(); break;
        case 203: _t->on_actionFreqCal_triggered(); break;
        case 204: _t->splash_done(); break;
        case 205: _t->on_measure_check_box_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 206: _t->on_sbNlist_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 207: _t->on_sbNslots_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 208: _t->on_sbMax_dB_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 209: _t->on_sbF_Low_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 210: _t->on_sbF_High_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 211: _t->chk_FST4_freq_range(); break;
        case 212: _t->on_pbFoxReset_clicked(); break;
        case 213: _t->on_comboBoxHoundSort_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 214: _t->not_GA_warning_message(); break;
        case 215: _t->checkMSK144ContestType(); break;
        case 216: _t->on_pbBestSP_clicked(); break;
        case 217: _t->on_RoundRobin_currentTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 218: _t->setTxMsg((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 219: { bool _r = _t->stdCall((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 220: _t->remote_configure((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< quint32(*)>(_a[5])),(*reinterpret_cast< quint32(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< bool(*)>(_a[9]))); break;
        case 221: _t->pskTableClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 222: _t->logSlots(); break;
        case 223: _t->execCmd((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 224: { bool _r = _t->setFreeFreq();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 225: { bool _r = _t->isSlotFree((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 226: _t->addSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 227: _t->on_pb_FreeFreq_clicked(); break;
        case 228: _t->on_cbAutoCall_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 229: _t->on_cbAutoCQ_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 230: { bool _r = _t->callsignFiltered((*reinterpret_cast< DecodedText(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 231: _t->on_btn_addToIgnore_clicked(); break;
        case 232: _t->on_btn_clearIgnore_clicked(); break;
        case 233: _t->on_actionIgnore_station_triggered(); break;
        case 234: _t->on_actionCall_next_triggered(); break;
        case 235: _t->on_actionClear_triggered(); break;
        case 236: _t->on_cb_autoCallNext_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 237: _t->on_cbMini_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 238: _t->on_cbCQonlyIncl73_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 239: _t->on_cb_filtering_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 240: _t->on_actionSet_Rx_Freq_triggered(); break;
        case 241: _t->on_actionQRZ_Lookup_triggered(); break;
        case 242: _t->on_actionCopy_triggered(); break;
        case 243: _t->moveEvent((*reinterpret_cast< QMoveEvent*(*)>(_a[1]))); break;
        case 244: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 245: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 246: _t->on_txrb6_doubleClicked(); break;
        case 247: _t->dxLookup((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 248: _t->leftClickHandler((*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[1]))); break;
        case 249: _t->on_actionCall_info_triggered(); break;
        case 250: _t->on_actionDark_mode_triggered(); break;
        case 251: _t->qrzInit(); break;
        case 252: _t->qrzSetSessionKey((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 253: _t->qrzResponseHandler((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 254: _t->on_q_button_clicked(); break;
        case 255: _t->on_ci_pb_lookup_clicked(); break;
        case 256: _t->on_cb_specialMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 257: _t->on_cb_autoModeSwitch_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 258: _t->on_actionAbout_WSJT_Z_triggered(); break;
        case 259: _t->on_pb_WDReset_clicked(); break;
        case 260: _t->resetAutoSwitch(); break;
        case 261: { int _r = _t->watchdog();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 262: _t->on_actionUnfiltered_View_triggered(); break;
        case 263: _t->on_actionPSKReporter_triggered(); break;
        case 264: _t->updateQsoCounter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 265: _t->on_txFirstCheckBox_toggled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevice::Channel >(); break;
            }
            break;
        case 144:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Transceiver::TransceiverState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QAudioDeviceInfo , unsigned  , unsigned  ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::initializeAudioOutputStream)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stopAudioOutputStream)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QAudioDeviceInfo const & , int , AudioDevice * , unsigned  , AudioDevice::Channel ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::startAudioInputStream)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::suspendAudioInputStream)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::resumeAudioInputStream)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(AudioDevice::Channel ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::startDetector)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(unsigned  ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::FFTSize)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::detectorClose)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::finished)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(double ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::transmitFrequency)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::endTransmitMessage)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::tune)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString , unsigned  , double , double , double , SoundOutput * , AudioDevice::Channel , bool , bool , double , int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::sendMessage)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(qreal ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::outAttenuationChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::toggleShorthand)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::reset_audio_input_stream)) {
                *result = 22;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &MultiGeometryWidget<3,QMainWindow>::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return MultiGeometryWidget<3,QMainWindow>::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MultiGeometryWidget<3,QMainWindow>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 266)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 266;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 266)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 266;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::initializeAudioOutputStream(QAudioDeviceInfo _t1, unsigned  _t2, unsigned  _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::stopAudioOutputStream()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::startAudioInputStream(QAudioDeviceInfo const & _t1, int _t2, AudioDevice * _t3, unsigned  _t4, AudioDevice::Channel _t5)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::suspendAudioInputStream()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::resumeAudioInputStream()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainWindow::startDetector(AudioDevice::Channel _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::FFTSize(unsigned  _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::detectorClose()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MainWindow::finished()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MainWindow::transmitFrequency(double _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::endTransmitMessage(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 10, _a);
}

// SIGNAL 12
void MainWindow::tune(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 12, _a);
}

// SIGNAL 14
void MainWindow::sendMessage(QString _t1, unsigned  _t2, double _t3, double _t4, double _t5, SoundOutput * _t6, AudioDevice::Channel _t7, bool _t8, bool _t9, double _t10, int _t11)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 14, _a);
}

// SIGNAL 20
void MainWindow::outAttenuationChanged(qreal _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MainWindow::toggleShorthand()const
{
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MainWindow::reset_audio_input_stream(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< MainWindow *>(this), &staticMetaObject, 22, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
