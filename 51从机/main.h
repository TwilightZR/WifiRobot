/***********************************************************
*  �ļ���   ��main.h
*  ����ļ� ����
*  �ļ����� ����������main.c�ж���ļ�������.
*  ��    �� : ��  ǿ
*  ��    �� : 2007-12-14
*  ��    �� : v1.0
*
***********************************************************/

#ifndef __MAIN_H__
#define __MAIN_H__

#define  U16  unsigned int


unsigned char BubbleSort(unsigned int array[],unsigned char n);
void exchange(unsigned int *a,unsigned int *b);
void Watchdog_Init();
void clrwdt();
void SMBus_Init (void);
void Timer1_Init (void);
void SMBus_ISR (void);

extern void DC_Motor(unsigned char motor_num,
              unsigned char direction, unsigned char motor_speed);
extern void PWM_Init(void);




#endif 
