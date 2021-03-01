#include <stdio.h>
// 导入wiringPi/I2C库
#include <wiringPi.h>
#include <wiringPiI2C.h>

int main(void){
  int state = 0;
  // 定义I2C相关参数
  int fd_i2c;
  wiringPiSetup();
  fd_i2c = wiringPiI2CSetup(0x0d);
  if (fd_i2c < 0){
    fprintf(stderr, "fail to init I2C\n");
    return -1;
  }
  
  while(1){
    wiringPiI2CWriteReg8(fd_i2c, 0x08, 0x09);
  }
  return 0;
}
