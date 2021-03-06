OPERATE_RET light_drv_pwm_init(VOID);
VOID light_pwm_send_data(unsigned char *ptr,uint16_t number);

OPERATE_RET light_drv_i2c_init(unsigned char gpio_sda, unsigned char gpio_scl);

void light_sm16726b_send_data(unsigned char gpio_sda, unsigned char gpio_scl,unsigned char *ptr,uint16_t number);


unsigned char color_read_correct(unsigned char red);
unsigned char color_green_correct(unsigned char green);
unsigned char color_blue_correct(unsigned char blue);

