#include "ls1x.h"
#include "ls1x_gpio.h"
#include "ls1x_wdg.h"
#include "ls1x_common.h"
#include "ls1x_exti.h"
#include "ls1c102_interrupt.h"
#include "ls1c102_touch.h"
#include "ls1c102_ptimer.h"
#include "ls1c102_i2c.h"
#include "ls1x_uart.h"
#include "Config.h"
#include "queue.h"
#include "lora.h"

#define	BEBUG_IRQ()  printf("\r\n < IRQ: %d func:%s   >\r\n",__LINE__,__FUNCTION__)
void (* const exti_irq_handle[32])(void); 

void exti_gpioa0_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_A0); 
}
void exti_gpioa1_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_A1); 
}
void exti_gpioa2_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_A2); 
}
void exti_gpioa3_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_A3); 
}
void exti_gpioa4_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_A4); 
}
void exti_gpioa5_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_A5); 
}
void exti_gpioa6_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_A6); 
}
void exti_gpioa7_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_A7); 
}
void exti_gpiob0_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_B0); 
}
void exti_gpiob1_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_B1); 
}
void exti_gpiob2_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_B2); 
}
void exti_gpiob3_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_B3); 
}
void exti_gpiob4_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_B4); 
}
void exti_gpiob5_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_B5); 
}
void exti_gpiob6_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_B6); 
}
void exti_gpiob7_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_B7); 
}

void exti_gpioc0_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_C0); 
}
void exti_gpioc1_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_C1); 
}
void exti_gpioc2_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_C2); 
}
void exti_gpioc3_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_C3); 
}
void exti_gpioc4_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_C4); 
}
void exti_gpioc5_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_C5); 
}
void exti_gpioc6_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_C6); 
}
void exti_gpioc7_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_C7); 
}
void exti_gpiod0_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_D0); 
}
void exti_gpiod1_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_D1); 
}
void exti_gpiod2_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_D2); 
}
void exti_gpiod3_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_D3); 
}
void exti_gpiod4_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_D4); 
}

void exti_gpiod5_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_D5); 
}
void exti_gpiod6_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_D6); 
}
void exti_gpiod7_irq_handler(void)
{
    BEBUG_IRQ(); 
    EXTI_ClearITPendingBit(EXTI, IRQ_GPIO_D7); 
}
void (* const Ext_IrqHandle[32])(void) =
{
    exti_gpioa0_irq_handler,
    exti_gpioa1_irq_handler,
    exti_gpioa2_irq_handler,
    exti_gpioa3_irq_handler,
    exti_gpioa4_irq_handler,
    exti_gpioa5_irq_handler,
    exti_gpioa6_irq_handler,
    exti_gpioa7_irq_handler,
    exti_gpiob0_irq_handler,
    exti_gpiob1_irq_handler,
    exti_gpiob2_irq_handler,
    exti_gpiob3_irq_handler,
    exti_gpiob4_irq_handler,
    exti_gpiob5_irq_handler,
    exti_gpiob6_irq_handler,
    exti_gpiob7_irq_handler,
    exti_gpioc0_irq_handler,
    exti_gpioc1_irq_handler,
    exti_gpioc2_irq_handler,
    exti_gpioc3_irq_handler,
    exti_gpioc4_irq_handler,
    exti_gpioc5_irq_handler,
    exti_gpioc6_irq_handler,
    exti_gpioc7_irq_handler,
    exti_gpiod0_irq_handler,
    exti_gpiod1_irq_handler,
    exti_gpiod2_irq_handler,
    exti_gpiod3_irq_handler,
    exti_gpiod4_irq_handler,
    exti_gpiod5_irq_handler,
    exti_gpiod6_irq_handler,
    exti_gpiod7_irq_handler,
}; 

void ext_handler(void)
{
    PMU_CMDW = (1 << 24); 
    INT32U regsrc; // = EXTI->EXINT_SRC; 
    INT32U regen; // = EXTI->EXINT_SRC; 
    INT32U irq_no; 
    //BEBUG_IRQ(); 
    regsrc = EXTI->EXINT_SRC; 
    regen = EXTI->EXINT_EN; 
    regsrc = (regsrc & regen); 
    asm("nop"); 

    for(irq_no = 0;  irq_no < 32;  irq_no++)
    {
        if((regsrc>>irq_no) & 0x1)
        {
            Ext_IrqHandle[irq_no](); 
        }
    }
}

void SOFT_INT(void)
{
    printf("\n.............SOFT_INT..............\n\r"); 
    Set_soft_stop(); 
}

/***********************************************************************
 ��������:    	8M��ʱ���жϴ�������
 @param:		��
 @other:     ��
 @return:	��
 @auther :	������
 @time	:	2020��4��9��
 ***********************************************************************/
void TIMER_8M_INT(void)
{
    PMU_CMDW = (1 << 21);  // ����жϱ�־
    Set_Timer_clear(); 
    Set_Timer_Init(8 * 10000);  //  1.25ms
}

/***********************************************************************
 ��������:    	��ʱ�����жϴ�������
 @param:		��
 @other:     ˯���¶�ʱι������ֹϵͳ��λ
 @return:	��
 @auther :	������
 @time	:	2020��4��9��
 ***********************************************************************/
void TIMER_WAKE_INT(void)
{
    //printf("TIMER_WAKE_INT feed WDG!\n\r"); 
    PMU_CMDW = (1 << 16);  // ����жϱ�־
    INT32U SleepEn = PMU_CMDSTS & 0xffffffff; 
    WDG_DogFeed(); 
    (void)SleepEn; 
    //˯�ߺ󣬶�ʱι��������᲻������
    Wake_Set(6);         //��ʱ����ι��
}

/***********************************************************************
 ��������:    	���������жϴ�������
 @param:	��
 @other:        ��
 @return:	��
 @auther :	������
 @time	:	2020��4��9��
 ***********************************************************************/
#define KEY_CANCLE 8
void TOUCH(void)
{
    INT16U KeyChannel; 
    INT8U KeyType; 
    KeyChannel = (TS_STAT >> 16) & 0xfff; 
    KeyType = TS_STAT & 0xf; 
    PMU_CMDW = (1 << 17);  // ����жϱ�־
    TS_STAT = 0xf; 

    Printf_KeyType(KeyType); 
    Printf_KeyChannel(KeyChannel); 
    Printf_KeyVal(); 
}

/***********************************************************************
 ��������:    	����2�����жϴ�������
 @param:		��
 @other:     ��
 @return:	��
 @auther :	������
 @time	:	2020��4��9��
 ***********************************************************************/
void UART2_INT(void)
{
    //Uart0_send("interrupt2\r\n");
    
    PMU_CMDW = (1 << 18); 
    INT8U uart_sr = UART2_IIR; 
    (void)uart_sr; 
    
    //static char receive_Data[1];

    //receive_Data[0]=UART_ReceiveData(UART2); //接收数据
    //Uart2_SendData(receive_Data);       //将接收到的数据从串口2发送出�?
    //Queue_Wirte(&Circular_queue, (uint8_t *)&receive_Data, 1); //向队列中写入数据
  
}






/***********************************************************************
 ��������:    	��������жϴ�������
 @param:		��
 @other:     ���жϿɲ鿴�û��ֲ�
 @return:	��
 @auther :	������
 @time	:	2020��4��9��
 ***********************************************************************/
void BAT_FAIL(void)
{
    uint32_t tmp = (PMU_CMDSTS & 0xf80000)>>19; 
    PMU_CMDW = (PMU_CMDSTS & 0xf80000); 
    switch(tmp)
    {
        case 0x1:
            printf("\r\n.............BAT_FAIL..............\r\n"); 
            PMU_CMDSTS  =   0x0;    // IT config
            break; 
        case 0x2:
            break; 
        case 0x4:
            break; 
        case 0x8:
            break; 
        case 0x10:
            printf("\r\n.............ADC..............\r\n"); 
            PMU_CMDSTS  &=   (~0x8000);    // IT dis
            break; 
        default:
            break; 
    }
}

void INTC(void)
{
}

void RING(void)
{
}

/***********************************************************************
 ��������:    	INTC�жϴ�������
 @param:		��
 @other:     ���жϿɲ鿴�û��ֲ�
 @return:	��
 @auther :	������
 @time	:	2020��4��9��
 ***********************************************************************/

extern unsigned char Rx_Buffer1[40];
#define MAX_receive 200
uint8_t receive_index=0;


void intc_handler(void)
{
    
    
    //static uint8_t receive_Data;
    static char receive_Data[1], receive_Data1[1];
    INT8U IntReg = INT_OUT; 

    if(IntReg  & IRQ_TIMER)//Timer
    {
        if(TIM_GetITStatus(TIM_FLAG_Trigger))
        {
            TIM_ClearIT(TIM_FLAG_Trigger); 
        }
    }
    
    if (IntReg & UART0_INT_OUT) //Uart0
    {

        if(UART0_IIR&0x04)
        {
            while(UART0_LSR&0x1)
            {
                receive_Data[0]=UART_ReceiveData(UART0); //��������
                Queue_Wirte(&Circular_queue, (uint8_t *)&receive_Data, 1); //�������д������
            }
        }

        INT_CLR = UART0_INT_CLR;
    }

    if (IntReg & UART1_INT_OUT) //Uart1
    {

        if(UART1_IIR&0x04)
        {
            while(UART1_LSR&0x1)
            {
                receive_Data1[0]=UART_ReceiveData(UART1); //��������
                Rx_Buffer1[receive_index++]= receive_Data1[0];
                if(receive_index>MAX_receive)
                {
                receive_index=MAX_receive;
                }
                //Queue_Wirte(&Circular_queue_UART1, (uint8_t *)&receive_Data1, 1); //�������д������
                
            }
        }

        INT_CLR = UART1_INT_CLR;
    }

    INT_CLR = 0xff; 
}


void TIMER_HANDLER(void)
{
    Set_Timer_clear(); 
    printf("Core Timer clear interrupt..\r\n"); 
    Set_Timer_stop(); 
}

