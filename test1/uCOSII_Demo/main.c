/****************************************
project:ucos-ii demo
author:arvik
csdn:http://blog.csdn.net/u012819339
email:1216601195@qq.com
*****************************************/
#include "SystemConfig.h"

/* 定义任务堆栈*/
OS_STK App1Task_Stk[App1Task_StkSize];
OS_STK App2Task_Stk[App2Task_StkSize];

int main(void)
{
	OSInit(); // 系统初始化
	
	OSTaskCreate(App1Task, (void *)0, &App1Task_Stk[App1Task_StkSize-1], App1Task_Prio);//创建其他任务App1Task
	OSTaskCreate(App2Task, (void *)0, &App2Task_Stk[App2Task_StkSize-1], App2Task_Prio);//创建其他任务App2Task
	OSStart(); // 启动ucos-ii

	return 0;
}

/* App1Task */
void App1Task(void *p_arg)
{
	p_arg = p_arg;
	while(1)
	{
		printf("this is App1task!\n");
		OSTimeDlyHMSM(0, 0, 3, 0); /* 任务调度*/
	}
}

/* App2Task */
void App2Task(void *p_arg)
{
	p_arg = p_arg;
	while(1)
	{
		printf("this is App2task!\n");
		OSTimeDlyHMSM(0, 0, 2, 0); /* 任务调度*/
	}
}