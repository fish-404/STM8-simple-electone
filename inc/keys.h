#ifndef __KEYS_H
#define __KEYS_H

/* ���ư����궨�� */
#define KEY0 PA_IDR_IDR4        // ����ģʽ
#define KEY1 PA_IDR_IDR5        // ������
#define KEY2 PA_IDR_IDR6        // ����ѡ��ģʽ

/* �ټ��궨�� */
#define KEY_C4 PC_IDR_IDR1
#define KEY_D4 PC_IDR_IDR2
#define KEY_E4 PC_IDR_IDR3
#define KEY_F4 PC_IDR_IDR4
#define KEY_G4 PC_IDR_IDR5
#define KEY_A4 PC_IDR_IDR6
#define KEY_B4 PC_IDR_IDR7

#define KEY_C5 PB_IDR_IDR0
#define KEY_D5 PB_IDR_IDR1
#define KEY_E5 PB_IDR_IDR2
#define KEY_F5 PB_IDR_IDR3
#define KEY_G5 PB_IDR_IDR4
#define KEY_A5 PB_IDR_IDR5
#define KEY_B5 PB_IDR_IDR6

void Keys_Init();       // �ټ���ʼ������
void KeysMode_Init();   // ���ư�����ʼ������

#endif