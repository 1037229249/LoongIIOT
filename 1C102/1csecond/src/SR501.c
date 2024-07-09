/*
HC-SR501 �����Ӧģ��
���ִ�����ʽ����������ѡ��
a�� �����ظ�������ʽ:����Ӧ����ߵ�ƽ�� ��ʱʱ���һ������ ������Զ��Ӹߵ�
ƽ��ɵ͵�ƽ��
b�� ���ظ�������ʽ������Ӧ����ߵ�ƽ������ʱʱ����ڣ���������������Ӧ
��Χ����������һֱ���ָߵ�ƽ��ֱ�����뿪�����ʱ���ߵ�ƽ��Ϊ�͵�ƽ����Ӧģ���
�⵽�����ÿһ�λ����Զ�˳��һ����ʱʱ��Σ� ���������һ�λ��ʱ��Ϊ��ʱ
ʱ�����ʼ��)

*/

#include "SR501.h"
#include "ls1x_gpio.h"

#define SR 13

void SR501_Init(void)
{
    gpio_set_direction(SR,0);
}

uint8_t SR501_GetValue(void)
{
    uint8_t srsensor = gpio_get_pin(SR);
    return srsensor;
}