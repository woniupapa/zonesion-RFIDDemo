/*********************************************************************************************
* 文件：uart.h
* 作者：fuyou
* 说明：uart头文件
* 修改：
* 注释：
*********************************************************************************************/
#ifndef _uart_h_
#define _uart_h_

#include "sys.h"

/*UART0*/
#define U0RxBuf_SIZE 64									        //数据接收最大字节数，不能超过63
extern unsigned char UART0_RX_STA;							//UART0接收状态及接收个数
extern unsigned char U0RX_Buf[U0RxBuf_SIZE];				    //UART0数据接收BUF

/*UART1*/
#define U1RxBuf_SIZE 64										    //数据接收最大字节数，不能超过63
extern unsigned char UART1_RX_STA;							//UART1接收状态及接收个数
extern unsigned char U1RX_Buf[U1RxBuf_SIZE];				    //UART1数据接收BUF


/*********************************************************************************************
* 名称：uart0_init
* 功能：uart0初始化，复用到位置1
* 参数：baud:波特率
* 返回：无
* 修改：
* 注释：
*********************************************************************************************/
void uart0_init(double baud);

/*********************************************************************************************
* 名称：uart1_init
* 功能：uart1初始化，复用到位置2
* 参数：baud:波特率
* 返回：无
* 修改：
* 注释：
*********************************************************************************************/
void uart1_init(double baud);

/*********************************************************************************************
* 名称：Uart0_Send_char
* 功能：串口0发送字节函数
* 参数：ch:要发送的字节
* 返回：无
* 修改：
* 注释：
*********************************************************************************************/
void Uart0_Send_char(unsigned char ch);

/*********************************************************************************************
* 名称：Uart0_Send_String
* 功能：串口0发送字符串函数
* 参数：*Data:要发送字符串首地址
* 返回：无
* 修改：
* 注释：
*********************************************************************************************/
void Uart0_Send_String(unsigned char *Data);

/*********************************************************************************************
* 名称：Uart0_Send_String
* 功能：串口0发送字符串函数
* 参数：*Data:要发送字符串首地址
		len：发送数据长度
* 返回：无
* 修改：
* 注释：
*********************************************************************************************/
void Uart0_Send_LenString(unsigned char *Data,int len);

/*********************************************************************************************
* 名称：Uart0_Recv_char
* 功能：串口0接收字节函数
* 参数：无
* 返回：接收的字节
* 修改：
* 注释：
*********************************************************************************************/
int Uart0_Recv_char(void);

/*********************************************************************************************
* 名称：Uart1_Send_char
* 功能：串口1发送字节函数
* 参数：ch:要发送的字节
* 返回：无
* 修改：
* 注释：
*********************************************************************************************/
void Uart1_Send_char(unsigned char ch);

/*********************************************************************************************
* 名称：Uart1_Send_String
* 功能：串口1发送字符串函数
* 参数：*Data:要发送字符串首地址
* 返回：无
* 修改：
* 注释：
*********************************************************************************************/
void Uart1_Send_String(unsigned char *Data);

/*********************************************************************************************
* 名称：Uart0_Send_String
* 功能：串口0发送字符串函数
* 参数：*Data:要发送字符串首地址
		len：发送数据长度
* 返回：无
* 修改：
* 注释：
*********************************************************************************************/
void Uart1_Send_LenString(unsigned char *Data,int len);

/*********************************************************************************************
* 名称：Uart1_Recv_char
* 功能：串口1接收字节函数
* 参数：无
* 返回：接收的字节
* 修改：
* 注释：
*********************************************************************************************/
int Uart1_Recv_char(void);


#endif