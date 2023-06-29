#ifndef LSM6D3_BASE_H__
#define LSM6D3_BASE_H__
#define SENSOR_SYNC_RES_RATIO  0x05
#define FIFO_CTRL1  0x06
#define FIFO_CTRL2  0x07
#define FIFO_CTRL3  0x08
#define FIFO_CTRL4  0x09
#define FIFO_CTRL5  0x0A
#define DRDY_PULSE_CFG  0x0B
#define INT1_CTRL  0x0D
#define INT2_CTRL  0x0E
#define WHO_AM_I  0x0F
#define CTRL1_XL  0x10
#define CTRL2_G  0x11
#define CTRL3_C  0x12
#define CTRL4_C  0x13
#define CTRL5_C  0x14
#define CTRL6_C  0x15
#define CTRL7_G  0x16
#define CTRL8_XL  0x17
#define CTRL9_XL  0x18
#define CTRL10_C  0x19
#define MASTER_CONFIG  0x1A
#define WAKE_UP_SRC  0x1B
#define TAP_SRC  0x1C
#define D6D_SRC  0x1D
#define STATUS_REG  0x1E
#define OUT_TEMP_L  0x20
#define OUT_TEMP_H  0x21
#define OUTX_L_G  0x22
#define OUTX_H_G  0x23
#define OUTY_L_G  0x24
#define OUTY_H_G  0x25
#define OUTZ_L_G  0x26
#define OUTZ_H_G  0x27
#define OUTX_L_XL  0x28
#define OUTX_H_XL  0x29
#define OUTY_L_XL  0x2A
#define OUTY_H_XL  0x2B
#define OUTZ_L_XL  0x2C
#define OUTZ_H_XL  0x2D
#define SENSORHUB1_REG  0x2E
#define SENSORHUB2_REG  0x2F
#define SENSORHUB3_REG  0x30
#define SENSORHUB4_REG  0x31
#define SENSORHUB5_REG  0x32
#define SENSORHUB6_REG  0x33
#define SENSORHUB7_REG  0x34
#define SENSORHUB8_REG  0x35
#define SENSORHUB9_REG  0x36
#define SENSORHUB10_REG  0x37
#define SENSORHUB11_REG  0x38
#define SENSORHUB12_REG  0x39
#define FIFO_STATUS1  0x3A
#define FIFO_STATUS2  0x3B
#define FIFO_STATUS3  0x3C
#define FIFO_STATUS4  0x3D
#define FIFO_DATA_OUT_L  0x3E
#define FIFO_DATA_OUT_H  0x3F
#define TIMESTAMP0_REG  0x40
#define TIMESTAMP1_REG  0x41
#define TIMESTAMP2_REG  0x42
#define STEP_TIMESTAMP_L  0x49
#define STEP_TIMESTAMP_H  0x4A
#define STEP_COUNTER_L  0x4B
#define STEP_COUNTER_H  0x4C
#define SENSORHUB13_REG  0x4D
#define SENSORHUB14_REG  0x4E
#define SENSORHUB15_REG  0x4F
#define SENSORHUB16_REG  0x50
#define SENSORHUB17_REG  0x51
#define SENSORHUB18_REG  0x52
#define FUNC_SRC1  0x53
#define FUNC_SRC2  0x54
#define WRIST_TILT_IA  0x55
#define TAP_CFG  0x58
#define TAP_THS_6D  0x59
#define INT_DUR2  0x5A
#define WAKE_UP_THS  0x5B
#define WAKE_UP_DUR  0x5C
#define FREE_FALL  0x5D
#define MD1_CFG  0x5E
#define MD2_CFG  0x5F
#define MASTER_CMD_CODE  0x60
#define SENS_SYNC_SPI_ERROR_CODE  0x61
#define OUT_MAG_RAW_X_L  0x66
#define OUT_MAG_RAW_X_H  0x67
#define OUT_MAG_RAW_Y_L  0x68
#define OUT_MAG_RAW_Y_H  0x69
#define OUT_MAG_RAW_Z_L  0x6A
#define OUT_MAG_RAW_Z_H  0x6B
#define X_OFS_USR  0x73
#define Y_OFS_USR  0x74
#define Z_OFS_USR  0x75
#define RR_1_pos 1 
#define RR_1 (uint8_t)(1UL << RR_1_pos) 
#define RR_0_pos 0 
#define RR_0 (uint8_t)(1UL << RR_0_pos) 
#define FTH_7_pos 7 
#define FTH_7 (uint8_t)(1UL << FTH_7_pos) 
#define FTH_6_pos 6 
#define FTH_6 (uint8_t)(1UL << FTH_6_pos) 
#define FTH_5_pos 5 
#define FTH_5 (uint8_t)(1UL << FTH_5_pos) 
#define FTH_4_pos 4 
#define FTH_4 (uint8_t)(1UL << FTH_4_pos) 
#define FTH_3_pos 3 
#define FTH_3 (uint8_t)(1UL << FTH_3_pos) 
#define FTH_2_pos 2 
#define FTH_2 (uint8_t)(1UL << FTH_2_pos) 
#define FTH_1_pos 1 
#define FTH_1 (uint8_t)(1UL << FTH_1_pos) 
#define FTH_0_pos 0 
#define FTH_0 (uint8_t)(1UL << FTH_0_pos) 
#define TIMER_PEDO_FIFO_EN_pos 7 
#define TIMER_PEDO_FIFO_EN (uint8_t)(1UL << TIMER_PEDO_FIFO_EN_pos) 
#define TIMER_PEDO_FIFO_DRDY_pos 6 
#define TIMER_PEDO_FIFO_DRDY (uint8_t)(1UL << TIMER_PEDO_FIFO_DRDY_pos) 
#define FIFO_TEMP_EN_pos 3 
#define FIFO_TEMP_EN (uint8_t)(1UL << FIFO_TEMP_EN_pos) 
#define FTH_10_pos 2 
#define FTH_10 (uint8_t)(1UL << FTH_10_pos) 
#define FTH_9_pos 1 
#define FTH_9 (uint8_t)(1UL << FTH_9_pos) 
#define FTH_8_pos 0 
#define FTH_8 (uint8_t)(1UL << FTH_8_pos) 
#define DEC_FIFO_GYRO2_pos 5 
#define DEC_FIFO_GYRO2 (uint8_t)(1UL << DEC_FIFO_GYRO2_pos) 
#define DEC_FIFO_GYRO1_pos 4 
#define DEC_FIFO_GYRO1 (uint8_t)(1UL << DEC_FIFO_GYRO1_pos) 
#define DEC_FIFO_GYRO0_pos 3 
#define DEC_FIFO_GYRO0 (uint8_t)(1UL << DEC_FIFO_GYRO0_pos) 
#define DEC_FIFO_XL2_pos 2 
#define DEC_FIFO_XL2 (uint8_t)(1UL << DEC_FIFO_XL2_pos) 
#define DEC_FIFO_XL1_pos 1 
#define DEC_FIFO_XL1 (uint8_t)(1UL << DEC_FIFO_XL1_pos) 
#define DEC_FIFO_XL0_pos 0 
#define DEC_FIFO_XL0 (uint8_t)(1UL << DEC_FIFO_XL0_pos) 
#define STOP_ON_FTH_pos 7 
#define STOP_ON_FTH (uint8_t)(1UL << STOP_ON_FTH_pos) 
#define ONLY_HIGH_DATA_pos 6 
#define ONLY_HIGH_DATA (uint8_t)(1UL << ONLY_HIGH_DATA_pos) 
#define DEC_DS4_FIFO2_pos 5 
#define DEC_DS4_FIFO2 (uint8_t)(1UL << DEC_DS4_FIFO2_pos) 
#define DEC_DS4_FIFO1_pos 4 
#define DEC_DS4_FIFO1 (uint8_t)(1UL << DEC_DS4_FIFO1_pos) 
#define DEC_DS4_FIFO0_pos 3 
#define DEC_DS4_FIFO0 (uint8_t)(1UL << DEC_DS4_FIFO0_pos) 
#define DEC_DS3_FIFO2_pos 2 
#define DEC_DS3_FIFO2 (uint8_t)(1UL << DEC_DS3_FIFO2_pos) 
#define DEC_DS3_FIFO1_pos 1 
#define DEC_DS3_FIFO1 (uint8_t)(1UL << DEC_DS3_FIFO1_pos) 
#define DEC_DS3_FIFO0_pos 0 
#define DEC_DS3_FIFO0 (uint8_t)(1UL << DEC_DS3_FIFO0_pos) 
#define ODR_FIFO_3_pos 6 
#define ODR_FIFO_3 (uint8_t)(1UL << ODR_FIFO_3_pos) 
#define ODR_FIFO_2_pos 5 
#define ODR_FIFO_2 (uint8_t)(1UL << ODR_FIFO_2_pos) 
#define ODR_FIFO_1_pos 4 
#define ODR_FIFO_1 (uint8_t)(1UL << ODR_FIFO_1_pos) 
#define ODR_FIFO_0_pos 3 
#define ODR_FIFO_0 (uint8_t)(1UL << ODR_FIFO_0_pos) 
#define FIFO_MODE_2_pos 2 
#define FIFO_MODE_2 (uint8_t)(1UL << FIFO_MODE_2_pos) 
#define FIFO_MODE_1_pos 1 
#define FIFO_MODE_1 (uint8_t)(1UL << FIFO_MODE_1_pos) 
#define FIFO_MODE_0_pos 0 
#define FIFO_MODE_0 (uint8_t)(1UL << FIFO_MODE_0_pos) 
#define DRDY_PULSED_pos 7 
#define DRDY_PULSED (uint8_t)(1UL << DRDY_PULSED_pos) 
#define INT2_WRIST_TILT_pos 0 
#define INT2_WRIST_TILT (uint8_t)(1UL << INT2_WRIST_TILT_pos) 
#define INT1_STEP_DETECTOR_pos 7 
#define INT1_STEP_DETECTOR (uint8_t)(1UL << INT1_STEP_DETECTOR_pos) 
#define INT1_SIGN_MOT_pos 6 
#define INT1_SIGN_MOT (uint8_t)(1UL << INT1_SIGN_MOT_pos) 
#define INT1_FULL_FLAG_pos 5 
#define INT1_FULL_FLAG (uint8_t)(1UL << INT1_FULL_FLAG_pos) 
#define INT1_FIFO_OVR_pos 4 
#define INT1_FIFO_OVR (uint8_t)(1UL << INT1_FIFO_OVR_pos) 
#define INT1_FTH_pos 3 
#define INT1_FTH (uint8_t)(1UL << INT1_FTH_pos) 
#define INT1_BOOT_pos 2 
#define INT1_BOOT (uint8_t)(1UL << INT1_BOOT_pos) 
#define INT1_DRDY_G_pos 1 
#define INT1_DRDY_G (uint8_t)(1UL << INT1_DRDY_G_pos) 
#define INT1_DRDY_XL_pos 0 
#define INT1_DRDY_XL (uint8_t)(1UL << INT1_DRDY_XL_pos) 
#define INT2_STEP_DELTA_pos 7 
#define INT2_STEP_DELTA (uint8_t)(1UL << INT2_STEP_DELTA_pos) 
#define INT2_STEP_COUNT_OV_pos 6 
#define INT2_STEP_COUNT_OV (uint8_t)(1UL << INT2_STEP_COUNT_OV_pos) 
#define INT2_FULL_FLAG_pos 5 
#define INT2_FULL_FLAG (uint8_t)(1UL << INT2_FULL_FLAG_pos) 
#define INT2_FIFO_OVR_pos 4 
#define INT2_FIFO_OVR (uint8_t)(1UL << INT2_FIFO_OVR_pos) 
#define INT2_FTH_pos 3 
#define INT2_FTH (uint8_t)(1UL << INT2_FTH_pos) 
#define INT2_DRDY_TEMP_pos 2 
#define INT2_DRDY_TEMP (uint8_t)(1UL << INT2_DRDY_TEMP_pos) 
#define INT2_DRDY_G_pos 1 
#define INT2_DRDY_G (uint8_t)(1UL << INT2_DRDY_G_pos) 
#define INT2_DRDY_XL_pos 0 
#define INT2_DRDY_XL (uint8_t)(1UL << INT2_DRDY_XL_pos) 
#define ODR_XL3_pos 7 
#define ODR_XL3 (uint8_t)(1UL << ODR_XL3_pos) 
#define ODR_XL2_pos 6 
#define ODR_XL2 (uint8_t)(1UL << ODR_XL2_pos) 
#define ODR_XL1_pos 5 
#define ODR_XL1 (uint8_t)(1UL << ODR_XL1_pos) 
#define ODR_XL0_pos 4 
#define ODR_XL0 (uint8_t)(1UL << ODR_XL0_pos) 
#define FS_XL1_pos 3 
#define FS_XL1 (uint8_t)(1UL << FS_XL1_pos) 
#define FS_XL0_pos 2 
#define FS_XL0 (uint8_t)(1UL << FS_XL0_pos) 
#define LPF1_BW_SEL_pos 1 
#define LPF1_BW_SEL (uint8_t)(1UL << LPF1_BW_SEL_pos) 
#define BW0_XL_pos 0 
#define BW0_XL (uint8_t)(1UL << BW0_XL_pos) 
#define ODR_G3_pos 7 
#define ODR_G3 (uint8_t)(1UL << ODR_G3_pos) 
#define ODR_G2_pos 6 
#define ODR_G2 (uint8_t)(1UL << ODR_G2_pos) 
#define ODR_G1_pos 5 
#define ODR_G1 (uint8_t)(1UL << ODR_G1_pos) 
#define ODR_G0_pos 4 
#define ODR_G0 (uint8_t)(1UL << ODR_G0_pos) 
#define FS_G1_pos 3 
#define FS_G1 (uint8_t)(1UL << FS_G1_pos) 
#define FS_G0_pos 2 
#define FS_G0 (uint8_t)(1UL << FS_G0_pos) 
#define FS_125_pos 1 
#define FS_125 (uint8_t)(1UL << FS_125_pos) 
#define BOOT_pos 7 
#define BOOT (uint8_t)(1UL << BOOT_pos) 
#define BDU_pos 6 
#define BDU (uint8_t)(1UL << BDU_pos) 
#define H_LACTIVE_pos 5 
#define H_LACTIVE (uint8_t)(1UL << H_LACTIVE_pos) 
#define PP_OD_pos 4 
#define PP_OD (uint8_t)(1UL << PP_OD_pos) 
#define SIM_pos 3 
#define SIM (uint8_t)(1UL << SIM_pos) 
#define IF_INC_pos 2 
#define IF_INC (uint8_t)(1UL << IF_INC_pos) 
#define BLE_pos 1 
#define BLE (uint8_t)(1UL << BLE_pos) 
#define SW_RESET_pos 0 
#define SW_RESET (uint8_t)(1UL << SW_RESET_pos) 
#define DEN_XL_EN_pos 7 
#define DEN_XL_EN (uint8_t)(1UL << DEN_XL_EN_pos) 
#define SLEEP_pos 6 
#define SLEEP (uint8_t)(1UL << SLEEP_pos) 
#define INT2_on_INT1_pos 5 
#define INT2_on_INT1 (uint8_t)(1UL << INT2_on_INT1_pos) 
#define DEN_DRDY_INT1_pos 4 
#define DEN_DRDY_INT1 (uint8_t)(1UL << DEN_DRDY_INT1_pos) 
#define DRDY_MASK_pos 3 
#define DRDY_MASK (uint8_t)(1UL << DRDY_MASK_pos) 
#define I2C_disable_pos 2 
#define I2C_disable (uint8_t)(1UL << I2C_disable_pos) 
#define LPF1_SEL_G_pos 1 
#define LPF1_SEL_G (uint8_t)(1UL << LPF1_SEL_G_pos) 
#define ROUNDING2_pos 7 
#define ROUNDING2 (uint8_t)(1UL << ROUNDING2_pos) 
#define ROUNDING1_pos 6 
#define ROUNDING1 (uint8_t)(1UL << ROUNDING1_pos) 
#define ROUNDING0_pos 5 
#define ROUNDING0 (uint8_t)(1UL << ROUNDING0_pos) 
#define DEN_LH_pos 4 
#define DEN_LH (uint8_t)(1UL << DEN_LH_pos) 
#define ST1_G_pos 3 
#define ST1_G (uint8_t)(1UL << ST1_G_pos) 
#define ST0_G_pos 2 
#define ST0_G (uint8_t)(1UL << ST0_G_pos) 
#define ST1_XL_pos 1 
#define ST1_XL (uint8_t)(1UL << ST1_XL_pos) 
#define ST0_XL_pos 0 
#define ST0_XL (uint8_t)(1UL << ST0_XL_pos) 
#define TRIG_EN_pos 7 
#define TRIG_EN (uint8_t)(1UL << TRIG_EN_pos) 
#define LVL1_EN_pos 6 
#define LVL1_EN (uint8_t)(1UL << LVL1_EN_pos) 
#define LVL2_EN_pos 5 
#define LVL2_EN (uint8_t)(1UL << LVL2_EN_pos) 
#define XL_HM_MODE_pos 4 
#define XL_HM_MODE (uint8_t)(1UL << XL_HM_MODE_pos) 
#define USR_OFF_W_pos 3 
#define USR_OFF_W (uint8_t)(1UL << USR_OFF_W_pos) 
#define FTYPE_1_pos 1 
#define FTYPE_1 (uint8_t)(1UL << FTYPE_1_pos) 
#define FTYPE_0_pos 0 
#define FTYPE_0 (uint8_t)(1UL << FTYPE_0_pos) 
#define G_HM_MODE_pos 7 
#define G_HM_MODE (uint8_t)(1UL << G_HM_MODE_pos) 
#define HP_G_EN_pos 6 
#define HP_G_EN (uint8_t)(1UL << HP_G_EN_pos) 
#define HPM1_G_pos 5 
#define HPM1_G (uint8_t)(1UL << HPM1_G_pos) 
#define HPM0_G_pos 4 
#define HPM0_G (uint8_t)(1UL << HPM0_G_pos) 
#define ROUNDING_STATUS_pos 2 
#define ROUNDING_STATUS (uint8_t)(1UL << ROUNDING_STATUS_pos) 
#define LPF2_XL_EN_pos 7 
#define LPF2_XL_EN (uint8_t)(1UL << LPF2_XL_EN_pos) 
#define HPCF_XL1_pos 6 
#define HPCF_XL1 (uint8_t)(1UL << HPCF_XL1_pos) 
#define HPCF_XL0_pos 5 
#define HPCF_XL0 (uint8_t)(1UL << HPCF_XL0_pos) 
#define HP_REF_MODE_pos 4 
#define HP_REF_MODE (uint8_t)(1UL << HP_REF_MODE_pos) 
#define INPUT_COMPOSITE_pos 3 
#define INPUT_COMPOSITE (uint8_t)(1UL << INPUT_COMPOSITE_pos) 
#define HP_SLOPE_XL_EN_pos 2 
#define HP_SLOPE_XL_EN (uint8_t)(1UL << HP_SLOPE_XL_EN_pos) 
#define LOW_PASS_ON_6D_pos 0 
#define LOW_PASS_ON_6D (uint8_t)(1UL << LOW_PASS_ON_6D_pos) 
#define DEN_X_pos 7 
#define DEN_X (uint8_t)(1UL << DEN_X_pos) 
#define DEN_Y_pos 6 
#define DEN_Y (uint8_t)(1UL << DEN_Y_pos) 
#define DEN_Z_pos 5 
#define DEN_Z (uint8_t)(1UL << DEN_Z_pos) 
#define DEN_XL_G_pos 4 
#define DEN_XL_G (uint8_t)(1UL << DEN_XL_G_pos) 
#define SOFT_EN_pos 2 
#define SOFT_EN (uint8_t)(1UL << SOFT_EN_pos) 
#define WRIST_TILT_EN_pos 7 
#define WRIST_TILT_EN (uint8_t)(1UL << WRIST_TILT_EN_pos) 
#define TIMER_EN_pos 5 
#define TIMER_EN (uint8_t)(1UL << TIMER_EN_pos) 
#define PEDO_EN_pos 4 
#define PEDO_EN (uint8_t)(1UL << PEDO_EN_pos) 
#define TILT_EN_pos 3 
#define TILT_EN (uint8_t)(1UL << TILT_EN_pos) 
#define FUNC_EN_pos 2 
#define FUNC_EN (uint8_t)(1UL << FUNC_EN_pos) 
#define PEDO_RST_STEP_pos 1 
#define PEDO_RST_STEP (uint8_t)(1UL << PEDO_RST_STEP_pos) 
#define SIGN_MOTION_EN_pos 0 
#define SIGN_MOTION_EN (uint8_t)(1UL << SIGN_MOTION_EN_pos) 
#define DRDY_ON_INT1_pos 7 
#define DRDY_ON_INT1 (uint8_t)(1UL << DRDY_ON_INT1_pos) 
#define DATA_VALID_SEL_FIFO_pos 6 
#define DATA_VALID_SEL_FIFO (uint8_t)(1UL << DATA_VALID_SEL_FIFO_pos) 
#define START_CONFIG_pos 4 
#define START_CONFIG (uint8_t)(1UL << START_CONFIG_pos) 
#define PULL_UP_EN_pos 3 
#define PULL_UP_EN (uint8_t)(1UL << PULL_UP_EN_pos) 
#define PASS_THROUGH_MODE_pos 2 
#define PASS_THROUGH_MODE (uint8_t)(1UL << PASS_THROUGH_MODE_pos) 
#define IRON_EN_pos 1 
#define IRON_EN (uint8_t)(1UL << IRON_EN_pos) 
#define MASTER_ON_pos 0 
#define MASTER_ON (uint8_t)(1UL << MASTER_ON_pos) 
#define FF_IA_pos 5 
#define FF_IA (uint8_t)(1UL << FF_IA_pos) 
#define SLEEP_STATE_IA_pos 4 
#define SLEEP_STATE_IA (uint8_t)(1UL << SLEEP_STATE_IA_pos) 
#define WU_IA_pos 3 
#define WU_IA (uint8_t)(1UL << WU_IA_pos) 
#define X_WU_pos 2 
#define X_WU (uint8_t)(1UL << X_WU_pos) 
#define Y_WU_pos 1 
#define Y_WU (uint8_t)(1UL << Y_WU_pos) 
#define Z_WU_pos 0 
#define Z_WU (uint8_t)(1UL << Z_WU_pos) 
#define TAP_IA_pos 6 
#define TAP_IA (uint8_t)(1UL << TAP_IA_pos) 
#define SINGLE_TAP_pos 5 
#define SINGLE_TAP (uint8_t)(1UL << SINGLE_TAP_pos) 
#define DOUBLE_TAP_pos 4 
#define DOUBLE_TAP (uint8_t)(1UL << DOUBLE_TAP_pos) 
#define TAP_SIGN_pos 3 
#define TAP_SIGN (uint8_t)(1UL << TAP_SIGN_pos) 
#define X_TAP_pos 2 
#define X_TAP (uint8_t)(1UL << X_TAP_pos) 
#define Y_TAP_pos 1 
#define Y_TAP (uint8_t)(1UL << Y_TAP_pos) 
#define Z_TAP_pos 0 
#define Z_TAP (uint8_t)(1UL << Z_TAP_pos) 
#define DEN_DRDY_pos 7 
#define DEN_DRDY (uint8_t)(1UL << DEN_DRDY_pos) 
#define D6D_IA_pos 6 
#define D6D_IA (uint8_t)(1UL << D6D_IA_pos) 
#define ZH_pos 5 
#define ZH (uint8_t)(1UL << ZH_pos) 
#define ZL_pos 4 
#define ZL (uint8_t)(1UL << ZL_pos) 
#define YH_pos 3 
#define YH (uint8_t)(1UL << YH_pos) 
#define YL_pos 2 
#define YL (uint8_t)(1UL << YL_pos) 
#define XH_pos 1 
#define XH (uint8_t)(1UL << XH_pos) 
#define XL_pos 0 
#define XL (uint8_t)(1UL << XL_pos) 
#define TDA_pos 2 
#define TDA (uint8_t)(1UL << TDA_pos) 
#define GDA_pos 1 
#define GDA (uint8_t)(1UL << GDA_pos) 
#define XLDA_pos 0 
#define XLDA (uint8_t)(1UL << XLDA_pos) 
#define Temp7_pos 7 
#define Temp7 (uint8_t)(1UL << Temp7_pos) 
#define Temp6_pos 6 
#define Temp6 (uint8_t)(1UL << Temp6_pos) 
#define Temp5_pos 5 
#define Temp5 (uint8_t)(1UL << Temp5_pos) 
#define Temp4_pos 4 
#define Temp4 (uint8_t)(1UL << Temp4_pos) 
#define Temp3_pos 3 
#define Temp3 (uint8_t)(1UL << Temp3_pos) 
#define Temp2_pos 2 
#define Temp2 (uint8_t)(1UL << Temp2_pos) 
#define Temp1_pos 1 
#define Temp1 (uint8_t)(1UL << Temp1_pos) 
#define Temp0_pos 0 
#define Temp0 (uint8_t)(1UL << Temp0_pos) 
#define Temp15_pos 7 
#define Temp15 (uint8_t)(1UL << Temp15_pos) 
#define Temp14_pos 6 
#define Temp14 (uint8_t)(1UL << Temp14_pos) 
#define Temp13_pos 5 
#define Temp13 (uint8_t)(1UL << Temp13_pos) 
#define Temp12_pos 4 
#define Temp12 (uint8_t)(1UL << Temp12_pos) 
#define Temp11_pos 3 
#define Temp11 (uint8_t)(1UL << Temp11_pos) 
#define Temp10_pos 2 
#define Temp10 (uint8_t)(1UL << Temp10_pos) 
#define Temp9_pos 1 
#define Temp9 (uint8_t)(1UL << Temp9_pos) 
#define Temp8_pos 0 
#define Temp8 (uint8_t)(1UL << Temp8_pos) 
#define D7_pos 7 
#define D7 (uint8_t)(1UL << D7_pos) 
#define D6_pos 6 
#define D6 (uint8_t)(1UL << D6_pos) 
#define D5_pos 5 
#define D5 (uint8_t)(1UL << D5_pos) 
#define D4_pos 4 
#define D4 (uint8_t)(1UL << D4_pos) 
#define D3_pos 3 
#define D3 (uint8_t)(1UL << D3_pos) 
#define D2_pos 2 
#define D2 (uint8_t)(1UL << D2_pos) 
#define D1_pos 1 
#define D1 (uint8_t)(1UL << D1_pos) 
#define D0_pos 0 
#define D0 (uint8_t)(1UL << D0_pos) 
#define D15_pos 7 
#define D15 (uint8_t)(1UL << D15_pos) 
#define D14_pos 6 
#define D14 (uint8_t)(1UL << D14_pos) 
#define D13_pos 5 
#define D13 (uint8_t)(1UL << D13_pos) 
#define D12_pos 4 
#define D12 (uint8_t)(1UL << D12_pos) 
#define D11_pos 3 
#define D11 (uint8_t)(1UL << D11_pos) 
#define D10_pos 2 
#define D10 (uint8_t)(1UL << D10_pos) 
#define D9_pos 1 
#define D9 (uint8_t)(1UL << D9_pos) 
#define D8_pos 0 
#define D8 (uint8_t)(1UL << D8_pos) 
#define D7_pos 7 
#define D7 (uint8_t)(1UL << D7_pos) 
#define D6_pos 6 
#define D6 (uint8_t)(1UL << D6_pos) 
#define D5_pos 5 
#define D5 (uint8_t)(1UL << D5_pos) 
#define D4_pos 4 
#define D4 (uint8_t)(1UL << D4_pos) 
#define D3_pos 3 
#define D3 (uint8_t)(1UL << D3_pos) 
#define D2_pos 2 
#define D2 (uint8_t)(1UL << D2_pos) 
#define D1_pos 1 
#define D1 (uint8_t)(1UL << D1_pos) 
#define D0_pos 0 
#define D0 (uint8_t)(1UL << D0_pos) 
#define D15_pos 7 
#define D15 (uint8_t)(1UL << D15_pos) 
#define D14_pos 6 
#define D14 (uint8_t)(1UL << D14_pos) 
#define D13_pos 5 
#define D13 (uint8_t)(1UL << D13_pos) 
#define D12_pos 4 
#define D12 (uint8_t)(1UL << D12_pos) 
#define D11_pos 3 
#define D11 (uint8_t)(1UL << D11_pos) 
#define D10_pos 2 
#define D10 (uint8_t)(1UL << D10_pos) 
#define D9_pos 1 
#define D9 (uint8_t)(1UL << D9_pos) 
#define D8_pos 0 
#define D8 (uint8_t)(1UL << D8_pos) 
#define D7_pos 7 
#define D7 (uint8_t)(1UL << D7_pos) 
#define D6_pos 6 
#define D6 (uint8_t)(1UL << D6_pos) 
#define D5_pos 5 
#define D5 (uint8_t)(1UL << D5_pos) 
#define D4_pos 4 
#define D4 (uint8_t)(1UL << D4_pos) 
#define D3_pos 3 
#define D3 (uint8_t)(1UL << D3_pos) 
#define D2_pos 2 
#define D2 (uint8_t)(1UL << D2_pos) 
#define D1_pos 1 
#define D1 (uint8_t)(1UL << D1_pos) 
#define D0_pos 0 
#define D0 (uint8_t)(1UL << D0_pos) 
#define D15_pos 7 
#define D15 (uint8_t)(1UL << D15_pos) 
#define D14_pos 6 
#define D14 (uint8_t)(1UL << D14_pos) 
#define D13_pos 5 
#define D13 (uint8_t)(1UL << D13_pos) 
#define D12_pos 4 
#define D12 (uint8_t)(1UL << D12_pos) 
#define D11_pos 3 
#define D11 (uint8_t)(1UL << D11_pos) 
#define D10_pos 2 
#define D10 (uint8_t)(1UL << D10_pos) 
#define D9_pos 1 
#define D9 (uint8_t)(1UL << D9_pos) 
#define D8_pos 0 
#define D8 (uint8_t)(1UL << D8_pos) 
#define D7_pos 7 
#define D7 (uint8_t)(1UL << D7_pos) 
#define D6_pos 6 
#define D6 (uint8_t)(1UL << D6_pos) 
#define D5_pos 5 
#define D5 (uint8_t)(1UL << D5_pos) 
#define D4_pos 4 
#define D4 (uint8_t)(1UL << D4_pos) 
#define D3_pos 3 
#define D3 (uint8_t)(1UL << D3_pos) 
#define D2_pos 2 
#define D2 (uint8_t)(1UL << D2_pos) 
#define D1_pos 1 
#define D1 (uint8_t)(1UL << D1_pos) 
#define D0_pos 0 
#define D0 (uint8_t)(1UL << D0_pos) 
#define D15_pos 7 
#define D15 (uint8_t)(1UL << D15_pos) 
#define D14_pos 6 
#define D14 (uint8_t)(1UL << D14_pos) 
#define D13_pos 5 
#define D13 (uint8_t)(1UL << D13_pos) 
#define D12_pos 4 
#define D12 (uint8_t)(1UL << D12_pos) 
#define D11_pos 3 
#define D11 (uint8_t)(1UL << D11_pos) 
#define D10_pos 2 
#define D10 (uint8_t)(1UL << D10_pos) 
#define D9_pos 1 
#define D9 (uint8_t)(1UL << D9_pos) 
#define D8_pos 0 
#define D8 (uint8_t)(1UL << D8_pos) 
#define D7_pos 7 
#define D7 (uint8_t)(1UL << D7_pos) 
#define D6_pos 6 
#define D6 (uint8_t)(1UL << D6_pos) 
#define D5_pos 5 
#define D5 (uint8_t)(1UL << D5_pos) 
#define D4_pos 4 
#define D4 (uint8_t)(1UL << D4_pos) 
#define D3_pos 3 
#define D3 (uint8_t)(1UL << D3_pos) 
#define D2_pos 2 
#define D2 (uint8_t)(1UL << D2_pos) 
#define D1_pos 1 
#define D1 (uint8_t)(1UL << D1_pos) 
#define D0_pos 0 
#define D0 (uint8_t)(1UL << D0_pos) 
#define D15_pos 7 
#define D15 (uint8_t)(1UL << D15_pos) 
#define D14_pos 6 
#define D14 (uint8_t)(1UL << D14_pos) 
#define D13_pos 5 
#define D13 (uint8_t)(1UL << D13_pos) 
#define D12_pos 4 
#define D12 (uint8_t)(1UL << D12_pos) 
#define D11_pos 3 
#define D11 (uint8_t)(1UL << D11_pos) 
#define D10_pos 2 
#define D10 (uint8_t)(1UL << D10_pos) 
#define D9_pos 1 
#define D9 (uint8_t)(1UL << D9_pos) 
#define D8_pos 0 
#define D8 (uint8_t)(1UL << D8_pos) 
#define D7_pos 7 
#define D7 (uint8_t)(1UL << D7_pos) 
#define D6_pos 6 
#define D6 (uint8_t)(1UL << D6_pos) 
#define D5_pos 5 
#define D5 (uint8_t)(1UL << D5_pos) 
#define D4_pos 4 
#define D4 (uint8_t)(1UL << D4_pos) 
#define D3_pos 3 
#define D3 (uint8_t)(1UL << D3_pos) 
#define D2_pos 2 
#define D2 (uint8_t)(1UL << D2_pos) 
#define D1_pos 1 
#define D1 (uint8_t)(1UL << D1_pos) 
#define D0_pos 0 
#define D0 (uint8_t)(1UL << D0_pos) 
#define D15_pos 7 
#define D15 (uint8_t)(1UL << D15_pos) 
#define D14_pos 6 
#define D14 (uint8_t)(1UL << D14_pos) 
#define D13_pos 5 
#define D13 (uint8_t)(1UL << D13_pos) 
#define D12_pos 4 
#define D12 (uint8_t)(1UL << D12_pos) 
#define D11_pos 3 
#define D11 (uint8_t)(1UL << D11_pos) 
#define D10_pos 2 
#define D10 (uint8_t)(1UL << D10_pos) 
#define D9_pos 1 
#define D9 (uint8_t)(1UL << D9_pos) 
#define D8_pos 0 
#define D8 (uint8_t)(1UL << D8_pos) 
#define SHub1_7_pos 7 
#define SHub1_7 (uint8_t)(1UL << SHub1_7_pos) 
#define SHub1_6_pos 6 
#define SHub1_6 (uint8_t)(1UL << SHub1_6_pos) 
#define SHub1_5_pos 5 
#define SHub1_5 (uint8_t)(1UL << SHub1_5_pos) 
#define SHub1_4_pos 4 
#define SHub1_4 (uint8_t)(1UL << SHub1_4_pos) 
#define SHub1_3_pos 3 
#define SHub1_3 (uint8_t)(1UL << SHub1_3_pos) 
#define SHub1_2_pos 2 
#define SHub1_2 (uint8_t)(1UL << SHub1_2_pos) 
#define SHub1_1_pos 1 
#define SHub1_1 (uint8_t)(1UL << SHub1_1_pos) 
#define SHub1_0_pos 0 
#define SHub1_0 (uint8_t)(1UL << SHub1_0_pos) 
#define SHub2_7_pos 7 
#define SHub2_7 (uint8_t)(1UL << SHub2_7_pos) 
#define SHub2_6_pos 6 
#define SHub2_6 (uint8_t)(1UL << SHub2_6_pos) 
#define SHub2_5_pos 5 
#define SHub2_5 (uint8_t)(1UL << SHub2_5_pos) 
#define SHub2_4_pos 4 
#define SHub2_4 (uint8_t)(1UL << SHub2_4_pos) 
#define SHub2_3_pos 3 
#define SHub2_3 (uint8_t)(1UL << SHub2_3_pos) 
#define SHub2_2_pos 2 
#define SHub2_2 (uint8_t)(1UL << SHub2_2_pos) 
#define SHub2_1_pos 1 
#define SHub2_1 (uint8_t)(1UL << SHub2_1_pos) 
#define SHub2_0_pos 0 
#define SHub2_0 (uint8_t)(1UL << SHub2_0_pos) 
#define SHub3_7_pos 7 
#define SHub3_7 (uint8_t)(1UL << SHub3_7_pos) 
#define SHub3_6_pos 6 
#define SHub3_6 (uint8_t)(1UL << SHub3_6_pos) 
#define SHub3_5_pos 5 
#define SHub3_5 (uint8_t)(1UL << SHub3_5_pos) 
#define SHub3_4_pos 4 
#define SHub3_4 (uint8_t)(1UL << SHub3_4_pos) 
#define SHub3_3_pos 3 
#define SHub3_3 (uint8_t)(1UL << SHub3_3_pos) 
#define SHub3_2_pos 2 
#define SHub3_2 (uint8_t)(1UL << SHub3_2_pos) 
#define SHub3_1_pos 1 
#define SHub3_1 (uint8_t)(1UL << SHub3_1_pos) 
#define SHub3_0_pos 0 
#define SHub3_0 (uint8_t)(1UL << SHub3_0_pos) 
#define SHub4_7_pos 7 
#define SHub4_7 (uint8_t)(1UL << SHub4_7_pos) 
#define SHub4_6_pos 6 
#define SHub4_6 (uint8_t)(1UL << SHub4_6_pos) 
#define SHub4_5_pos 5 
#define SHub4_5 (uint8_t)(1UL << SHub4_5_pos) 
#define SHub4_4_pos 4 
#define SHub4_4 (uint8_t)(1UL << SHub4_4_pos) 
#define SHub4_3_pos 3 
#define SHub4_3 (uint8_t)(1UL << SHub4_3_pos) 
#define SHub4_2_pos 2 
#define SHub4_2 (uint8_t)(1UL << SHub4_2_pos) 
#define SHub4_1_pos 1 
#define SHub4_1 (uint8_t)(1UL << SHub4_1_pos) 
#define SHub4_0_pos 0 
#define SHub4_0 (uint8_t)(1UL << SHub4_0_pos) 
#define SHub5_7_pos 7 
#define SHub5_7 (uint8_t)(1UL << SHub5_7_pos) 
#define SHub5_6_pos 6 
#define SHub5_6 (uint8_t)(1UL << SHub5_6_pos) 
#define SHub5_5_pos 5 
#define SHub5_5 (uint8_t)(1UL << SHub5_5_pos) 
#define SHub5_4_pos 4 
#define SHub5_4 (uint8_t)(1UL << SHub5_4_pos) 
#define SHub5_3_pos 3 
#define SHub5_3 (uint8_t)(1UL << SHub5_3_pos) 
#define SHub5_2_pos 2 
#define SHub5_2 (uint8_t)(1UL << SHub5_2_pos) 
#define SHub5_1_pos 1 
#define SHub5_1 (uint8_t)(1UL << SHub5_1_pos) 
#define SHub5_0_pos 0 
#define SHub5_0 (uint8_t)(1UL << SHub5_0_pos) 
#define SHub6_7_pos 7 
#define SHub6_7 (uint8_t)(1UL << SHub6_7_pos) 
#define SHub6_6_pos 6 
#define SHub6_6 (uint8_t)(1UL << SHub6_6_pos) 
#define SHub6_5_pos 5 
#define SHub6_5 (uint8_t)(1UL << SHub6_5_pos) 
#define SHub6_4_pos 4 
#define SHub6_4 (uint8_t)(1UL << SHub6_4_pos) 
#define SHub6_3_pos 3 
#define SHub6_3 (uint8_t)(1UL << SHub6_3_pos) 
#define SHub6_2_pos 2 
#define SHub6_2 (uint8_t)(1UL << SHub6_2_pos) 
#define SHub6_1_pos 1 
#define SHub6_1 (uint8_t)(1UL << SHub6_1_pos) 
#define SHub6_0_pos 0 
#define SHub6_0 (uint8_t)(1UL << SHub6_0_pos) 
#define SHub7_7_pos 7 
#define SHub7_7 (uint8_t)(1UL << SHub7_7_pos) 
#define SHub7_6_pos 6 
#define SHub7_6 (uint8_t)(1UL << SHub7_6_pos) 
#define SHub7_5_pos 5 
#define SHub7_5 (uint8_t)(1UL << SHub7_5_pos) 
#define SHub7_4_pos 4 
#define SHub7_4 (uint8_t)(1UL << SHub7_4_pos) 
#define SHub7_3_pos 3 
#define SHub7_3 (uint8_t)(1UL << SHub7_3_pos) 
#define SHub7_2_pos 2 
#define SHub7_2 (uint8_t)(1UL << SHub7_2_pos) 
#define SHub7_1_pos 1 
#define SHub7_1 (uint8_t)(1UL << SHub7_1_pos) 
#define SHub7_0_pos 0 
#define SHub7_0 (uint8_t)(1UL << SHub7_0_pos) 
#define SHub8_7_pos 7 
#define SHub8_7 (uint8_t)(1UL << SHub8_7_pos) 
#define SHub8_6_pos 6 
#define SHub8_6 (uint8_t)(1UL << SHub8_6_pos) 
#define SHub8_5_pos 5 
#define SHub8_5 (uint8_t)(1UL << SHub8_5_pos) 
#define SHub8_4_pos 4 
#define SHub8_4 (uint8_t)(1UL << SHub8_4_pos) 
#define SHub8_3_pos 3 
#define SHub8_3 (uint8_t)(1UL << SHub8_3_pos) 
#define SHub8_2_pos 2 
#define SHub8_2 (uint8_t)(1UL << SHub8_2_pos) 
#define SHub8_1_pos 1 
#define SHub8_1 (uint8_t)(1UL << SHub8_1_pos) 
#define SHub8_0_pos 0 
#define SHub8_0 (uint8_t)(1UL << SHub8_0_pos) 
#define SHub9_7_pos 7 
#define SHub9_7 (uint8_t)(1UL << SHub9_7_pos) 
#define SHub9_6_pos 6 
#define SHub9_6 (uint8_t)(1UL << SHub9_6_pos) 
#define SHub9_5_pos 5 
#define SHub9_5 (uint8_t)(1UL << SHub9_5_pos) 
#define SHub9_4_pos 4 
#define SHub9_4 (uint8_t)(1UL << SHub9_4_pos) 
#define SHub9_3_pos 3 
#define SHub9_3 (uint8_t)(1UL << SHub9_3_pos) 
#define SHub9_2_pos 2 
#define SHub9_2 (uint8_t)(1UL << SHub9_2_pos) 
#define SHub9_1_pos 1 
#define SHub9_1 (uint8_t)(1UL << SHub9_1_pos) 
#define SHub9_0_pos 0 
#define SHub9_0 (uint8_t)(1UL << SHub9_0_pos) 
#define SHub10_7_pos 7 
#define SHub10_7 (uint8_t)(1UL << SHub10_7_pos) 
#define SHub10_6_pos 6 
#define SHub10_6 (uint8_t)(1UL << SHub10_6_pos) 
#define SHub10_5_pos 5 
#define SHub10_5 (uint8_t)(1UL << SHub10_5_pos) 
#define SHub10_4_pos 4 
#define SHub10_4 (uint8_t)(1UL << SHub10_4_pos) 
#define SHub10_3_pos 3 
#define SHub10_3 (uint8_t)(1UL << SHub10_3_pos) 
#define SHub10_2_pos 2 
#define SHub10_2 (uint8_t)(1UL << SHub10_2_pos) 
#define SHub10_1_pos 1 
#define SHub10_1 (uint8_t)(1UL << SHub10_1_pos) 
#define SHub10_0_pos 0 
#define SHub10_0 (uint8_t)(1UL << SHub10_0_pos) 
#define SHub11_7_pos 7 
#define SHub11_7 (uint8_t)(1UL << SHub11_7_pos) 
#define SHub11_6_pos 6 
#define SHub11_6 (uint8_t)(1UL << SHub11_6_pos) 
#define SHub11_5_pos 5 
#define SHub11_5 (uint8_t)(1UL << SHub11_5_pos) 
#define SHub11_4_pos 4 
#define SHub11_4 (uint8_t)(1UL << SHub11_4_pos) 
#define SHub11_3_pos 3 
#define SHub11_3 (uint8_t)(1UL << SHub11_3_pos) 
#define SHub11_2_pos 2 
#define SHub11_2 (uint8_t)(1UL << SHub11_2_pos) 
#define SHub11_1_pos 1 
#define SHub11_1 (uint8_t)(1UL << SHub11_1_pos) 
#define SHub11_0_pos 0 
#define SHub11_0 (uint8_t)(1UL << SHub11_0_pos) 
#define SHub12_7_pos 7 
#define SHub12_7 (uint8_t)(1UL << SHub12_7_pos) 
#define SHub12_6_pos 6 
#define SHub12_6 (uint8_t)(1UL << SHub12_6_pos) 
#define SHub12_5_pos 5 
#define SHub12_5 (uint8_t)(1UL << SHub12_5_pos) 
#define SHub12_4_pos 4 
#define SHub12_4 (uint8_t)(1UL << SHub12_4_pos) 
#define SHub12_3_pos 3 
#define SHub12_3 (uint8_t)(1UL << SHub12_3_pos) 
#define SHub12_2_pos 2 
#define SHub12_2 (uint8_t)(1UL << SHub12_2_pos) 
#define SHub12_1_pos 1 
#define SHub12_1 (uint8_t)(1UL << SHub12_1_pos) 
#define SHub12_0_pos 0 
#define SHub12_0 (uint8_t)(1UL << SHub12_0_pos) 
#define DIFF_FIFO_7_pos 7 
#define DIFF_FIFO_7 (uint8_t)(1UL << DIFF_FIFO_7_pos) 
#define DIFF_FIFO_6_pos 6 
#define DIFF_FIFO_6 (uint8_t)(1UL << DIFF_FIFO_6_pos) 
#define DIFF_FIFO_5_pos 5 
#define DIFF_FIFO_5 (uint8_t)(1UL << DIFF_FIFO_5_pos) 
#define DIFF_FIFO_4_pos 4 
#define DIFF_FIFO_4 (uint8_t)(1UL << DIFF_FIFO_4_pos) 
#define DIFF_FIFO_3_pos 3 
#define DIFF_FIFO_3 (uint8_t)(1UL << DIFF_FIFO_3_pos) 
#define DIFF_FIFO_2_pos 2 
#define DIFF_FIFO_2 (uint8_t)(1UL << DIFF_FIFO_2_pos) 
#define DIFF_FIFO_1_pos 1 
#define DIFF_FIFO_1 (uint8_t)(1UL << DIFF_FIFO_1_pos) 
#define DIFF_FIFO_0_pos 0 
#define DIFF_FIFO_0 (uint8_t)(1UL << DIFF_FIFO_0_pos) 
#define WaterM_pos 7 
#define WaterM (uint8_t)(1UL << WaterM_pos) 
#define OVER_RUN_pos 6 
#define OVER_RUN (uint8_t)(1UL << OVER_RUN_pos) 
#define FIFO_FULL_SMART_pos 5 
#define FIFO_FULL_SMART (uint8_t)(1UL << FIFO_FULL_SMART_pos) 
#define FIFO_EMPTY_pos 4 
#define FIFO_EMPTY (uint8_t)(1UL << FIFO_EMPTY_pos) 
#define DIFF_FIFO_10_pos 2 
#define DIFF_FIFO_10 (uint8_t)(1UL << DIFF_FIFO_10_pos) 
#define DIFF_FIFO_9_pos 1 
#define DIFF_FIFO_9 (uint8_t)(1UL << DIFF_FIFO_9_pos) 
#define DIFF_FIFO_8_pos 0 
#define DIFF_FIFO_8 (uint8_t)(1UL << DIFF_FIFO_8_pos) 
#define FIFO_PATTERN_7_pos 7 
#define FIFO_PATTERN_7 (uint8_t)(1UL << FIFO_PATTERN_7_pos) 
#define FIFO_PATTERN_6_pos 6 
#define FIFO_PATTERN_6 (uint8_t)(1UL << FIFO_PATTERN_6_pos) 
#define FIFO_PATTERN_5_pos 5 
#define FIFO_PATTERN_5 (uint8_t)(1UL << FIFO_PATTERN_5_pos) 
#define FIFO_PATTERN_4_pos 4 
#define FIFO_PATTERN_4 (uint8_t)(1UL << FIFO_PATTERN_4_pos) 
#define FIFO_PATTERN_3_pos 3 
#define FIFO_PATTERN_3 (uint8_t)(1UL << FIFO_PATTERN_3_pos) 
#define FIFO_PATTERN_2_pos 2 
#define FIFO_PATTERN_2 (uint8_t)(1UL << FIFO_PATTERN_2_pos) 
#define FIFO_PATTERN_1_pos 1 
#define FIFO_PATTERN_1 (uint8_t)(1UL << FIFO_PATTERN_1_pos) 
#define FIFO_PATTERN_0_pos 0 
#define FIFO_PATTERN_0 (uint8_t)(1UL << FIFO_PATTERN_0_pos) 
#define FIFO_PATTERN_9_pos 1 
#define FIFO_PATTERN_9 (uint8_t)(1UL << FIFO_PATTERN_9_pos) 
#define FIFO_PATTERN_8_pos 0 
#define FIFO_PATTERN_8 (uint8_t)(1UL << FIFO_PATTERN_8_pos) 
#define DATA_OUT_FIFO_L_7_pos 7 
#define DATA_OUT_FIFO_L_7 (uint8_t)(1UL << DATA_OUT_FIFO_L_7_pos) 
#define DATA_OUT_FIFO_L_6_pos 6 
#define DATA_OUT_FIFO_L_6 (uint8_t)(1UL << DATA_OUT_FIFO_L_6_pos) 
#define DATA_OUT_FIFO_L_5_pos 5 
#define DATA_OUT_FIFO_L_5 (uint8_t)(1UL << DATA_OUT_FIFO_L_5_pos) 
#define DATA_OUT_FIFO_L_4_pos 4 
#define DATA_OUT_FIFO_L_4 (uint8_t)(1UL << DATA_OUT_FIFO_L_4_pos) 
#define DATA_OUT_FIFO_L_3_pos 3 
#define DATA_OUT_FIFO_L_3 (uint8_t)(1UL << DATA_OUT_FIFO_L_3_pos) 
#define DATA_OUT_FIFO_L_2_pos 2 
#define DATA_OUT_FIFO_L_2 (uint8_t)(1UL << DATA_OUT_FIFO_L_2_pos) 
#define DATA_OUT_FIFO_L_1_pos 1 
#define DATA_OUT_FIFO_L_1 (uint8_t)(1UL << DATA_OUT_FIFO_L_1_pos) 
#define DATA_OUT_FIFO_L_0_pos 0 
#define DATA_OUT_FIFO_L_0 (uint8_t)(1UL << DATA_OUT_FIFO_L_0_pos) 
#define DATA_OUT_FIFO_H_7_pos 7 
#define DATA_OUT_FIFO_H_7 (uint8_t)(1UL << DATA_OUT_FIFO_H_7_pos) 
#define DATA_OUT_FIFO_H_6_pos 6 
#define DATA_OUT_FIFO_H_6 (uint8_t)(1UL << DATA_OUT_FIFO_H_6_pos) 
#define DATA_OUT_FIFO_H_5_pos 5 
#define DATA_OUT_FIFO_H_5 (uint8_t)(1UL << DATA_OUT_FIFO_H_5_pos) 
#define DATA_OUT_FIFO_H_4_pos 4 
#define DATA_OUT_FIFO_H_4 (uint8_t)(1UL << DATA_OUT_FIFO_H_4_pos) 
#define DATA_OUT_FIFO_H_3_pos 3 
#define DATA_OUT_FIFO_H_3 (uint8_t)(1UL << DATA_OUT_FIFO_H_3_pos) 
#define DATA_OUT_FIFO_H_2_pos 2 
#define DATA_OUT_FIFO_H_2 (uint8_t)(1UL << DATA_OUT_FIFO_H_2_pos) 
#define DATA_OUT_FIFO_H_1_pos 1 
#define DATA_OUT_FIFO_H_1 (uint8_t)(1UL << DATA_OUT_FIFO_H_1_pos) 
#define DATA_OUT_FIFO_H_0_pos 0 
#define DATA_OUT_FIFO_H_0 (uint8_t)(1UL << DATA_OUT_FIFO_H_0_pos) 
#define TIMESTAMP0_7_pos 7 
#define TIMESTAMP0_7 (uint8_t)(1UL << TIMESTAMP0_7_pos) 
#define TIMESTAMP0_6_pos 6 
#define TIMESTAMP0_6 (uint8_t)(1UL << TIMESTAMP0_6_pos) 
#define TIMESTAMP0_5_pos 5 
#define TIMESTAMP0_5 (uint8_t)(1UL << TIMESTAMP0_5_pos) 
#define TIMESTAMP0_4_pos 4 
#define TIMESTAMP0_4 (uint8_t)(1UL << TIMESTAMP0_4_pos) 
#define TIMESTAMP0_3_pos 3 
#define TIMESTAMP0_3 (uint8_t)(1UL << TIMESTAMP0_3_pos) 
#define TIMESTAMP0_2_pos 2 
#define TIMESTAMP0_2 (uint8_t)(1UL << TIMESTAMP0_2_pos) 
#define TIMESTAMP0_1_pos 1 
#define TIMESTAMP0_1 (uint8_t)(1UL << TIMESTAMP0_1_pos) 
#define TIMESTAMP0_0_pos 0 
#define TIMESTAMP0_0 (uint8_t)(1UL << TIMESTAMP0_0_pos) 
#define TIMESTAMP1_7_pos 7 
#define TIMESTAMP1_7 (uint8_t)(1UL << TIMESTAMP1_7_pos) 
#define TIMESTAMP1_6_pos 6 
#define TIMESTAMP1_6 (uint8_t)(1UL << TIMESTAMP1_6_pos) 
#define TIMESTAMP1_5_pos 5 
#define TIMESTAMP1_5 (uint8_t)(1UL << TIMESTAMP1_5_pos) 
#define TIMESTAMP1_4_pos 4 
#define TIMESTAMP1_4 (uint8_t)(1UL << TIMESTAMP1_4_pos) 
#define TIMESTAMP1_3_pos 3 
#define TIMESTAMP1_3 (uint8_t)(1UL << TIMESTAMP1_3_pos) 
#define TIMESTAMP1_2_pos 2 
#define TIMESTAMP1_2 (uint8_t)(1UL << TIMESTAMP1_2_pos) 
#define TIMESTAMP1_1_pos 1 
#define TIMESTAMP1_1 (uint8_t)(1UL << TIMESTAMP1_1_pos) 
#define TIMESTAMP1_0_pos 0 
#define TIMESTAMP1_0 (uint8_t)(1UL << TIMESTAMP1_0_pos) 
#define TIMESTAMP2_7_pos 7 
#define TIMESTAMP2_7 (uint8_t)(1UL << TIMESTAMP2_7_pos) 
#define TIMESTAMP2_6_pos 6 
#define TIMESTAMP2_6 (uint8_t)(1UL << TIMESTAMP2_6_pos) 
#define TIMESTAMP2_5_pos 5 
#define TIMESTAMP2_5 (uint8_t)(1UL << TIMESTAMP2_5_pos) 
#define TIMESTAMP2_4_pos 4 
#define TIMESTAMP2_4 (uint8_t)(1UL << TIMESTAMP2_4_pos) 
#define TIMESTAMP2_3_pos 3 
#define TIMESTAMP2_3 (uint8_t)(1UL << TIMESTAMP2_3_pos) 
#define TIMESTAMP2_2_pos 2 
#define TIMESTAMP2_2 (uint8_t)(1UL << TIMESTAMP2_2_pos) 
#define TIMESTAMP2_1_pos 1 
#define TIMESTAMP2_1 (uint8_t)(1UL << TIMESTAMP2_1_pos) 
#define TIMESTAMP2_0_pos 0 
#define TIMESTAMP2_0 (uint8_t)(1UL << TIMESTAMP2_0_pos) 
#define STEP_TIMESTAMP_L_7_pos 7 
#define STEP_TIMESTAMP_L_7 (uint8_t)(1UL << STEP_TIMESTAMP_L_7_pos) 
#define STEP_TIMESTAMP_L_6_pos 6 
#define STEP_TIMESTAMP_L_6 (uint8_t)(1UL << STEP_TIMESTAMP_L_6_pos) 
#define STEP_TIMESTAMP_L_5_pos 5 
#define STEP_TIMESTAMP_L_5 (uint8_t)(1UL << STEP_TIMESTAMP_L_5_pos) 
#define STEP_TIMESTAMP_L_4_pos 4 
#define STEP_TIMESTAMP_L_4 (uint8_t)(1UL << STEP_TIMESTAMP_L_4_pos) 
#define STEP_TIMESTAMP_L_3_pos 3 
#define STEP_TIMESTAMP_L_3 (uint8_t)(1UL << STEP_TIMESTAMP_L_3_pos) 
#define STEP_TIMESTAMP_L_2_pos 2 
#define STEP_TIMESTAMP_L_2 (uint8_t)(1UL << STEP_TIMESTAMP_L_2_pos) 
#define STEP_TIMESTAMP_L_1_pos 1 
#define STEP_TIMESTAMP_L_1 (uint8_t)(1UL << STEP_TIMESTAMP_L_1_pos) 
#define STEP_TIMESTAMP_L_0_pos 0 
#define STEP_TIMESTAMP_L_0 (uint8_t)(1UL << STEP_TIMESTAMP_L_0_pos) 
#define STEP_TIMESTAMP_H_7_pos 7 
#define STEP_TIMESTAMP_H_7 (uint8_t)(1UL << STEP_TIMESTAMP_H_7_pos) 
#define STEP_TIMESTAMP_H_6_pos 6 
#define STEP_TIMESTAMP_H_6 (uint8_t)(1UL << STEP_TIMESTAMP_H_6_pos) 
#define STEP_TIMESTAMP_H_5_pos 5 
#define STEP_TIMESTAMP_H_5 (uint8_t)(1UL << STEP_TIMESTAMP_H_5_pos) 
#define STEP_TIMESTAMP_H_4_pos 4 
#define STEP_TIMESTAMP_H_4 (uint8_t)(1UL << STEP_TIMESTAMP_H_4_pos) 
#define STEP_TIMESTAMP_H_3_pos 3 
#define STEP_TIMESTAMP_H_3 (uint8_t)(1UL << STEP_TIMESTAMP_H_3_pos) 
#define STEP_TIMESTAMP_H_2_pos 2 
#define STEP_TIMESTAMP_H_2 (uint8_t)(1UL << STEP_TIMESTAMP_H_2_pos) 
#define STEP_TIMESTAMP_H_1_pos 1 
#define STEP_TIMESTAMP_H_1 (uint8_t)(1UL << STEP_TIMESTAMP_H_1_pos) 
#define STEP_TIMESTAMP_H_0_pos 0 
#define STEP_TIMESTAMP_H_0 (uint8_t)(1UL << STEP_TIMESTAMP_H_0_pos) 
#define STEP_COUNTER_L_7_pos 7 
#define STEP_COUNTER_L_7 (uint8_t)(1UL << STEP_COUNTER_L_7_pos) 
#define STEP_COUNTER_L_6_pos 6 
#define STEP_COUNTER_L_6 (uint8_t)(1UL << STEP_COUNTER_L_6_pos) 
#define STEP_COUNTER_L_5_pos 5 
#define STEP_COUNTER_L_5 (uint8_t)(1UL << STEP_COUNTER_L_5_pos) 
#define STEP_COUNTER_L_4_pos 4 
#define STEP_COUNTER_L_4 (uint8_t)(1UL << STEP_COUNTER_L_4_pos) 
#define STEP_COUNTER_L_3_pos 3 
#define STEP_COUNTER_L_3 (uint8_t)(1UL << STEP_COUNTER_L_3_pos) 
#define STEP_COUNTER_L_2_pos 2 
#define STEP_COUNTER_L_2 (uint8_t)(1UL << STEP_COUNTER_L_2_pos) 
#define STEP_COUNTER_L_1_pos 1 
#define STEP_COUNTER_L_1 (uint8_t)(1UL << STEP_COUNTER_L_1_pos) 
#define STEP_COUNTER_L_0_pos 0 
#define STEP_COUNTER_L_0 (uint8_t)(1UL << STEP_COUNTER_L_0_pos) 
#define STEP_COUNTER_H_7_pos 7 
#define STEP_COUNTER_H_7 (uint8_t)(1UL << STEP_COUNTER_H_7_pos) 
#define STEP_COUNTER_H_6_pos 6 
#define STEP_COUNTER_H_6 (uint8_t)(1UL << STEP_COUNTER_H_6_pos) 
#define STEP_COUNTER_H_5_pos 5 
#define STEP_COUNTER_H_5 (uint8_t)(1UL << STEP_COUNTER_H_5_pos) 
#define STEP_COUNTER_H_4_pos 4 
#define STEP_COUNTER_H_4 (uint8_t)(1UL << STEP_COUNTER_H_4_pos) 
#define STEP_COUNTER_H_3_pos 3 
#define STEP_COUNTER_H_3 (uint8_t)(1UL << STEP_COUNTER_H_3_pos) 
#define STEP_COUNTER_H_2_pos 2 
#define STEP_COUNTER_H_2 (uint8_t)(1UL << STEP_COUNTER_H_2_pos) 
#define STEP_COUNTER_H_1_pos 1 
#define STEP_COUNTER_H_1 (uint8_t)(1UL << STEP_COUNTER_H_1_pos) 
#define STEP_COUNTER_H_0_pos 0 
#define STEP_COUNTER_H_0 (uint8_t)(1UL << STEP_COUNTER_H_0_pos) 
#define SHub13_7_pos 7 
#define SHub13_7 (uint8_t)(1UL << SHub13_7_pos) 
#define SHub13_6_pos 6 
#define SHub13_6 (uint8_t)(1UL << SHub13_6_pos) 
#define SHub13_5_pos 5 
#define SHub13_5 (uint8_t)(1UL << SHub13_5_pos) 
#define SHub13_4_pos 4 
#define SHub13_4 (uint8_t)(1UL << SHub13_4_pos) 
#define SHub13_3_pos 3 
#define SHub13_3 (uint8_t)(1UL << SHub13_3_pos) 
#define SHub13_2_pos 2 
#define SHub13_2 (uint8_t)(1UL << SHub13_2_pos) 
#define SHub13_1_pos 1 
#define SHub13_1 (uint8_t)(1UL << SHub13_1_pos) 
#define SHub13_0_pos 0 
#define SHub13_0 (uint8_t)(1UL << SHub13_0_pos) 
#define SHub14_7_pos 7 
#define SHub14_7 (uint8_t)(1UL << SHub14_7_pos) 
#define SHub14_6_pos 6 
#define SHub14_6 (uint8_t)(1UL << SHub14_6_pos) 
#define SHub14_5_pos 5 
#define SHub14_5 (uint8_t)(1UL << SHub14_5_pos) 
#define SHub14_4_pos 4 
#define SHub14_4 (uint8_t)(1UL << SHub14_4_pos) 
#define SHub14_3_pos 3 
#define SHub14_3 (uint8_t)(1UL << SHub14_3_pos) 
#define SHub14_2_pos 2 
#define SHub14_2 (uint8_t)(1UL << SHub14_2_pos) 
#define SHub14_1_pos 1 
#define SHub14_1 (uint8_t)(1UL << SHub14_1_pos) 
#define SHub14_0_pos 0 
#define SHub14_0 (uint8_t)(1UL << SHub14_0_pos) 
#define SHub15_7_pos 7 
#define SHub15_7 (uint8_t)(1UL << SHub15_7_pos) 
#define SHub15_6_pos 6 
#define SHub15_6 (uint8_t)(1UL << SHub15_6_pos) 
#define SHub15_5_pos 5 
#define SHub15_5 (uint8_t)(1UL << SHub15_5_pos) 
#define SHub15_4_pos 4 
#define SHub15_4 (uint8_t)(1UL << SHub15_4_pos) 
#define SHub15_3_pos 3 
#define SHub15_3 (uint8_t)(1UL << SHub15_3_pos) 
#define SHub15_2_pos 2 
#define SHub15_2 (uint8_t)(1UL << SHub15_2_pos) 
#define SHub15_1_pos 1 
#define SHub15_1 (uint8_t)(1UL << SHub15_1_pos) 
#define SHub15_0_pos 0 
#define SHub15_0 (uint8_t)(1UL << SHub15_0_pos) 
#define SHub16_7_pos 7 
#define SHub16_7 (uint8_t)(1UL << SHub16_7_pos) 
#define SHub16_6_pos 6 
#define SHub16_6 (uint8_t)(1UL << SHub16_6_pos) 
#define SHub16_5_pos 5 
#define SHub16_5 (uint8_t)(1UL << SHub16_5_pos) 
#define SHub16_4_pos 4 
#define SHub16_4 (uint8_t)(1UL << SHub16_4_pos) 
#define SHub16_3_pos 3 
#define SHub16_3 (uint8_t)(1UL << SHub16_3_pos) 
#define SHub16_2_pos 2 
#define SHub16_2 (uint8_t)(1UL << SHub16_2_pos) 
#define SHub16_1_pos 1 
#define SHub16_1 (uint8_t)(1UL << SHub16_1_pos) 
#define SHub16_0_pos 0 
#define SHub16_0 (uint8_t)(1UL << SHub16_0_pos) 
#define SHub17_7_pos 7 
#define SHub17_7 (uint8_t)(1UL << SHub17_7_pos) 
#define SHub17_6_pos 6 
#define SHub17_6 (uint8_t)(1UL << SHub17_6_pos) 
#define SHub17_5_pos 5 
#define SHub17_5 (uint8_t)(1UL << SHub17_5_pos) 
#define SHub17_4_pos 4 
#define SHub17_4 (uint8_t)(1UL << SHub17_4_pos) 
#define SHub17_3_pos 3 
#define SHub17_3 (uint8_t)(1UL << SHub17_3_pos) 
#define SHub17_2_pos 2 
#define SHub17_2 (uint8_t)(1UL << SHub17_2_pos) 
#define SHub17_1_pos 1 
#define SHub17_1 (uint8_t)(1UL << SHub17_1_pos) 
#define SHub17_0_pos 0 
#define SHub17_0 (uint8_t)(1UL << SHub17_0_pos) 
#define SHub18_7_pos 7 
#define SHub18_7 (uint8_t)(1UL << SHub18_7_pos) 
#define SHub18_6_pos 6 
#define SHub18_6 (uint8_t)(1UL << SHub18_6_pos) 
#define SHub18_5_pos 5 
#define SHub18_5 (uint8_t)(1UL << SHub18_5_pos) 
#define SHub18_4_pos 4 
#define SHub18_4 (uint8_t)(1UL << SHub18_4_pos) 
#define SHub18_3_pos 3 
#define SHub18_3 (uint8_t)(1UL << SHub18_3_pos) 
#define SHub18_2_pos 2 
#define SHub18_2 (uint8_t)(1UL << SHub18_2_pos) 
#define SHub18_1_pos 1 
#define SHub18_1 (uint8_t)(1UL << SHub18_1_pos) 
#define SHub18_0_pos 0 
#define SHub18_0 (uint8_t)(1UL << SHub18_0_pos) 
#define STEP_COUNT_DELTA_IA_pos 7 
#define STEP_COUNT_DELTA_IA (uint8_t)(1UL << STEP_COUNT_DELTA_IA_pos) 
#define SIGN_MOTION_IA_pos 6 
#define SIGN_MOTION_IA (uint8_t)(1UL << SIGN_MOTION_IA_pos) 
#define TILT_IA_pos 5 
#define TILT_IA (uint8_t)(1UL << TILT_IA_pos) 
#define STEP_DETECTED_pos 4 
#define STEP_DETECTED (uint8_t)(1UL << STEP_DETECTED_pos) 
#define STEP_OVERFLOW_pos 3 
#define STEP_OVERFLOW (uint8_t)(1UL << STEP_OVERFLOW_pos) 
#define HI_FAIL_pos 2 
#define HI_FAIL (uint8_t)(1UL << HI_FAIL_pos) 
#define SI_END_OP_pos 1 
#define SI_END_OP (uint8_t)(1UL << SI_END_OP_pos) 
#define SENSORHUB_END_OP_pos 0 
#define SENSORHUB_END_OP (uint8_t)(1UL << SENSORHUB_END_OP_pos) 
#define SLAVE3_NACK_pos 6 
#define SLAVE3_NACK (uint8_t)(1UL << SLAVE3_NACK_pos) 
#define SLAVE2_NACK_pos 5 
#define SLAVE2_NACK (uint8_t)(1UL << SLAVE2_NACK_pos) 
#define SLAVE1_NACK_pos 4 
#define SLAVE1_NACK (uint8_t)(1UL << SLAVE1_NACK_pos) 
#define SLAVE0_NACK_pos 3 
#define SLAVE0_NACK (uint8_t)(1UL << SLAVE0_NACK_pos) 
#define WRIST_TILT_IA_pos 0 
#define WRIST_TILT_IA_vlaue (uint8_t)(1UL << WRIST_TILT_IA_pos) 
#define WRIST_TILT_IA_Xpos_pos 7 
#define WRIST_TILT_IA_Xpos (uint8_t)(1UL << WRIST_TILT_IA_Xpos_pos) 
#define WRIST_TILT_IA_Xneg_pos 6 
#define WRIST_TILT_IA_Xneg (uint8_t)(1UL << WRIST_TILT_IA_Xneg_pos) 
#define WRIST_TILT_IA_Ypos_pos 5 
#define WRIST_TILT_IA_Ypos (uint8_t)(1UL << WRIST_TILT_IA_Ypos_pos) 
#define WRIST_TILT_IA_Yneg_pos 4 
#define WRIST_TILT_IA_Yneg (uint8_t)(1UL << WRIST_TILT_IA_Yneg_pos) 
#define WRIST_TILT_IA_Zpos_pos 3 
#define WRIST_TILT_IA_Zpos (uint8_t)(1UL << WRIST_TILT_IA_Zpos_pos) 
#define WRIST_TILT_IA_Zneg_pos 2 
#define WRIST_TILT_IA_Zneg (uint8_t)(1UL << WRIST_TILT_IA_Zneg_pos) 
#define INTERRUPTS_ENABLE_pos 7 
#define INTERRUPTS_ENABLE (uint8_t)(1UL << INTERRUPTS_ENABLE_pos) 
#define INACT_EN1_pos 6 
#define INACT_EN1 (uint8_t)(1UL << INACT_EN1_pos) 
#define INACT_EN0_pos 5 
#define INACT_EN0 (uint8_t)(1UL << INACT_EN0_pos) 
#define SLOPE_FDS_pos 4 
#define SLOPE_FDS (uint8_t)(1UL << SLOPE_FDS_pos) 
#define TAP_X_EN_pos 3 
#define TAP_X_EN (uint8_t)(1UL << TAP_X_EN_pos) 
#define TAP_Y_EN_pos 2 
#define TAP_Y_EN (uint8_t)(1UL << TAP_Y_EN_pos) 
#define TAP_Z_EN_pos 1 
#define TAP_Z_EN (uint8_t)(1UL << TAP_Z_EN_pos) 
#define LIR_pos 0 
#define LIR (uint8_t)(1UL << LIR_pos) 
#define D4D_EN_pos 7 
#define D4D_EN (uint8_t)(1UL << D4D_EN_pos) 
#define SIXD_THS1_pos 6 
#define SIXD_THS1 (uint8_t)(1UL << SIXD_THS1_pos) 
#define SIXD_THS0_pos 5 
#define SIXD_THS0 (uint8_t)(1UL << SIXD_THS0_pos) 
#define TAP_THS4_pos 4 
#define TAP_THS4 (uint8_t)(1UL << TAP_THS4_pos) 
#define TAP_THS3_pos 3 
#define TAP_THS3 (uint8_t)(1UL << TAP_THS3_pos) 
#define TAP_THS2_pos 2 
#define TAP_THS2 (uint8_t)(1UL << TAP_THS2_pos) 
#define TAP_THS1_pos 1 
#define TAP_THS1 (uint8_t)(1UL << TAP_THS1_pos) 
#define TAP_THS0_pos 0 
#define TAP_THS0 (uint8_t)(1UL << TAP_THS0_pos) 
#define DUR3_pos 7 
#define DUR3 (uint8_t)(1UL << DUR3_pos) 
#define DUR2_pos 6 
#define DUR2 (uint8_t)(1UL << DUR2_pos) 
#define DUR1_pos 5 
#define DUR1 (uint8_t)(1UL << DUR1_pos) 
#define DUR0_pos 4 
#define DUR0 (uint8_t)(1UL << DUR0_pos) 
#define QUIET1_pos 3 
#define QUIET1 (uint8_t)(1UL << QUIET1_pos) 
#define QUIET0_pos 2 
#define QUIET0 (uint8_t)(1UL << QUIET0_pos) 
#define SHOCK1_pos 1 
#define SHOCK1 (uint8_t)(1UL << SHOCK1_pos) 
#define SHOCK0_pos 0 
#define SHOCK0 (uint8_t)(1UL << SHOCK0_pos) 
#define SINGLE_DOUBLE_TAP_pos 7 
#define SINGLE_DOUBLE_TAP (uint8_t)(1UL << SINGLE_DOUBLE_TAP_pos) 
#define WK_THS5_pos 5 
#define WK_THS5 (uint8_t)(1UL << WK_THS5_pos) 
#define WK_THS4_pos 4 
#define WK_THS4 (uint8_t)(1UL << WK_THS4_pos) 
#define WK_THS3_pos 3 
#define WK_THS3 (uint8_t)(1UL << WK_THS3_pos) 
#define WK_THS2_pos 2 
#define WK_THS2 (uint8_t)(1UL << WK_THS2_pos) 
#define WK_THS1_pos 1 
#define WK_THS1 (uint8_t)(1UL << WK_THS1_pos) 
#define WK_THS0_pos 0 
#define WK_THS0 (uint8_t)(1UL << WK_THS0_pos) 
#define FF_DUR5_pos 7 
#define FF_DUR5 (uint8_t)(1UL << FF_DUR5_pos) 
#define WAKE_DUR1_pos 6 
#define WAKE_DUR1 (uint8_t)(1UL << WAKE_DUR1_pos) 
#define WAKE_DUR0_pos 5 
#define WAKE_DUR0 (uint8_t)(1UL << WAKE_DUR0_pos) 
#define TIMER_HR_pos 4 
#define TIMER_HR (uint8_t)(1UL << TIMER_HR_pos) 
#define SLEEP_DUR3_pos 3 
#define SLEEP_DUR3 (uint8_t)(1UL << SLEEP_DUR3_pos) 
#define SLEEP_DUR2_pos 2 
#define SLEEP_DUR2 (uint8_t)(1UL << SLEEP_DUR2_pos) 
#define SLEEP_DUR1_pos 1 
#define SLEEP_DUR1 (uint8_t)(1UL << SLEEP_DUR1_pos) 
#define SLEEP_DUR0_pos 0 
#define SLEEP_DUR0 (uint8_t)(1UL << SLEEP_DUR0_pos) 
#define FF_DUR4_pos 7 
#define FF_DUR4 (uint8_t)(1UL << FF_DUR4_pos) 
#define FF_DUR3_pos 6 
#define FF_DUR3 (uint8_t)(1UL << FF_DUR3_pos) 
#define FF_DUR2_pos 5 
#define FF_DUR2 (uint8_t)(1UL << FF_DUR2_pos) 
#define FF_DUR1_pos 4 
#define FF_DUR1 (uint8_t)(1UL << FF_DUR1_pos) 
#define FF_DUR0_pos 3 
#define FF_DUR0 (uint8_t)(1UL << FF_DUR0_pos) 
#define FF_THS2_pos 2 
#define FF_THS2 (uint8_t)(1UL << FF_THS2_pos) 
#define FF_THS1_pos 1 
#define FF_THS1 (uint8_t)(1UL << FF_THS1_pos) 
#define FF_THS0_pos 0 
#define FF_THS0 (uint8_t)(1UL << FF_THS0_pos) 
#define INT1_INACT_STATE_pos 7 
#define INT1_INACT_STATE (uint8_t)(1UL << INT1_INACT_STATE_pos) 
#define INT1_SINGLE_TAP_pos 6 
#define INT1_SINGLE_TAP (uint8_t)(1UL << INT1_SINGLE_TAP_pos) 
#define INT1_WU_pos 5 
#define INT1_WU (uint8_t)(1UL << INT1_WU_pos) 
#define INT1_FF_pos 4 
#define INT1_FF (uint8_t)(1UL << INT1_FF_pos) 
#define INT1_DOUBLE_TAP_pos 3 
#define INT1_DOUBLE_TAP (uint8_t)(1UL << INT1_DOUBLE_TAP_pos) 
#define INT1_6D_pos 2 
#define INT1_6D (uint8_t)(1UL << INT1_6D_pos) 
#define INT1_TILT_pos 1 
#define INT1_TILT (uint8_t)(1UL << INT1_TILT_pos) 
#define INT1_TIMER_pos 0 
#define INT1_TIMER (uint8_t)(1UL << INT1_TIMER_pos) 
#define INT2_INACT_STATE_pos 7 
#define INT2_INACT_STATE (uint8_t)(1UL << INT2_INACT_STATE_pos) 
#define INT2_SINGLE_TAP_pos 6 
#define INT2_SINGLE_TAP (uint8_t)(1UL << INT2_SINGLE_TAP_pos) 
#define INT2_WU_pos 5 
#define INT2_WU (uint8_t)(1UL << INT2_WU_pos) 
#define INT2_FF_pos 4 
#define INT2_FF (uint8_t)(1UL << INT2_FF_pos) 
#define INT2_DOUBLE_TAP_pos 3 
#define INT2_DOUBLE_TAP (uint8_t)(1UL << INT2_DOUBLE_TAP_pos) 
#define INT2_6D_pos 2 
#define INT2_6D (uint8_t)(1UL << INT2_6D_pos) 
#define INT2_TILT_pos 1 
#define INT2_TILT (uint8_t)(1UL << INT2_TILT_pos) 
#define INT2_IRON_pos 0 
#define INT2_IRON (uint8_t)(1UL << INT2_IRON_pos) 
#define MASTER_CMD_CODE7_pos 7 
#define MASTER_CMD_CODE7 (uint8_t)(1UL << MASTER_CMD_CODE7_pos) 
#define MASTER_CMD_CODE6_pos 6 
#define MASTER_CMD_CODE6 (uint8_t)(1UL << MASTER_CMD_CODE6_pos) 
#define MASTER_CMD_CODE5_pos 5 
#define MASTER_CMD_CODE5 (uint8_t)(1UL << MASTER_CMD_CODE5_pos) 
#define MASTER_CMD_CODE4_pos 4 
#define MASTER_CMD_CODE4 (uint8_t)(1UL << MASTER_CMD_CODE4_pos) 
#define MASTER_CMD_CODE3_pos 3 
#define MASTER_CMD_CODE3 (uint8_t)(1UL << MASTER_CMD_CODE3_pos) 
#define MASTER_CMD_CODE2_pos 2 
#define MASTER_CMD_CODE2 (uint8_t)(1UL << MASTER_CMD_CODE2_pos) 
#define MASTER_CMD_CODE1_pos 1 
#define MASTER_CMD_CODE1 (uint8_t)(1UL << MASTER_CMD_CODE1_pos) 
#define MASTER_CMD_CODE0_pos 0 
#define MASTER_CMD_CODE0 (uint8_t)(1UL << MASTER_CMD_CODE0_pos) 
#define ERROR_CODE7_pos 7 
#define ERROR_CODE7 (uint8_t)(1UL << ERROR_CODE7_pos) 
#define ERROR_CODE6_pos 6 
#define ERROR_CODE6 (uint8_t)(1UL << ERROR_CODE6_pos) 
#define ERROR_CODE5_pos 5 
#define ERROR_CODE5 (uint8_t)(1UL << ERROR_CODE5_pos) 
#define ERROR_CODE4_pos 4 
#define ERROR_CODE4 (uint8_t)(1UL << ERROR_CODE4_pos) 
#define ERROR_CODE3_pos 3 
#define ERROR_CODE3 (uint8_t)(1UL << ERROR_CODE3_pos) 
#define ERROR_CODE2_pos 2 
#define ERROR_CODE2 (uint8_t)(1UL << ERROR_CODE2_pos) 
#define ERROR_CODE1_pos 1 
#define ERROR_CODE1 (uint8_t)(1UL << ERROR_CODE1_pos) 
#define ERROR_CODE0_pos 0 
#define ERROR_CODE0 (uint8_t)(1UL << ERROR_CODE0_pos) 
#define D7_pos 7 
#define D7 (uint8_t)(1UL << D7_pos) 
#define D6_pos 6 
#define D6 (uint8_t)(1UL << D6_pos) 
#define D5_pos 5 
#define D5 (uint8_t)(1UL << D5_pos) 
#define D4_pos 4 
#define D4 (uint8_t)(1UL << D4_pos) 
#define D3_pos 3 
#define D3 (uint8_t)(1UL << D3_pos) 
#define D2_pos 2 
#define D2 (uint8_t)(1UL << D2_pos) 
#define D1_pos 1 
#define D1 (uint8_t)(1UL << D1_pos) 
#define D0_pos 0 
#define D0 (uint8_t)(1UL << D0_pos) 
#define D15_pos 7 
#define D15 (uint8_t)(1UL << D15_pos) 
#define D14_pos 6 
#define D14 (uint8_t)(1UL << D14_pos) 
#define D13_pos 5 
#define D13 (uint8_t)(1UL << D13_pos) 
#define D12_pos 4 
#define D12 (uint8_t)(1UL << D12_pos) 
#define D11_pos 3 
#define D11 (uint8_t)(1UL << D11_pos) 
#define D10_pos 2 
#define D10 (uint8_t)(1UL << D10_pos) 
#define D9_pos 1 
#define D9 (uint8_t)(1UL << D9_pos) 
#define D8_pos 0 
#define D8 (uint8_t)(1UL << D8_pos) 
#define D7_pos 7 
#define D7 (uint8_t)(1UL << D7_pos) 
#define D6_pos 6 
#define D6 (uint8_t)(1UL << D6_pos) 
#define D5_pos 5 
#define D5 (uint8_t)(1UL << D5_pos) 
#define D4_pos 4 
#define D4 (uint8_t)(1UL << D4_pos) 
#define D3_pos 3 
#define D3 (uint8_t)(1UL << D3_pos) 
#define D2_pos 2 
#define D2 (uint8_t)(1UL << D2_pos) 
#define D1_pos 1 
#define D1 (uint8_t)(1UL << D1_pos) 
#define D0_pos 0 
#define D0 (uint8_t)(1UL << D0_pos) 
#define D15_pos 7 
#define D15 (uint8_t)(1UL << D15_pos) 
#define D14_pos 6 
#define D14 (uint8_t)(1UL << D14_pos) 
#define D13_pos 5 
#define D13 (uint8_t)(1UL << D13_pos) 
#define D12_pos 4 
#define D12 (uint8_t)(1UL << D12_pos) 
#define D11_pos 3 
#define D11 (uint8_t)(1UL << D11_pos) 
#define D10_pos 2 
#define D10 (uint8_t)(1UL << D10_pos) 
#define D9_pos 1 
#define D9 (uint8_t)(1UL << D9_pos) 
#define D8_pos 0 
#define D8 (uint8_t)(1UL << D8_pos) 
#define D7_pos 7 
#define D7 (uint8_t)(1UL << D7_pos) 
#define D6_pos 6 
#define D6 (uint8_t)(1UL << D6_pos) 
#define D5_pos 5 
#define D5 (uint8_t)(1UL << D5_pos) 
#define D4_pos 4 
#define D4 (uint8_t)(1UL << D4_pos) 
#define D3_pos 3 
#define D3 (uint8_t)(1UL << D3_pos) 
#define D2_pos 2 
#define D2 (uint8_t)(1UL << D2_pos) 
#define D1_pos 1 
#define D1 (uint8_t)(1UL << D1_pos) 
#define D0_pos 0 
#define D0 (uint8_t)(1UL << D0_pos) 
#define D15_pos 7 
#define D15 (uint8_t)(1UL << D15_pos) 
#define D14_pos 6 
#define D14 (uint8_t)(1UL << D14_pos) 
#define D13_pos 5 
#define D13 (uint8_t)(1UL << D13_pos) 
#define D12_pos 4 
#define D12 (uint8_t)(1UL << D12_pos) 
#define D11_pos 3 
#define D11 (uint8_t)(1UL << D11_pos) 
#define D10_pos 2 
#define D10 (uint8_t)(1UL << D10_pos) 
#define D9_pos 1 
#define D9 (uint8_t)(1UL << D9_pos) 
#define D8_pos 0 
#define D8 (uint8_t)(1UL << D8_pos) 
#define X_OFS_USR_7_pos 7 
#define X_OFS_USR_7 (uint8_t)(1UL << X_OFS_USR_7_pos) 
#define X_OFS_USR_6_pos 6 
#define X_OFS_USR_6 (uint8_t)(1UL << X_OFS_USR_6_pos) 
#define X_OFS_USR_5_pos 5 
#define X_OFS_USR_5 (uint8_t)(1UL << X_OFS_USR_5_pos) 
#define X_OFS_USR_4_pos 4 
#define X_OFS_USR_4 (uint8_t)(1UL << X_OFS_USR_4_pos) 
#define X_OFS_USR_3_pos 3 
#define X_OFS_USR_3 (uint8_t)(1UL << X_OFS_USR_3_pos) 
#define X_OFS_USR_2_pos 2 
#define X_OFS_USR_2 (uint8_t)(1UL << X_OFS_USR_2_pos) 
#define X_OFS_USR_1_pos 1 
#define X_OFS_USR_1 (uint8_t)(1UL << X_OFS_USR_1_pos) 
#define X_OFS_USR_0_pos 0 
#define X_OFS_USR_0 (uint8_t)(1UL << X_OFS_USR_0_pos) 
#define Y_OFS_USR_7_pos 7 
#define Y_OFS_USR_7 (uint8_t)(1UL << Y_OFS_USR_7_pos) 
#define Y_OFS_USR_6_pos 6 
#define Y_OFS_USR_6 (uint8_t)(1UL << Y_OFS_USR_6_pos) 
#define Y_OFS_USR_5_pos 5 
#define Y_OFS_USR_5 (uint8_t)(1UL << Y_OFS_USR_5_pos) 
#define Y_OFS_USR_4_pos 4 
#define Y_OFS_USR_4 (uint8_t)(1UL << Y_OFS_USR_4_pos) 
#define Y_OFS_USR_3_pos 3 
#define Y_OFS_USR_3 (uint8_t)(1UL << Y_OFS_USR_3_pos) 
#define Y_OFS_USR_2_pos 2 
#define Y_OFS_USR_2 (uint8_t)(1UL << Y_OFS_USR_2_pos) 
#define Y_OFS_USR_1_pos 1 
#define Y_OFS_USR_1 (uint8_t)(1UL << Y_OFS_USR_1_pos) 
#define Y_OFS_USR_0_pos 0 
#define Y_OFS_USR_0 (uint8_t)(1UL << Y_OFS_USR_0_pos) 
#define Z_OFS_USR_7_pos 7 
#define Z_OFS_USR_7 (uint8_t)(1UL << Z_OFS_USR_7_pos) 
#define Z_OFS_USR_6_pos 6 
#define Z_OFS_USR_6 (uint8_t)(1UL << Z_OFS_USR_6_pos) 
#define Z_OFS_USR_5_pos 5 
#define Z_OFS_USR_5 (uint8_t)(1UL << Z_OFS_USR_5_pos) 
#define Z_OFS_USR_4_pos 4 
#define Z_OFS_USR_4 (uint8_t)(1UL << Z_OFS_USR_4_pos) 
#define Z_OFS_USR_3_pos 3 
#define Z_OFS_USR_3 (uint8_t)(1UL << Z_OFS_USR_3_pos) 
#define Z_OFS_USR_2_pos 2 
#define Z_OFS_USR_2 (uint8_t)(1UL << Z_OFS_USR_2_pos) 
#define Z_OFS_USR_1_pos 1 
#define Z_OFS_USR_1 (uint8_t)(1UL << Z_OFS_USR_1_pos) 
#define Z_OFS_USR_0_pos 0 
#define Z_OFS_USR_0 (uint8_t)(1UL << Z_OFS_USR_0_pos) 
#endif
